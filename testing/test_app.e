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
