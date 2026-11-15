note
	description: "[
		Simple internationalization wrapper for ISE i18n library.

		Features:
		- In-memory programmatic translation registration
		- .mo file loading via I18N_LOCALE_MANAGER
		- Context-aware translations
		- Full plural form support (not just English-like)
		- Locale-aware date/time/number/currency formatting from simple_i18n's own
		  CLDR table (SIMPLE_I18N_LOCALE_TABLE, about 30 locales); the operating
		  system gives only the locale's name, and an unknown one formats as en_US
		  (`is_fallback_locale')
		- System locale detection
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_I18N

inherit
	SHARED_I18N_PLURAL_TOOLS
		export
			{NONE} all
		end

create
	make,
	make_with_locale,
	make_from_directory

feature {NONE} -- Initialization

	make
			-- Create i18n helper with system locale. The operating system gives only the
			-- locale's name; every format comes from simple_i18n's own CLDR table.
		do
			create translations.make (50)
			create locales
			system_locale_code := locales.system_locale_name
			current_locale_id := locale_id_of (system_locale_code)
			select_locale_data (system_locale_code)
		end

	make_with_locale (a_locale_code: STRING)
			-- Create i18n helper with specified locale (e.g., "en_US", "fr_FR").
		require
			locale_code_not_empty: not a_locale_code.is_empty
		do
			create translations.make (50)
			create locales
			system_locale_code := locales.system_locale_name
			current_locale_id := locale_id_of (a_locale_code)
			select_locale_data (a_locale_code)
		end

	make_from_directory (a_translations_dir: STRING)
			-- Create i18n helper loading translations from .mo files in `a_translations_dir'.
			-- Directory should contain files named after locale (e.g., en_US.mo, fr_FR.mo).
		require
			directory_not_empty: not a_translations_dir.is_empty
		do
			create translations.make (50)
			create locales
			system_locale_code := locales.system_locale_name
			current_locale_id := locale_id_of (system_locale_code)
			select_locale_data (system_locale_code)

			-- Create locale manager from directory
			create locale_manager.make (a_translations_dir)

			-- Load the system locale
			if attached locale_manager as lm and then lm.has_translations (current_locale_id) then
				full_locale := lm.locale (current_locale_id)
			end
		end

feature -- Access

	current_locale_id: I18N_LOCALE_ID
			-- Current locale identifier

	language: STRING_32
			-- Current language code (e.g., "en", "fr")
		do
			Result := current_locale_id.language
		end

	region: STRING_32
			-- Current region code (e.g., "US", "FR")
		do
			Result := current_locale_id.region
		end

	locale_name: STRING_32
			-- Full locale name (e.g., "en_US")
		do
			Result := current_locale_id.name
		end

	translation_count: INTEGER
			-- Number of registered translations
		do
			Result := translations.count
		end

	available_locales: LIST [I18N_LOCALE_ID]
			-- List of available locales from host system
		do
			if attached locale_manager as lm then
				Result := lm.available_locales
			else
				create {ARRAYED_LIST [I18N_LOCALE_ID]} Result.make (1)
				Result.extend (current_locale_id)
			end
		end

feature -- Locale Management

	set_locale (a_locale_code: STRING)
			-- Change to a different locale.
		require
			locale_code_not_empty: not a_locale_code.is_empty
		do
			current_locale_id := locale_id_of (a_locale_code)
			select_locale_data (a_locale_code)

			-- Update full locale from manager if available
			if attached locale_manager as lm and then lm.has_translations (current_locale_id) then
				full_locale := lm.locale (current_locale_id)
			else
				full_locale := Void
			end
		end

	has_locale (a_locale_code: STRING): BOOLEAN
			-- Is the specified locale available: in the CLDR table, or with .mo translations?
		require
			locale_code_not_empty: not a_locale_code.is_empty
		local
			l_id: I18N_LOCALE_ID
		do
			l_id := locale_id_of (a_locale_code)
			Result := locales.is_known (a_locale_code)
			if not Result and attached locale_manager as lm then
				Result := lm.has_translations (l_id)
			end
		end

feature -- Translation Registration (Programmatic)

	register_translation (a_key, a_translation: READABLE_STRING_GENERAL)
			-- Register a simple translation.
		require
			key_not_empty: not a_key.is_empty
			translation_not_empty: not a_translation.is_empty
		local
			l_entry: I18N_DICTIONARY_ENTRY
		do
			create l_entry.make (a_key, a_translation)
			translations.force (l_entry, a_key.to_string_32)
		ensure
			registered: has_translation (a_key)
		end

	register_translation_with_context (a_key, a_translation, a_context: READABLE_STRING_GENERAL)
			-- Register a translation with context disambiguation.
			-- Context allows the same key to have different translations in different contexts.
		require
			key_not_empty: not a_key.is_empty
			translation_not_empty: not a_translation.is_empty
			context_not_empty: not a_context.is_empty
		local
			l_entry: I18N_DICTIONARY_ENTRY
			l_full_key: STRING_32
		do
			create l_entry.make (a_key, a_translation)
			l_entry.set_context (a_context.to_string_32)
			-- Store with composite key: context + EOT + key (like gettext)
			l_full_key := a_context.to_string_32 + "%/4/" + a_key.to_string_32
			translations.force (l_entry, l_full_key)
		end

	register_plural_translation (a_singular_key, a_plural_key: READABLE_STRING_GENERAL;
			a_singular_translation, a_plural_translation: READABLE_STRING_GENERAL)
			-- Register a translation with singular and plural forms.
		require
			singular_key_not_empty: not a_singular_key.is_empty
			plural_key_not_empty: not a_plural_key.is_empty
			singular_translation_not_empty: not a_singular_translation.is_empty
			plural_translation_not_empty: not a_plural_translation.is_empty
		local
			l_entry: I18N_DICTIONARY_ENTRY
		do
			create l_entry.make_with_plural (a_singular_key, a_singular_translation, a_plural_key)
			l_entry.plural_translations.put (a_plural_translation.to_string_32, 1)
			translations.force (l_entry, a_singular_key.to_string_32)
		end

	register_plural_forms (a_singular_key, a_plural_key: READABLE_STRING_GENERAL;
			a_forms: ARRAY [STRING])
			-- Register plural forms for languages with more than 2 forms.
			-- a_forms should contain translations for each plural form index (0, 1, 2, 3).
			-- Example for Russian: ["яблоко", "яблока", "яблок"] (1, 2-4, 5+)
		require
			singular_key_not_empty: not a_singular_key.is_empty
			plural_key_not_empty: not a_plural_key.is_empty
			forms_not_empty: not a_forms.is_empty
		local
			l_entry: I18N_DICTIONARY_ENTRY
			i: INTEGER
		do
			create l_entry.make_with_plural (a_singular_key, a_forms.item (a_forms.lower), a_plural_key)
			from i := a_forms.lower + 1 until i > a_forms.upper loop
				l_entry.plural_translations.put (a_forms.item (i).to_string_32, i - a_forms.lower)
				i := i + 1
			end
			translations.force (l_entry, a_singular_key.to_string_32)
		end

	register_translations (a_pairs: ARRAY [TUPLE [key, translation: STRING]])
			-- Register multiple translations at once.
		require
			pairs_not_empty: not a_pairs.is_empty
		local
			i: INTEGER
		do
			from i := a_pairs.lower until i > a_pairs.upper loop
				if attached a_pairs.item (i) as l_pair then
					register_translation (l_pair.key, l_pair.translation)
				end
				i := i + 1
			end
		end

	clear_translations
			-- Remove all registered translations.
		do
			translations.wipe_out
		ensure
			empty: translation_count = 0
		end

feature -- Translation Lookup

	translate (a_key: READABLE_STRING_GENERAL): STRING_32
			-- Get translation for `a_key', or return the key if not found.
			-- First checks full locale (from .mo files), then in-memory translations.
		require
			key_not_empty: not a_key.is_empty
		do
			Result := translate_in_context (a_key, Void)
		ensure
			result_not_void: Result /= Void
		end

	translate_in_context (a_key: READABLE_STRING_GENERAL; a_context: detachable READABLE_STRING_GENERAL): STRING_32
			-- Get translation for `a_key' in the given context.
			-- Context disambiguates when the same key has different meanings.
		require
			key_not_empty: not a_key.is_empty
		local
			l_full_key: STRING_32
		do
			-- First try full locale (from .mo files)
			if attached full_locale as fl then
				Result := fl.translation_in_context (a_key, a_context)
				if not Result.same_string (a_key.to_string_32) then
					-- Found translation in full locale
				else
					Result := Void
				end
			end

			-- Fall back to in-memory translations
			if Result = Void then
				if a_context /= Void then
					l_full_key := a_context.to_string_32 + "%/4/" + a_key.to_string_32
					if attached translations.item (l_full_key) as l_entry then
						Result := l_entry.singular_translation
					end
				end

				if Result = Void then
					if attached translations.item (a_key.to_string_32) as l_entry then
						Result := l_entry.singular_translation
					else
						Result := a_key.to_string_32
					end
				end
			end
		ensure
			result_not_void: Result /= Void
		end

	translate_plural (a_singular_key: READABLE_STRING_GENERAL; a_count: INTEGER): STRING_32
			-- Get singular or plural translation based on count.
			-- Uses proper plural rules for the current locale.
		require
			key_not_empty: not a_singular_key.is_empty
		do
			Result := translate_plural_in_context (a_singular_key, Void, a_count)
		ensure
			result_not_void: Result /= Void
		end

	translate_plural_in_context (a_singular_key: READABLE_STRING_GENERAL;
			a_context: detachable READABLE_STRING_GENERAL; a_count: INTEGER): STRING_32
			-- Get plural translation in context based on count.
		require
			key_not_empty: not a_singular_key.is_empty
		local
			l_plural_index: INTEGER
			l_plural_key: STRING_32
		do
			-- Build plural key
			create l_plural_key.make_from_string_general (a_singular_key)
			l_plural_key.append ("_plural")

			-- First try full locale (handles complex plural rules)
			if attached full_locale as fl then
				if a_context /= Void then
					Result := fl.plural_translation_in_context (a_singular_key, l_plural_key, a_context, a_count)
				else
					Result := fl.plural_translation (a_singular_key, l_plural_key, a_count)
				end
				if not Result.same_string (a_singular_key.to_string_32) then
					-- Found translation
				else
					Result := Void
				end
			end

			-- Fall back to in-memory translations
			if Result = Void then
				if attached translations.item (a_singular_key.to_string_32) as l_entry then
					if a_count = 1 then
						Result := l_entry.singular_translation
					elseif l_entry.has_plural then
						-- Use plural reduction for proper plural form index
						l_plural_index := reduce_plural (a_count)
						if l_plural_index <= l_entry.plural_translations.upper and then
							attached l_entry.plural_translations.item (l_plural_index) as l_plural and then
							not l_plural.is_empty then
							Result := l_plural
						else
							Result := l_entry.singular_translation
						end
					else
						Result := l_entry.singular_translation
					end
				else
					Result := a_singular_key.to_string_32
				end
			end
		ensure
			result_not_void: Result /= Void
		end

	has_translation (a_key: READABLE_STRING_GENERAL): BOOLEAN
			-- Is there a translation for `a_key'?
		require
			key_not_empty: not a_key.is_empty
		do
			Result := translations.has (a_key.to_string_32)
			if not Result and attached full_locale as fl then
				-- Check via translation - if result differs from key, translation exists
				Result := not fl.translation (a_key).same_string (a_key.to_string_32)
			end
		end

feature -- String Formatting

	format (a_template: READABLE_STRING_GENERAL; a_args: TUPLE): STRING_32
			-- Format string with placeholder substitution.
			-- Placeholders: $1, $2, etc. for positional arguments.
		require
			template_not_void: a_template /= Void
		local
			l_result: STRING_32
			i: INTEGER
			l_placeholder: STRING_32
		do
			l_result := a_template.to_string_32.twin
			from i := 1 until i > a_args.count loop
				create l_placeholder.make_from_string ("$")
				l_placeholder.append_integer (i)
				if attached a_args.item (i) as l_item then
					l_result.replace_substring_all (l_placeholder, item_to_string (l_item))
				end
				i := i + 1
			end
			Result := l_result
		ensure
			result_not_void: Result /= Void
		end

	translate_format (a_key: READABLE_STRING_GENERAL; a_args: TUPLE): STRING_32
			-- Translate key and format with arguments.
		require
			key_not_empty: not a_key.is_empty
		do
			Result := format (translate (a_key), a_args)
		ensure
			result_not_void: Result /= Void
		end

feature -- Date/Time Formatting (CLDR)

	format_date (a_date: SIMPLE_DATE): STRING_32
			-- `a_date' in the locale's long date pattern, for example "14 novembre 2026".
		require
			date_not_void: a_date /= Void
		do
			Result := date_patterns.formatted (locale_data.long_date_pattern, a_date.year.max (0), a_date.month, a_date.day, 0, 0, 0, locale_data)
		ensure
			result_not_void: Result /= Void
		end

	format_short_date (a_date: SIMPLE_DATE): STRING_32
			-- `a_date' in the locale's short date pattern, for example "14/11/2026".
		require
			date_not_void: a_date /= Void
		do
			Result := date_patterns.formatted (locale_data.short_date_pattern, a_date.year.max (0), a_date.month, a_date.day, 0, 0, 0, locale_data)
		ensure
			result_not_void: Result /= Void
		end

	format_time (a_time: SIMPLE_TIME): STRING_32
			-- `a_time' in the locale's medium time pattern (with seconds).
		require
			time_not_void: a_time /= Void
		do
			Result := date_patterns.formatted (locale_data.medium_time_pattern, 2000, 1, 1, a_time.hour, a_time.minute, a_time.second, locale_data)
		ensure
			result_not_void: Result /= Void
		end

	format_short_time (a_time: SIMPLE_TIME): STRING_32
			-- `a_time' in the locale's short time pattern (no seconds).
		require
			time_not_void: a_time /= Void
		do
			Result := date_patterns.formatted (locale_data.short_time_pattern, 2000, 1, 1, a_time.hour, a_time.minute, a_time.second, locale_data)
		ensure
			result_not_void: Result /= Void
		end

	format_date_time (a_date_time: SIMPLE_DATE_TIME): STRING_32
			-- `a_date_time': its long date and medium time, joined by the locale's pattern.
		require
			date_time_not_void: a_date_time /= Void
		do
			Result := date_patterns.joined (locale_data.date_time_pattern, format_date (a_date_time.date), format_time (a_date_time.time))
		ensure
			result_not_void: Result /= Void
		end

feature -- Number Formatting (CLDR)

	format_number (a_value: DOUBLE): STRING_32
			-- `a_value' in the locale's decimal pattern: its separators and grouping, and as
			-- many fraction digits as needed up to the pattern's maximum (CLDR's is 3).
		do
			Result := decimal_number_pattern.formatted_real (a_value, needed_fraction_digits (a_value), locale_data, "")
		ensure
			result_not_void: Result /= Void
		end

	format_integer (a_value: INTEGER): STRING_32
			-- `a_value' with the locale's group separator and grouping.
		do
			Result := decimal_number_pattern.formatted_integer (a_value, locale_data, "")
		ensure
			result_not_void: Result /= Void
		end

	format_currency (a_value: DOUBLE): STRING_32
			-- `a_value' in the locale's own currency, in its currency pattern, with the
			-- currency's digits (for example "1 234,50 €" in fr_FR, "¥1,235" in ja_JP).
		do
			Result := currency_number_pattern.formatted_real (a_value, locale_data.currency_digits, locale_data, locale_data.currency_symbol)
		ensure
			result_not_void: Result /= Void
		end

feature -- Locale Information

	formatting_locale_name: STRING_8
			-- The CLDR table locale every format comes from: the requested locale's own, or
			-- `Fallback_locale_name' when the table has none for it.
		do
			Result := locale_data.name
		end

	is_fallback_locale: BOOLEAN
			-- Did the table have no locale for the requested one, so that formats are en_US's?

	Fallback_locale_name: STRING = "en_US"
			-- Locale whose formats are used for a locale the table does not know.

	cldr_version: STRING
			-- Version of CLDR the table was generated from.
		do
			Result := locales.table.Cldr_version
		end

	decimal_separator: STRING_32
			-- Locale-specific decimal separator.
		do
			Result := locale_data.decimal_separator
		end

	thousands_separator: STRING_32
			-- Locale-specific group separator (for example U+202F in fr_FR).
		do
			Result := locale_data.group_separator
		end

	currency_symbol: STRING_32
			-- Symbol of the locale's own currency.
		do
			Result := locale_data.currency_symbol
		end

	currency_code: STRING_32
			-- ISO 4217 code of the locale's own currency.
		do
			Result := locale_data.currency_code
		end

	date_format: STRING_32
			-- The locale's long date pattern, in CLDR's syntax (for example "d MMMM y").
		do
			Result := locale_data.long_date_pattern
		end

	time_format: STRING_32
			-- The locale's medium time pattern, in CLDR's syntax (for example "HH:mm:ss").
		do
			Result := locale_data.medium_time_pattern
		end

	short_date_format: STRING_32
			-- The locale's short date pattern, in CLDR's syntax (for example "dd/MM/y").
		do
			Result := locale_data.short_date_pattern
		end

	short_time_format: STRING_32
			-- The locale's short time pattern, in CLDR's syntax (for example "HH:mm").
		do
			Result := locale_data.short_time_pattern
		end

feature -- Status Report

	is_system_locale: BOOLEAN
			-- Is using the system default locale?
		do
			Result := current_locale_id.name.same_string (locale_id_of (system_locale_code).name)
		end

	has_mo_translations: BOOLEAN
			-- Were translations loaded from .mo files?
		do
			Result := full_locale /= Void
		end

feature {NONE} -- Implementation

	translations: HASH_TABLE [I18N_DICTIONARY_ENTRY, STRING_32]
			-- Translation entries indexed by key (in-memory)

	locales: SIMPLE_I18N_LOCALES
			-- The CLDR table and the operating system's locale name.

	system_locale_code: STRING_8
			-- The locale name the operating system gave at creation.

	locale_data: SIMPLE_I18N_LOCALE_DATA
			-- The table data every format comes from.

	locale_manager: detachable I18N_LOCALE_MANAGER
			-- Manager for loading translations from .mo files

	full_locale: detachable I18N_LOCALE
			-- Full locale object from manager (includes dictionary and formatters)

	decimal_number_pattern: SIMPLE_I18N_NUMBER_PATTERN
			-- The locale's decimal pattern, read.

	currency_number_pattern: SIMPLE_I18N_NUMBER_PATTERN
			-- The locale's currency pattern, read.

	date_patterns: SIMPLE_I18N_DATE_PATTERN
			-- The CLDR date and time pattern interpreter.
		once
			create Result
		end

	select_locale_data (a_code: READABLE_STRING_GENERAL)
			-- Take the table data for `a_code', or en_US's when the table has none.
		local
			l_name: STRING_8
		do
			l_name := locales.resolved_name (a_code)
			is_fallback_locale := not locales.is_known (a_code)
			locale_data := locales.data (l_name)
			create decimal_number_pattern.make (locale_data.decimal_pattern)
			create currency_number_pattern.make (locale_data.currency_pattern)
		ensure
			fallback_when_unknown: is_fallback_locale = not locales.is_known (a_code)
			fallback_is_en_us: is_fallback_locale implies formatting_locale_name.same_string (Fallback_locale_name)
		end

	locale_id_of (a_code: READABLE_STRING_GENERAL): I18N_LOCALE_ID
			-- The locale id named by `a_code' ("fr_FR.UTF-8@euro" gives fr_FR): its language
			-- and region; the bare language when it has no region.
		local
			l_parts: TUPLE [language, script, region: STRING_8]
			l_name: STRING_8
		do
			l_parts := locales.code_parts (a_code)
			l_name := l_parts.language.twin
			if l_name.is_empty then
				l_name := Fallback_locale_name.twin
			elseif not l_parts.region.is_empty then
				l_name.append_character ('_')
				l_name.append (l_parts.region)
			end
			create Result.make_from_string (l_name)
		end

	needed_fraction_digits (a_value: DOUBLE): INTEGER
			-- Fewest fraction digits, between the decimal pattern's minimum and maximum, that
			-- show `a_value' rounded to the maximum (1.5 needs 1, 2.0 none, 1.23456 three).
		local
			l_scaled, l_unit: DOUBLE
			l_max: INTEGER
		do
			l_max := decimal_number_pattern.maximum_fraction_digits
			Result := l_max
			if a_value.is_nan or a_value.abs > 1.0e12 then
				Result := decimal_number_pattern.minimum_fraction_digits
			else
				l_scaled := (a_value.abs * (10.0 ^ l_max)).rounded_real_64
				from l_unit := 10.0 until Result <= decimal_number_pattern.minimum_fraction_digits
					or else l_scaled - (l_scaled / l_unit).floor_real_64 * l_unit /= 0.0
				loop
					Result := Result - 1
					l_unit := l_unit * 10.0
				end
			end
		ensure
			in_range: Result >= decimal_number_pattern.minimum_fraction_digits and Result <= decimal_number_pattern.maximum_fraction_digits
		end

	reduce_plural (a_count: INTEGER): INTEGER
			-- Reduce count to plural form index using English-like rules.
			-- For more complex languages, full_locale handles this properly.
		do
			if a_count = 1 then
				Result := 0
			else
				Result := 1
			end
		end

	item_to_string (a_item: detachable separate ANY): STRING_32
			-- Convert tuple item to string.
		do
			if a_item = Void then
				Result := ""
			elseif attached {STRING} a_item as l_str then
				Result := l_str.to_string_32
			elseif attached {STRING_32} a_item as l_str32 then
				Result := l_str32
			elseif attached {INTEGER_REF} a_item as l_int then
				Result := l_int.item.out.to_string_32
			elseif attached {REAL_64_REF} a_item as l_real then
				Result := l_real.item.out.to_string_32
			else
				create Result.make_from_string (a_item.out)
			end
		ensure
			result_not_void: Result /= Void
		end

invariant
	translations_not_void: translations /= Void
	locales_not_void: locales /= Void
	current_locale_id_not_void: current_locale_id /= Void
	fallback_is_en_us: is_fallback_locale implies formatting_locale_name.same_string (Fallback_locale_name)

note
	copyright: "Copyright (c) 2024-2025, Larry Rix"
	license: "MIT License"

end
