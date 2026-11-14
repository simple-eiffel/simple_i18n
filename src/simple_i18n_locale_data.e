note
	description: "[
		The formatting data of one locale, taken from CLDR: number symbols,
		number and currency patterns, the locale's own currency, date and time
		patterns, month names and day periods.

		Instances are built only by SIMPLE_I18N_LOCALE_TABLE, which is generated
		from CLDR by tools/cldr_generator. Everything here is read-only to
		every other class.

		Patterns are kept in CLDR's own syntax (Unicode Technical Standard 35):
		number patterns are read by SIMPLE_I18N_NUMBER_PATTERN and date and
		time patterns by SIMPLE_I18N_DATE_PATTERN.
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_I18N_LOCALE_DATA

create {SIMPLE_I18N_LOCALE_TABLE}
	make

feature {NONE} -- Initialization

	make (a_name, a_source: STRING_8)
			-- Create the data of locale `a_name' (for example "fr_FR"), read
			-- from the CLDR locale `a_source' (for example "fr").
		require
			name_not_empty: not a_name.is_empty
			source_not_empty: not a_source.is_empty
		do
			name := a_name
			source := a_source
			create decimal_separator.make_from_string (".")
			create group_separator.make_from_string (",")
			create minus_sign.make_from_string ("-")
			create plus_sign.make_from_string ("+")
			create infinity.make_from_string ("∞")
			create not_a_number.make_from_string ("NaN")
			minimum_grouping_digits := 1
			create decimal_pattern.make_from_string ("#,##0.###")
			create currency_pattern.make_from_string ({STRING_32} "¤#,##0.00")
			create currency_code.make_from_string ("XXX")
			create currency_symbol.make_from_string ({STRING_32} "¤")
			currency_digits := 2
			create short_date_pattern.make_from_string ("y-MM-dd")
			create medium_date_pattern.make_from_string ("y-MM-dd")
			create long_date_pattern.make_from_string ("y-MM-dd")
			create short_time_pattern.make_from_string ("HH:mm")
			create medium_time_pattern.make_from_string ("HH:mm:ss")
			create date_time_pattern.make_from_string ("{1} {0}")
			create wide_month_names.make_filled (create {STRING_32}.make_empty, 1, 12)
			create abbreviated_month_names.make_filled (create {STRING_32}.make_empty, 1, 12)
			create am_marker.make_from_string ("AM")
			create pm_marker.make_from_string ("PM")
			create day_periods.make (0)
		ensure
			name_set: name = a_name
			source_set: source = a_source
		end

feature -- Identity

	name: STRING_8
			-- The locale's name in this library, for example "fr_FR".

	source: STRING_8
			-- The CLDR locale the data was read from, for example "fr".

feature -- Number symbols

	decimal_separator: STRING_32
			-- Separator between the integer and the fraction digits.

	group_separator: STRING_32
			-- Separator between digit groups (CLDR "group").

	minus_sign: STRING_32
			-- Sign of a negative number; may carry a bidirectional mark.

	plus_sign: STRING_32
			-- Sign of an explicitly positive number.

	infinity: STRING_32
			-- Text for an infinite value.

	not_a_number: STRING_32
			-- Text for a value that is not a number.

	minimum_grouping_digits: INTEGER
			-- CLDR "minimumGroupingDigits": digits needed above the first
			-- group before any group separator is written (2 means "1234"
			-- stays ungrouped but "12 345" is grouped).

feature -- Number patterns

	decimal_pattern: STRING_32
			-- CLDR standard decimal pattern, Latin digits ("latn").

	currency_pattern: STRING_32
			-- CLDR standard currency pattern, Latin digits ("latn").

feature -- Currency

	currency_code: STRING_32
			-- ISO 4217 code of the locale's own currency, for example "EUR".

	currency_symbol: STRING_32
			-- The locale's symbol for `currency_code', for example "€".

	currency_digits: INTEGER
			-- Fraction digits of `currency_code' (CLDR supplemental currency data).

feature -- Date and time patterns

	short_date_pattern: STRING_32
			-- CLDR short date pattern, for example "M/d/yy".

	medium_date_pattern: STRING_32
			-- CLDR medium date pattern, for example "MMM d, y".

	long_date_pattern: STRING_32
			-- CLDR long date pattern, for example "MMMM d, y".

	short_time_pattern: STRING_32
			-- CLDR short time pattern, for example "h:mm a".

	medium_time_pattern: STRING_32
			-- CLDR medium time pattern, for example "h:mm:ss a".

	date_time_pattern: STRING_32
			-- CLDR pattern joining a date ("{1}") and a time ("{0}").

feature -- Names

	wide_month_names: ARRAY [STRING_32]
			-- Month names in their formatting form, January first ("MMMM").

	abbreviated_month_names: ARRAY [STRING_32]
			-- Abbreviated month names in their formatting form ("MMM").

	am_marker: STRING_32
			-- Abbreviated morning marker ("a" before noon).

	pm_marker: STRING_32
			-- Abbreviated afternoon marker ("a" from noon on).

	day_periods: ARRAYED_LIST [TUPLE [from_minute, before_minute: INTEGER; name: STRING_32]]
			-- Flexible day periods for the pattern letter "B", from CLDR's day
			-- period rules: minutes since midnight. A period with
			-- `from_minute' = `before_minute' is an exact moment ("midnight").

	has_day_periods: BOOLEAN
			-- Does the locale define flexible day periods?
		do
			Result := not day_periods.is_empty
		ensure
			definition: Result = not day_periods.is_empty
		end

feature {SIMPLE_I18N_LOCALE_TABLE} -- Building

	set_number_symbols (a_decimal, a_group, a_minus, a_plus, a_infinity, a_not_a_number: STRING_32;
			a_minimum_grouping_digits: INTEGER)
			-- Set the number symbols.
		require
			decimal_not_empty: not a_decimal.is_empty
			minus_not_empty: not a_minus.is_empty
			plus_not_empty: not a_plus.is_empty
			infinity_not_empty: not a_infinity.is_empty
			not_a_number_not_empty: not a_not_a_number.is_empty
			minimum_grouping_positive: a_minimum_grouping_digits >= 1
		do
			decimal_separator := a_decimal
			group_separator := a_group
			minus_sign := a_minus
			plus_sign := a_plus
			infinity := a_infinity
			not_a_number := a_not_a_number
			minimum_grouping_digits := a_minimum_grouping_digits
		ensure
			decimal_set: decimal_separator = a_decimal
			group_set: group_separator = a_group
			minus_set: minus_sign = a_minus
			plus_set: plus_sign = a_plus
			infinity_set: infinity = a_infinity
			not_a_number_set: not_a_number = a_not_a_number
			minimum_grouping_set: minimum_grouping_digits = a_minimum_grouping_digits
		end

	set_number_patterns (a_decimal_pattern, a_currency_pattern: STRING_32)
			-- Set the decimal and currency patterns.
		require
			decimal_pattern_valid: (create {SIMPLE_I18N_NUMBER_PATTERN}.make_default).is_valid_pattern (a_decimal_pattern)
			currency_pattern_valid: (create {SIMPLE_I18N_NUMBER_PATTERN}.make_default).is_valid_pattern (a_currency_pattern)
		do
			decimal_pattern := a_decimal_pattern
			currency_pattern := a_currency_pattern
		ensure
			decimal_pattern_set: decimal_pattern = a_decimal_pattern
			currency_pattern_set: currency_pattern = a_currency_pattern
		end

	set_currency (a_code, a_symbol: STRING_32; a_digits: INTEGER)
			-- Set the locale's own currency.
		require
			code_is_three_letters: a_code.count = 3
			symbol_not_empty: not a_symbol.is_empty
			digits_in_range: a_digits >= 0 and a_digits <= 4
		do
			currency_code := a_code
			currency_symbol := a_symbol
			currency_digits := a_digits
		ensure
			code_set: currency_code = a_code
			symbol_set: currency_symbol = a_symbol
			digits_set: currency_digits = a_digits
		end

	set_date_patterns (a_short, a_medium, a_long: STRING_32)
			-- Set the date patterns.
		require
			short_supported: date_patterns.is_supported_pattern (a_short)
			medium_supported: date_patterns.is_supported_pattern (a_medium)
			long_supported: date_patterns.is_supported_pattern (a_long)
		do
			short_date_pattern := a_short
			medium_date_pattern := a_medium
			long_date_pattern := a_long
		ensure
			short_set: short_date_pattern = a_short
			medium_set: medium_date_pattern = a_medium
			long_set: long_date_pattern = a_long
		end

	set_time_patterns (a_short, a_medium, a_date_time: STRING_32)
			-- Set the time patterns and the pattern joining a date and a time.
		require
			short_supported: date_patterns.is_supported_pattern (a_short)
			medium_supported: date_patterns.is_supported_pattern (a_medium)
			joins_date_and_time: a_date_time.has_substring ("{0}") and a_date_time.has_substring ("{1}")
			no_quoted_text: not a_date_time.has ('%'')
		do
			short_time_pattern := a_short
			medium_time_pattern := a_medium
			date_time_pattern := a_date_time
		ensure
			short_set: short_time_pattern = a_short
			medium_set: medium_time_pattern = a_medium
			date_time_set: date_time_pattern = a_date_time
		end

	set_month_names (a_wide, a_abbreviated: ARRAY [STRING_32])
			-- Set the month names, January first.
		require
			twelve_wide: a_wide.count = 12
			twelve_abbreviated: a_abbreviated.count = 12
			wide_not_empty: across a_wide as ic_name all not ic_name.is_empty end
			abbreviated_not_empty: across a_abbreviated as ic_name all not ic_name.is_empty end
		do
			wide_month_names := a_wide.twin
			wide_month_names.rebase (1)
			abbreviated_month_names := a_abbreviated.twin
			abbreviated_month_names.rebase (1)
		ensure
			wide_from_one: wide_month_names.lower = 1 and wide_month_names.upper = 12
			abbreviated_from_one: abbreviated_month_names.lower = 1 and abbreviated_month_names.upper = 12
		end

	set_am_pm (a_am, a_pm: STRING_32)
			-- Set the morning and afternoon markers.
		require
			am_not_empty: not a_am.is_empty
			pm_not_empty: not a_pm.is_empty
		do
			am_marker := a_am
			pm_marker := a_pm
		ensure
			am_set: am_marker = a_am
			pm_set: pm_marker = a_pm
		end

	add_day_period (a_from_minute, a_before_minute: INTEGER; a_name: STRING_32)
			-- Add a flexible day period from `a_from_minute' up to, not
			-- including, `a_before_minute' (minutes since midnight). Equal
			-- bounds mean the exact moment `a_from_minute'.
		require
			from_in_day: a_from_minute >= 0 and a_from_minute < 1440
			before_in_day: a_before_minute >= 0 and a_before_minute <= 1440
			name_not_empty: not a_name.is_empty
		do
			day_periods.extend ([a_from_minute, a_before_minute, a_name])
		ensure
			one_more: day_periods.count = old day_periods.count + 1
		end

feature {SIMPLE_I18N_LOCALE_TABLE} -- Checking

	date_patterns: SIMPLE_I18N_DATE_PATTERN
			-- Interpreter used to check date and time patterns.
		once
			create Result
		end

invariant
	name_not_empty: not name.is_empty
	source_not_empty: not source.is_empty
	decimal_separator_not_empty: not decimal_separator.is_empty
	minus_sign_not_empty: not minus_sign.is_empty
	minimum_grouping_positive: minimum_grouping_digits >= 1
	currency_digits_in_range: currency_digits >= 0 and currency_digits <= 4
	twelve_wide_months: wide_month_names.count = 12
	twelve_abbreviated_months: abbreviated_month_names.count = 12

note
	copyright: "Copyright (c) 2024-2026, Larry Rix"
	license: "MIT License"

end
