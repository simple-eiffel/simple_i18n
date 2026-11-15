note
	description: "[
		Finds the locale data for a locale code, and asks the operating system
		for the user's locale name.

		A code may be written "fr_FR", "fr-FR", "fr_FR.UTF-8", "fr_FR@euro",
		"zh-Hant-TW" or "zh_Hant": case, separators, the encoding and the
		modifier do not matter. A code with a region must name a locale of the
		table; a bare language ("fr") or language and script ("zh_Hant") is
		the locale CLDR makes its default content ("fr" is fr_FR). The old
		codes "iw" (Hebrew) and "no" (Norwegian) are read as "he" and "nb".

		Any other code is unknown: SIMPLE_I18N then formats in en_US and says
		so through `is_fallback_locale'.

		The operating system supplies only the name: on Windows the user's
		locale (GetUserDefaultLCID, through ISE's NLS host locale); elsewhere
		the first set of LC_ALL, LC_NUMERIC and LANG. The process's C locale is
		never changed (no setlocale).
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_I18N_LOCALES

feature -- Access

	table: SIMPLE_I18N_LOCALE_TABLE
			-- The generated CLDR locale table.
		once
			create Result
		end

	Fallback_locale_name: STRING = "en_US"
			-- Locale used for a code the table does not know.

	locale_names: ARRAY [STRING_8]
			-- Names of every locale of the table, sorted.
		do
			Result := table.locale_names
		ensure
			has_fallback: Result.has (Fallback_locale_name)
		end

	data (a_name: STRING_8): SIMPLE_I18N_LOCALE_DATA
			-- The data of the table locale `a_name'.
		require
			known: table.locales.has (a_name)
		do
			check attached table.locales.item (a_name) as al_data then
				Result := al_data
			end
		ensure
			named: Result.name.same_string (a_name)
		end

	table_name (a_code: READABLE_STRING_GENERAL): detachable STRING_8
			-- Table locale for `a_code', or Void if the table has none for its language.
			-- Language first (Larry, 2026-11-14), along CLDR's parent chain: the locale itself
			-- when the table lists it; else its CLDR parent in the table (en_IE to en_001,
			-- es_AR to es_419, pt_AO to pt_PT); else the language's (and script's) default
			-- locale, so de_AT formats as de_DE and fr_BE as fr_FR.
		local
			l_parts: like code_parts
		do
			l_parts := code_parts (a_code)
			if not l_parts.region.is_empty and then table.locales.has (l_parts.language + "_" + l_parts.region) then
				Result := l_parts.language + "_" + l_parts.region
			elseif not l_parts.region.is_empty and then attached table.parent_locales.item (l_parts.language + "_" + l_parts.region) as al_parent then
				Result := al_parent
			elseif not l_parts.script.is_empty and then attached table.language_defaults.item (l_parts.language + "_" + l_parts.script) as al_name then
				Result := al_name
			elseif not l_parts.language.is_empty then
				Result := table.language_defaults.item (l_parts.language)
			end
		ensure
			in_table: attached Result as al_name implies table.locales.has (al_name)
		end

	resolved_name (a_code: READABLE_STRING_GENERAL): STRING_8
			-- Table locale for `a_code': its own, or `Fallback_locale_name'.
		do
			if attached table_name (a_code) as al_name then
				Result := al_name
			else
				Result := Fallback_locale_name
			end
		ensure
			in_table: table.locales.has (Result)
			fallback_when_unknown: not is_known (a_code) implies Result.same_string (Fallback_locale_name)
		end

	is_known (a_code: READABLE_STRING_GENERAL): BOOLEAN
			-- Does the table have a locale for `a_code''s language?
		do
			Result := table_name (a_code) /= Void
		end

	region_currency (a_code: READABLE_STRING_GENERAL): detachable TUPLE [code: STRING_32; digits: INTEGER]
			-- The current currency of `a_code''s region and its digits; Void with no region,
			-- an area (419), or a region of several tenders.
		local
			l_region: STRING_8
		do
			l_region := code_parts (a_code).region
			if l_region.count = 2 then
				Result := table.region_currencies.item (l_region)
			end
		end

	is_listed (a_code: READABLE_STRING_GENERAL): BOOLEAN
			-- Is `a_code' itself one of the table's locales (a bare language counts as its
			-- default, CLDR's default content: "fr" is fr_FR)?
		local
			l_parts: like code_parts
		do
			l_parts := code_parts (a_code)
			if l_parts.region.is_empty then
				Result := is_known (a_code)
			else
				Result := table.locales.has (l_parts.language + "_" + l_parts.region)
			end
		ensure
			listed_is_known: Result implies is_known (a_code)
		end

	code_parts (a_code: READABLE_STRING_GENERAL): TUPLE [language, script, region: STRING_8]
			-- Language (lower case), script (title case) and region (upper
			-- case) of `a_code'; each empty when absent.
		local
			l_text: STRING_8
			l_index, l_position: INTEGER
			l_language, l_script, l_region: STRING_8
		do
			create l_text.make (a_code.count)
			across 1 |..| a_code.count as ic_index loop
				if a_code [ic_index].is_character_8 then
					l_text.append_character (a_code [ic_index].to_character_8)
				end
			end
			l_index := l_text.index_of ('@', 1)
			if l_index > 0 then
				l_text.keep_head (l_index - 1)
			end
			l_index := l_text.index_of ('.', 1)
			if l_index > 0 then
				l_text.keep_head (l_index - 1)
			end
			l_text.replace_substring_all ("-", "_")
			create l_language.make_empty
			create l_script.make_empty
			create l_region.make_empty
			across l_text.split ('_') as ic_part loop
				l_position := l_position + 1
				if l_position = 1 then
					l_language := ic_part.as_lower
				elseif ic_part.count = 4 and l_script.is_empty and l_region.is_empty and is_letters (ic_part) then
					l_script := ic_part.as_lower
					l_script.put (l_script [1].as_upper, 1)
				elseif l_region.is_empty and ((ic_part.count = 2 and is_letters (ic_part))
					or (ic_part.count = 3 and ic_part.is_natural))
				then
					l_region := ic_part.as_upper
				end
			end
			if l_language.same_string ("iw") then
				l_language := "he"
			elseif l_language.same_string ("no") then
				l_language := "nb"
			end
			Result := [l_language, l_script, l_region]
		end

feature -- Operating system

	system_locale_name: STRING_8
			-- The user's locale name as the operating system gives it, for
			-- example "en_US" or "fr_FR.UTF-8"; "C" when none is set.
		local
			l_id: I18N_LOCALE_ID
		do
			if {PLATFORM}.is_windows then
				l_id := (create {I18N_HOST_LOCALE_IMP}).default_locale_id
				Result := ascii_of (l_id.language)
				if not l_id.region.is_empty then
					Result.append_character ('_')
					Result.append (ascii_of (l_id.region))
				end
			else
				Result := environment_locale_name
			end
			if Result.is_empty then
				Result := "C"
			end
		ensure
			not_empty: not Result.is_empty
		end

feature {NONE} -- Implementation

	environment_locale_name: STRING_8
			-- First non-empty of LC_ALL, LC_NUMERIC and LANG, or empty.
		local
			l_environment: EXECUTION_ENVIRONMENT
		do
			create l_environment
			create Result.make_empty
			across << "LC_ALL", "LC_NUMERIC", "LANG" >> as ic_variable loop
				if Result.is_empty and then attached l_environment.item (ic_variable) as al_value then
					Result := ascii_of (al_value)
				end
			end
		end

	ascii_of (a_text: READABLE_STRING_GENERAL): STRING_8
			-- `a_text''s ASCII characters (a locale name is only ASCII; anything else is dropped).
		do
			create Result.make (a_text.count)
			across 1 |..| a_text.count as ic loop
				if a_text.code (ic) < 128 then
					Result.append_character (a_text [ic].to_character_8)
				end
			end
		ensure
			ascii: across Result as ic_char all ic_char.code < 128 end
		end

	is_letters (a_text: READABLE_STRING_8): BOOLEAN
			-- Is `a_text' made only of ASCII letters?
		do
			Result := across a_text as ic_char all ic_char.is_alpha end
		end

end
