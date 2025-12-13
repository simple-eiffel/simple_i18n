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

end
