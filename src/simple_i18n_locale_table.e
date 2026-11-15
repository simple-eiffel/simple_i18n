note
	description: "[
		Locale formatting data for SIMPLE_I18N, generated from CLDR 48.2.0
		(the Unicode Common Locale Data Repository) by tools/cldr_generator.
		Do not edit by hand: change the generator and run it again (see README).

		Numbers use CLDR's "latn" numbering system. Currency is each locale's
		own current currency in CLDR's standard currency format. Patterns are
		CLDR's own; the bidirectional marks of the Hebrew and Arabic data are kept
		as CLDR has them. Every character outside ASCII is written as a
		%/code/ escape (its Unicode code point), so the compiler reads the
		same text whatever encoding it takes the file to be in.
	]"
	cldr_version: "48.2.0"
	cldr_license: "Unicode License v3 (SPDX-License-Identifier: Unicode-3.0), Copyright (c) 2004-2026 Unicode, Inc.; full text in LICENSE-CLDR.txt"
	generated_by: "tools/cldr_generator"

class
	SIMPLE_I18N_LOCALE_TABLE

feature -- Access

	Cldr_version: STRING = "48.2.0"
			-- CLDR release the data comes from.

	locale_names: ARRAY [STRING_8]
			-- Names of the table's locales, sorted.
		once
			Result := << "ar_SA", "cs_CZ", "da_DK", "de_CH", "de_DE", "el_GR", "en_AU", "en_CA", "en_GB", "en_US", "es_ES", "es_MX", "fi_FI", "fr_CA", "fr_FR", "he_IL", "it_IT", "ja_JP", "ko_KR", "nb_NO", "nl_NL", "pl_PL", "pt_BR", "pt_PT", "ru_RU", "sv_SE", "tr_TR", "uk_UA", "zh_CN", "zh_TW" >>
			Result.compare_objects
		ensure
			count: Result.count = 30
		end

	locales: HASH_TABLE [SIMPLE_I18N_LOCALE_DATA, STRING_8]
			-- Every locale's data, by name.
		once
			create Result.make (30)
			Result.put (locale_ar_sa, "ar_SA")
			Result.put (locale_cs_cz, "cs_CZ")
			Result.put (locale_da_dk, "da_DK")
			Result.put (locale_de_ch, "de_CH")
			Result.put (locale_de_de, "de_DE")
			Result.put (locale_el_gr, "el_GR")
			Result.put (locale_en_au, "en_AU")
			Result.put (locale_en_ca, "en_CA")
			Result.put (locale_en_gb, "en_GB")
			Result.put (locale_en_us, "en_US")
			Result.put (locale_es_es, "es_ES")
			Result.put (locale_es_mx, "es_MX")
			Result.put (locale_fi_fi, "fi_FI")
			Result.put (locale_fr_ca, "fr_CA")
			Result.put (locale_fr_fr, "fr_FR")
			Result.put (locale_he_il, "he_IL")
			Result.put (locale_it_it, "it_IT")
			Result.put (locale_ja_jp, "ja_JP")
			Result.put (locale_ko_kr, "ko_KR")
			Result.put (locale_nb_no, "nb_NO")
			Result.put (locale_nl_nl, "nl_NL")
			Result.put (locale_pl_pl, "pl_PL")
			Result.put (locale_pt_br, "pt_BR")
			Result.put (locale_pt_pt, "pt_PT")
			Result.put (locale_ru_ru, "ru_RU")
			Result.put (locale_sv_se, "sv_SE")
			Result.put (locale_tr_tr, "tr_TR")
			Result.put (locale_uk_ua, "uk_UA")
			Result.put (locale_zh_cn, "zh_CN")
			Result.put (locale_zh_tw, "zh_TW")
		ensure
			count: Result.count = 30
		end

	language_defaults: HASH_TABLE [STRING_8, STRING_8]
			-- Table locale for a bare language ("fr") or language and script
			-- ("zh_Hant"), from CLDR's default content.
		once
			create Result.make (32)
			Result.put ("cs_CZ", "cs")
			Result.put ("da_DK", "da")
			Result.put ("de_DE", "de")
			Result.put ("el_GR", "el")
			Result.put ("en_US", "en")
			Result.put ("es_ES", "es")
			Result.put ("fi_FI", "fi")
			Result.put ("fr_FR", "fr")
			Result.put ("he_IL", "he")
			Result.put ("it_IT", "it")
			Result.put ("ja_JP", "ja")
			Result.put ("ko_KR", "ko")
			Result.put ("nb_NO", "nb")
			Result.put ("nl_NL", "nl")
			Result.put ("pl_PL", "pl")
			Result.put ("pt_BR", "pt")
			Result.put ("ru_RU", "ru")
			Result.put ("sv_SE", "sv")
			Result.put ("tr_TR", "tr")
			Result.put ("uk_UA", "uk")
			Result.put ("zh_CN", "zh")
			Result.put ("zh_CN", "zh_Hans")
			Result.put ("zh_TW", "zh_Hant")
			Result.put ("zh_TW", "zh_Hant")
		end

feature {NONE} -- Locales

	locale_ar_sa: SIMPLE_I18N_LOCALE_DATA
			-- ar_SA, from CLDR locale "ar-SA".
		do
			create Result.make ("ar_SA", "ar-SA")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "%/8206/-", {STRING_32} "%/8206/+",
				{STRING_32} "%/8734/", {STRING_32} "%/1604/%/1610/%/1587/%/160/%/1585/%/1602/%/1605/%/1611/%/1575/", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/8207/#,##0.00%/160/%/164/;%/8207/-#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "SAR", {STRING_32} "%/1585/.%/1587/.%/8207/", 2)
			Result.set_date_patterns ({STRING_32} "d%/8207//M%/8207//y",
				{STRING_32} "dd%/8207//MM%/8207//y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "h:mm a", {STRING_32} "h:mm:ss a", {STRING_32} "{1}%/1548/ {0}")
			Result.set_month_names (
				<<{STRING_32} "%/1610/%/1606/%/1575/%/1610/%/1585/", {STRING_32} "%/1601/%/1576/%/1585/%/1575/%/1610/%/1585/", {STRING_32} "%/1605/%/1575/%/1585/%/1587/", {STRING_32} "%/1571/%/1576/%/1585/%/1610/%/1604/", {STRING_32} "%/1605/%/1575/%/1610/%/1608/", {STRING_32} "%/1610/%/1608/%/1606/%/1610/%/1608/", {STRING_32} "%/1610/%/1608/%/1604/%/1610/%/1608/", {STRING_32} "%/1571/%/1594/%/1587/%/1591/%/1587/", {STRING_32} "%/1587/%/1576/%/1578/%/1605/%/1576/%/1585/", {STRING_32} "%/1571/%/1603/%/1578/%/1608/%/1576/%/1585/", {STRING_32} "%/1606/%/1608/%/1601/%/1605/%/1576/%/1585/", {STRING_32} "%/1583/%/1610/%/1587/%/1605/%/1576/%/1585/">>,
				<<{STRING_32} "%/1610/%/1606/%/1575/%/1610/%/1585/", {STRING_32} "%/1601/%/1576/%/1585/%/1575/%/1610/%/1585/", {STRING_32} "%/1605/%/1575/%/1585/%/1587/", {STRING_32} "%/1571/%/1576/%/1585/%/1610/%/1604/", {STRING_32} "%/1605/%/1575/%/1610/%/1608/", {STRING_32} "%/1610/%/1608/%/1606/%/1610/%/1608/", {STRING_32} "%/1610/%/1608/%/1604/%/1610/%/1608/", {STRING_32} "%/1571/%/1594/%/1587/%/1591/%/1587/", {STRING_32} "%/1587/%/1576/%/1578/%/1605/%/1576/%/1585/", {STRING_32} "%/1571/%/1603/%/1578/%/1608/%/1576/%/1585/", {STRING_32} "%/1606/%/1608/%/1601/%/1605/%/1576/%/1585/", {STRING_32} "%/1583/%/1610/%/1587/%/1605/%/1576/%/1585/">>)
			Result.set_am_pm ({STRING_32} "%/1589/", {STRING_32} "%/1605/")
		end

	locale_cs_cz: SIMPLE_I18N_LOCALE_DATA
			-- cs_CZ, from CLDR locale "cs".
		do
			create Result.make ("cs_CZ", "cs")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "CZK", {STRING_32} "K%/269/", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "d. M. y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "H:mm", {STRING_32} "H:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "ledna", {STRING_32} "%/250/nora", {STRING_32} "b%/345/ezna", {STRING_32} "dubna", {STRING_32} "kv%/283/tna", {STRING_32} "%/269/ervna", {STRING_32} "%/269/ervence", {STRING_32} "srpna", {STRING_32} "z%/225/%/345/%/237/", {STRING_32} "%/345/%/237/jna", {STRING_32} "listopadu", {STRING_32} "prosince">>,
				<<{STRING_32} "led", {STRING_32} "%/250/no", {STRING_32} "b%/345/e", {STRING_32} "dub", {STRING_32} "kv%/283/", {STRING_32} "%/269/vn", {STRING_32} "%/269/vc", {STRING_32} "srp", {STRING_32} "z%/225/%/345/", {STRING_32} "%/345/%/237/j", {STRING_32} "lis", {STRING_32} "pro">>)
			Result.set_am_pm ({STRING_32} "dop.", {STRING_32} "odp.")
		end

	locale_da_dk: SIMPLE_I18N_LOCALE_DATA
			-- da_DK, from CLDR locale "da".
		do
			create Result.make ("da_DK", "da")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "DKK", {STRING_32} "kr.", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.y",
				{STRING_32} "d. MMM y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "HH.mm", {STRING_32} "HH.mm.ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "januar", {STRING_32} "februar", {STRING_32} "marts", {STRING_32} "april", {STRING_32} "maj", {STRING_32} "juni", {STRING_32} "juli", {STRING_32} "august", {STRING_32} "september", {STRING_32} "oktober", {STRING_32} "november", {STRING_32} "december">>,
				<<{STRING_32} "jan.", {STRING_32} "feb.", {STRING_32} "mar.", {STRING_32} "apr.", {STRING_32} "maj", {STRING_32} "jun.", {STRING_32} "jul.", {STRING_32} "aug.", {STRING_32} "sep.", {STRING_32} "okt.", {STRING_32} "nov.", {STRING_32} "dec.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_de_ch: SIMPLE_I18N_LOCALE_DATA
			-- de_CH, from CLDR locale "de-CH".
		do
			create Result.make ("de_CH", "de-CH")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} "'", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/%/160/#,##0.00;%/164/-#,##0.00")
			Result.set_currency ({STRING_32} "CHF", {STRING_32} "CHF", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "dd.MM.y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "Januar", {STRING_32} "Februar", {STRING_32} "M%/228/rz", {STRING_32} "April", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "August", {STRING_32} "September", {STRING_32} "Oktober", {STRING_32} "November", {STRING_32} "Dezember">>,
				<<{STRING_32} "Jan.", {STRING_32} "Feb.", {STRING_32} "M%/228/rz", {STRING_32} "Apr.", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "Aug.", {STRING_32} "Sept.", {STRING_32} "Okt.", {STRING_32} "Nov.", {STRING_32} "Dez.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_de_de: SIMPLE_I18N_LOCALE_DATA
			-- de_DE, from CLDR locale "de".
		do
			create Result.make ("de_DE", "de")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "dd.MM.y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "Januar", {STRING_32} "Februar", {STRING_32} "M%/228/rz", {STRING_32} "April", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "August", {STRING_32} "September", {STRING_32} "Oktober", {STRING_32} "November", {STRING_32} "Dezember">>,
				<<{STRING_32} "Jan.", {STRING_32} "Feb.", {STRING_32} "M%/228/rz", {STRING_32} "Apr.", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "Aug.", {STRING_32} "Sept.", {STRING_32} "Okt.", {STRING_32} "Nov.", {STRING_32} "Dez.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_el_gr: SIMPLE_I18N_LOCALE_DATA
			-- el_GR, from CLDR locale "el".
		do
			create Result.make ("el_GR", "el")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "d/M/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1} - {0}")
			Result.set_month_names (
				<<{STRING_32} "%/921/%/945/%/957/%/959/%/965/%/945/%/961/%/943/%/959/%/965/", {STRING_32} "%/934/%/949/%/946/%/961/%/959/%/965/%/945/%/961/%/943/%/959/%/965/", {STRING_32} "%/924/%/945/%/961/%/964/%/943/%/959/%/965/", {STRING_32} "%/913/%/960/%/961/%/953/%/955/%/943/%/959/%/965/", {STRING_32} "%/924/%/945/%/912/%/959/%/965/", {STRING_32} "%/921/%/959/%/965/%/957/%/943/%/959/%/965/", {STRING_32} "%/921/%/959/%/965/%/955/%/943/%/959/%/965/", {STRING_32} "%/913/%/965/%/947/%/959/%/973/%/963/%/964/%/959/%/965/", {STRING_32} "%/931/%/949/%/960/%/964/%/949/%/956/%/946/%/961/%/943/%/959/%/965/", {STRING_32} "%/927/%/954/%/964/%/969/%/946/%/961/%/943/%/959/%/965/", {STRING_32} "%/925/%/959/%/949/%/956/%/946/%/961/%/943/%/959/%/965/", {STRING_32} "%/916/%/949/%/954/%/949/%/956/%/946/%/961/%/943/%/959/%/965/">>,
				<<{STRING_32} "%/921/%/945/%/957/", {STRING_32} "%/934/%/949/%/946/", {STRING_32} "%/924/%/945/%/961/", {STRING_32} "%/913/%/960/%/961/", {STRING_32} "%/924/%/945/%/912/", {STRING_32} "%/921/%/959/%/965/%/957/", {STRING_32} "%/921/%/959/%/965/%/955/", {STRING_32} "%/913/%/965/%/947/", {STRING_32} "%/931/%/949/%/960/", {STRING_32} "%/927/%/954/%/964/", {STRING_32} "%/925/%/959/%/949/", {STRING_32} "%/916/%/949/%/954/">>)
			Result.set_am_pm ({STRING_32} "%/960/.%/956/.", {STRING_32} "%/956/.%/956/.")
		end

	locale_en_au: SIMPLE_I18N_LOCALE_DATA
			-- en_AU, from CLDR locale "en-AU".
		do
			create Result.make ("en_AU", "en-AU")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "AUD", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "d/M/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "January", {STRING_32} "February", {STRING_32} "March", {STRING_32} "April", {STRING_32} "May", {STRING_32} "June", {STRING_32} "July", {STRING_32} "August", {STRING_32} "September", {STRING_32} "October", {STRING_32} "November", {STRING_32} "December">>,
				<<{STRING_32} "Jan", {STRING_32} "Feb", {STRING_32} "Mar", {STRING_32} "Apr", {STRING_32} "May", {STRING_32} "June", {STRING_32} "July", {STRING_32} "Aug", {STRING_32} "Sept", {STRING_32} "Oct", {STRING_32} "Nov", {STRING_32} "Dec">>)
			Result.set_am_pm ({STRING_32} "am", {STRING_32} "pm")
		end

	locale_en_ca: SIMPLE_I18N_LOCALE_DATA
			-- en_CA, from CLDR locale "en-CA".
		do
			create Result.make ("en_CA", "en-CA")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "CAD", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "y-MM-dd",
				{STRING_32} "MMM d, y",
				{STRING_32} "MMMM d, y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "January", {STRING_32} "February", {STRING_32} "March", {STRING_32} "April", {STRING_32} "May", {STRING_32} "June", {STRING_32} "July", {STRING_32} "August", {STRING_32} "September", {STRING_32} "October", {STRING_32} "November", {STRING_32} "December">>,
				<<{STRING_32} "Jan", {STRING_32} "Feb", {STRING_32} "Mar", {STRING_32} "Apr", {STRING_32} "May", {STRING_32} "Jun", {STRING_32} "Jul", {STRING_32} "Aug", {STRING_32} "Sep", {STRING_32} "Oct", {STRING_32} "Nov", {STRING_32} "Dec">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_en_gb: SIMPLE_I18N_LOCALE_DATA
			-- en_GB, from CLDR locale "en-GB".
		do
			create Result.make ("en_GB", "en-GB")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "GBP", {STRING_32} "%/163/", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "January", {STRING_32} "February", {STRING_32} "March", {STRING_32} "April", {STRING_32} "May", {STRING_32} "June", {STRING_32} "July", {STRING_32} "August", {STRING_32} "September", {STRING_32} "October", {STRING_32} "November", {STRING_32} "December">>,
				<<{STRING_32} "Jan", {STRING_32} "Feb", {STRING_32} "Mar", {STRING_32} "Apr", {STRING_32} "May", {STRING_32} "Jun", {STRING_32} "Jul", {STRING_32} "Aug", {STRING_32} "Sept", {STRING_32} "Oct", {STRING_32} "Nov", {STRING_32} "Dec">>)
			Result.set_am_pm ({STRING_32} "am", {STRING_32} "pm")
		end

	locale_en_us: SIMPLE_I18N_LOCALE_DATA
			-- en_US, from CLDR locale "en".
		do
			create Result.make ("en_US", "en")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "USD", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "M/d/yy",
				{STRING_32} "MMM d, y",
				{STRING_32} "MMMM d, y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "January", {STRING_32} "February", {STRING_32} "March", {STRING_32} "April", {STRING_32} "May", {STRING_32} "June", {STRING_32} "July", {STRING_32} "August", {STRING_32} "September", {STRING_32} "October", {STRING_32} "November", {STRING_32} "December">>,
				<<{STRING_32} "Jan", {STRING_32} "Feb", {STRING_32} "Mar", {STRING_32} "Apr", {STRING_32} "May", {STRING_32} "Jun", {STRING_32} "Jul", {STRING_32} "Aug", {STRING_32} "Sep", {STRING_32} "Oct", {STRING_32} "Nov", {STRING_32} "Dec">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_es_es: SIMPLE_I18N_LOCALE_DATA
			-- es_ES, from CLDR locale "es".
		do
			create Result.make ("es_ES", "es")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "d/M/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d 'de' MMMM 'de' y")
			Result.set_time_patterns ({STRING_32} "H:mm", {STRING_32} "H:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "enero", {STRING_32} "febrero", {STRING_32} "marzo", {STRING_32} "abril", {STRING_32} "mayo", {STRING_32} "junio", {STRING_32} "julio", {STRING_32} "agosto", {STRING_32} "septiembre", {STRING_32} "octubre", {STRING_32} "noviembre", {STRING_32} "diciembre">>,
				<<{STRING_32} "ene", {STRING_32} "feb", {STRING_32} "mar", {STRING_32} "abr", {STRING_32} "may", {STRING_32} "jun", {STRING_32} "jul", {STRING_32} "ago", {STRING_32} "sept", {STRING_32} "oct", {STRING_32} "nov", {STRING_32} "dic">>)
			Result.set_am_pm ({STRING_32} "a.%/8239/m.", {STRING_32} "p.%/8239/m.")
		end

	locale_es_mx: SIMPLE_I18N_LOCALE_DATA
			-- es_MX, from CLDR locale "es-MX".
		do
			create Result.make ("es_MX", "es-MX")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "MXN", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d 'de' MMMM 'de' y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "enero", {STRING_32} "febrero", {STRING_32} "marzo", {STRING_32} "abril", {STRING_32} "mayo", {STRING_32} "junio", {STRING_32} "julio", {STRING_32} "agosto", {STRING_32} "septiembre", {STRING_32} "octubre", {STRING_32} "noviembre", {STRING_32} "diciembre">>,
				<<{STRING_32} "ene", {STRING_32} "feb", {STRING_32} "mar", {STRING_32} "abr", {STRING_32} "may", {STRING_32} "jun", {STRING_32} "jul", {STRING_32} "ago", {STRING_32} "sep", {STRING_32} "oct", {STRING_32} "nov", {STRING_32} "dic">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_fi_fi: SIMPLE_I18N_LOCALE_DATA
			-- fi_FI, from CLDR locale "fi".
		do
			create Result.make ("fi_FI", "fi")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "%/8722/", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "ep%/228/luku", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "d.M.y",
				{STRING_32} "d.M.y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "H.mm", {STRING_32} "H.mm.ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "tammikuuta", {STRING_32} "helmikuuta", {STRING_32} "maaliskuuta", {STRING_32} "huhtikuuta", {STRING_32} "toukokuuta", {STRING_32} "kes%/228/kuuta", {STRING_32} "hein%/228/kuuta", {STRING_32} "elokuuta", {STRING_32} "syyskuuta", {STRING_32} "lokakuuta", {STRING_32} "marraskuuta", {STRING_32} "joulukuuta">>,
				<<{STRING_32} "tammi", {STRING_32} "helmi", {STRING_32} "maalis", {STRING_32} "huhti", {STRING_32} "touko", {STRING_32} "kes%/228/", {STRING_32} "hein%/228/", {STRING_32} "elo", {STRING_32} "syys", {STRING_32} "loka", {STRING_32} "marras", {STRING_32} "joulu">>)
			Result.set_am_pm ({STRING_32} "ap.", {STRING_32} "ip.")
		end

	locale_fr_ca: SIMPLE_I18N_LOCALE_DATA
			-- fr_CA, from CLDR locale "fr-CA".
		do
			create Result.make ("fr_CA", "fr-CA")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "CAD", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "y-MM-dd",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH 'h' mm", {STRING_32} "HH 'h' mm 'min' ss 's'", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "janvier", {STRING_32} "f%/233/vrier", {STRING_32} "mars", {STRING_32} "avril", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juillet", {STRING_32} "ao%/251/t", {STRING_32} "septembre", {STRING_32} "octobre", {STRING_32} "novembre", {STRING_32} "d%/233/cembre">>,
				<<{STRING_32} "janv.", {STRING_32} "f%/233/vr.", {STRING_32} "mars", {STRING_32} "avr.", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juill.", {STRING_32} "ao%/251/t", {STRING_32} "sept.", {STRING_32} "oct.", {STRING_32} "nov.", {STRING_32} "d%/233/c.">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_fr_fr: SIMPLE_I18N_LOCALE_DATA
			-- fr_FR, from CLDR locale "fr".
		do
			create Result.make ("fr_FR", "fr")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/8239/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "janvier", {STRING_32} "f%/233/vrier", {STRING_32} "mars", {STRING_32} "avril", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juillet", {STRING_32} "ao%/251/t", {STRING_32} "septembre", {STRING_32} "octobre", {STRING_32} "novembre", {STRING_32} "d%/233/cembre">>,
				<<{STRING_32} "janv.", {STRING_32} "f%/233/vr.", {STRING_32} "mars", {STRING_32} "avr.", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juil.", {STRING_32} "ao%/251/t", {STRING_32} "sept.", {STRING_32} "oct.", {STRING_32} "nov.", {STRING_32} "d%/233/c.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_he_il: SIMPLE_I18N_LOCALE_DATA
			-- he_IL, from CLDR locale "he".
		do
			create Result.make ("he_IL", "he")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "%/8206/-", {STRING_32} "%/8206/+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/8207/#,##0.00%/160/%/8207/%/164/;%/8207/-#,##0.00%/160/%/8207/%/164/")
			Result.set_currency ({STRING_32} "ILS", {STRING_32} "%/8362/", 2)
			Result.set_date_patterns ({STRING_32} "d.M.y",
				{STRING_32} "d %/1489/MMM y",
				{STRING_32} "d %/1489/MMMM y")
			Result.set_time_patterns ({STRING_32} "H:mm", {STRING_32} "H:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "%/1497/%/1504/%/1493/%/1488/%/1512/", {STRING_32} "%/1508/%/1489/%/1512/%/1493/%/1488/%/1512/", {STRING_32} "%/1502/%/1512/%/1509/", {STRING_32} "%/1488/%/1508/%/1512/%/1497/%/1500/", {STRING_32} "%/1502/%/1488/%/1497/", {STRING_32} "%/1497/%/1493/%/1504/%/1497/", {STRING_32} "%/1497/%/1493/%/1500/%/1497/", {STRING_32} "%/1488/%/1493/%/1490/%/1493/%/1505/%/1496/", {STRING_32} "%/1505/%/1508/%/1496/%/1502/%/1489/%/1512/", {STRING_32} "%/1488/%/1493/%/1511/%/1496/%/1493/%/1489/%/1512/", {STRING_32} "%/1504/%/1493/%/1489/%/1502/%/1489/%/1512/", {STRING_32} "%/1491/%/1510/%/1502/%/1489/%/1512/">>,
				<<{STRING_32} "%/1497/%/1504/%/1493/%/1523/", {STRING_32} "%/1508/%/1489/%/1512/%/1523/", {STRING_32} "%/1502/%/1512/%/1509/", {STRING_32} "%/1488/%/1508/%/1512/%/1523/", {STRING_32} "%/1502/%/1488/%/1497/", {STRING_32} "%/1497/%/1493/%/1504/%/1497/", {STRING_32} "%/1497/%/1493/%/1500/%/1497/", {STRING_32} "%/1488/%/1493/%/1490/%/1523/", {STRING_32} "%/1505/%/1508/%/1496/%/1523/", {STRING_32} "%/1488/%/1493/%/1511/%/1523/", {STRING_32} "%/1504/%/1493/%/1489/%/1523/", {STRING_32} "%/1491/%/1510/%/1502/%/1523/">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_it_it: SIMPLE_I18N_LOCALE_DATA
			-- it_IT, from CLDR locale "it".
		do
			create Result.make ("it_IT", "it")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "gennaio", {STRING_32} "febbraio", {STRING_32} "marzo", {STRING_32} "aprile", {STRING_32} "maggio", {STRING_32} "giugno", {STRING_32} "luglio", {STRING_32} "agosto", {STRING_32} "settembre", {STRING_32} "ottobre", {STRING_32} "novembre", {STRING_32} "dicembre">>,
				<<{STRING_32} "gen", {STRING_32} "feb", {STRING_32} "mar", {STRING_32} "apr", {STRING_32} "mag", {STRING_32} "giu", {STRING_32} "lug", {STRING_32} "ago", {STRING_32} "set", {STRING_32} "ott", {STRING_32} "nov", {STRING_32} "dic">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_ja_jp: SIMPLE_I18N_LOCALE_DATA
			-- ja_JP, from CLDR locale "ja".
		do
			create Result.make ("ja_JP", "ja")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "JPY", {STRING_32} "%/65509/", 0)
			Result.set_date_patterns ({STRING_32} "y/MM/dd",
				{STRING_32} "y/MM/dd",
				{STRING_32} "y%/24180/M%/26376/d%/26085/")
			Result.set_time_patterns ({STRING_32} "H:mm", {STRING_32} "H:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "1%/26376/", {STRING_32} "2%/26376/", {STRING_32} "3%/26376/", {STRING_32} "4%/26376/", {STRING_32} "5%/26376/", {STRING_32} "6%/26376/", {STRING_32} "7%/26376/", {STRING_32} "8%/26376/", {STRING_32} "9%/26376/", {STRING_32} "10%/26376/", {STRING_32} "11%/26376/", {STRING_32} "12%/26376/">>,
				<<{STRING_32} "1%/26376/", {STRING_32} "2%/26376/", {STRING_32} "3%/26376/", {STRING_32} "4%/26376/", {STRING_32} "5%/26376/", {STRING_32} "6%/26376/", {STRING_32} "7%/26376/", {STRING_32} "8%/26376/", {STRING_32} "9%/26376/", {STRING_32} "10%/26376/", {STRING_32} "11%/26376/", {STRING_32} "12%/26376/">>)
			Result.set_am_pm ({STRING_32} "%/21320/%/21069/", {STRING_32} "%/21320/%/24460/")
		end

	locale_ko_kr: SIMPLE_I18N_LOCALE_DATA
			-- ko_KR, from CLDR locale "ko".
		do
			create Result.make ("ko_KR", "ko")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "KRW", {STRING_32} "%/8361/", 0)
			Result.set_date_patterns ({STRING_32} "yy. M. d.",
				{STRING_32} "y. M. d.",
				{STRING_32} "y%/45380/ MMMM d%/51068/")
			Result.set_time_patterns ({STRING_32} "a h:mm", {STRING_32} "a h:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "1%/50900/", {STRING_32} "2%/50900/", {STRING_32} "3%/50900/", {STRING_32} "4%/50900/", {STRING_32} "5%/50900/", {STRING_32} "6%/50900/", {STRING_32} "7%/50900/", {STRING_32} "8%/50900/", {STRING_32} "9%/50900/", {STRING_32} "10%/50900/", {STRING_32} "11%/50900/", {STRING_32} "12%/50900/">>,
				<<{STRING_32} "1%/50900/", {STRING_32} "2%/50900/", {STRING_32} "3%/50900/", {STRING_32} "4%/50900/", {STRING_32} "5%/50900/", {STRING_32} "6%/50900/", {STRING_32} "7%/50900/", {STRING_32} "8%/50900/", {STRING_32} "9%/50900/", {STRING_32} "10%/50900/", {STRING_32} "11%/50900/", {STRING_32} "12%/50900/">>)
			Result.set_am_pm ({STRING_32} "%/50724/%/51204/", {STRING_32} "%/50724/%/54980/")
		end

	locale_nb_no: SIMPLE_I18N_LOCALE_DATA
			-- nb_NO, from CLDR locale "nb".
		do
			create Result.make ("nb_NO", "nb")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "%/8722/", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/;-#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "NOK", {STRING_32} "kr", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.y",
				{STRING_32} "d. MMM y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "januar", {STRING_32} "februar", {STRING_32} "mars", {STRING_32} "april", {STRING_32} "mai", {STRING_32} "juni", {STRING_32} "juli", {STRING_32} "august", {STRING_32} "september", {STRING_32} "oktober", {STRING_32} "november", {STRING_32} "desember">>,
				<<{STRING_32} "jan.", {STRING_32} "feb.", {STRING_32} "mars", {STRING_32} "apr.", {STRING_32} "mai", {STRING_32} "juni", {STRING_32} "juli", {STRING_32} "aug.", {STRING_32} "sep.", {STRING_32} "okt.", {STRING_32} "nov.", {STRING_32} "des.">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_nl_nl: SIMPLE_I18N_LOCALE_DATA
			-- nl_NL, from CLDR locale "nl".
		do
			create Result.make ("nl_NL", "nl")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/%/160/#,##0.00;%/164/%/160/-#,##0.00")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "dd-MM-y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "januari", {STRING_32} "februari", {STRING_32} "maart", {STRING_32} "april", {STRING_32} "mei", {STRING_32} "juni", {STRING_32} "juli", {STRING_32} "augustus", {STRING_32} "september", {STRING_32} "oktober", {STRING_32} "november", {STRING_32} "december">>,
				<<{STRING_32} "jan", {STRING_32} "feb", {STRING_32} "mrt", {STRING_32} "apr", {STRING_32} "mei", {STRING_32} "jun", {STRING_32} "jul", {STRING_32} "aug", {STRING_32} "sep", {STRING_32} "okt", {STRING_32} "nov", {STRING_32} "dec">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_pl_pl: SIMPLE_I18N_LOCALE_DATA
			-- pl_PL, from CLDR locale "pl".
		do
			create Result.make ("pl_PL", "pl")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "PLN", {STRING_32} "z%/322/", 2)
			Result.set_date_patterns ({STRING_32} "d.MM.y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "stycznia", {STRING_32} "lutego", {STRING_32} "marca", {STRING_32} "kwietnia", {STRING_32} "maja", {STRING_32} "czerwca", {STRING_32} "lipca", {STRING_32} "sierpnia", {STRING_32} "wrze%/347/nia", {STRING_32} "pa%/378/dziernika", {STRING_32} "listopada", {STRING_32} "grudnia">>,
				<<{STRING_32} "sty", {STRING_32} "lut", {STRING_32} "mar", {STRING_32} "kwi", {STRING_32} "maj", {STRING_32} "cze", {STRING_32} "lip", {STRING_32} "sie", {STRING_32} "wrz", {STRING_32} "pa%/378/", {STRING_32} "lis", {STRING_32} "gru">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_pt_br: SIMPLE_I18N_LOCALE_DATA
			-- pt_BR, from CLDR locale "pt".
		do
			create Result.make ("pt_BR", "pt")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "BRL", {STRING_32} "R$", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/y",
				{STRING_32} "d 'de' MMM 'de' y",
				{STRING_32} "d 'de' MMMM 'de' y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "janeiro", {STRING_32} "fevereiro", {STRING_32} "mar%/231/o", {STRING_32} "abril", {STRING_32} "maio", {STRING_32} "junho", {STRING_32} "julho", {STRING_32} "agosto", {STRING_32} "setembro", {STRING_32} "outubro", {STRING_32} "novembro", {STRING_32} "dezembro">>,
				<<{STRING_32} "jan.", {STRING_32} "fev.", {STRING_32} "mar.", {STRING_32} "abr.", {STRING_32} "mai.", {STRING_32} "jun.", {STRING_32} "jul.", {STRING_32} "ago.", {STRING_32} "set.", {STRING_32} "out.", {STRING_32} "nov.", {STRING_32} "dez.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_pt_pt: SIMPLE_I18N_LOCALE_DATA
			-- pt_PT, from CLDR locale "pt-PT".
		do
			create Result.make ("pt_PT", "pt-PT")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/yy",
				{STRING_32} "dd/MM/y",
				{STRING_32} "d 'de' MMMM 'de' y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "janeiro", {STRING_32} "fevereiro", {STRING_32} "mar%/231/o", {STRING_32} "abril", {STRING_32} "maio", {STRING_32} "junho", {STRING_32} "julho", {STRING_32} "agosto", {STRING_32} "setembro", {STRING_32} "outubro", {STRING_32} "novembro", {STRING_32} "dezembro">>,
				<<{STRING_32} "jan.", {STRING_32} "fev.", {STRING_32} "mar.", {STRING_32} "abr.", {STRING_32} "mai.", {STRING_32} "jun.", {STRING_32} "jul.", {STRING_32} "ago.", {STRING_32} "set.", {STRING_32} "out.", {STRING_32} "nov.", {STRING_32} "dez.">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_ru_ru: SIMPLE_I18N_LOCALE_DATA
			-- ru_RU, from CLDR locale "ru".
		do
			create Result.make ("ru_RU", "ru")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "%/1085/%/1077/%/160/%/1095/%/1080/%/1089/%/1083/%/1086/", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "RUB", {STRING_32} "%/8381/", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.y",
				{STRING_32} "d MMM y%/8239/'%/1075/'.",
				{STRING_32} "d MMMM y%/8239/'%/1075/'.")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "%/1103/%/1085/%/1074/%/1072/%/1088/%/1103/", {STRING_32} "%/1092/%/1077/%/1074/%/1088/%/1072/%/1083/%/1103/", {STRING_32} "%/1084/%/1072/%/1088/%/1090/%/1072/", {STRING_32} "%/1072/%/1087/%/1088/%/1077/%/1083/%/1103/", {STRING_32} "%/1084/%/1072/%/1103/", {STRING_32} "%/1080/%/1102/%/1085/%/1103/", {STRING_32} "%/1080/%/1102/%/1083/%/1103/", {STRING_32} "%/1072/%/1074/%/1075/%/1091/%/1089/%/1090/%/1072/", {STRING_32} "%/1089/%/1077/%/1085/%/1090/%/1103/%/1073/%/1088/%/1103/", {STRING_32} "%/1086/%/1082/%/1090/%/1103/%/1073/%/1088/%/1103/", {STRING_32} "%/1085/%/1086/%/1103/%/1073/%/1088/%/1103/", {STRING_32} "%/1076/%/1077/%/1082/%/1072/%/1073/%/1088/%/1103/">>,
				<<{STRING_32} "%/1103/%/1085/%/1074/.", {STRING_32} "%/1092/%/1077/%/1074/%/1088/.", {STRING_32} "%/1084/%/1072/%/1088/.", {STRING_32} "%/1072/%/1087/%/1088/.", {STRING_32} "%/1084/%/1072/%/1103/", {STRING_32} "%/1080/%/1102/%/1085/.", {STRING_32} "%/1080/%/1102/%/1083/.", {STRING_32} "%/1072/%/1074/%/1075/.", {STRING_32} "%/1089/%/1077/%/1085/%/1090/.", {STRING_32} "%/1086/%/1082/%/1090/.", {STRING_32} "%/1085/%/1086/%/1103/%/1073/.", {STRING_32} "%/1076/%/1077/%/1082/.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_sv_se: SIMPLE_I18N_LOCALE_DATA
			-- sv_SE, from CLDR locale "sv".
		do
			create Result.make ("sv_SE", "sv")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "%/8722/", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "SEK", {STRING_32} "kr", 2)
			Result.set_date_patterns ({STRING_32} "y-MM-dd",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "januari", {STRING_32} "februari", {STRING_32} "mars", {STRING_32} "april", {STRING_32} "maj", {STRING_32} "juni", {STRING_32} "juli", {STRING_32} "augusti", {STRING_32} "september", {STRING_32} "oktober", {STRING_32} "november", {STRING_32} "december">>,
				<<{STRING_32} "jan.", {STRING_32} "feb.", {STRING_32} "mars", {STRING_32} "apr.", {STRING_32} "maj", {STRING_32} "juni", {STRING_32} "juli", {STRING_32} "aug.", {STRING_32} "sep.", {STRING_32} "okt.", {STRING_32} "nov.", {STRING_32} "dec.">>)
			Result.set_am_pm ({STRING_32} "fm", {STRING_32} "em")
		end

	locale_tr_tr: SIMPLE_I18N_LOCALE_DATA
			-- tr_TR, from CLDR locale "tr".
		do
			create Result.make ("tr_TR", "tr")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "TRY", {STRING_32} "%/8378/", 2)
			Result.set_date_patterns ({STRING_32} "d.MM.y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "Ocak", {STRING_32} "%/350/ubat", {STRING_32} "Mart", {STRING_32} "Nisan", {STRING_32} "May%/305/s", {STRING_32} "Haziran", {STRING_32} "Temmuz", {STRING_32} "A%/287/ustos", {STRING_32} "Eyl%/252/l", {STRING_32} "Ekim", {STRING_32} "Kas%/305/m", {STRING_32} "Aral%/305/k">>,
				<<{STRING_32} "Oca", {STRING_32} "%/350/ub", {STRING_32} "Mar", {STRING_32} "Nis", {STRING_32} "May", {STRING_32} "Haz", {STRING_32} "Tem", {STRING_32} "A%/287/u", {STRING_32} "Eyl", {STRING_32} "Eki", {STRING_32} "Kas", {STRING_32} "Ara">>)
			Result.set_am_pm ({STRING_32} "%/214/%/214/", {STRING_32} "%/214/S")
		end

	locale_uk_ua: SIMPLE_I18N_LOCALE_DATA
			-- uk_UA, from CLDR locale "uk".
		do
			create Result.make ("uk_UA", "uk")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "UAH", {STRING_32} "%/8372/", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "d MMM y%/8239/'%/1088/'.",
				{STRING_32} "d MMMM y%/8239/'%/1088/'.")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "%/1089/%/1110/%/1095/%/1085/%/1103/", {STRING_32} "%/1083/%/1102/%/1090/%/1086/%/1075/%/1086/", {STRING_32} "%/1073/%/1077/%/1088/%/1077/%/1079/%/1085/%/1103/", {STRING_32} "%/1082/%/1074/%/1110/%/1090/%/1085/%/1103/", {STRING_32} "%/1090/%/1088/%/1072/%/1074/%/1085/%/1103/", {STRING_32} "%/1095/%/1077/%/1088/%/1074/%/1085/%/1103/", {STRING_32} "%/1083/%/1080/%/1087/%/1085/%/1103/", {STRING_32} "%/1089/%/1077/%/1088/%/1087/%/1085/%/1103/", {STRING_32} "%/1074/%/1077/%/1088/%/1077/%/1089/%/1085/%/1103/", {STRING_32} "%/1078/%/1086/%/1074/%/1090/%/1085/%/1103/", {STRING_32} "%/1083/%/1080/%/1089/%/1090/%/1086/%/1087/%/1072/%/1076/%/1072/", {STRING_32} "%/1075/%/1088/%/1091/%/1076/%/1085/%/1103/">>,
				<<{STRING_32} "%/1089/%/1110/%/1095/.", {STRING_32} "%/1083/%/1102/%/1090/.", {STRING_32} "%/1073/%/1077/%/1088/.", {STRING_32} "%/1082/%/1074/%/1110/%/1090/.", {STRING_32} "%/1090/%/1088/%/1072/%/1074/.", {STRING_32} "%/1095/%/1077/%/1088/%/1074/.", {STRING_32} "%/1083/%/1080/%/1087/.", {STRING_32} "%/1089/%/1077/%/1088/%/1087/.", {STRING_32} "%/1074/%/1077/%/1088/.", {STRING_32} "%/1078/%/1086/%/1074/%/1090/.", {STRING_32} "%/1083/%/1080/%/1089/%/1090/.", {STRING_32} "%/1075/%/1088/%/1091/%/1076/.">>)
			Result.set_am_pm ({STRING_32} "%/1076/%/1087/", {STRING_32} "%/1087/%/1087/")
		end

	locale_zh_cn: SIMPLE_I18N_LOCALE_DATA
			-- zh_CN, from CLDR locale "zh".
		do
			create Result.make ("zh_CN", "zh")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "CNY", {STRING_32} "%/165/", 2)
			Result.set_date_patterns ({STRING_32} "y/M/d",
				{STRING_32} "y%/24180/M%/26376/d%/26085/",
				{STRING_32} "y%/24180/M%/26376/d%/26085/")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "%/19968/%/26376/", {STRING_32} "%/20108/%/26376/", {STRING_32} "%/19977/%/26376/", {STRING_32} "%/22235/%/26376/", {STRING_32} "%/20116/%/26376/", {STRING_32} "%/20845/%/26376/", {STRING_32} "%/19971/%/26376/", {STRING_32} "%/20843/%/26376/", {STRING_32} "%/20061/%/26376/", {STRING_32} "%/21313/%/26376/", {STRING_32} "%/21313/%/19968/%/26376/", {STRING_32} "%/21313/%/20108/%/26376/">>,
				<<{STRING_32} "1%/26376/", {STRING_32} "2%/26376/", {STRING_32} "3%/26376/", {STRING_32} "4%/26376/", {STRING_32} "5%/26376/", {STRING_32} "6%/26376/", {STRING_32} "7%/26376/", {STRING_32} "8%/26376/", {STRING_32} "9%/26376/", {STRING_32} "10%/26376/", {STRING_32} "11%/26376/", {STRING_32} "12%/26376/">>)
			Result.set_am_pm ({STRING_32} "%/19978/%/21320/", {STRING_32} "%/19979/%/21320/")
		end

	locale_zh_tw: SIMPLE_I18N_LOCALE_DATA
			-- zh_TW, from CLDR locale "zh-Hant".
		do
			create Result.make ("zh_TW", "zh-Hant")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "%/38750/%/25976/%/20540/", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_currency ({STRING_32} "TWD", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "y/M/d",
				{STRING_32} "y%/24180/M%/26376/d%/26085/",
				{STRING_32} "y%/24180/M%/26376/d%/26085/")
			Result.set_time_patterns ({STRING_32} "Bh:mm", {STRING_32} "Bh:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "1%/26376/", {STRING_32} "2%/26376/", {STRING_32} "3%/26376/", {STRING_32} "4%/26376/", {STRING_32} "5%/26376/", {STRING_32} "6%/26376/", {STRING_32} "7%/26376/", {STRING_32} "8%/26376/", {STRING_32} "9%/26376/", {STRING_32} "10%/26376/", {STRING_32} "11%/26376/", {STRING_32} "12%/26376/">>,
				<<{STRING_32} "1%/26376/", {STRING_32} "2%/26376/", {STRING_32} "3%/26376/", {STRING_32} "4%/26376/", {STRING_32} "5%/26376/", {STRING_32} "6%/26376/", {STRING_32} "7%/26376/", {STRING_32} "8%/26376/", {STRING_32} "9%/26376/", {STRING_32} "10%/26376/", {STRING_32} "11%/26376/", {STRING_32} "12%/26376/">>)
			Result.set_am_pm ({STRING_32} "%/19978/%/21320/", {STRING_32} "%/19979/%/21320/")
			Result.add_day_period (720, 780, {STRING_32} "%/20013/%/21320/")
			Result.add_day_period (780, 1140, {STRING_32} "%/19979/%/21320/")
			Result.add_day_period (1140, 1440, {STRING_32} "%/26202/%/19978/")
			Result.add_day_period (0, 0, {STRING_32} "%/21320/%/22812/")
			Result.add_day_period (300, 480, {STRING_32} "%/28165/%/26216/")
			Result.add_day_period (480, 720, {STRING_32} "%/19978/%/21320/")
			Result.add_day_period (0, 300, {STRING_32} "%/20940/%/26216/")
		end

end
