note
	description: "Test application for SIMPLE_I18N"
	author: "Larry Rix"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run the tests.
		do
			create tests
			print ("Running SIMPLE_I18N tests...%N%N")

			passed := 0
			failed := 0

			run_test (agent tests.test_create_with_system_locale, "test_create_with_system_locale")
			run_test (agent tests.test_create_with_specific_locale, "test_create_with_specific_locale")
			run_test (agent tests.test_register_translation, "test_register_translation")
			run_test (agent tests.test_translate, "test_translate")
			run_test (agent tests.test_translate_missing, "test_translate_missing")
			run_test (agent tests.test_plural_translation, "test_plural_translation")
			run_test (agent tests.test_format_placeholders, "test_format_placeholders")
			run_test (agent tests.test_translate_format, "test_translate_format")
			run_test (agent tests.test_register_multiple, "test_register_multiple")
			run_test (agent tests.test_locale_info, "test_locale_info")
			run_test (agent tests.test_en_us_numbers_and_currency, "test_en_us_numbers_and_currency")
			run_test (agent tests.test_en_us_dates_and_times, "test_en_us_dates_and_times")
			run_test (agent tests.test_fr_fr_has_no_mojibake, "test_fr_fr_has_no_mojibake")
			run_test (agent tests.test_de_de_ja_jp_es_es, "test_de_de_ja_jp_es_es")
			run_test (agent tests.test_unknown_locale_falls_back_visibly, "test_unknown_locale_falls_back_visibly")
			run_test (agent tests.test_language_first_fallback, "test_language_first_fallback")
			run_test (agent tests.test_en_001_for_english_outside_the_us, "test_en_001_for_english_outside_the_us")
			run_test (agent tests.test_es_419_for_latin_american_spanish, "test_es_419_for_latin_american_spanish")
			run_test (agent tests.test_currency_follows_the_region, "test_currency_follows_the_region")
			run_test (agent tests.test_system_locale_name_comes_from_the_os, "test_system_locale_name_comes_from_the_os")
			run_test (agent tests.test_os_style_names_resolve, "test_os_style_names_resolve")
			run_test (agent tests.test_every_table_locale_formats, "test_every_table_locale_formats")

			print ("%N========================%N")
			print ("Results: " + passed.out + " passed, " + failed.out + " failed%N")

			if failed > 0 then
				print ("TESTS FAILED%N")
			else
				print ("ALL TESTS PASSED%N")
			end
		end

feature {NONE} -- Implementation

	tests: LIB_TESTS

	passed: INTEGER
	failed: INTEGER

	run_test (a_test: PROCEDURE; a_name: STRING)
			-- Run a single test and update counters.
		local
			l_retried: BOOLEAN
		do
			if not l_retried then
				a_test.call (Void)
				print ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			print ("  FAIL: " + a_name + "%N")
			failed := failed + 1
			l_retried := True
			retry
		end

end
