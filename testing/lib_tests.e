note
	description: "Tests for SIMPLE_I18N"
	author: "Larry Rix"
	testing: "covers"

class
	LIB_TESTS

inherit
	TEST_SET_BASE

feature -- Tests

	test_create_with_system_locale
			-- Test creating with system locale.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make

			assert_true ("has language", not l_i18n.language.is_empty)
			assert_true ("is system locale", l_i18n.is_system_locale)
			assert_true ("has locale name", not l_i18n.locale_name.is_empty)
		end

	test_create_with_specific_locale
			-- Test creating with specific locale code.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make_with_locale ("en_US")

			assert_strings_equal ("language", "en", l_i18n.language.to_string_8)
			assert_strings_equal ("region", "US", l_i18n.region.to_string_8)
		end

	test_register_translation
			-- Test registering a translation.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make
			l_i18n.register_translation ("hello", "Hello, World!")

			assert_true ("has translation", l_i18n.has_translation ("hello"))
			assert_integers_equal ("count", 1, l_i18n.translation_count)
		end

	test_translate
			-- Test translating a key.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make
			l_i18n.register_translation ("greeting", "Bonjour!")

			assert_strings_equal ("translation", "Bonjour!", l_i18n.translate ("greeting").to_string_8)
		end

	test_translate_missing
			-- Test translating a missing key returns the key.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make

			assert_strings_equal ("fallback to key", "unknown_key", l_i18n.translate ("unknown_key").to_string_8)
		end

	test_plural_translation
			-- Test plural translation handling.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make
			l_i18n.register_plural_translation ("item", "items", "1 item", "many items")

			assert_strings_equal ("singular", "1 item", l_i18n.translate_plural ("item", 1).to_string_8)
			assert_strings_equal ("plural", "many items", l_i18n.translate_plural ("item", 5).to_string_8)
		end

	test_format_placeholders
			-- Test string formatting with placeholders.
		local
			l_i18n: SIMPLE_I18N
			l_result: STRING_32
		do
			create l_i18n.make

			l_result := l_i18n.format ("Hello, $1!", ["World"])
			assert_strings_equal ("single placeholder", "Hello, World!", l_result.to_string_8)

			l_result := l_i18n.format ("$1 has $2 messages", ["User", 5])
			assert_strings_equal ("multiple placeholders", "User has 5 messages", l_result.to_string_8)
		end

	test_translate_format
			-- Test translate and format in one call.
		local
			l_i18n: SIMPLE_I18N
			l_result: STRING_32
		do
			create l_i18n.make
			l_i18n.register_translation ("welcome", "Welcome, $1!")

			l_result := l_i18n.translate_format ("welcome", ["Alice"])
			assert_strings_equal ("translated and formatted", "Welcome, Alice!", l_result.to_string_8)
		end

	test_register_multiple
			-- Test registering multiple translations at once.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make
			l_i18n.register_translations (<<
				["yes", "Oui"],
				["no", "Non"],
				["cancel", "Annuler"]
			>>)

			assert_integers_equal ("count", 3, l_i18n.translation_count)
			assert_strings_equal ("yes", "Oui", l_i18n.translate ("yes").to_string_8)
			assert_strings_equal ("no", "Non", l_i18n.translate ("no").to_string_8)
			assert_strings_equal ("cancel", "Annuler", l_i18n.translate ("cancel").to_string_8)
		end

	test_locale_info
			-- Test accessing locale information.
		local
			l_i18n: SIMPLE_I18N
		do
			create l_i18n.make

			assert_true ("has decimal separator", l_i18n.decimal_separator /= Void)
			assert_true ("has thousands separator", l_i18n.thousands_separator /= Void)
			assert_true ("has currency symbol", l_i18n.currency_symbol /= Void)
			assert_true ("has date format", l_i18n.date_format /= Void)
			assert_true ("has time format", l_i18n.time_format /= Void)
		end


feature -- Tests: the CLDR table (own locale data)

	test_en_us_numbers_and_currency
			-- en_US, exactly.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("en_US")
			assert_text ("number", "1,234.5", l.format_number (1234.5))
			assert_text ("fraction to three", "-0.125", l.format_number (-0.125))
			assert_text ("whole", "2", l.format_number (2.0))
			assert_text ("integer", "1,234,567", l.format_integer (1234567))
			assert_text ("negative integer", "-42", l.format_integer (-42))
			assert_text ("currency", "$1,234.50", l.format_currency (1234.5))
			assert_text ("negative currency", "-$3.00", l.format_currency (-3.0))
			assert_text ("code", "USD", l.currency_code)
			assert_false ("not a fallback", l.is_fallback_locale)
		end

	test_en_us_dates_and_times
			-- en_US dates and times; CLDR puts U+202F before AM and PM.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("en_US")
			assert_text ("long date", "November 14, 2026", l.format_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
			assert_text ("short date", "11/14/26", l.format_short_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
			assert_text ("time", {STRING_32} "1:05:09%/8239/PM", l.format_time (create {SIMPLE_TIME}.make (13, 5, 9)))
			assert_text ("short time", {STRING_32} "9:30%/8239/AM", l.format_short_time (create {SIMPLE_TIME}.make (9, 30, 0)))
			assert_text ("date and time", {STRING_32} "November 14, 2026, 1:05:09%/8239/PM",
				l.format_date_time (create {SIMPLE_DATE_TIME}.make (2026, 11, 14, 13, 5, 9)))
		end

	test_fr_fr_has_no_mojibake
			-- fr_FR's group separator is U+202F as one character (the host data read UTF-8
			-- as Latin-1 and gave three); its currency is "1 234,50 €" with U+00A0.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("fr_FR")
			assert_text ("group separator", {STRING_32} "%/8239/", l.thousands_separator)
			assert_integers_equal ("one character", 1, l.thousands_separator.count)
			assert_text ("decimal separator", ",", l.decimal_separator)
			assert_text ("number", {STRING_32} "1%/8239/234,5", l.format_number (1234.5))
			assert_text ("currency", {STRING_32} "1%/8239/234,50%/160/%/8364/", l.format_currency (1234.5))
			assert_text ("long date", {STRING_32} "14 novembre 2026", l.format_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
			assert_text ("short date", "14/11/2026", l.format_short_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
			assert_text ("time", "13:05:09", l.format_time (create {SIMPLE_TIME}.make (13, 5, 9)))
		end

	test_de_de_ja_jp_es_es
			-- Other separators, patterns, currency digits and minimum grouping.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("de_DE")
			assert_text ("de number", "1.234,5", l.format_number (1234.5))
			assert_text ("de currency", {STRING_32} "1.234,50%/160/%/8364/", l.format_currency (1234.5))
			assert_text ("de long date", "14. November 2026", l.format_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
			assert_text ("de short date", "14.11.26", l.format_short_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
			create l.make_with_locale ("ja_JP")
			assert_text ("ja currency, no digits", {STRING_32} "%/65509/1,234", l.format_currency (1234.4))
			assert_text ("ja currency, rounded up", {STRING_32} "%/65509/1,235", l.format_currency (1234.6))
			assert_text ("ja long date", {STRING_32} "2026%/24180/11%/26376/14%/26085/", l.format_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
			create l.make_with_locale ("es_ES")
			assert_text ("es four digits ungrouped", "1234", l.format_integer (1234))
			assert_text ("es five digits grouped", "12.345", l.format_integer (12345))
			assert_text ("es long date", "14 de noviembre de 2026", l.format_date (create {SIMPLE_DATE}.make (2026, 11, 14)))
		end

	test_unknown_locale_falls_back_visibly
			-- A locale the table lacks formats as en_US, and the program can see that.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("xx_YY")
			assert_true ("fallback", l.is_fallback_locale)
			assert_text ("formats as", "en_US", l.formatting_locale_name)
			assert_text ("still named as asked", "xx_YY", l.locale_name)
			assert_text ("en_US number", "1,234.5", l.format_number (1234.5))
			assert_false ("not in the table", l.has_locale ("xx_YY"))
			l.set_locale ("fr_FR")
			assert_false ("fr_FR is no fallback", l.is_fallback_locale)
			assert_text ("now fr_FR", "fr_FR", l.formatting_locale_name)
		end

	test_language_first_fallback
			-- Larry, 2026-11-14, "Language first": an unlisted locale formats as its language's
			-- table locale, visibly; only an unknown language goes to en_US.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("de_AT")
			assert_true ("de_AT is a fallback", l.is_fallback_locale)
			assert_text ("de_AT formats as", "de_DE", l.formatting_locale_name)
			assert_text ("de_AT name kept", "de_AT", l.locale_name)
			assert_text ("de_AT number", "1.234,5", l.format_number (1234.5))
			create l.make_with_locale ("fr_BE.UTF-8")
			assert_text ("fr_BE formats as", "fr_FR", l.formatting_locale_name)
			assert_text ("fr_BE number", {STRING_32} "1%/8239/234,5", l.format_number (1234.5))
			create l.make_with_locale ("en_IE")
			assert_text ("en_IE formats as", "en_US", l.formatting_locale_name)
			assert_true ("en_IE is still a fallback", l.is_fallback_locale)
			create l.make_with_locale ("zh_Hant_HK")
			assert_text ("script first", "zh_TW", l.formatting_locale_name)
			create l.make_with_locale ("de_CH")
			assert_false ("a listed locale is its own", l.is_fallback_locale)
			assert_text ("de_CH", "de_CH", l.formatting_locale_name)
			assert_true ("has_locale by language", l.has_locale ("de_AT"))
		end

	test_os_style_names_resolve
			-- The forms an operating system gives a name in.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("fr_FR.UTF-8@euro")
			assert_text ("encoding and modifier dropped", "fr_FR", l.formatting_locale_name)
			assert_text ("locale name", "fr_FR", l.locale_name)
			create l.make_with_locale ("pt-BR")
			assert_text ("BCP 47 dash", "pt_BR", l.formatting_locale_name)
			create l.make_with_locale ("fr")
			assert_text ("bare language, CLDR default content", "fr_FR", l.formatting_locale_name)
			assert_false ("bare language is known", l.is_fallback_locale)
		end

	test_every_table_locale_formats
			-- Each of the table's locales formats numbers, money, dates and times.
		local
			l: SIMPLE_I18N
		do
			create l.make_with_locale ("en_US")
			assert_text ("cldr", "48.2.0", l.cldr_version)
			across (create {SIMPLE_I18N_LOCALES}).locale_names as ic loop
				create l.make_with_locale (ic)
				assert_text ("own data " + ic, ic, l.formatting_locale_name)
				assert_false ("not fallback " + ic, l.is_fallback_locale)
				assert_false ("number " + ic, l.format_number (-1234567.891).is_empty)
				assert_false ("currency " + ic, l.format_currency (1234.5).is_empty)
				assert_false ("date " + ic, l.format_date_time (create {SIMPLE_DATE_TIME}.make (2026, 1, 2, 3, 4, 5)).is_empty)
				assert_false ("short " + ic, l.format_short_date (create {SIMPLE_DATE}.make (2026, 12, 31)).is_empty)
			end
			assert_integers_equal ("thirty", 30, (create {SIMPLE_I18N_LOCALES}).locale_names.count)
		end

feature {NONE} -- Exact text

	assert_text (a_tag: STRING; a_expected, a_actual: READABLE_STRING_GENERAL)
			-- `a_actual' is `a_expected', character for character; on a difference, both
			-- are printed as code points.
		do
			if not a_actual.same_string (a_expected) then
				print ("    " + a_tag + ": expected " + code_points (a_expected) + ", got " + code_points (a_actual) + "%N")
			end
			assert_true (a_tag, a_actual.same_string (a_expected))
		end

	code_points (a_text: READABLE_STRING_GENERAL): STRING_8
			-- `a_text' with each non-ASCII character as U+XXXX.
		do
			create Result.make (a_text.count * 2)
			across 1 |..| a_text.count as ic loop
				if a_text.code (ic) < 128 then
					Result.append_character (a_text [ic].to_character_8)
				else
					Result.append ("<U+" + a_text.code (ic).to_hex_string.substring (5, 8) + ">")
				end
			end
		end

end
