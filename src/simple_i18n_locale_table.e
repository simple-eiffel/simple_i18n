note
	description: "Bootstrap table, replaced by tools/cldr_generator output."

class
	SIMPLE_I18N_LOCALE_TABLE

feature -- Access

	Cldr_version: STRING = "none"

	locale_names: ARRAY [STRING_8]
		once
			Result := << "en_US" >>
			Result.compare_objects
		end

	locales: HASH_TABLE [SIMPLE_I18N_LOCALE_DATA, STRING_8]
		once
			create Result.make (1)
			Result.put (create {SIMPLE_I18N_LOCALE_DATA}.make ("en_US", "en"), "en_US")
		end

	language_defaults: HASH_TABLE [STRING_8, STRING_8]
		once
			create Result.make (1)
			Result.put ("en_US", "en")
		end

end
