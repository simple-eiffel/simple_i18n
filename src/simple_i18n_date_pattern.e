note
	description: "[
		Interpreter for CLDR date and time patterns (Unicode Technical Standard
		35, part 4), for the pattern letters the generated locale table uses:

			y      year; "yy" is the last two digits, "y" the full year,
			       three or more letters pad the full year to that width
			M      month: "M" number, "MM" two digits, "MMM" abbreviated name,
			       "MMMM" wide name (formatting form)
			d      day of the month: "d", "dd"
			H h K k  hour (0-23, 1-12, 0-11, 1-24): one or two letters
			m s    minute and second: one or two letters
			a      morning or afternoon marker (one to three letters)
			B      flexible day period (one to three letters), from the
			       locale's day period rules; the AM or PM marker when the
			       locale has none

		Text between single quotes is literal ("''" is one quote). Any other
		character that is not an ASCII letter is copied as is, so CLDR's
		spaces, narrow no-break spaces and bidirectional marks stay in place.
		Digits are Latin. Any other ASCII letter makes a pattern unsupported;
		the generator refuses such a pattern, so the table never holds one.
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_I18N_DATE_PATTERN

feature -- Status report

	is_supported_pattern (a_pattern: READABLE_STRING_GENERAL): BOOLEAN
			-- Can `a_pattern' be formatted by `formatted'?
		local
			i, l_count: INTEGER
			l_char: CHARACTER_32
			l_quoted: BOOLEAN
		do
			from
				Result := not a_pattern.is_empty
				i := 1
			until
				not Result or i > a_pattern.count
			loop
				l_char := a_pattern [i]
				if l_char = '%'' then
					l_quoted := not l_quoted
					i := i + 1
				elseif l_quoted or not is_ascii_letter (l_char) then
					i := i + 1
				else
					l_count := run_length (a_pattern, i)
					Result := is_supported_field (l_char, l_count)
					i := i + l_count
				end
			end
			Result := Result and not l_quoted
		end

	is_supported_field (a_letter: CHARACTER_32; a_count: INTEGER): BOOLEAN
			-- Is a run of `a_count' letters `a_letter' supported?
		do
			inspect a_letter
			when 'y' then
				Result := a_count >= 1 and a_count <= 4
			when 'M' then
				Result := a_count >= 1 and a_count <= 4
			when 'd', 'H', 'h', 'K', 'k', 'm', 's' then
				Result := a_count >= 1 and a_count <= 2
			when 'a', 'B' then
				Result := a_count >= 1 and a_count <= 3
			else
				Result := False
			end
		end

feature -- Formatting

	formatted (a_pattern: READABLE_STRING_GENERAL; a_year, a_month, a_day, a_hour, a_minute, a_second: INTEGER;
			a_data: SIMPLE_I18N_LOCALE_DATA): STRING_32
			-- The date and time given by the arguments, written in `a_pattern'
			-- with the names of `a_data'.
		require
			supported: is_supported_pattern (a_pattern)
			year_not_negative: a_year >= 0
			month_in_range: a_month >= 1 and a_month <= 12
			day_in_range: a_day >= 1 and a_day <= 31
			hour_in_range: a_hour >= 0 and a_hour <= 23
			minute_in_range: a_minute >= 0 and a_minute <= 59
			second_in_range: a_second >= 0 and a_second <= 60
		local
			i, l_count: INTEGER
			l_char: CHARACTER_32
			l_quoted: BOOLEAN
		do
			create Result.make (a_pattern.count + 16)
			from i := 1 until i > a_pattern.count loop
				l_char := a_pattern [i]
				if l_char = '%'' then
					if i < a_pattern.count and then a_pattern [i + 1] = '%'' then
						Result.append_character ('%'')
						i := i + 2
					else
						l_quoted := not l_quoted
						i := i + 1
					end
				elseif l_quoted or not is_ascii_letter (l_char) then
					Result.append_character (l_char)
					i := i + 1
				else
					l_count := run_length (a_pattern, i)
					Result.append (field (l_char, l_count, a_year, a_month, a_day, a_hour, a_minute, a_second, a_data))
					i := i + l_count
				end
			end
		ensure
			not_empty_unless_pattern_empty: not Result.is_empty or a_pattern.is_empty
		end

	joined (a_date_time_pattern, a_date, a_time: READABLE_STRING_GENERAL): STRING_32
			-- `a_date_time_pattern' with "{1}" replaced by `a_date' and "{0}"
			-- by `a_time', in one pass so neither text is searched again.
		require
			has_date_place: a_date_time_pattern.has_substring ("{1}")
			has_time_place: a_date_time_pattern.has_substring ("{0}")
		local
			i: INTEGER
		do
			create Result.make (a_date_time_pattern.count + a_date.count + a_time.count)
			from i := 1 until i > a_date_time_pattern.count loop
				if i + 2 <= a_date_time_pattern.count and then a_date_time_pattern [i] = '{'
					and then a_date_time_pattern [i + 2] = '}'
					and then (a_date_time_pattern [i + 1] = '0' or a_date_time_pattern [i + 1] = '1')
				then
					if a_date_time_pattern [i + 1] = '1' then
						Result.append_string_general (a_date)
					else
						Result.append_string_general (a_time)
					end
					i := i + 3
				else
					Result.append_character (a_date_time_pattern [i])
					i := i + 1
				end
			end
		end

feature {NONE} -- Implementation

	field (a_letter: CHARACTER_32; a_count, a_year, a_month, a_day, a_hour, a_minute, a_second: INTEGER;
			a_data: SIMPLE_I18N_LOCALE_DATA): STRING_32
			-- The text of one pattern field.
		require
			supported: is_supported_field (a_letter, a_count)
		do
			inspect a_letter
			when 'y' then
				if a_count = 2 then
					Result := padded (a_year \\ 100, 2)
				else
					Result := padded (a_year, a_count)
				end
			when 'M' then
				if a_count = 4 then
					Result := a_data.wide_month_names [a_month].twin
				elseif a_count = 3 then
					Result := a_data.abbreviated_month_names [a_month].twin
				else
					Result := padded (a_month, a_count)
				end
			when 'd' then
				Result := padded (a_day, a_count)
			when 'H' then
				Result := padded (a_hour, a_count)
			when 'k' then
				if a_hour = 0 then
					Result := padded (24, a_count)
				else
					Result := padded (a_hour, a_count)
				end
			when 'K' then
				Result := padded (a_hour \\ 12, a_count)
			when 'h' then
				if a_hour \\ 12 = 0 then
					Result := padded (12, a_count)
				else
					Result := padded (a_hour \\ 12, a_count)
				end
			when 'm' then
				Result := padded (a_minute, a_count)
			when 's' then
				Result := padded (a_second, a_count)
			when 'a' then
				Result := am_pm (a_hour, a_data)
			when 'B' then
				Result := day_period (a_hour, a_minute, a_second, a_data)
			else
				create Result.make_empty
			end
		end

	am_pm (a_hour: INTEGER; a_data: SIMPLE_I18N_LOCALE_DATA): STRING_32
			-- Morning or afternoon marker for `a_hour'.
		do
			if a_hour < 12 then
				Result := a_data.am_marker.twin
			else
				Result := a_data.pm_marker.twin
			end
		end

	day_period (a_hour, a_minute, a_second: INTEGER; a_data: SIMPLE_I18N_LOCALE_DATA): STRING_32
			-- Flexible day period of the given moment: an exact moment
			-- ("midnight") when the time is exactly on it, else the range
			-- holding it; the AM or PM marker if the locale has no periods.
		local
			l_minute: INTEGER
			l_found: detachable STRING_32
		do
			l_minute := a_hour * 60 + a_minute
			across a_data.day_periods as ic_period loop
				if l_found = Void and then ic_period.from_minute = ic_period.before_minute
					and then ic_period.from_minute = l_minute and then a_second = 0
				then
					l_found := ic_period.name
				end
			end
			across a_data.day_periods as ic_period loop
				if l_found = Void and then ic_period.from_minute /= ic_period.before_minute
					and then is_in_period (l_minute, ic_period.from_minute, ic_period.before_minute)
				then
					l_found := ic_period.name
				end
			end
			if attached l_found as al_found then
				Result := al_found.twin
			else
				Result := am_pm (a_hour, a_data)
			end
		end

	is_in_period (a_minute, a_from, a_before: INTEGER): BOOLEAN
			-- Is `a_minute' in the period from `a_from' up to `a_before',
			-- which may wrap past midnight?
		do
			if a_from < a_before then
				Result := a_from <= a_minute and a_minute < a_before
			else
				Result := a_minute >= a_from or a_minute < a_before
			end
		end

	padded (a_value, a_width: INTEGER): STRING_32
			-- `a_value' in Latin digits, zero padded to `a_width'.
		require
			not_negative: a_value >= 0
		do
			create Result.make_from_string_general (a_value.out)
			from until Result.count >= a_width loop
				Result.prepend_character ('0')
			end
		ensure
			wide_enough: Result.count >= a_width
		end

	run_length (a_pattern: READABLE_STRING_GENERAL; a_start: INTEGER): INTEGER
			-- Number of copies of the character at `a_start' from there on.
		require
			start_valid: a_start >= 1 and a_start <= a_pattern.count
		do
			from
				Result := 1
			until
				a_start + Result > a_pattern.count or else a_pattern [a_start + Result] /= a_pattern [a_start]
			loop
				Result := Result + 1
			end
		ensure
			at_least_one: Result >= 1
		end

	is_ascii_letter (a_char: CHARACTER_32): BOOLEAN
			-- Is `a_char' in "A".."Z" or "a".."z"?
		do
			Result := ('A' <= a_char and a_char <= 'Z') or ('a' <= a_char and a_char <= 'z')
		end

end
