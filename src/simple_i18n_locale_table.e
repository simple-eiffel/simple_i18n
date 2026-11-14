note
	description: "[
		Locale formatting data for SIMPLE_I18N, generated from CLDR 48.2.0
		(the Unicode Common Locale Data Repository) by tools/cldr_generator.
		Do not edit by hand: change the generator and run it again (see README).

		Numbers use CLDR's "latn" numbering system. Currency is each locale's
		own current currency in CLDR's standard currency format. Patterns are
		CLDR's own; the bidirectional marks of the Hebrew and Arabic data are kept
		as CLDR has them. Invisible characters are written as %/code/ escapes.
	]"
	cldr_version: "48.2.0"
	cldr_license: "Unicode License v3 (SPDX-License-Identifier: Unicode-3.0), Copyright (c) 1991-2026 Unicode, Inc.; full text in LICENSE-CLDR.txt"
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
				{STRING_32} "∞", {STRING_32} "ليس%/160/رقمًا", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/8207/#,##0.00%/160/¤;%/8207/-#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "SAR", {STRING_32} "ر.س.%/8207/", 2)
			Result.set_date_patterns ({STRING_32} "d%/8207//M%/8207//y",
				{STRING_32} "dd%/8207//MM%/8207//y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "h:mm a", {STRING_32} "h:mm:ss a", {STRING_32} "{1}، {0}")
			Result.set_month_names (
				<<{STRING_32} "يناير", {STRING_32} "فبراير", {STRING_32} "مارس", {STRING_32} "أبريل", {STRING_32} "مايو", {STRING_32} "يونيو", {STRING_32} "يوليو", {STRING_32} "أغسطس", {STRING_32} "سبتمبر", {STRING_32} "أكتوبر", {STRING_32} "نوفمبر", {STRING_32} "ديسمبر">>,
				<<{STRING_32} "يناير", {STRING_32} "فبراير", {STRING_32} "مارس", {STRING_32} "أبريل", {STRING_32} "مايو", {STRING_32} "يونيو", {STRING_32} "يوليو", {STRING_32} "أغسطس", {STRING_32} "سبتمبر", {STRING_32} "أكتوبر", {STRING_32} "نوفمبر", {STRING_32} "ديسمبر">>)
			Result.set_am_pm ({STRING_32} "ص", {STRING_32} "م")
		end

	locale_cs_cz: SIMPLE_I18N_LOCALE_DATA
			-- cs_CZ, from CLDR locale "cs".
		do
			create Result.make ("cs_CZ", "cs")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "CZK", {STRING_32} "Kč", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "d. M. y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "H:mm", {STRING_32} "H:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "ledna", {STRING_32} "února", {STRING_32} "března", {STRING_32} "dubna", {STRING_32} "května", {STRING_32} "června", {STRING_32} "července", {STRING_32} "srpna", {STRING_32} "září", {STRING_32} "října", {STRING_32} "listopadu", {STRING_32} "prosince">>,
				<<{STRING_32} "led", {STRING_32} "úno", {STRING_32} "bře", {STRING_32} "dub", {STRING_32} "kvě", {STRING_32} "čvn", {STRING_32} "čvc", {STRING_32} "srp", {STRING_32} "zář", {STRING_32} "říj", {STRING_32} "lis", {STRING_32} "pro">>)
			Result.set_am_pm ({STRING_32} "dop.", {STRING_32} "odp.")
		end

	locale_da_dk: SIMPLE_I18N_LOCALE_DATA
			-- da_DK, from CLDR locale "da".
		do
			create Result.make ("da_DK", "da")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤%/160/#,##0.00;¤-#,##0.00")
			Result.set_currency ({STRING_32} "CHF", {STRING_32} "CHF", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "dd.MM.y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "Januar", {STRING_32} "Februar", {STRING_32} "März", {STRING_32} "April", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "August", {STRING_32} "September", {STRING_32} "Oktober", {STRING_32} "November", {STRING_32} "Dezember">>,
				<<{STRING_32} "Jan.", {STRING_32} "Feb.", {STRING_32} "März", {STRING_32} "Apr.", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "Aug.", {STRING_32} "Sept.", {STRING_32} "Okt.", {STRING_32} "Nov.", {STRING_32} "Dez.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_de_de: SIMPLE_I18N_LOCALE_DATA
			-- de_DE, from CLDR locale "de".
		do
			create Result.make ("de_DE", "de")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "dd.MM.y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "Januar", {STRING_32} "Februar", {STRING_32} "März", {STRING_32} "April", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "August", {STRING_32} "September", {STRING_32} "Oktober", {STRING_32} "November", {STRING_32} "Dezember">>,
				<<{STRING_32} "Jan.", {STRING_32} "Feb.", {STRING_32} "März", {STRING_32} "Apr.", {STRING_32} "Mai", {STRING_32} "Juni", {STRING_32} "Juli", {STRING_32} "Aug.", {STRING_32} "Sept.", {STRING_32} "Okt.", {STRING_32} "Nov.", {STRING_32} "Dez.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_el_gr: SIMPLE_I18N_LOCALE_DATA
			-- el_GR, from CLDR locale "el".
		do
			create Result.make ("el_GR", "el")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
			Result.set_date_patterns ({STRING_32} "d/M/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1} - {0}")
			Result.set_month_names (
				<<{STRING_32} "Ιανουαρίου", {STRING_32} "Φεβρουαρίου", {STRING_32} "Μαρτίου", {STRING_32} "Απριλίου", {STRING_32} "Μαΐου", {STRING_32} "Ιουνίου", {STRING_32} "Ιουλίου", {STRING_32} "Αυγούστου", {STRING_32} "Σεπτεμβρίου", {STRING_32} "Οκτωβρίου", {STRING_32} "Νοεμβρίου", {STRING_32} "Δεκεμβρίου">>,
				<<{STRING_32} "Ιαν", {STRING_32} "Φεβ", {STRING_32} "Μαρ", {STRING_32} "Απρ", {STRING_32} "Μαΐ", {STRING_32} "Ιουν", {STRING_32} "Ιουλ", {STRING_32} "Αυγ", {STRING_32} "Σεπ", {STRING_32} "Οκτ", {STRING_32} "Νοε", {STRING_32} "Δεκ">>)
			Result.set_am_pm ({STRING_32} "π.μ.", {STRING_32} "μ.μ.")
		end

	locale_en_au: SIMPLE_I18N_LOCALE_DATA
			-- en_AU, from CLDR locale "en-AU".
		do
			create Result.make ("en_AU", "en-AU")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
			Result.set_currency ({STRING_32} "GBP", {STRING_32} "£", 2)
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
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
				{STRING_32} "∞", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
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
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "−", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "epäluku", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
			Result.set_date_patterns ({STRING_32} "d.M.y",
				{STRING_32} "d.M.y",
				{STRING_32} "d. MMMM y")
			Result.set_time_patterns ({STRING_32} "H.mm", {STRING_32} "H.mm.ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "tammikuuta", {STRING_32} "helmikuuta", {STRING_32} "maaliskuuta", {STRING_32} "huhtikuuta", {STRING_32} "toukokuuta", {STRING_32} "kesäkuuta", {STRING_32} "heinäkuuta", {STRING_32} "elokuuta", {STRING_32} "syyskuuta", {STRING_32} "lokakuuta", {STRING_32} "marraskuuta", {STRING_32} "joulukuuta">>,
				<<{STRING_32} "tammi", {STRING_32} "helmi", {STRING_32} "maalis", {STRING_32} "huhti", {STRING_32} "touko", {STRING_32} "kesä", {STRING_32} "heinä", {STRING_32} "elo", {STRING_32} "syys", {STRING_32} "loka", {STRING_32} "marras", {STRING_32} "joulu">>)
			Result.set_am_pm ({STRING_32} "ap.", {STRING_32} "ip.")
		end

	locale_fr_ca: SIMPLE_I18N_LOCALE_DATA
			-- fr_CA, from CLDR locale "fr-CA".
		do
			create Result.make ("fr_CA", "fr-CA")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "CAD", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "y-MM-dd",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH 'h' mm", {STRING_32} "HH 'h' mm 'min' ss 's'", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "janvier", {STRING_32} "février", {STRING_32} "mars", {STRING_32} "avril", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juillet", {STRING_32} "août", {STRING_32} "septembre", {STRING_32} "octobre", {STRING_32} "novembre", {STRING_32} "décembre">>,
				<<{STRING_32} "janv.", {STRING_32} "févr.", {STRING_32} "mars", {STRING_32} "avr.", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juill.", {STRING_32} "août", {STRING_32} "sept.", {STRING_32} "oct.", {STRING_32} "nov.", {STRING_32} "déc.">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_fr_fr: SIMPLE_I18N_LOCALE_DATA
			-- fr_FR, from CLDR locale "fr".
		do
			create Result.make ("fr_FR", "fr")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/8239/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "janvier", {STRING_32} "février", {STRING_32} "mars", {STRING_32} "avril", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juillet", {STRING_32} "août", {STRING_32} "septembre", {STRING_32} "octobre", {STRING_32} "novembre", {STRING_32} "décembre">>,
				<<{STRING_32} "janv.", {STRING_32} "févr.", {STRING_32} "mars", {STRING_32} "avr.", {STRING_32} "mai", {STRING_32} "juin", {STRING_32} "juil.", {STRING_32} "août", {STRING_32} "sept.", {STRING_32} "oct.", {STRING_32} "nov.", {STRING_32} "déc.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_he_il: SIMPLE_I18N_LOCALE_DATA
			-- he_IL, from CLDR locale "he".
		do
			create Result.make ("he_IL", "he")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "%/8206/-", {STRING_32} "%/8206/+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/8207/#,##0.00%/160/%/8207/¤;%/8207/-#,##0.00%/160/%/8207/¤")
			Result.set_currency ({STRING_32} "ILS", {STRING_32} "₪", 2)
			Result.set_date_patterns ({STRING_32} "d.M.y",
				{STRING_32} "d בMMM y",
				{STRING_32} "d בMMMM y")
			Result.set_time_patterns ({STRING_32} "H:mm", {STRING_32} "H:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "ינואר", {STRING_32} "פברואר", {STRING_32} "מרץ", {STRING_32} "אפריל", {STRING_32} "מאי", {STRING_32} "יוני", {STRING_32} "יולי", {STRING_32} "אוגוסט", {STRING_32} "ספטמבר", {STRING_32} "אוקטובר", {STRING_32} "נובמבר", {STRING_32} "דצמבר">>,
				<<{STRING_32} "ינו׳", {STRING_32} "פבר׳", {STRING_32} "מרץ", {STRING_32} "אפר׳", {STRING_32} "מאי", {STRING_32} "יוני", {STRING_32} "יולי", {STRING_32} "אוג׳", {STRING_32} "ספט׳", {STRING_32} "אוק׳", {STRING_32} "נוב׳", {STRING_32} "דצמ׳">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_it_it: SIMPLE_I18N_LOCALE_DATA
			-- it_IT, from CLDR locale "it".
		do
			create Result.make ("it_IT", "it")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
			Result.set_currency ({STRING_32} "JPY", {STRING_32} "￥", 0)
			Result.set_date_patterns ({STRING_32} "y/MM/dd",
				{STRING_32} "y/MM/dd",
				{STRING_32} "y年M月d日")
			Result.set_time_patterns ({STRING_32} "H:mm", {STRING_32} "H:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "1月", {STRING_32} "2月", {STRING_32} "3月", {STRING_32} "4月", {STRING_32} "5月", {STRING_32} "6月", {STRING_32} "7月", {STRING_32} "8月", {STRING_32} "9月", {STRING_32} "10月", {STRING_32} "11月", {STRING_32} "12月">>,
				<<{STRING_32} "1月", {STRING_32} "2月", {STRING_32} "3月", {STRING_32} "4月", {STRING_32} "5月", {STRING_32} "6月", {STRING_32} "7月", {STRING_32} "8月", {STRING_32} "9月", {STRING_32} "10月", {STRING_32} "11月", {STRING_32} "12月">>)
			Result.set_am_pm ({STRING_32} "午前", {STRING_32} "午後")
		end

	locale_ko_kr: SIMPLE_I18N_LOCALE_DATA
			-- ko_KR, from CLDR locale "ko".
		do
			create Result.make ("ko_KR", "ko")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
			Result.set_currency ({STRING_32} "KRW", {STRING_32} "₩", 0)
			Result.set_date_patterns ({STRING_32} "yy. M. d.",
				{STRING_32} "y. M. d.",
				{STRING_32} "y년 MMMM d일")
			Result.set_time_patterns ({STRING_32} "a h:mm", {STRING_32} "a h:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "1월", {STRING_32} "2월", {STRING_32} "3월", {STRING_32} "4월", {STRING_32} "5월", {STRING_32} "6월", {STRING_32} "7월", {STRING_32} "8월", {STRING_32} "9월", {STRING_32} "10월", {STRING_32} "11월", {STRING_32} "12월">>,
				<<{STRING_32} "1월", {STRING_32} "2월", {STRING_32} "3월", {STRING_32} "4월", {STRING_32} "5월", {STRING_32} "6월", {STRING_32} "7월", {STRING_32} "8월", {STRING_32} "9월", {STRING_32} "10월", {STRING_32} "11월", {STRING_32} "12월">>)
			Result.set_am_pm ({STRING_32} "오전", {STRING_32} "오후")
		end

	locale_nb_no: SIMPLE_I18N_LOCALE_DATA
			-- nb_NO, from CLDR locale "nb".
		do
			create Result.make ("nb_NO", "nb")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "−", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤;-#,##0.00%/160/¤")
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤%/160/#,##0.00;¤%/160/-#,##0.00")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
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
				{STRING_32} "∞", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "PLN", {STRING_32} "zł", 2)
			Result.set_date_patterns ({STRING_32} "d.MM.y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "stycznia", {STRING_32} "lutego", {STRING_32} "marca", {STRING_32} "kwietnia", {STRING_32} "maja", {STRING_32} "czerwca", {STRING_32} "lipca", {STRING_32} "sierpnia", {STRING_32} "września", {STRING_32} "października", {STRING_32} "listopada", {STRING_32} "grudnia">>,
				<<{STRING_32} "sty", {STRING_32} "lut", {STRING_32} "mar", {STRING_32} "kwi", {STRING_32} "maj", {STRING_32} "cze", {STRING_32} "lip", {STRING_32} "sie", {STRING_32} "wrz", {STRING_32} "paź", {STRING_32} "lis", {STRING_32} "gru">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_pt_br: SIMPLE_I18N_LOCALE_DATA
			-- pt_BR, from CLDR locale "pt".
		do
			create Result.make ("pt_BR", "pt")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤%/160/#,##0.00")
			Result.set_currency ({STRING_32} "BRL", {STRING_32} "R$", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/y",
				{STRING_32} "d 'de' MMM 'de' y",
				{STRING_32} "d 'de' MMMM 'de' y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "janeiro", {STRING_32} "fevereiro", {STRING_32} "março", {STRING_32} "abril", {STRING_32} "maio", {STRING_32} "junho", {STRING_32} "julho", {STRING_32} "agosto", {STRING_32} "setembro", {STRING_32} "outubro", {STRING_32} "novembro", {STRING_32} "dezembro">>,
				<<{STRING_32} "jan.", {STRING_32} "fev.", {STRING_32} "mar.", {STRING_32} "abr.", {STRING_32} "mai.", {STRING_32} "jun.", {STRING_32} "jul.", {STRING_32} "ago.", {STRING_32} "set.", {STRING_32} "out.", {STRING_32} "nov.", {STRING_32} "dez.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_pt_pt: SIMPLE_I18N_LOCALE_DATA
			-- pt_PT, from CLDR locale "pt-PT".
		do
			create Result.make ("pt_PT", "pt-PT")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "€", 2)
			Result.set_date_patterns ({STRING_32} "dd/MM/yy",
				{STRING_32} "dd/MM/y",
				{STRING_32} "d 'de' MMMM 'de' y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "janeiro", {STRING_32} "fevereiro", {STRING_32} "março", {STRING_32} "abril", {STRING_32} "maio", {STRING_32} "junho", {STRING_32} "julho", {STRING_32} "agosto", {STRING_32} "setembro", {STRING_32} "outubro", {STRING_32} "novembro", {STRING_32} "dezembro">>,
				<<{STRING_32} "jan.", {STRING_32} "fev.", {STRING_32} "mar.", {STRING_32} "abr.", {STRING_32} "mai.", {STRING_32} "jun.", {STRING_32} "jul.", {STRING_32} "ago.", {STRING_32} "set.", {STRING_32} "out.", {STRING_32} "nov.", {STRING_32} "dez.">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_ru_ru: SIMPLE_I18N_LOCALE_DATA
			-- ru_RU, from CLDR locale "ru".
		do
			create Result.make ("ru_RU", "ru")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "не%/160/число", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "RUB", {STRING_32} "₽", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.y",
				{STRING_32} "d MMM y%/8239/'г'.",
				{STRING_32} "d MMMM y%/8239/'г'.")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "января", {STRING_32} "февраля", {STRING_32} "марта", {STRING_32} "апреля", {STRING_32} "мая", {STRING_32} "июня", {STRING_32} "июля", {STRING_32} "августа", {STRING_32} "сентября", {STRING_32} "октября", {STRING_32} "ноября", {STRING_32} "декабря">>,
				<<{STRING_32} "янв.", {STRING_32} "февр.", {STRING_32} "мар.", {STRING_32} "апр.", {STRING_32} "мая", {STRING_32} "июн.", {STRING_32} "июл.", {STRING_32} "авг.", {STRING_32} "сент.", {STRING_32} "окт.", {STRING_32} "нояб.", {STRING_32} "дек.">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_sv_se: SIMPLE_I18N_LOCALE_DATA
			-- sv_SE, from CLDR locale "sv".
		do
			create Result.make ("sv_SE", "sv")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "−", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
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
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
			Result.set_currency ({STRING_32} "TRY", {STRING_32} "₺", 2)
			Result.set_date_patterns ({STRING_32} "d.MM.y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "Ocak", {STRING_32} "Şubat", {STRING_32} "Mart", {STRING_32} "Nisan", {STRING_32} "Mayıs", {STRING_32} "Haziran", {STRING_32} "Temmuz", {STRING_32} "Ağustos", {STRING_32} "Eylül", {STRING_32} "Ekim", {STRING_32} "Kasım", {STRING_32} "Aralık">>,
				<<{STRING_32} "Oca", {STRING_32} "Şub", {STRING_32} "Mar", {STRING_32} "Nis", {STRING_32} "May", {STRING_32} "Haz", {STRING_32} "Tem", {STRING_32} "Ağu", {STRING_32} "Eyl", {STRING_32} "Eki", {STRING_32} "Kas", {STRING_32} "Ara">>)
			Result.set_am_pm ({STRING_32} "ÖÖ", {STRING_32} "ÖS")
		end

	locale_uk_ua: SIMPLE_I18N_LOCALE_DATA
			-- uk_UA, from CLDR locale "uk".
		do
			create Result.make ("uk_UA", "uk")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} "%/160/", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/¤")
			Result.set_currency ({STRING_32} "UAH", {STRING_32} "₴", 2)
			Result.set_date_patterns ({STRING_32} "dd.MM.yy",
				{STRING_32} "d MMM y%/8239/'р'.",
				{STRING_32} "d MMMM y%/8239/'р'.")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "січня", {STRING_32} "лютого", {STRING_32} "березня", {STRING_32} "квітня", {STRING_32} "травня", {STRING_32} "червня", {STRING_32} "липня", {STRING_32} "серпня", {STRING_32} "вересня", {STRING_32} "жовтня", {STRING_32} "листопада", {STRING_32} "грудня">>,
				<<{STRING_32} "січ.", {STRING_32} "лют.", {STRING_32} "бер.", {STRING_32} "квіт.", {STRING_32} "трав.", {STRING_32} "черв.", {STRING_32} "лип.", {STRING_32} "серп.", {STRING_32} "вер.", {STRING_32} "жовт.", {STRING_32} "лист.", {STRING_32} "груд.">>)
			Result.set_am_pm ({STRING_32} "дп", {STRING_32} "пп")
		end

	locale_zh_cn: SIMPLE_I18N_LOCALE_DATA
			-- zh_CN, from CLDR locale "zh".
		do
			create Result.make ("zh_CN", "zh")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
			Result.set_currency ({STRING_32} "CNY", {STRING_32} "¥", 2)
			Result.set_date_patterns ({STRING_32} "y/M/d",
				{STRING_32} "y年M月d日",
				{STRING_32} "y年M月d日")
			Result.set_time_patterns ({STRING_32} "HH:mm", {STRING_32} "HH:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "一月", {STRING_32} "二月", {STRING_32} "三月", {STRING_32} "四月", {STRING_32} "五月", {STRING_32} "六月", {STRING_32} "七月", {STRING_32} "八月", {STRING_32} "九月", {STRING_32} "十月", {STRING_32} "十一月", {STRING_32} "十二月">>,
				<<{STRING_32} "1月", {STRING_32} "2月", {STRING_32} "3月", {STRING_32} "4月", {STRING_32} "5月", {STRING_32} "6月", {STRING_32} "7月", {STRING_32} "8月", {STRING_32} "9月", {STRING_32} "10月", {STRING_32} "11月", {STRING_32} "12月">>)
			Result.set_am_pm ({STRING_32} "上午", {STRING_32} "下午")
		end

	locale_zh_tw: SIMPLE_I18N_LOCALE_DATA
			-- zh_TW, from CLDR locale "zh-Hant".
		do
			create Result.make ("zh_TW", "zh-Hant")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "∞", {STRING_32} "非數值", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "¤#,##0.00")
			Result.set_currency ({STRING_32} "TWD", {STRING_32} "$", 2)
			Result.set_date_patterns ({STRING_32} "y/M/d",
				{STRING_32} "y年M月d日",
				{STRING_32} "y年M月d日")
			Result.set_time_patterns ({STRING_32} "Bh:mm", {STRING_32} "Bh:mm:ss", {STRING_32} "{1} {0}")
			Result.set_month_names (
				<<{STRING_32} "1月", {STRING_32} "2月", {STRING_32} "3月", {STRING_32} "4月", {STRING_32} "5月", {STRING_32} "6月", {STRING_32} "7月", {STRING_32} "8月", {STRING_32} "9月", {STRING_32} "10月", {STRING_32} "11月", {STRING_32} "12月">>,
				<<{STRING_32} "1月", {STRING_32} "2月", {STRING_32} "3月", {STRING_32} "4月", {STRING_32} "5月", {STRING_32} "6月", {STRING_32} "7月", {STRING_32} "8月", {STRING_32} "9月", {STRING_32} "10月", {STRING_32} "11月", {STRING_32} "12月">>)
			Result.set_am_pm ({STRING_32} "上午", {STRING_32} "下午")
			Result.add_day_period (720, 780, {STRING_32} "中午")
			Result.add_day_period (780, 1140, {STRING_32} "下午")
			Result.add_day_period (1140, 1440, {STRING_32} "晚上")
			Result.add_day_period (0, 0, {STRING_32} "午夜")
			Result.add_day_period (300, 480, {STRING_32} "清晨")
			Result.add_day_period (480, 720, {STRING_32} "上午")
			Result.add_day_period (0, 300, {STRING_32} "凌晨")
		end

end
