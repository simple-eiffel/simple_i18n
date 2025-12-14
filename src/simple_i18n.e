note
	description: "[
		Simple internationalization wrapper for ISE i18n library.

		Features:
		- In-memory programmatic translation registration
		- .mo file loading via I18N_LOCALE_MANAGER
		- Context-aware translations
		- Full plural form support (not just English-like)
		- Locale-aware date/time/number/currency formatting via ISE formatters
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
			-- Create i18n helper with system locale.
		do
			create translations.make (50)
			create {I18N_HOST_LOCALE_IMP} host_locale
			current_locale_id := host_locale.system_locale_id
			create locale_info.make
			initialize_locale_info
			initialize_formatters
		end

	make_with_locale (a_locale_code: STRING)
			-- Create i18n helper with specified locale (e.g., "en_US", "fr_FR").
		require
			locale_code_not_empty: not a_locale_code.is_empty
		do
			create translations.make (50)
			create {I18N_HOST_LOCALE_IMP} host_locale
			create current_locale_id.make_from_string (a_locale_code)
			create locale_info.make
			initialize_locale_info
			initialize_formatters
		end

	make_from_directory (a_translations_dir: STRING)
			-- Create i18n helper loading translations from .mo files in `a_translations_dir'.
			-- Directory should contain files named after locale (e.g., en_US.mo, fr_FR.mo).
		require
			directory_not_empty: not a_translations_dir.is_empty
		do
			create translations.make (50)
			create {I18N_HOST_LOCALE_IMP} host_locale
			current_locale_id := host_locale.system_locale_id
			create locale_info.make
			initialize_locale_info
			initialize_formatters

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
			create current_locale_id.make_from_string (a_locale_code)
			initialize_locale_info
			initialize_formatters

			-- Update full locale from manager if available
			if attached locale_manager as lm and then lm.has_translations (current_locale_id) then
				full_locale := lm.locale (current_locale_id)
			else
				full_locale := Void
			end
		end

	has_locale (a_locale_code: STRING): BOOLEAN
			-- Is the specified locale available?
		require
			locale_code_not_empty: not a_locale_code.is_empty
		local
			l_id: I18N_LOCALE_ID
		do
			create l_id.make_from_string (a_locale_code)
			Result := host_locale.is_available (l_id)
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

feature -- Date/Time Formatting (via ISE formatters)

	format_date (a_date: SIMPLE_DATE): STRING_32
			-- Format date according to current locale using ISE formatter.
		require
			date_not_void: a_date /= Void
		do
			if attached date_formatter as df then
				Result := df.format_date (a_date.to_date)
			else
				Result := a_date.to_date.formatted_out (locale_info.long_date_format.to_string_8)
			end
		ensure
			result_not_void: Result /= Void
		end

	format_time (a_time: SIMPLE_TIME): STRING_32
			-- Format time according to current locale using ISE formatter.
		require
			time_not_void: a_time /= Void
		do
			if attached date_formatter as df then
				Result := df.format_time (a_time.to_time)
			else
				Result := a_time.to_time.formatted_out (locale_info.long_time_format.to_string_8)
			end
		ensure
			result_not_void: Result /= Void
		end

	format_date_time (a_date_time: SIMPLE_DATE_TIME): STRING_32
			-- Format date and time according to current locale using ISE formatter.
		require
			date_time_not_void: a_date_time /= Void
		do
			if attached date_formatter as df then
				Result := df.format_date_time (a_date_time.to_date_time)
			else
				Result := format_date (a_date_time.date)
				Result.append_character (' ')
				Result.append (format_time (a_date_time.time))
			end
		ensure
			result_not_void: Result /= Void
		end

feature -- Number Formatting (via ISE formatters)

	format_number (a_value: DOUBLE): STRING_32
			-- Format number with locale-specific decimal separator.
		local
			l_str: STRING_32
		do
			if attached value_formatter as vf then
				Result := vf.format_real_64 (a_value)
			else
				l_str := a_value.out.to_string_32
				l_str.replace_substring_all (".", locale_info.value_decimal_separator)
				Result := l_str
			end
		ensure
			result_not_void: Result /= Void
		end

	format_integer (a_value: INTEGER): STRING_32
			-- Format integer with locale-specific thousands separator.
		local
			l_str: STRING_32
			l_sep: STRING_32
			i, l_len: INTEGER
			l_result: STRING_32
		do
			if attached value_formatter as vf then
				Result := vf.format_integer_32 (a_value)
			else
				l_str := a_value.abs.out.to_string_32
				l_sep := locale_info.value_group_separator
				l_len := l_str.count
				create l_result.make (l_len + l_len // 3)
				if a_value < 0 then
					l_result.append_character ('-')
				end
				from i := 1 until i > l_len loop
					if i > 1 and then (l_len - i + 1) \\ 3 = 0 then
						l_result.append (l_sep)
					end
					l_result.append_character (l_str.item (i))
					i := i + 1
				end
				Result := l_result
			end
		ensure
			result_not_void: Result /= Void
		end

	format_currency (a_value: DOUBLE): STRING_32
			-- Format currency value with locale-specific symbol.
		do
			if attached currency_formatter as cf then
				Result := cf.format_currency (a_value)
			else
				Result := locale_info.currency_symbol.twin
				Result.append (format_number (a_value))
			end
		ensure
			result_not_void: Result /= Void
		end

feature -- Locale Information

	decimal_separator: STRING_32
			-- Locale-specific decimal separator.
		do
			Result := locale_info.value_decimal_separator
		end

	thousands_separator: STRING_32
			-- Locale-specific thousands separator.
		do
			Result := locale_info.value_group_separator
		end

	currency_symbol: STRING_32
			-- Locale-specific currency symbol.
		do
			Result := locale_info.currency_symbol
		end

	date_format: STRING_32
			-- Locale-specific date format pattern.
		do
			Result := locale_info.long_date_format
		end

	time_format: STRING_32
			-- Locale-specific time format pattern.
		do
			Result := locale_info.long_time_format
		end

	short_date_format: STRING_32
			-- Locale-specific short date format pattern.
		do
			Result := locale_info.short_date_format
		end

	short_time_format: STRING_32
			-- Locale-specific short time format pattern.
		do
			Result := locale_info.short_time_format
		end

feature -- Status Report

	is_system_locale: BOOLEAN
			-- Is using the system default locale?
		do
			Result := current_locale_id.is_equal (host_locale.system_locale_id)
		end

	has_mo_translations: BOOLEAN
			-- Were translations loaded from .mo files?
		do
			Result := full_locale /= Void
		end

feature {NONE} -- Implementation

	translations: HASH_TABLE [I18N_DICTIONARY_ENTRY, STRING_32]
			-- Translation entries indexed by key (in-memory)

	host_locale: I18N_HOST_LOCALE
			-- Host system locale information

	locale_info: I18N_LOCALE_INFO
			-- Current locale formatting information

	locale_manager: detachable I18N_LOCALE_MANAGER
			-- Manager for loading translations from .mo files

	full_locale: detachable I18N_LOCALE
			-- Full locale object from manager (includes dictionary and formatters)

	date_formatter: detachable I18N_DATE_FORMATTER
			-- ISE date formatter for current locale

	value_formatter: detachable I18N_VALUE_FORMATTER
			-- ISE number formatter for current locale

	currency_formatter: detachable I18N_CURRENCY_FORMATTER
			-- ISE currency formatter for current locale

	initialize_locale_info
			-- Initialize locale info from host if available.
		do
			if host_locale.is_available (current_locale_id) then
				locale_info := host_locale.create_locale_info (current_locale_id)
			end
		end

	initialize_formatters
			-- Initialize ISE formatters.
		do
			create date_formatter.make (locale_info)
			create value_formatter.make (locale_info)
			create currency_formatter.make (locale_info)
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
	host_locale_not_void: host_locale /= Void
	current_locale_id_not_void: current_locale_id /= Void
	locale_info_not_void: locale_info /= Void

note
	copyright: "Copyright (c) 2024-2025, Larry Rix"
	license: "MIT License"

end
