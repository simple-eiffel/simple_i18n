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
				["en_001", "en-001", "", ""],
				["en_AU", "en-AU", "", ""],
				["en_CA", "en-CA", "", ""],
				["en_GB", "en-GB", "", ""],
				["en_US", "en", "en-US", ""],
				["es_419", "es-419", "", ""],
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
			l_region, l_code, l_symbol, l_decimal_pattern: STRING_32
			l_short_date, l_medium_date, l_long_date, l_short_time, l_medium_time, l_date_time: STRING_32
			l_digits: INTEGER
			l_number_check: SIMPLE_I18N_NUMBER_PATTERN
			l_date_check: SIMPLE_I18N_DATE_PATTERN
			l_chain: ARRAYED_LIST [STRING_8]
			l_is_area: BOOLEAN
			l_formats: SIMPLE_JSON_OBJECT
			l_standard_currency, l_alpha_currency: STRING_32
		do
				-- CLDR inheritance: a locale has only what differs from its parent (de-CH has no
				-- CHF symbol of its own; it is de's). Each lookup takes the first locale of the
				-- chain that has the key: the locale, then its parents (parentLocales.json, else
				-- the code less its last subtag).
			l_chain := source_chain (a_source)
			l_numbers := merged (l_chain, "cldr-numbers-full/package/main/", "/numbers.json", "/numbers")
			l_currencies := merged (l_chain, "cldr-numbers-full/package/main/", "/currencies.json", "/numbers/currencies")
			l_gregorian := merged (l_chain, "cldr-dates-full/package/main/", "/ca-gregorian.json", "/dates/calendars/gregorian")
			l_symbols := object_at (l_numbers, {STRING_32} "symbols-numberSystem-latn")

				-- Currency: the region's one current legal tender. An area (en_001 "world",
				-- es_419 "Latin America") has none: such a locale formats a currency only for
				-- a requested region's (SIMPLE_I18N takes it from `region_currencies').
			l_region := a_name.substring (a_name.index_of ('_', 1) + 1, a_name.count)
			l_is_area := l_region.is_natural
			if l_is_area then
				l_code := {STRING_32} "XXX"
			else
				l_code := current_currency (array_at (a_currency_data, {STRING_32} "region/" + l_region), a_name)
			end
				-- No locale of the chain may have a symbol for it (de and de-CH have none for CHF):
				-- then CLDR's root rule, the currency's code.
			if l_is_area then
				l_symbol := {STRING_32} "%/164/"
			elseif attached l_currencies.item (l_code.to_string_32) as al_entry and then al_entry.is_object
				and then attached al_entry.as_object.string_item ({STRING_32} "symbol") as al_symbol then
				l_symbol := al_symbol
			else
				l_symbol := l_code.to_string_32
				notes.extend (a_name.to_string_32 + ": no " + l_code + " symbol in CLDR's chain; the code itself, as CLDR's root has it")
			end
			l_digits := currency_digits (object_at (a_currency_data, {STRING_32} "fractions"), l_code)

				-- Number patterns.
			l_decimal_pattern := string_at (l_numbers, {STRING_32} "decimalFormats-numberSystem-latn/standard")
			l_formats := object_at (l_numbers, {STRING_32} "currencyFormats-numberSystem-latn")
			l_standard_currency := string_at (l_formats, {STRING_32} "standard")
			if attached l_formats.string_item ({STRING_32} "standard-alphaNextToNumber") as al_alpha then
				l_alpha_currency := al_alpha
			else
				l_alpha_currency := l_standard_currency
			end
			create l_number_check.make_default
			across << l_decimal_pattern, l_standard_currency, l_alpha_currency >> as ic_pattern loop
				if not l_number_check.is_valid_pattern (ic_pattern) then
					fail (a_name.to_string_32 + ": unsupported number pattern " + ic_pattern)
				end
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
			Result.append ({STRING_32} "%T%T%TResult.set_number_patterns (" + literal (l_decimal_pattern) + ", " + literal (l_standard_currency) + ")%N")
			Result.append ({STRING_32} "%T%T%TResult.set_alpha_currency_pattern (" + literal (l_alpha_currency) + ")%N")
			if not l_is_area then
				Result.append ({STRING_32} "%T%T%TResult.set_currency (" + literal (l_code) + ", " + literal (l_symbol) + ", " + l_digits.out + ")%N")
			end
			Result.append (currency_symbol_lines (l_currencies, l_code))
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

	currency_symbol_lines (a_currencies: SIMPLE_JSON_OBJECT; a_own: STRING_32): STRING_32
			-- The locale's symbols for the other currencies of `region_currency_codes' where
			-- the symbol is not the code itself (en's "%/8364/" for EUR; fr's CHF is "CHF").
		local
			l_pairs: STRING_32
		do
			create l_pairs.make (2_000)
			across region_currency_codes as ic_code loop
				if not ic_code.same_string (a_own) and then attached a_currencies.item (ic_code) as al_entry and then al_entry.is_object
					and then attached al_entry.as_object.string_item ({STRING_32} "symbol") as al_symbol
					and then not al_symbol.same_string (ic_code)
				then
					if not l_pairs.is_empty then
						l_pairs.append ({STRING_32} ",%N%T%T%T%T")
					end
					l_pairs.append ({STRING_32} "[" + literal (ic_code) + ", " + literal (al_symbol) + "]")
				end
			end
			create Result.make (l_pairs.count + 64)
			if not l_pairs.is_empty then
				Result.append ({STRING_32} "%T%T%TResult.set_currency_symbols (<<%N%T%T%T%T" + l_pairs + ">>)%N")
			end
		end

	region_currencies: ARRAYED_LIST [TUPLE [region, code: STRING_32; digits: INTEGER]]
			-- Every region with exactly one current legal tender, sorted by region.
		local
			l_data, l_regions, l_fractions: SIMPLE_JSON_OBJECT
			l_keys: ARRAYED_LIST [STRING_32]
			l_found: ARRAYED_LIST [STRING_32]
		once
			l_data := object_at (read_json ("cldr-core/package/supplemental/currencyData.json"), {STRING_32} "supplemental/currencyData")
			l_regions := object_at (l_data, {STRING_32} "region")
			l_fractions := object_at (l_data, {STRING_32} "fractions")
			l_keys := sorted (l_regions.keys)
			create Result.make (l_keys.count)
			across l_keys as ic_region loop
				l_found := current_tenders (array_at (l_regions, ic_region))
				if l_found.count = 1 and ic_region.count = 2 then
					Result.extend ([ic_region, l_found.first, currency_digits (l_fractions, l_found.first)])
				end
			end
		end

	region_currency_codes: ARRAYED_LIST [STRING_32]
			-- The distinct codes of `region_currencies', sorted.
		local
		once
			create Result.make (200)
			Result.compare_objects
			across region_currencies as ic loop
				if not Result.has (ic.code) then
					Result.extend (ic.code)
				end
			end
			Result := sorted (Result)
		end

	parent_links: ARRAYED_LIST [TUPLE [child, parent: STRING_8]]
			-- CLDR's parentLocales from a language-and-region child (en-IE, es-AR, pt-AO)
			-- followed up the chain (en-AT, en-150, en-001) to a table locale, sorted by
			-- child; children the table lists themselves are left out.
		local
			l_code, l_name: STRING_8
			l_steps: INTEGER
			l_keys: ARRAYED_LIST [STRING_32]
		once
			l_keys := sorted (parent_locales.keys)
			create Result.make (200)
			across l_keys as ic_child loop
				if ic_child.occurrences ('-') = 1 then
					from
						l_code := ic_child.to_string_8
						l_name := ""
						l_steps := 0
					until
						not l_name.is_empty or l_steps > 6 or not attached parent_locales.string_item (l_code.to_string_32)
					loop
						if attached parent_locales.string_item (l_code.to_string_32) as al_parent then
							l_code := al_parent.to_string_8
							if is_table_locale (l_code) then
								l_name := l_code.twin
								l_name.replace_substring_all ("-", "_")
							end
						end
						l_steps := l_steps + 1
					end
					if not l_name.is_empty and then not is_table_locale (ic_child.to_string_8) then
						l_code := ic_child.to_string_8
						l_code.replace_substring_all ("-", "_")
						Result.extend ([l_code, l_name])
					end
				end
			end
		end

	sorted (a_items: ITERABLE [STRING_32]): ARRAYED_LIST [STRING_32]
			-- `a_items' in ascending order (insertion; the lists are a few hundred long).
		local
			i: INTEGER
		do
			create Result.make (256)
			across a_items as ic loop
				from i := Result.count until i = 0 or else Result [i] <= ic loop
					i := i - 1
				end
				Result.go_i_th (i)
				Result.put_right (ic)
			end
		ensure
			ascending: across 2 |..| Result.count as ic all Result [ic - 1] <= Result [ic] end
		end

	is_table_locale (a_cldr: STRING_8): BOOLEAN
			-- Is CLDR locale `a_cldr' ("en-001", "pt-PT") one of the table's, by name?
		local
			l_name: STRING_8
		do
			l_name := a_cldr.twin
			l_name.replace_substring_all ("-", "_")
			Result := across locales as ic some ic.name.same_string (l_name) end
		end

	current_tenders (a_entries: SIMPLE_JSON_ARRAY): ARRAYED_LIST [STRING_32]
			-- The current legal tenders among a region's `a_entries'.
		local
			l_entry: SIMPLE_JSON_OBJECT
			i: INTEGER
		do
			create Result.make (1)
			from i := 1 until i > a_entries.count loop
				l_entry := as_object (a_entries [i], "currency entry")
				across l_entry.keys as ic_code loop
					if attached l_entry.item (ic_code) as al_value and then al_value.is_object
						and then not al_value.as_object.has_key ("_to")
						and then not (attached al_value.as_object.string_item ("_tender") as al_tender and then al_tender.same_string ("false"))
					then
						Result.extend (ic_code)
					end
				end
				i := i + 1
			end
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
			Result.append ({STRING_32} "%T%TNumbers use CLDR's %"latn%" numbering system. A currency is the requested%N")
			Result.append ({STRING_32} "%T%Tregion's (`region_currencies'), shown with the table locale's symbol for it%N")
			Result.append ({STRING_32} "%T%Tin CLDR's standard currency format. Patterns are%N")
			Result.append ({STRING_32} "%T%TCLDR's own; the bidirectional marks of the Hebrew and Arabic data are kept%N")
			Result.append ({STRING_32} "%T%Tas CLDR has them. Every character outside ASCII is written as a%N")
			Result.append ({STRING_32} "%T%T%%/code/ escape (its Unicode code point), so the compiler reads the%N")
			Result.append ({STRING_32} "%T%Tsame text whatever encoding it takes the file to be in.%N")
			Result.append ({STRING_32} "%T]%"%N")
			Result.append ({STRING_32} "%Tcldr_version: %"" + version + "%"%N")
			Result.append ({STRING_32} "%Tcldr_license: %"Unicode License v3 (SPDX-License-Identifier: Unicode-3.0), " + cldr_copyright + "; full text in LICENSE-CLDR.txt%"%N")
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
			Result.append ({STRING_32} "%Tparent_locales: HASH_TABLE [STRING_8, STRING_8]%N")
			Result.append ({STRING_32} "%T%T%T-- Table locale for a language and region the table does not list, from%N")
			Result.append ({STRING_32} "%T%T%T-- CLDR's parentLocales followed to a table locale (en_IE to en_001).%N")
			Result.append ({STRING_32} "%T%Tonce%N")
			Result.append ({STRING_32} "%T%T%Tcreate Result.make (" + parent_links.count.out + ")%N")
			across parent_links as ic loop
				Result.append ({STRING_32} "%T%T%TResult.put (%"" + ic.parent + "%", %"" + ic.child + "%")%N")
			end
			Result.append ({STRING_32} "%T%Tend%N%N")
			Result.append ({STRING_32} "%Tregion_currencies: HASH_TABLE [TUPLE [code: STRING_32; digits: INTEGER], STRING_8]%N")
			Result.append ({STRING_32} "%T%T%T-- Each region's one current legal tender and its fraction digits, from%N")
			Result.append ({STRING_32} "%T%T%T-- CLDR's currencyData (regions with more than one are left out).%N")
			Result.append ({STRING_32} "%T%Tonce%N")
			Result.append ({STRING_32} "%T%T%Tcreate Result.make (" + region_currencies.count.out + ")%N")
			across region_currencies as ic loop
				Result.append ({STRING_32} "%T%T%TResult.put ([" + literal (ic.code) + ", " + ic.digits.out + "], %"" + ic.region + "%")%N")
			end
			Result.append ({STRING_32} "%T%Tend%N%N")
			Result.append ({STRING_32} "feature {NONE} -- Locales%N%N")
			Result.append (a_locale_features)
			Result.append ({STRING_32} "end%N")
		end

	literal (a_text: READABLE_STRING_32): STRING_32
			-- Eiffel manifest STRING_32 for `a_text', in ASCII only: every other character
			-- becomes a %/code/ escape. The compiler reads a source file without a byte order
			-- mark as Latin-1, so a literal "€" would become three characters (the mojibake this
			-- table replaces); escapes read the same whatever the file's encoding is taken as.
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
			-- Is `a_code' written as an escape: a control character, or anything not ASCII?
		do
			Result := a_code < 32 or a_code >= 127
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

	cldr_copyright: STRING_32
			-- The copyright line of CLDR's own LICENSE (cldr-core/package/LICENSE), in ASCII
			-- ("Copyright (c) 2004-2026 Unicode, Inc."); the generator stops if it has none.
		local
			l_path: STRING_32
		once
			create Result.make_empty
			l_path := cldr_root.twin
			l_path.append_string_general ("/cldr-core/package/LICENSE")
			across (create {SIMPLE_FILES}).read_text_utf_8 (l_path).split ('%N') as ic_line loop
				if Result.is_empty and then ic_line.starts_with ({STRING_32} "Copyright") then
					Result := ic_line.twin
					Result.replace_substring_all ({STRING_32} "%/169/", {STRING_32} "(c)")
					Result.adjust
				end
			end
			if Result.is_empty or else across Result as ic_char some ic_char.natural_32_code >= 127 end then
				fail ({STRING_32} "no ASCII copyright line in " + l_path)
			end
		end

	parent_locales: SIMPLE_JSON_OBJECT
			-- CLDR's parentLocales map (supplemental/parentLocales.json), child to parent.
		once
			Result := object_at (read_json ("cldr-core/package/supplemental/parentLocales.json"), {STRING_32} "supplemental/parentLocales/parentLocale")
		end

	source_chain (a_source: STRING_8): ARRAYED_LIST [STRING_8]
			-- `a_source' and its CLDR parents, nearest first, while their data exist: a parent is
			-- the parentLocales map's, else the code less its last subtag ("de-CH" to "de").
			-- The packages hold no root locale, so a chain ends at a bare language.
		local
			l_code: STRING_8
			l_dash: INTEGER
		do
			create Result.make (4)
			from l_code := a_source until l_code.is_empty or Result.count > 6 loop
				Result.extend (l_code)
				if attached parent_locales.string_item (l_code.to_string_32) as al_parent and then not al_parent.same_string ("root") then
					l_code := al_parent.to_string_8
				else
					l_dash := l_code.last_index_of ('-', l_code.count)
					if l_dash > 0 then
						l_code := l_code.substring (1, l_dash - 1)
					else
						l_code := ""
					end
				end
			end
		ensure
			starts_with_itself: Result.first.same_string (a_source)
		end

	merged (a_chain: LIST [STRING_8]; a_folder, a_file, a_inner: STRING_8): SIMPLE_JSON_OBJECT
			-- One object of the chain's data in `a_file': each locale's object at
			-- main/<locale>`a_inner', merged so that a nearer locale's keys win, at every depth.
			-- Locales whose file is missing are skipped; the first must have one.
		local
			l_path: STRING_32
		do
			create Result.make
			across a_chain.new_cursor.reversed as ic loop
				l_path := cldr_root.twin
				l_path.append_string_general ("/" + a_folder + ic + a_file)
				if (create {RAW_FILE}.make_with_name (l_path)).exists then
					merge_into (Result, object_at (read_json (a_folder + ic + a_file), {STRING_32} "main/" + ic.to_string_32 + a_inner.to_string_32))
				elseif ic = a_chain.first then
					fail ({STRING_32} "missing " + l_path)
				end
			end
		end

	merge_into (a_target, a_source: SIMPLE_JSON_OBJECT)
			-- Put `a_source''s keys into `a_target': objects merged key by key, anything else replaced.
		do
			across a_source.keys as ic_key loop
				if attached a_source.item (ic_key) as al_new then
					if al_new.is_object and then attached a_target.item (ic_key) as al_old and then al_old.is_object then
						merge_into (al_old.as_object, al_new.as_object)
					else
						a_target.put_value (al_new, ic_key).do_nothing
					end
				end
			end
		end

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
