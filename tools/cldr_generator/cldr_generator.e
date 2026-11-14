note
	description: "[
		Development tool: reads the CLDR JSON packages (cldr-core,
		cldr-numbers-full, cldr-dates-full) and writes SIMPLE_I18N_LOCALE_TABLE,
		the locale table simple_i18n formats with.

		Not part of the library: nothing runs it, and nothing reads CLDR, at
		run time. Run it only to move the table to a new CLDR version:

			cldr_generator <cldr root> <output .e file> <cldr version>

		where <cldr root> holds cldr-core/, cldr-numbers-full/ and
		cldr-dates-full/, each unpacked from its npm tarball (package/...).

		The generator stops with a message, writing nothing, when the data
		does not have the expected shape, when a pattern uses a letter the
		library's interpreters do not support, or when a locale's currency is
		not exactly one current legal tender.
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	CLDR_GENERATOR

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization

	make
			-- Generate the table from the command line arguments.
		do
			create notes.make (8)
			if argument_count /= 3 then
				io.error.put_string ("usage: cldr_generator <cldr root> <output .e file> <cldr version>%N")
				(create {EXCEPTIONS}).die (2)
			else
				cldr_root := argument (1)
				version := argument (3)
				generate (argument (2))
			end
		end

feature -- Access

	cldr_root: STRING_32
			-- Folder holding the three unpacked CLDR packages.
		attribute
			create Result.make_empty
		end

	version: STRING_32
			-- CLDR version named in the generated class.
		attribute
			create Result.make_empty
		end

	notes: ARRAYED_LIST [STRING_32]
			-- Decisions the generator made, printed at the end.

	locales: ARRAY [TUPLE [name, source, default_content, extra_key: STRING_8]]
			-- Table locales: the library name, the CLDR locale read, the CLDR
			-- default content that makes a bare language mean this locale
			-- (empty if none), and one more language key for it (empty if none).
		once
			Result := <<
				["ar_SA", "ar-SA", "", ""],
				["cs_CZ", "cs", "cs-CZ", ""],
				["da_DK", "da", "da-DK", ""],
				["de_CH", "de-CH", "", ""],
				["de_DE", "de", "de-DE", ""],
				["el_GR", "el", "el-GR", ""],
				["en_AU", "en-AU", "", ""],
				["en_CA", "en-CA", "", ""],
				["en_GB", "en-GB", "", ""],
				["en_US", "en", "en-US", ""],
				["es_ES", "es", "es-ES", ""],
				["es_MX", "es-MX", "", ""],
				["fi_FI", "fi", "fi-FI", ""],
				["fr_CA", "fr-CA", "", ""],
				["fr_FR", "fr", "fr-FR", ""],
				["he_IL", "he", "he-IL", ""],
				["it_IT", "it", "it-IT", ""],
				["ja_JP", "ja", "ja-JP", ""],
				["ko_KR", "ko", "ko-KR", ""],
				["nb_NO", "nb", "nb-NO", ""],
				["nl_NL", "nl", "nl-NL", ""],
				["pl_PL", "pl", "pl-PL", ""],
				["pt_BR", "pt", "pt-BR", ""],
				["pt_PT", "pt-PT", "", ""],
				["ru_RU", "ru", "ru-RU", ""],
				["sv_SE", "sv", "sv-SE", ""],
				["tr_TR", "tr", "tr-TR", ""],
				["uk_UA", "uk", "uk-UA", ""],
				["zh_CN", "zh", "zh-Hans-CN", "zh_Hans"],
				["zh_TW", "zh-Hant", "zh-Hant-TW", "zh_Hant"]
			>>
		end

feature -- Generation

	generate (a_output: STRING_32)
			-- Read CLDR and write the table class to `a_output'.
		require
			output_not_empty: not a_output.is_empty
		local
			l_text, l_locale_features, l_language_entries: STRING_32
			l_currency_data, l_day_period_rules: SIMPLE_JSON_OBJECT
			l_default_list: SIMPLE_JSON_ARRAY
			l_files: SIMPLE_FILES
			i: INTEGER
		do
			l_default_list := array_at (read_json ("cldr-core/package/defaultContent.json"), {STRING_32} "defaultContent")
			l_currency_data := object_at (read_json ("cldr-core/package/supplemental/currencyData.json"), {STRING_32} "supplemental/currencyData")
			l_day_period_rules := object_at (read_json ("cldr-core/package/supplemental/dayPeriods.json"), {STRING_32} "supplemental/dayPeriodRuleSet")
			create l_locale_features.make (200_000)
			create l_language_entries.make (2_000)
			across locales as ic_locale loop
				l_locale_features.append (locale_feature (ic_locale.name, ic_locale.source, l_currency_data, l_day_period_rules))
				if not ic_locale.default_content.is_empty then
					if not array_has_string (l_default_list, ic_locale.default_content) then
						fail ({STRING_32} "defaultContent.json does not list " + ic_locale.default_content)
					end
					l_language_entries.append ({STRING_32} "%T%T%TResult.put (%"" + ic_locale.name + "%", %"" + key_of (ic_locale.source) + "%")%N")
				end
				if not ic_locale.extra_key.is_empty then
					l_language_entries.append ({STRING_32} "%T%T%TResult.put (%"" + ic_locale.name + "%", %"" + ic_locale.extra_key + "%")%N")
				end
			end
			l_text := class_text (l_locale_features, l_language_entries)
			l_text.replace_substring_all ("%N", "%R%N")
			create l_files
			if l_files.write_text_utf_8 (a_output, l_text) then
				print ({STRING_32} "Wrote " + a_output + " (" + locales.count.out + " locales, CLDR " + version + ")%N")
				from i := 1 until i > notes.count loop
					print ({STRING_32} "  note: " + notes [i] + "%N")
					i := i + 1
				end
			else
				fail ({STRING_32} "cannot write " + a_output)
			end
		end

feature {NONE} -- Locale data

	locale_feature (a_name, a_source: STRING_8; a_currency_data, a_day_period_rules: SIMPLE_JSON_OBJECT): STRING_32
			-- Text of the feature building locale `a_name' from CLDR `a_source'.
		local
			l_numbers, l_symbols, l_currencies, l_gregorian, l_months, l_periods: SIMPLE_JSON_OBJECT
			l_region, l_code, l_symbol, l_currency_pattern, l_decimal_pattern: STRING_32
			l_short_date, l_medium_date, l_long_date, l_short_time, l_medium_time, l_date_time: STRING_32
			l_digits: INTEGER
			l_number_check: SIMPLE_I18N_NUMBER_PATTERN
			l_date_check: SIMPLE_I18N_DATE_PATTERN
		do
			l_numbers := object_at (read_json ("cldr-numbers-full/package/main/" + a_source + "/numbers.json"),
				{STRING_32} "main/" + a_source + "/numbers")
			l_currencies := object_at (read_json ("cldr-numbers-full/package/main/" + a_source + "/currencies.json"),
				{STRING_32} "main/" + a_source + "/numbers/currencies")
			l_gregorian := object_at (read_json ("cldr-dates-full/package/main/" + a_source + "/ca-gregorian.json"),
				{STRING_32} "main/" + a_source + "/dates/calendars/gregorian")
			l_symbols := object_at (l_numbers, {STRING_32} "symbols-numberSystem-latn")

				-- Currency: the region's one current legal tender.
			l_region := a_name.substring (a_name.index_of ('_', 1) + 1, a_name.count)
			l_code := current_currency (array_at (a_currency_data, {STRING_32} "region/" + l_region), a_name)
			l_symbol := string_at (l_currencies, l_code.to_string_32 + "/symbol")
			l_digits := currency_digits (object_at (a_currency_data, {STRING_32} "fractions"), l_code)

				-- Number patterns.
			l_decimal_pattern := string_at (l_numbers, {STRING_32} "decimalFormats-numberSystem-latn/standard")
			l_currency_pattern := currency_pattern (object_at (l_numbers, {STRING_32} "currencyFormats-numberSystem-latn"), l_symbol, a_name)
			create l_number_check.make_default
			if not l_number_check.is_valid_pattern (l_decimal_pattern) or not l_number_check.is_valid_pattern (l_currency_pattern) then
				fail (a_name.to_string_32 + ": unsupported number pattern " + l_decimal_pattern + " or " + l_currency_pattern)
			end

				-- Date and time patterns.
			l_short_date := string_at (l_gregorian, {STRING_32} "dateFormats/short")
			l_medium_date := string_at (l_gregorian, {STRING_32} "dateFormats/medium")
			l_long_date := string_at (l_gregorian, {STRING_32} "dateFormats/long")
			l_short_time := string_at (l_gregorian, {STRING_32} "timeFormats/short")
			l_medium_time := string_at (l_gregorian, {STRING_32} "timeFormats/medium")
			l_date_time := string_at (l_gregorian, {STRING_32} "dateTimeFormats/long")
			create l_date_check
			across << l_short_date, l_medium_date, l_long_date, l_short_time, l_medium_time >> as ic_pattern loop
				if not l_date_check.is_supported_pattern (ic_pattern) then
					fail (a_name.to_string_32 + ": unsupported date or time pattern %"" + ic_pattern + "%"")
				end
			end
			if l_date_time.has ('%'') or not l_date_time.has_substring ("{0}") or not l_date_time.has_substring ("{1}") then
				fail (a_name.to_string_32 + ": unsupported date and time pattern %"" + l_date_time + "%"")
			end
			l_months := object_at (l_gregorian, {STRING_32} "months/format")
			l_periods := object_at (l_gregorian, {STRING_32} "dayPeriods/format/abbreviated")

			create Result.make (8_000)
			Result.append ({STRING_32} "%T" + feature_name (a_name) + ": SIMPLE_I18N_LOCALE_DATA%N")
			Result.append ({STRING_32} "%T%T%T-- " + a_name + ", from CLDR locale %"" + a_source + "%".%N")
			Result.append ({STRING_32} "%T%Tdo%N")
			Result.append ({STRING_32} "%T%T%Tcreate Result.make (%"" + a_name + "%", %"" + a_source + "%")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_number_symbols (")
			Result.append (literal (string_at (l_symbols, {STRING_32} "decimal")) + ", ")
			Result.append (literal (string_at (l_symbols, {STRING_32} "group")) + ", ")
			Result.append (literal (string_at (l_symbols, {STRING_32} "minusSign")) + ", ")
			Result.append (literal (string_at (l_symbols, {STRING_32} "plusSign")) + ",%N%T%T%T%T")
			Result.append (literal (string_at (l_symbols, {STRING_32} "infinity")) + ", ")
			Result.append (literal (string_at (l_symbols, {STRING_32} "nan")) + ", ")
			Result.append (natural_text (string_at (l_numbers, {STRING_32} "minimumGroupingDigits"), a_name) + ")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_number_patterns (" + literal (l_decimal_pattern) + ", " + literal (l_currency_pattern) + ")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_currency (" + literal (l_code) + ", " + literal (l_symbol) + ", " + l_digits.out + ")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_date_patterns (" + literal (l_short_date) + ",%N%T%T%T%T" + literal (l_medium_date)
				+ ",%N%T%T%T%T" + literal (l_long_date) + ")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_time_patterns (" + literal (l_short_time) + ", " + literal (l_medium_time)
				+ ", " + literal (l_date_time) + ")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_month_names (%N")
			Result.append ({STRING_32} "%T%T%T%T" + month_array (object_at (l_months, {STRING_32} "wide")) + ",%N")
			Result.append ({STRING_32} "%T%T%T%T" + month_array (object_at (l_months, {STRING_32} "abbreviated")) + ")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_am_pm (" + literal (string_at (l_periods, {STRING_32} "am")) + ", "
				+ literal (string_at (l_periods, {STRING_32} "pm")) + ")%N")
			if across << l_short_date, l_medium_date, l_long_date, l_short_time, l_medium_time >> as ic_pattern some
					has_unquoted_letter (ic_pattern, 'B') end
			then
				Result.append (day_period_lines (a_name, a_source, a_day_period_rules, l_periods))
			end
			Result.append ({STRING_32} "%T%Tend%N%N")
		end

	current_currency (a_entries: SIMPLE_JSON_ARRAY; a_name: STRING_8): STRING_32
			-- The one current legal tender among the region's `a_entries'.
		local
			l_found: ARRAYED_LIST [STRING_32]
			l_entry: SIMPLE_JSON_OBJECT
			i: INTEGER
		do
			create l_found.make (1)
			from i := 1 until i > a_entries.count loop
				l_entry := as_object (a_entries [i], "currency entry")
				across l_entry.keys as ic_code loop
					if attached l_entry.item (ic_code) as al_value and then al_value.is_object
						and then not al_value.as_object.has_key ("_to")
						and then not (attached al_value.as_object.string_item ("_tender") as al_tender and then al_tender.same_string ("false"))
					then
						l_found.extend (ic_code)
					end
				end
				i := i + 1
			end
			if l_found.count /= 1 then
				fail (a_name.to_string_32 + ": expected one current currency, found " + l_found.count.out)
			end
			Result := l_found.first
		end

	currency_digits (a_fractions: SIMPLE_JSON_OBJECT; a_code: STRING_32): INTEGER
			-- Fraction digits of currency `a_code'.
		do
			if a_fractions.has_key (a_code) then
				Result := natural_text (string_at (a_fractions, a_code.to_string_32 + "/_digits"), a_code).to_integer
			else
				Result := natural_text (string_at (a_fractions, {STRING_32} "DEFAULT/_digits"), a_code).to_integer
			end
		end

	currency_pattern (a_formats: SIMPLE_JSON_OBJECT; a_symbol: STRING_32; a_name: STRING_8): STRING_32
			-- The standard currency pattern, or its "alphaNextToNumber" form
			-- when `a_symbol' would touch the digits with a letter (CLDR's
			-- currency spacing rule).
		local
			l_standard: STRING_32
			l_sign: INTEGER
		do
			l_standard := string_at (a_formats, {STRING_32} "standard")
			Result := l_standard
			l_sign := l_standard.index_of (Currency_sign, 1)
			if l_sign > 0 then
				if (l_sign < l_standard.count and then is_digit_place (l_standard [l_sign + 1])
						and then not is_symbol_or_space (a_symbol [a_symbol.count]))
					or (l_sign > 1 and then is_digit_place (l_standard [l_sign - 1])
						and then not is_symbol_or_space (a_symbol [1]))
				then
					Result := string_at (a_formats, {STRING_32} "standard-alphaNextToNumber")
					notes.extend (a_name.to_string_32 + ": currency symbol " + a_symbol + " touches the digits; used standard-alphaNextToNumber")
				end
			end
		end

	day_period_lines (a_name, a_source: STRING_8; a_rules: SIMPLE_JSON_OBJECT; a_names: SIMPLE_JSON_OBJECT): STRING_32
			-- Lines adding the flexible day periods of `a_source'.
		local
			l_key: STRING_32
			l_rules, l_rule: SIMPLE_JSON_OBJECT
			l_sorted: SORTED_TWO_WAY_LIST [STRING_32]
		do
			l_key := key_of (a_source)
			if not a_rules.has_key (l_key) then
				l_key := a_source.substring (1, (a_source.index_of ('-', 1) - 1).max (0)).to_string_32
				if l_key.is_empty then
					l_key := a_source.to_string_32
				end
			end
			l_rules := object_at (a_rules, l_key.to_string_32)
			create l_sorted.make
			across l_rules.keys as ic_period loop
				l_sorted.extend (ic_period)
			end
			create Result.make (600)
			across l_sorted as ic_period loop
				if not ic_period.same_string ("am") and not ic_period.same_string ("pm") and a_names.has_key (ic_period) then
					l_rule := object_at (l_rules, ic_period.to_string_32)
					if attached l_rule.string_item ("_at") as al_at then
						Result.append ({STRING_32} "%T%T%TResult.add_day_period (" + minutes (al_at).out + ", " + minutes (al_at).out
							+ ", " + literal (string_at (a_names, ic_period.to_string_32)) + ")%N")
					else
						Result.append ({STRING_32} "%T%T%TResult.add_day_period (" + minutes (string_at (l_rule, {STRING_32} "_from")).out
							+ ", " + minutes (string_at (l_rule, {STRING_32} "_before")).out
							+ ", " + literal (string_at (a_names, ic_period.to_string_32)) + ")%N")
					end
				end
			end
			notes.extend (a_name.to_string_32 + ": pattern letter B uses the day period rules of %"" + l_key + "%"")
		end

	month_array (a_months: SIMPLE_JSON_OBJECT): STRING_32
			-- Manifest array of the twelve month names in `a_months'.
		local
			i: INTEGER
		do
			create Result.make (400)
			Result.append ({STRING_32} "<<")
			from i := 1 until i > 12 loop
				if i > 1 then
					Result.append ({STRING_32} ", ")
				end
				Result.append (literal (string_at (a_months, i.out.to_string_32)))
				i := i + 1
			end
			Result.append ({STRING_32} ">>")
		end

feature {NONE} -- Class text

	class_text (a_locale_features, a_language_entries: STRING_32): STRING_32
			-- The whole generated class.
		local
			l_names: STRING_32
			l_puts: STRING_32
		do
			create l_names.make (600)
			create l_puts.make (2_000)
			across locales as ic_locale loop
				if not l_names.is_empty then
					l_names.append ({STRING_32} ", ")
				end
				l_names.append ({STRING_32} "%"" + ic_locale.name + "%"")
				l_puts.append ({STRING_32} "%T%T%TResult.put (" + feature_name (ic_locale.name) + ", %"" + ic_locale.name + "%")%N")
			end
			create Result.make (a_locale_features.count + 8_000)
			Result.append ({STRING_32} "note%N")
			Result.append ({STRING_32} "%Tdescription: %"[%N")
			Result.append ({STRING_32} "%T%TLocale formatting data for SIMPLE_I18N, generated from CLDR " + version + "%N")
			Result.append ({STRING_32} "%T%T(the Unicode Common Locale Data Repository) by tools/cldr_generator.%N")
			Result.append ({STRING_32} "%T%TDo not edit by hand: change the generator and run it again (see README).%N%N")
			Result.append ({STRING_32} "%T%TNumbers use CLDR's %"latn%" numbering system. Currency is each locale's%N")
			Result.append ({STRING_32} "%T%Town current currency in CLDR's standard currency format. Patterns are%N")
			Result.append ({STRING_32} "%T%TCLDR's own; the bidirectional marks of the Hebrew and Arabic data are kept%N")
			Result.append ({STRING_32} "%T%Tas CLDR has them. Invisible characters are written as %%/code/ escapes.%N")
			Result.append ({STRING_32} "%T]%"%N")
			Result.append ({STRING_32} "%Tcldr_version: %"" + version + "%"%N")
			Result.append ({STRING_32} "%Tcldr_license: %"Unicode License v3 (SPDX-License-Identifier: Unicode-3.0), Copyright (c) 1991-2026 Unicode, Inc.; full text in LICENSE-CLDR.txt%"%N")
			Result.append ({STRING_32} "%Tgenerated_by: %"tools/cldr_generator%"%N%N")
			Result.append ({STRING_32} "class%N%TSIMPLE_I18N_LOCALE_TABLE%N%N")
			Result.append ({STRING_32} "feature -- Access%N%N")
			Result.append ({STRING_32} "%TCldr_version: STRING = %"" + version + "%"%N")
			Result.append ({STRING_32} "%T%T%T-- CLDR release the data comes from.%N%N")
			Result.append ({STRING_32} "%Tlocale_names: ARRAY [STRING_8]%N")
			Result.append ({STRING_32} "%T%T%T-- Names of the table's locales, sorted.%N")
			Result.append ({STRING_32} "%T%Tonce%N")
			Result.append ({STRING_32} "%T%T%TResult := << " + l_names + " >>%N")
			Result.append ({STRING_32} "%T%T%TResult.compare_objects%N")
			Result.append ({STRING_32} "%T%Tensure%N%T%T%Tcount: Result.count = " + locales.count.out + "%N%T%Tend%N%N")
			Result.append ({STRING_32} "%Tlocales: HASH_TABLE [SIMPLE_I18N_LOCALE_DATA, STRING_8]%N")
			Result.append ({STRING_32} "%T%T%T-- Every locale's data, by name.%N")
			Result.append ({STRING_32} "%T%Tonce%N")
			Result.append ({STRING_32} "%T%T%Tcreate Result.make (" + locales.count.out + ")%N")
			Result.append (l_puts)
			Result.append ({STRING_32} "%T%Tensure%N%T%T%Tcount: Result.count = " + locales.count.out + "%N%T%Tend%N%N")
			Result.append ({STRING_32} "%Tlanguage_defaults: HASH_TABLE [STRING_8, STRING_8]%N")
			Result.append ({STRING_32} "%T%T%T-- Table locale for a bare language (%"fr%") or language and script%N")
			Result.append ({STRING_32} "%T%T%T-- (%"zh_Hant%"), from CLDR's default content.%N")
			Result.append ({STRING_32} "%T%Tonce%N")
			Result.append ({STRING_32} "%T%T%Tcreate Result.make (32)%N")
			Result.append (a_language_entries)
			Result.append ({STRING_32} "%T%Tend%N%N")
			Result.append ({STRING_32} "feature {NONE} -- Locales%N%N")
			Result.append (a_locale_features)
			Result.append ({STRING_32} "end%N")
		end

	literal (a_text: READABLE_STRING_32): STRING_32
			-- Eiffel manifest STRING_32 for `a_text'; invisible and spacing
			-- characters become %/code/ escapes so the source shows them.
		local
			i: INTEGER
			l_code: NATURAL_32
		do
			create Result.make (a_text.count + 16)
			Result.append ({STRING_32} "{STRING_32} %"")
			from i := 1 until i > a_text.count loop
				l_code := a_text [i].natural_32_code
				if a_text [i] = '%%' then
					Result.append ({STRING_32} "%%%%")
				elseif a_text [i] = '%"' then
					Result.append ({STRING_32} "%%%"")
				elseif is_escaped_code (l_code) then
					Result.append ({STRING_32} "%%/" + l_code.out + "/")
				else
					Result.append_character (a_text [i])
				end
				i := i + 1
			end
			Result.append_character ('%"')
		end

	is_escaped_code (a_code: NATURAL_32): BOOLEAN
			-- Is `a_code' a control, space, or format character, written as an escape?
		do
			Result := a_code < 32 or (a_code >= 127 and a_code <= 160) or a_code = 0xAD or a_code = 0x061C
				or (a_code >= 0x2000 and a_code <= 0x200F) or (a_code >= 0x2028 and a_code <= 0x202F)
				or (a_code >= 0x205F and a_code <= 0x206F) or a_code = 0x3000 or a_code = 0xFEFF
		end

	feature_name (a_name: STRING_8): STRING_8
			-- Name of the feature building locale `a_name'.
		do
			Result := "locale_" + a_name.as_lower
		end

	key_of (a_source: STRING_8): STRING_8
			-- `a_source' with "_" for "-", as a language key.
		do
			Result := a_source.twin
			Result.replace_substring_all ("-", "_")
		end

feature {NONE} -- JSON access

	read_json (a_relative: READABLE_STRING_GENERAL): SIMPLE_JSON_OBJECT
			-- The JSON object in file `a_relative' under `cldr_root'.
		local
			l_path, l_text: STRING_32
			l_json: SIMPLE_JSON
		do
			l_path := cldr_root.twin
			l_path.append_character ('/')
			l_path.append_string_general (a_relative)
			print ({STRING_32} "read: " + a_relative.to_string_32 + "%N")
			l_text := (create {SIMPLE_FILES}).read_text_utf_8 (l_path)
			if l_text.is_empty then
				fail ({STRING_32} "cannot read " + l_path)
			end
			create l_json
			if attached l_json.parse (l_text) as al_value and then al_value.is_object then
				Result := al_value.as_object
			else
				fail ({STRING_32} "not a JSON object: " + l_path)
				create Result.make
			end
		end

	value_at (a_object: SIMPLE_JSON_OBJECT; a_path: STRING_32): SIMPLE_JSON_VALUE
			-- The value at `a_path' under `a_object'; the keys of `a_path'
			-- are separated by "/".
		require
			path_not_empty: not a_path.is_empty
		local
			l_object: SIMPLE_JSON_OBJECT
			l_value: detachable SIMPLE_JSON_VALUE
			l_keys: LIST [STRING_32]
			i: INTEGER
		do
			l_object := a_object
			l_keys := a_path.split ('/')
			from i := 1 until i > l_keys.count loop
				l_value := l_object.item (l_keys [i])
				if l_value = Void then
					fail ({STRING_32} "missing key %"" + l_keys [i] + "%" of " + a_path)
				elseif i < l_keys.count then
					l_object := as_object (l_value, l_keys [i])
				end
				i := i + 1
			end
			check attached l_value as al_value then
				Result := al_value
			end
		end

	object_at (a_object: SIMPLE_JSON_OBJECT; a_path: STRING_32): SIMPLE_JSON_OBJECT
			-- The object at `a_path' under `a_object'.
		require
			path_not_empty: not a_path.is_empty
		do
			Result := as_object (value_at (a_object, a_path), a_path)
		end

	array_at (a_object: SIMPLE_JSON_OBJECT; a_path: STRING_32): SIMPLE_JSON_ARRAY
			-- The array at `a_path' under `a_object'.
		require
			path_not_empty: not a_path.is_empty
		local
			l_value: SIMPLE_JSON_VALUE
		do
			l_value := value_at (a_object, a_path)
			if l_value.is_array then
				Result := l_value.as_array
			else
				fail ({STRING_32} "not an array: " + a_path)
				create Result.make
			end
		end

	string_at (a_object: SIMPLE_JSON_OBJECT; a_path: STRING_32): STRING_32
			-- The string at `a_path' under `a_object'.
		require
			path_not_empty: not a_path.is_empty
		local
			l_value: SIMPLE_JSON_VALUE
		do
			l_value := value_at (a_object, a_path)
			if l_value.is_string then
				Result := l_value.as_string_32
			else
				fail ({STRING_32} "not a string: " + a_path)
				create Result.make_empty
			end
		end

	as_object (a_value: SIMPLE_JSON_VALUE; a_what: READABLE_STRING_GENERAL): SIMPLE_JSON_OBJECT
			-- `a_value' as an object.
		do
			if a_value.is_object then
				Result := a_value.as_object
			else
				fail ({STRING_32} "not an object: " + a_what.to_string_32)
				create Result.make
			end
		end

	array_has_string (a_array: SIMPLE_JSON_ARRAY; a_text: READABLE_STRING_GENERAL): BOOLEAN
			-- Does `a_array' hold the string `a_text'?
		local
			i: INTEGER
		do
			from i := 1 until Result or i > a_array.count loop
				Result := attached a_array.string_item (i) as al_item and then al_item.same_string_general (a_text)
				i := i + 1
			end
		end

feature {NONE} -- Helpers

	natural_text (a_text: STRING_32; a_what: READABLE_STRING_GENERAL): STRING_8
			-- `a_text', which must be a natural number.
		do
			if a_text.is_natural then
				Result := a_text.to_string_8
			else
				fail ({STRING_32} "not a natural number for " + a_what.to_string_32 + ": " + a_text)
				Result := "0"
			end
		end

	minutes (a_clock: STRING_32): INTEGER
			-- Minutes since midnight of "HH:MM" `a_clock'.
		do
			if a_clock.count = 5 and then a_clock [3] = ':' and then a_clock.substring (1, 2).is_natural
				and then a_clock.substring (4, 5).is_natural
			then
				Result := a_clock.substring (1, 2).to_integer * 60 + a_clock.substring (4, 5).to_integer
			else
				fail ({STRING_32} "not a clock time: " + a_clock)
			end
		end

	has_unquoted_letter (a_pattern: READABLE_STRING_32; a_letter: CHARACTER_32): BOOLEAN
			-- Does `a_pattern' use `a_letter' outside quotes?
		local
			i: INTEGER
			l_quoted: BOOLEAN
		do
			from i := 1 until Result or i > a_pattern.count loop
				if a_pattern [i] = '%'' then
					l_quoted := not l_quoted
				elseif not l_quoted and a_pattern [i] = a_letter then
					Result := True
				end
				i := i + 1
			end
		end

	is_digit_place (a_char: CHARACTER_32): BOOLEAN
			-- Is `a_char' a digit place of a number pattern?
		do
			Result := a_char = '#' or a_char = '0'
		end

	is_symbol_or_space (a_char: CHARACTER_32): BOOLEAN
			-- Is `a_char' a currency sign or a space (CLDR currency spacing:
			-- such a character may touch the digits)?
		local
			l_code: NATURAL_32
		do
			l_code := a_char.natural_32_code
			Result := l_code = 0x24 or (l_code >= 0xA2 and l_code <= 0xA5) or l_code = 0x58F or l_code = 0x60B
				or l_code = 0x9F2 or l_code = 0x9F3 or l_code = 0xE3F or l_code = 0x17DB
				or (l_code >= 0x20A0 and l_code <= 0x20CF) or l_code = 0xFDFC or l_code = 0xFE69 or l_code = 0xFF04
				or (l_code >= 0xFFE0 and l_code <= 0xFFE1) or (l_code >= 0xFFE5 and l_code <= 0xFFE6)
				or l_code = 0x20 or l_code = 0xA0 or (l_code >= 0x2000 and l_code <= 0x200A) or l_code = 0x202F
				or l_code = 0x205F or l_code = 0x3000
		end

	fail (a_message: READABLE_STRING_GENERAL)
			-- Stop the generator with `a_message'.
		do
			io.error.put_string ("cldr_generator: " + {UTF_CONVERTER}.utf_32_string_to_utf_8_string_8 (a_message) + "%N")
			(create {EXCEPTIONS}).die (1)
		end

	Currency_sign: CHARACTER_32 = '%/164/'
			-- The pattern character "¤" (U+00A4).

end
