note
	description: "[
		A CLDR number pattern (Unicode Technical Standard 35, part 3), read once
		and then used to write numbers.

		Supported: one or two subpatterns separated by ";" (positive, then
		negative); a number part made of "#", "0", "," and "."; a prefix and a
		suffix of literal text, where "¤" stands for the currency symbol, "-"
		for the locale's minus sign and "+" for its plus sign, and text between
		single quotes is literal ("''" is one quote). Without a negative
		subpattern a negative number is the minus sign followed by the positive
		form, as CLDR specifies.

		Grouping follows the pattern: the primary group is the digit count
		after the last ",", the secondary group the count between the last two
		(the primary again if there is one ","). The locale's minimum grouping
		digits decide whether a short number is grouped at all.

		Digits are always Latin (CLDR numbering system "latn"). Rounding is
		half away from zero. A value that rounds to zero is written without a
		minus sign.
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_I18N_NUMBER_PATTERN

create
	make,
	make_default

feature {NONE} -- Initialization

	make_default
			-- Create the CLDR root decimal pattern "#,##0.###".
		do
			make ("#,##0.###")
		ensure
			primary_three: primary_grouping = 3
		end

	make (a_pattern: READABLE_STRING_GENERAL)
			-- Read `a_pattern'.
		require
			valid_pattern: is_valid_pattern (a_pattern)
		local
			l_parts: like split_subpatterns
			l_number: STRING_32
		do
			create pattern.make_from_string_general (a_pattern)
			l_parts := split_subpatterns (pattern)
			positive_prefix := l_parts.positive.prefix_text
			positive_suffix := l_parts.positive.suffix_text
			l_number := l_parts.positive.number_text
			if attached l_parts.negative as al_negative then
				negative_prefix := al_negative.prefix_text
				negative_suffix := al_negative.suffix_text
				has_negative_subpattern := True
			else
				create negative_prefix.make_from_string ("-")
				negative_prefix.append (positive_prefix)
				negative_suffix := positive_suffix.twin
			end
			read_number_part (l_number)
		ensure
			pattern_set: pattern.same_string_general (a_pattern)
		end

feature -- Access

	pattern: STRING_32
			-- The pattern as given.

	positive_prefix, positive_suffix: STRING_32
			-- Affixes of a positive number, still in pattern syntax.

	negative_prefix, negative_suffix: STRING_32
			-- Affixes of a negative number, still in pattern syntax.

	has_negative_subpattern: BOOLEAN
			-- Did the pattern give its own negative subpattern?

	primary_grouping: INTEGER
			-- Size of the group nearest the decimal separator; 0 for none.

	secondary_grouping: INTEGER
			-- Size of every further group; 0 for none.

	minimum_integer_digits: INTEGER
			-- Count of "0" in the integer part.

	minimum_fraction_digits: INTEGER
			-- Count of "0" after the decimal point.

	maximum_fraction_digits: INTEGER
			-- Count of "0" and "#" after the decimal point.

feature -- Status report

	is_valid_pattern (a_pattern: READABLE_STRING_GENERAL): BOOLEAN
			-- Is `a_pattern' a number pattern this class can read?
		local
			l_text: STRING_32
			l_semicolons, i: INTEGER
			l_quoted: BOOLEAN
		do
			create l_text.make_from_string_general (a_pattern)
			from
				i := 1
				Result := not l_text.is_empty
			until
				not Result or i > l_text.count
			loop
				if l_text.item (i) = '%'' then
					l_quoted := not l_quoted
				elseif not l_quoted and l_text.item (i) = ';' then
					l_semicolons := l_semicolons + 1
				end
				i := i + 1
			end
			Result := Result and not l_quoted and l_semicolons <= 1
			if Result then
				Result := across split_raw (l_text) as ic_part all is_valid_subpattern (ic_part) end
			end
		end

feature -- Formatting

	formatted_real (a_value: REAL_64; a_fraction_digits: INTEGER; a_data: SIMPLE_I18N_LOCALE_DATA;
			a_currency_symbol: READABLE_STRING_32): STRING_32
			-- `a_value' with exactly `a_fraction_digits' fraction digits, in
			-- this pattern, with the symbols of `a_data' and `a_currency_symbol'
			-- for "¤".
		require
			digits_in_range: a_fraction_digits >= 0 and a_fraction_digits <= Maximum_fraction_digits_allowed
		local
			l_digits: TUPLE [integer_digits, fraction_digits: STRING_8]
			l_is_negative: BOOLEAN
		do
			if a_value.is_nan then
				Result := affixed (a_data.not_a_number, False, a_data, a_currency_symbol)
			elseif a_value.is_positive_infinity then
				Result := affixed (a_data.infinity, False, a_data, a_currency_symbol)
			elseif a_value.is_negative_infinity then
				Result := affixed (a_data.infinity, True, a_data, a_currency_symbol)
			else
				l_digits := rounded_digits (a_value.abs, a_fraction_digits)
				l_is_negative := a_value < 0 and then not is_all_zero (l_digits.integer_digits + l_digits.fraction_digits)
				Result := grouped (l_digits.integer_digits, a_data)
				if a_fraction_digits > 0 then
					Result.append (a_data.decimal_separator)
					Result.append_string_general (l_digits.fraction_digits)
				end
				Result := affixed (Result, l_is_negative, a_data, a_currency_symbol)
			end
		ensure
			not_empty: not Result.is_empty
		end

	formatted_integer (a_value: INTEGER_64; a_data: SIMPLE_I18N_LOCALE_DATA; a_currency_symbol: READABLE_STRING_32): STRING_32
			-- `a_value' with no fraction digits, in this pattern.
		local
			l_magnitude: NATURAL_64
		do
			if a_value < 0 then
				l_magnitude := (-(a_value + 1)).to_natural_64 + 1
			else
				l_magnitude := a_value.to_natural_64
			end
			Result := affixed (grouped (l_magnitude.out, a_data), a_value < 0, a_data, a_currency_symbol)
		ensure
			not_empty: not Result.is_empty
		end

feature -- Constants

	Maximum_fraction_digits_allowed: INTEGER = 9
			-- Most fraction digits `formatted_real' writes.

feature {NONE} -- Implementation: reading

	split_raw (a_text: STRING_32): ARRAYED_LIST [STRING_32]
			-- `a_text' cut at its unquoted ";".
		local
			i: INTEGER
			l_quoted: BOOLEAN
			l_current: STRING_32
		do
			create Result.make (2)
			create l_current.make_empty
			from i := 1 until i > a_text.count loop
				if a_text.item (i) = '%'' then
					l_quoted := not l_quoted
					l_current.append_character (a_text.item (i))
				elseif not l_quoted and a_text.item (i) = ';' then
					Result.extend (l_current)
					create l_current.make_empty
				else
					l_current.append_character (a_text.item (i))
				end
				i := i + 1
			end
			Result.extend (l_current)
		ensure
			at_least_one: Result.count >= 1
		end

	split_subpatterns (a_text: STRING_32): TUPLE [positive: like subpattern_parts; negative: detachable like subpattern_parts]
			-- The positive and, if given, negative subpatterns of `a_text'.
		require
			valid: is_valid_pattern (a_text)
		local
			l_raw: like split_raw
		do
			l_raw := split_raw (a_text)
			if l_raw.count = 2 then
				Result := [subpattern_parts (l_raw.first), subpattern_parts (l_raw.last)]
			else
				Result := [subpattern_parts (l_raw.first), Void]
			end
		end

	subpattern_parts (a_text: STRING_32): TUPLE [prefix_text, number_text, suffix_text: STRING_32]
			-- `a_text' cut into its prefix, number part and suffix.
		local
			i, l_stage: INTEGER
			l_quoted: BOOLEAN
			l_char: CHARACTER_32
			l_prefix, l_number, l_suffix: STRING_32
		do
			create l_prefix.make_empty
			create l_number.make_empty
			create l_suffix.make_empty
			from i := 1 until i > a_text.count loop
				l_char := a_text.item (i)
				if l_char = '%'' then
					l_quoted := not l_quoted
				end
				if not l_quoted and l_char /= '%'' and is_number_character (l_char) and l_stage < 2 then
					l_stage := 1
					l_number.append_character (l_char)
				elseif l_stage = 0 then
					l_prefix.append_character (l_char)
				else
					l_stage := 2
					l_suffix.append_character (l_char)
				end
				i := i + 1
			end
			Result := [l_prefix, l_number, l_suffix]
		end

	is_valid_subpattern (a_text: STRING_32): BOOLEAN
			-- Is `a_text' an affix, one number part, and an affix?
		local
			l_parts: like subpattern_parts
			l_number: STRING_32
			l_point: INTEGER
		do
			l_parts := subpattern_parts (a_text)
			l_number := l_parts.number_text
			Result := not l_number.is_empty and then (l_number.has ('0') or l_number.has ('#'))
			Result := Result and not has_unquoted_number_character (l_parts.suffix_text)
			Result := Result and not has_unquoted_character (l_parts.prefix_text, '%%')
				and not has_unquoted_character (l_parts.suffix_text, '%%')
			if Result then
				l_point := l_number.index_of ('.', 1)
				if l_point > 0 then
					Result := l_number.occurrences ('.') = 1
						and not l_number.substring (l_point + 1, l_number.count).has (',')
				end
				Result := Result and l_number.item (l_number.count) /= ','
			end
		end

	read_number_part (a_number: STRING_32)
			-- Set grouping and digit counts from the number part `a_number'.
		local
			l_integer, l_fraction: STRING_32
			l_point, l_last_comma, l_previous_comma: INTEGER
		do
			l_point := a_number.index_of ('.', 1)
			if l_point > 0 then
				l_integer := a_number.substring (1, l_point - 1)
				l_fraction := a_number.substring (l_point + 1, a_number.count)
			else
				l_integer := a_number
				create l_fraction.make_empty
			end
			minimum_integer_digits := l_integer.occurrences ('0')
			minimum_fraction_digits := l_fraction.occurrences ('0')
			maximum_fraction_digits := l_fraction.count
			l_last_comma := l_integer.last_index_of (',', l_integer.count)
			if l_last_comma > 0 then
				primary_grouping := l_integer.count - l_last_comma
				l_previous_comma := l_integer.last_index_of (',', l_last_comma - 1)
				if l_previous_comma > 0 then
					secondary_grouping := l_last_comma - l_previous_comma - 1
				else
					secondary_grouping := primary_grouping
				end
			end
		end

	is_number_character (a_char: CHARACTER_32): BOOLEAN
			-- Is `a_char' part of a number part?
		do
			Result := a_char = '#' or a_char = '0' or a_char = ',' or a_char = '.'
		end

	has_unquoted_number_character (a_text: STRING_32): BOOLEAN
			-- Does `a_text' hold a number character outside quotes?
		do
			Result := has_unquoted_character (a_text, '#') or has_unquoted_character (a_text, '0')
				or has_unquoted_character (a_text, ',') or has_unquoted_character (a_text, '.')
		end

	has_unquoted_character (a_text: STRING_32; a_char: CHARACTER_32): BOOLEAN
			-- Does `a_text' hold `a_char' outside quotes?
		local
			i: INTEGER
			l_quoted: BOOLEAN
		do
			from i := 1 until Result or i > a_text.count loop
				if a_text.item (i) = '%'' then
					l_quoted := not l_quoted
				elseif not l_quoted and a_text.item (i) = a_char then
					Result := True
				end
				i := i + 1
			end
		end

feature {NONE} -- Implementation: writing

	affixed (a_number: READABLE_STRING_32; a_is_negative: BOOLEAN; a_data: SIMPLE_I18N_LOCALE_DATA;
			a_currency_symbol: READABLE_STRING_32): STRING_32
			-- `a_number' between the affixes for its sign.
		do
			if a_is_negative then
				Result := expanded_affix (negative_prefix, a_data, a_currency_symbol)
				Result.append (a_number)
				Result.append (expanded_affix (negative_suffix, a_data, a_currency_symbol))
			else
				Result := expanded_affix (positive_prefix, a_data, a_currency_symbol)
				Result.append (a_number)
				Result.append (expanded_affix (positive_suffix, a_data, a_currency_symbol))
			end
		end

	expanded_affix (a_affix: STRING_32; a_data: SIMPLE_I18N_LOCALE_DATA; a_currency_symbol: READABLE_STRING_32): STRING_32
			-- `a_affix' with its symbols replaced and its quotes removed.
		local
			i: INTEGER
			l_quoted: BOOLEAN
			l_char: CHARACTER_32
		do
			create Result.make (a_affix.count + 4)
			from i := 1 until i > a_affix.count loop
				l_char := a_affix.item (i)
				if l_char = '%'' then
					if i < a_affix.count and then a_affix.item (i + 1) = '%'' then
						Result.append_character ('%'')
						i := i + 1
					else
						l_quoted := not l_quoted
					end
				elseif l_quoted then
					Result.append_character (l_char)
				elseif l_char = Currency_sign then
					Result.append (a_currency_symbol)
				elseif l_char = '-' then
					Result.append (a_data.minus_sign)
				elseif l_char = '+' then
					Result.append (a_data.plus_sign)
				else
					Result.append_character (l_char)
				end
				i := i + 1
			end
		end

	grouped (a_digits: READABLE_STRING_8; a_data: SIMPLE_I18N_LOCALE_DATA): STRING_32
			-- `a_digits' padded to `minimum_integer_digits' and grouped.
		require
			digits_only: across a_digits as ic_char all ic_char.is_digit end
		local
			l_digits: STRING_8
			l_position, l_group: INTEGER
		do
			create l_digits.make_from_string (a_digits)
			from until l_digits.count >= minimum_integer_digits loop
				l_digits.prepend_character ('0')
			end
			if primary_grouping > 0 and then l_digits.count >= primary_grouping + a_data.minimum_grouping_digits then
				create Result.make (l_digits.count + l_digits.count // 2)
				from
					l_position := l_digits.count
					l_group := primary_grouping
				until
					l_position < 1
				loop
					if l_position > l_group then
						Result.prepend_string_general (l_digits.substring (l_position - l_group + 1, l_position))
						Result.prepend (a_data.group_separator)
						l_position := l_position - l_group
						l_group := secondary_grouping
					else
						Result.prepend_string_general (l_digits.substring (1, l_position))
						l_position := 0
					end
				end
			else
				create Result.make_from_string_general (l_digits)
			end
		end

	rounded_digits (a_magnitude: REAL_64; a_fraction_digits: INTEGER): TUPLE [integer_digits, fraction_digits: STRING_8]
			-- Decimal digits of `a_magnitude' rounded half up to
			-- `a_fraction_digits' fraction digits.
		require
			not_negative: a_magnitude >= 0
			finite: not a_magnitude.is_nan and not a_magnitude.is_positive_infinity
			digits_in_range: a_fraction_digits >= 0 and a_fraction_digits <= Maximum_fraction_digits_allowed
		local
			l_scale: INTEGER_64
			l_whole, l_fraction: INTEGER_64
			l_fraction_text: STRING_8
			i: INTEGER
		do
			l_scale := 1
			from i := 1 until i > a_fraction_digits loop
				l_scale := l_scale * 10
				i := i + 1
			end
			if a_magnitude < Exact_integer_limit then
				l_whole := a_magnitude.truncated_to_integer_64
				l_fraction := ((a_magnitude - l_whole.to_double) * l_scale.to_double + 0.5).truncated_to_integer_64
				if l_fraction >= l_scale then
					l_whole := l_whole + 1
					l_fraction := l_fraction - l_scale
				end
				l_fraction_text := l_fraction.out
				from until l_fraction_text.count >= a_fraction_digits loop
					l_fraction_text.prepend_character ('0')
				end
				if a_fraction_digits = 0 then
					l_fraction_text.wipe_out
				end
				Result := [l_whole.out, l_fraction_text]
			else
				create l_fraction_text.make_filled ('0', a_fraction_digits)
				Result := [large_integer_digits (a_magnitude), l_fraction_text]
			end
		ensure
			fraction_count: Result.fraction_digits.count = a_fraction_digits
			integer_not_empty: not Result.integer_digits.is_empty
		end

	large_integer_digits (a_magnitude: REAL_64): STRING_8
			-- Digits of the whole number `a_magnitude', too large for
			-- INTEGER_64 arithmetic to be exact; digits past the precision of
			-- REAL_64 are as REAL_64 gives them.
		require
			large: a_magnitude >= Exact_integer_limit
		local
			l_rest, l_tenth: REAL_64
			l_digit: INTEGER
		do
			create Result.make (24)
			from
				l_rest := a_magnitude.floor_real_64
			until
				l_rest < 1.0
			loop
				l_tenth := (l_rest / 10.0).floor_real_64
				l_digit := (l_rest - l_tenth * 10.0).rounded
				l_digit := l_digit.max (0).min (9)
				Result.prepend_character (('0').plus (l_digit))
				l_rest := l_tenth
			end
		ensure
			not_empty: not Result.is_empty
		end

	is_all_zero (a_digits: READABLE_STRING_8): BOOLEAN
			-- Are all of `a_digits' zero?
		do
			Result := across a_digits as ic_char all ic_char = '0' end
		end

	Exact_integer_limit: REAL_64 = 9.0e15
			-- Below this every whole REAL_64 is exact in INTEGER_64.

	Currency_sign: CHARACTER_32 = '%/164/'
			-- The pattern character "¤" (U+00A4).

invariant
	pattern_not_empty: not pattern.is_empty
	grouping_not_negative: primary_grouping >= 0 and secondary_grouping >= 0
	fraction_bounds: 0 <= minimum_fraction_digits and minimum_fraction_digits <= maximum_fraction_digits

end
