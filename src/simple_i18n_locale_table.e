note
	description: "[
		Locale formatting data for SIMPLE_I18N, generated from CLDR 48.2.0
		(the Unicode Common Locale Data Repository) by tools/cldr_generator.
		Do not edit by hand: change the generator and run it again (see README).

		Numbers use CLDR's "latn" numbering system. A currency is the requested
		region's (`region_currencies'), shown with the table locale's symbol for it
		in CLDR's standard currency format. Patterns are
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
			Result := << "ar_SA", "cs_CZ", "da_DK", "de_CH", "de_DE", "el_GR", "en_001", "en_AU", "en_CA", "en_GB", "en_US", "es_419", "es_ES", "es_MX", "fi_FI", "fr_CA", "fr_FR", "he_IL", "it_IT", "ja_JP", "ko_KR", "nb_NO", "nl_NL", "pl_PL", "pt_BR", "pt_PT", "ru_RU", "sv_SE", "tr_TR", "uk_UA", "zh_CN", "zh_TW" >>
			Result.compare_objects
		ensure
			count: Result.count = 32
		end

	locales: HASH_TABLE [SIMPLE_I18N_LOCALE_DATA, STRING_8]
			-- Every locale's data, by name.
		once
			create Result.make (32)
			Result.put (locale_ar_sa, "ar_SA")
			Result.put (locale_cs_cz, "cs_CZ")
			Result.put (locale_da_dk, "da_DK")
			Result.put (locale_de_ch, "de_CH")
			Result.put (locale_de_de, "de_DE")
			Result.put (locale_el_gr, "el_GR")
			Result.put (locale_en_001, "en_001")
			Result.put (locale_en_au, "en_AU")
			Result.put (locale_en_ca, "en_CA")
			Result.put (locale_en_gb, "en_GB")
			Result.put (locale_en_us, "en_US")
			Result.put (locale_es_419, "es_419")
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
			count: Result.count = 32
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

	parent_locales: HASH_TABLE [STRING_8, STRING_8]
			-- Table locale for a language and region the table does not list, from
			-- CLDR's parentLocales followed to a table locale (en_IE to en_001).
		once
			create Result.make (142)
			Result.put ("en_001", "en_150")
			Result.put ("en_001", "en_AG")
			Result.put ("en_001", "en_AI")
			Result.put ("en_001", "en_AT")
			Result.put ("en_001", "en_BB")
			Result.put ("en_001", "en_BE")
			Result.put ("en_001", "en_BM")
			Result.put ("en_001", "en_BS")
			Result.put ("en_001", "en_BW")
			Result.put ("en_001", "en_BZ")
			Result.put ("en_001", "en_CC")
			Result.put ("en_001", "en_CH")
			Result.put ("en_001", "en_CK")
			Result.put ("en_001", "en_CM")
			Result.put ("en_001", "en_CX")
			Result.put ("en_001", "en_CY")
			Result.put ("en_001", "en_CZ")
			Result.put ("en_001", "en_DE")
			Result.put ("en_001", "en_DG")
			Result.put ("en_001", "en_DK")
			Result.put ("en_001", "en_DM")
			Result.put ("en_001", "en_EE")
			Result.put ("en_001", "en_ER")
			Result.put ("en_001", "en_ES")
			Result.put ("en_001", "en_FI")
			Result.put ("en_001", "en_FJ")
			Result.put ("en_001", "en_FK")
			Result.put ("en_001", "en_FM")
			Result.put ("en_001", "en_FR")
			Result.put ("en_001", "en_GD")
			Result.put ("en_001", "en_GE")
			Result.put ("en_001", "en_GG")
			Result.put ("en_001", "en_GH")
			Result.put ("en_001", "en_GI")
			Result.put ("en_001", "en_GM")
			Result.put ("en_001", "en_GS")
			Result.put ("en_001", "en_GY")
			Result.put ("en_001", "en_HK")
			Result.put ("en_001", "en_HU")
			Result.put ("en_001", "en_ID")
			Result.put ("en_001", "en_IE")
			Result.put ("en_001", "en_IL")
			Result.put ("en_001", "en_IM")
			Result.put ("en_001", "en_IN")
			Result.put ("en_001", "en_IO")
			Result.put ("en_001", "en_IT")
			Result.put ("en_001", "en_JE")
			Result.put ("en_001", "en_JM")
			Result.put ("en_001", "en_KE")
			Result.put ("en_001", "en_KI")
			Result.put ("en_001", "en_KN")
			Result.put ("en_001", "en_KY")
			Result.put ("en_001", "en_LC")
			Result.put ("en_001", "en_LR")
			Result.put ("en_001", "en_LS")
			Result.put ("en_001", "en_LT")
			Result.put ("en_001", "en_LV")
			Result.put ("en_001", "en_MG")
			Result.put ("en_001", "en_MO")
			Result.put ("en_001", "en_MS")
			Result.put ("en_001", "en_MT")
			Result.put ("en_001", "en_MU")
			Result.put ("en_001", "en_MV")
			Result.put ("en_001", "en_MW")
			Result.put ("en_001", "en_MY")
			Result.put ("en_001", "en_NA")
			Result.put ("en_001", "en_NF")
			Result.put ("en_001", "en_NG")
			Result.put ("en_001", "en_NL")
			Result.put ("en_001", "en_NO")
			Result.put ("en_001", "en_NR")
			Result.put ("en_001", "en_NU")
			Result.put ("en_001", "en_NZ")
			Result.put ("en_001", "en_PG")
			Result.put ("en_001", "en_PK")
			Result.put ("en_001", "en_PL")
			Result.put ("en_001", "en_PN")
			Result.put ("en_001", "en_PT")
			Result.put ("en_001", "en_PW")
			Result.put ("en_001", "en_RO")
			Result.put ("en_001", "en_RW")
			Result.put ("en_001", "en_SB")
			Result.put ("en_001", "en_SC")
			Result.put ("en_001", "en_SD")
			Result.put ("en_001", "en_SE")
			Result.put ("en_001", "en_SG")
			Result.put ("en_001", "en_SH")
			Result.put ("en_001", "en_SI")
			Result.put ("en_001", "en_SK")
			Result.put ("en_001", "en_SL")
			Result.put ("en_001", "en_SS")
			Result.put ("en_001", "en_SX")
			Result.put ("en_001", "en_SZ")
			Result.put ("en_001", "en_TC")
			Result.put ("en_001", "en_TK")
			Result.put ("en_001", "en_TO")
			Result.put ("en_001", "en_TT")
			Result.put ("en_001", "en_TV")
			Result.put ("en_001", "en_TZ")
			Result.put ("en_001", "en_UA")
			Result.put ("en_001", "en_UG")
			Result.put ("en_001", "en_VC")
			Result.put ("en_001", "en_VG")
			Result.put ("en_001", "en_VU")
			Result.put ("en_001", "en_WS")
			Result.put ("en_001", "en_ZA")
			Result.put ("en_001", "en_ZM")
			Result.put ("en_001", "en_ZW")
			Result.put ("es_419", "es_AR")
			Result.put ("es_419", "es_BO")
			Result.put ("es_419", "es_BR")
			Result.put ("es_419", "es_BZ")
			Result.put ("es_419", "es_CL")
			Result.put ("es_419", "es_CO")
			Result.put ("es_419", "es_CR")
			Result.put ("es_419", "es_CU")
			Result.put ("es_419", "es_DO")
			Result.put ("es_419", "es_EC")
			Result.put ("es_419", "es_GT")
			Result.put ("es_419", "es_HN")
			Result.put ("es_419", "es_JP")
			Result.put ("es_419", "es_NI")
			Result.put ("es_419", "es_PA")
			Result.put ("es_419", "es_PE")
			Result.put ("es_419", "es_PR")
			Result.put ("es_419", "es_PY")
			Result.put ("es_419", "es_SV")
			Result.put ("es_419", "es_US")
			Result.put ("es_419", "es_UY")
			Result.put ("es_419", "es_VE")
			Result.put ("en_001", "hi_Latn")
			Result.put ("pt_PT", "pt_AO")
			Result.put ("pt_PT", "pt_CH")
			Result.put ("pt_PT", "pt_CV")
			Result.put ("pt_PT", "pt_FR")
			Result.put ("pt_PT", "pt_GQ")
			Result.put ("pt_PT", "pt_GW")
			Result.put ("pt_PT", "pt_LU")
			Result.put ("pt_PT", "pt_MO")
			Result.put ("pt_PT", "pt_MZ")
			Result.put ("pt_PT", "pt_ST")
			Result.put ("pt_PT", "pt_TL")
		end

	region_currencies: HASH_TABLE [TUPLE [code: STRING_32; digits: INTEGER], STRING_8]
			-- Each region's one current legal tender and its fraction digits, from
			-- CLDR's currencyData (regions with more than one are left out).
		once
			create Result.make (248)
			Result.put ([{STRING_32} "SHP", 2], "AC")
			Result.put ([{STRING_32} "EUR", 2], "AD")
			Result.put ([{STRING_32} "AED", 2], "AE")
			Result.put ([{STRING_32} "AFN", 0], "AF")
			Result.put ([{STRING_32} "XCD", 2], "AG")
			Result.put ([{STRING_32} "XCD", 2], "AI")
			Result.put ([{STRING_32} "ALL", 0], "AL")
			Result.put ([{STRING_32} "AMD", 2], "AM")
			Result.put ([{STRING_32} "AOA", 2], "AO")
			Result.put ([{STRING_32} "ARS", 2], "AR")
			Result.put ([{STRING_32} "USD", 2], "AS")
			Result.put ([{STRING_32} "EUR", 2], "AT")
			Result.put ([{STRING_32} "AUD", 2], "AU")
			Result.put ([{STRING_32} "AWG", 2], "AW")
			Result.put ([{STRING_32} "EUR", 2], "AX")
			Result.put ([{STRING_32} "AZN", 2], "AZ")
			Result.put ([{STRING_32} "BAM", 2], "BA")
			Result.put ([{STRING_32} "BBD", 2], "BB")
			Result.put ([{STRING_32} "BDT", 2], "BD")
			Result.put ([{STRING_32} "EUR", 2], "BE")
			Result.put ([{STRING_32} "XOF", 0], "BF")
			Result.put ([{STRING_32} "EUR", 2], "BG")
			Result.put ([{STRING_32} "BHD", 3], "BH")
			Result.put ([{STRING_32} "BIF", 0], "BI")
			Result.put ([{STRING_32} "XOF", 0], "BJ")
			Result.put ([{STRING_32} "EUR", 2], "BL")
			Result.put ([{STRING_32} "BMD", 2], "BM")
			Result.put ([{STRING_32} "BND", 2], "BN")
			Result.put ([{STRING_32} "BOB", 2], "BO")
			Result.put ([{STRING_32} "USD", 2], "BQ")
			Result.put ([{STRING_32} "BRL", 2], "BR")
			Result.put ([{STRING_32} "BSD", 2], "BS")
			Result.put ([{STRING_32} "NOK", 2], "BV")
			Result.put ([{STRING_32} "BWP", 2], "BW")
			Result.put ([{STRING_32} "BYN", 2], "BY")
			Result.put ([{STRING_32} "BZD", 2], "BZ")
			Result.put ([{STRING_32} "CAD", 2], "CA")
			Result.put ([{STRING_32} "AUD", 2], "CC")
			Result.put ([{STRING_32} "CDF", 2], "CD")
			Result.put ([{STRING_32} "XAF", 0], "CF")
			Result.put ([{STRING_32} "XAF", 0], "CG")
			Result.put ([{STRING_32} "CHF", 2], "CH")
			Result.put ([{STRING_32} "XOF", 0], "CI")
			Result.put ([{STRING_32} "NZD", 2], "CK")
			Result.put ([{STRING_32} "CLP", 0], "CL")
			Result.put ([{STRING_32} "XAF", 0], "CM")
			Result.put ([{STRING_32} "CNY", 2], "CN")
			Result.put ([{STRING_32} "COP", 0], "CO")
			Result.put ([{STRING_32} "CRC", 2], "CR")
			Result.put ([{STRING_32} "CUP", 2], "CU")
			Result.put ([{STRING_32} "CVE", 2], "CV")
			Result.put ([{STRING_32} "XCG", 2], "CW")
			Result.put ([{STRING_32} "AUD", 2], "CX")
			Result.put ([{STRING_32} "EUR", 2], "CY")
			Result.put ([{STRING_32} "CZK", 2], "CZ")
			Result.put ([{STRING_32} "EUR", 2], "DE")
			Result.put ([{STRING_32} "USD", 2], "DG")
			Result.put ([{STRING_32} "DJF", 0], "DJ")
			Result.put ([{STRING_32} "DKK", 2], "DK")
			Result.put ([{STRING_32} "XCD", 2], "DM")
			Result.put ([{STRING_32} "DOP", 2], "DO")
			Result.put ([{STRING_32} "DZD", 2], "DZ")
			Result.put ([{STRING_32} "EUR", 2], "EA")
			Result.put ([{STRING_32} "USD", 2], "EC")
			Result.put ([{STRING_32} "EUR", 2], "EE")
			Result.put ([{STRING_32} "EGP", 2], "EG")
			Result.put ([{STRING_32} "MAD", 2], "EH")
			Result.put ([{STRING_32} "ERN", 2], "ER")
			Result.put ([{STRING_32} "EUR", 2], "ES")
			Result.put ([{STRING_32} "ETB", 2], "ET")
			Result.put ([{STRING_32} "EUR", 2], "EU")
			Result.put ([{STRING_32} "EUR", 2], "FI")
			Result.put ([{STRING_32} "FJD", 2], "FJ")
			Result.put ([{STRING_32} "FKP", 2], "FK")
			Result.put ([{STRING_32} "USD", 2], "FM")
			Result.put ([{STRING_32} "DKK", 2], "FO")
			Result.put ([{STRING_32} "EUR", 2], "FR")
			Result.put ([{STRING_32} "XAF", 0], "GA")
			Result.put ([{STRING_32} "GBP", 2], "GB")
			Result.put ([{STRING_32} "XCD", 2], "GD")
			Result.put ([{STRING_32} "GEL", 2], "GE")
			Result.put ([{STRING_32} "EUR", 2], "GF")
			Result.put ([{STRING_32} "GBP", 2], "GG")
			Result.put ([{STRING_32} "GHS", 2], "GH")
			Result.put ([{STRING_32} "GIP", 2], "GI")
			Result.put ([{STRING_32} "DKK", 2], "GL")
			Result.put ([{STRING_32} "GMD", 2], "GM")
			Result.put ([{STRING_32} "GNF", 0], "GN")
			Result.put ([{STRING_32} "EUR", 2], "GP")
			Result.put ([{STRING_32} "XAF", 0], "GQ")
			Result.put ([{STRING_32} "EUR", 2], "GR")
			Result.put ([{STRING_32} "GBP", 2], "GS")
			Result.put ([{STRING_32} "GTQ", 2], "GT")
			Result.put ([{STRING_32} "USD", 2], "GU")
			Result.put ([{STRING_32} "XOF", 0], "GW")
			Result.put ([{STRING_32} "GYD", 2], "GY")
			Result.put ([{STRING_32} "HKD", 2], "HK")
			Result.put ([{STRING_32} "AUD", 2], "HM")
			Result.put ([{STRING_32} "HNL", 2], "HN")
			Result.put ([{STRING_32} "EUR", 2], "HR")
			Result.put ([{STRING_32} "HUF", 0], "HU")
			Result.put ([{STRING_32} "EUR", 2], "IC")
			Result.put ([{STRING_32} "IDR", 0], "ID")
			Result.put ([{STRING_32} "EUR", 2], "IE")
			Result.put ([{STRING_32} "ILS", 2], "IL")
			Result.put ([{STRING_32} "GBP", 2], "IM")
			Result.put ([{STRING_32} "INR", 2], "IN")
			Result.put ([{STRING_32} "USD", 2], "IO")
			Result.put ([{STRING_32} "IQD", 0], "IQ")
			Result.put ([{STRING_32} "IRR", 0], "IR")
			Result.put ([{STRING_32} "ISK", 0], "IS")
			Result.put ([{STRING_32} "EUR", 2], "IT")
			Result.put ([{STRING_32} "GBP", 2], "JE")
			Result.put ([{STRING_32} "JMD", 2], "JM")
			Result.put ([{STRING_32} "JOD", 3], "JO")
			Result.put ([{STRING_32} "JPY", 0], "JP")
			Result.put ([{STRING_32} "KES", 2], "KE")
			Result.put ([{STRING_32} "KGS", 2], "KG")
			Result.put ([{STRING_32} "KHR", 2], "KH")
			Result.put ([{STRING_32} "AUD", 2], "KI")
			Result.put ([{STRING_32} "KMF", 0], "KM")
			Result.put ([{STRING_32} "XCD", 2], "KN")
			Result.put ([{STRING_32} "KPW", 0], "KP")
			Result.put ([{STRING_32} "KRW", 0], "KR")
			Result.put ([{STRING_32} "KWD", 3], "KW")
			Result.put ([{STRING_32} "KYD", 2], "KY")
			Result.put ([{STRING_32} "KZT", 2], "KZ")
			Result.put ([{STRING_32} "LAK", 0], "LA")
			Result.put ([{STRING_32} "LBP", 0], "LB")
			Result.put ([{STRING_32} "XCD", 2], "LC")
			Result.put ([{STRING_32} "CHF", 2], "LI")
			Result.put ([{STRING_32} "LKR", 2], "LK")
			Result.put ([{STRING_32} "LRD", 2], "LR")
			Result.put ([{STRING_32} "EUR", 2], "LT")
			Result.put ([{STRING_32} "EUR", 2], "LU")
			Result.put ([{STRING_32} "EUR", 2], "LV")
			Result.put ([{STRING_32} "LYD", 3], "LY")
			Result.put ([{STRING_32} "MAD", 2], "MA")
			Result.put ([{STRING_32} "EUR", 2], "MC")
			Result.put ([{STRING_32} "MDL", 2], "MD")
			Result.put ([{STRING_32} "EUR", 2], "ME")
			Result.put ([{STRING_32} "EUR", 2], "MF")
			Result.put ([{STRING_32} "MGA", 0], "MG")
			Result.put ([{STRING_32} "USD", 2], "MH")
			Result.put ([{STRING_32} "MKD", 2], "MK")
			Result.put ([{STRING_32} "XOF", 0], "ML")
			Result.put ([{STRING_32} "MMK", 0], "MM")
			Result.put ([{STRING_32} "MNT", 2], "MN")
			Result.put ([{STRING_32} "MOP", 2], "MO")
			Result.put ([{STRING_32} "USD", 2], "MP")
			Result.put ([{STRING_32} "EUR", 2], "MQ")
			Result.put ([{STRING_32} "MRU", 2], "MR")
			Result.put ([{STRING_32} "XCD", 2], "MS")
			Result.put ([{STRING_32} "EUR", 2], "MT")
			Result.put ([{STRING_32} "MUR", 2], "MU")
			Result.put ([{STRING_32} "MVR", 2], "MV")
			Result.put ([{STRING_32} "MWK", 2], "MW")
			Result.put ([{STRING_32} "MXN", 2], "MX")
			Result.put ([{STRING_32} "MYR", 2], "MY")
			Result.put ([{STRING_32} "MZN", 2], "MZ")
			Result.put ([{STRING_32} "XPF", 0], "NC")
			Result.put ([{STRING_32} "XOF", 0], "NE")
			Result.put ([{STRING_32} "AUD", 2], "NF")
			Result.put ([{STRING_32} "NGN", 2], "NG")
			Result.put ([{STRING_32} "NIO", 2], "NI")
			Result.put ([{STRING_32} "EUR", 2], "NL")
			Result.put ([{STRING_32} "NOK", 2], "NO")
			Result.put ([{STRING_32} "NPR", 2], "NP")
			Result.put ([{STRING_32} "AUD", 2], "NR")
			Result.put ([{STRING_32} "NZD", 2], "NU")
			Result.put ([{STRING_32} "NZD", 2], "NZ")
			Result.put ([{STRING_32} "OMR", 3], "OM")
			Result.put ([{STRING_32} "PEN", 2], "PE")
			Result.put ([{STRING_32} "XPF", 0], "PF")
			Result.put ([{STRING_32} "PGK", 2], "PG")
			Result.put ([{STRING_32} "PHP", 2], "PH")
			Result.put ([{STRING_32} "PKR", 0], "PK")
			Result.put ([{STRING_32} "PLN", 2], "PL")
			Result.put ([{STRING_32} "EUR", 2], "PM")
			Result.put ([{STRING_32} "NZD", 2], "PN")
			Result.put ([{STRING_32} "USD", 2], "PR")
			Result.put ([{STRING_32} "EUR", 2], "PT")
			Result.put ([{STRING_32} "USD", 2], "PW")
			Result.put ([{STRING_32} "PYG", 0], "PY")
			Result.put ([{STRING_32} "QAR", 2], "QA")
			Result.put ([{STRING_32} "EUR", 2], "RE")
			Result.put ([{STRING_32} "RON", 2], "RO")
			Result.put ([{STRING_32} "RSD", 2], "RS")
			Result.put ([{STRING_32} "RUB", 2], "RU")
			Result.put ([{STRING_32} "RWF", 0], "RW")
			Result.put ([{STRING_32} "SAR", 2], "SA")
			Result.put ([{STRING_32} "SBD", 2], "SB")
			Result.put ([{STRING_32} "SCR", 2], "SC")
			Result.put ([{STRING_32} "SDG", 2], "SD")
			Result.put ([{STRING_32} "SEK", 2], "SE")
			Result.put ([{STRING_32} "SGD", 2], "SG")
			Result.put ([{STRING_32} "SHP", 2], "SH")
			Result.put ([{STRING_32} "EUR", 2], "SI")
			Result.put ([{STRING_32} "NOK", 2], "SJ")
			Result.put ([{STRING_32} "EUR", 2], "SK")
			Result.put ([{STRING_32} "SLE", 2], "SL")
			Result.put ([{STRING_32} "EUR", 2], "SM")
			Result.put ([{STRING_32} "XOF", 0], "SN")
			Result.put ([{STRING_32} "SOS", 0], "SO")
			Result.put ([{STRING_32} "SRD", 2], "SR")
			Result.put ([{STRING_32} "SSP", 2], "SS")
			Result.put ([{STRING_32} "STN", 2], "ST")
			Result.put ([{STRING_32} "USD", 2], "SV")
			Result.put ([{STRING_32} "XCG", 2], "SX")
			Result.put ([{STRING_32} "SYP", 0], "SY")
			Result.put ([{STRING_32} "SZL", 2], "SZ")
			Result.put ([{STRING_32} "GBP", 2], "TA")
			Result.put ([{STRING_32} "USD", 2], "TC")
			Result.put ([{STRING_32} "XAF", 0], "TD")
			Result.put ([{STRING_32} "EUR", 2], "TF")
			Result.put ([{STRING_32} "XOF", 0], "TG")
			Result.put ([{STRING_32} "THB", 2], "TH")
			Result.put ([{STRING_32} "TJS", 2], "TJ")
			Result.put ([{STRING_32} "NZD", 2], "TK")
			Result.put ([{STRING_32} "USD", 2], "TL")
			Result.put ([{STRING_32} "TMT", 2], "TM")
			Result.put ([{STRING_32} "TND", 3], "TN")
			Result.put ([{STRING_32} "TOP", 2], "TO")
			Result.put ([{STRING_32} "TRY", 2], "TR")
			Result.put ([{STRING_32} "TTD", 2], "TT")
			Result.put ([{STRING_32} "AUD", 2], "TV")
			Result.put ([{STRING_32} "TWD", 2], "TW")
			Result.put ([{STRING_32} "TZS", 2], "TZ")
			Result.put ([{STRING_32} "UAH", 2], "UA")
			Result.put ([{STRING_32} "UGX", 0], "UG")
			Result.put ([{STRING_32} "USD", 2], "UM")
			Result.put ([{STRING_32} "USD", 2], "US")
			Result.put ([{STRING_32} "UYU", 2], "UY")
			Result.put ([{STRING_32} "UZS", 2], "UZ")
			Result.put ([{STRING_32} "EUR", 2], "VA")
			Result.put ([{STRING_32} "XCD", 2], "VC")
			Result.put ([{STRING_32} "VES", 2], "VE")
			Result.put ([{STRING_32} "USD", 2], "VG")
			Result.put ([{STRING_32} "USD", 2], "VI")
			Result.put ([{STRING_32} "VND", 0], "VN")
			Result.put ([{STRING_32} "VUV", 0], "VU")
			Result.put ([{STRING_32} "XPF", 0], "WF")
			Result.put ([{STRING_32} "WST", 2], "WS")
			Result.put ([{STRING_32} "EUR", 2], "XK")
			Result.put ([{STRING_32} "YER", 0], "YE")
			Result.put ([{STRING_32} "EUR", 2], "YT")
			Result.put ([{STRING_32} "ZAR", 2], "ZA")
			Result.put ([{STRING_32} "ZMW", 2], "ZM")
		end

feature {NONE} -- Locales

	locale_ar_sa: SIMPLE_I18N_LOCALE_DATA
			-- ar_SA, from CLDR locale "ar-SA".
		do
			create Result.make ("ar_SA", "ar-SA")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "%/8206/-", {STRING_32} "%/8206/+",
				{STRING_32} "%/8734/", {STRING_32} "%/1604/%/1610/%/1587/%/160/%/1585/%/1602/%/1605/%/1611/%/1575/", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/8207/#,##0.00%/160/%/164/;%/8207/-#,##0.00%/160/%/164/")
			Result.set_alpha_currency_pattern ({STRING_32} "%/8207/#,##0.00%/160/%/164/;%/8207/-#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "SAR", {STRING_32} "%/1585/.%/1587/.%/8207/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AED", {STRING_32} "%/1583/.%/1573/.%/8207/"],
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BHD", {STRING_32} "%/1583/.%/1576/.%/8207/"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "DZD", {STRING_32} "%/1583/.%/1580/.%/8207/"],
				[{STRING_32} "EGP", {STRING_32} "%/1580/.%/1605/.%/8207/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "UK%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "IQD", {STRING_32} "%/1583/.%/1593/.%/8207/"],
				[{STRING_32} "IRR", {STRING_32} "%/1585/.%/1573/."],
				[{STRING_32} "JOD", {STRING_32} "%/1583/.%/1571/.%/8207/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "KWD", {STRING_32} "%/1583/.%/1603/.%/8207/"],
				[{STRING_32} "LBP", {STRING_32} "%/1604/.%/1604/.%/8207/"],
				[{STRING_32} "LYD", {STRING_32} "%/1583/.%/1604/.%/8207/"],
				[{STRING_32} "MAD", {STRING_32} "%/1583/.%/1605/.%/8207/"],
				[{STRING_32} "MRU", {STRING_32} "%/1571/.%/1605/."],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "OMR", {STRING_32} "%/1585/.%/1593/.%/8207/"],
				[{STRING_32} "QAR", {STRING_32} "%/1585/.%/1602/.%/8207/"],
				[{STRING_32} "SDG", {STRING_32} "%/1580/.%/1587/."],
				[{STRING_32} "SYP", {STRING_32} "%/1604/.%/1587/.%/8207/"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TND", {STRING_32} "%/1583/.%/1578/.%/8207/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"],
				[{STRING_32} "YER", {STRING_32} "%/1585/.%/1610/.%/8207/"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "CZK", {STRING_32} "K%/269/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "DKK", {STRING_32} "kr.", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00;%/164/-#,##0.00")
			Result.set_currency ({STRING_32} "CHF", {STRING_32} "CHF", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
			Result.set_date_patterns ({STRING_32} "d/M/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1} - {0}")
			Result.set_month_names (
				<<{STRING_32} "%/921/%/945/%/957/%/959/%/965/%/945/%/961/%/943/%/959/%/965/", {STRING_32} "%/934/%/949/%/946/%/961/%/959/%/965/%/945/%/961/%/943/%/959/%/965/", {STRING_32} "%/924/%/945/%/961/%/964/%/943/%/959/%/965/", {STRING_32} "%/913/%/960/%/961/%/953/%/955/%/943/%/959/%/965/", {STRING_32} "%/924/%/945/%/912/%/959/%/965/", {STRING_32} "%/921/%/959/%/965/%/957/%/943/%/959/%/965/", {STRING_32} "%/921/%/959/%/965/%/955/%/943/%/959/%/965/", {STRING_32} "%/913/%/965/%/947/%/959/%/973/%/963/%/964/%/959/%/965/", {STRING_32} "%/931/%/949/%/960/%/964/%/949/%/956/%/946/%/961/%/943/%/959/%/965/", {STRING_32} "%/927/%/954/%/964/%/969/%/946/%/961/%/943/%/959/%/965/", {STRING_32} "%/925/%/959/%/949/%/956/%/946/%/961/%/943/%/959/%/965/", {STRING_32} "%/916/%/949/%/954/%/949/%/956/%/946/%/961/%/943/%/959/%/965/">>,
				<<{STRING_32} "%/921/%/945/%/957/", {STRING_32} "%/934/%/949/%/946/", {STRING_32} "%/924/%/945/%/961/", {STRING_32} "%/913/%/960/%/961/", {STRING_32} "%/924/%/945/%/912/", {STRING_32} "%/921/%/959/%/965/%/957/", {STRING_32} "%/921/%/959/%/965/%/955/", {STRING_32} "%/913/%/965/%/947/", {STRING_32} "%/931/%/949/%/960/", {STRING_32} "%/927/%/954/%/964/", {STRING_32} "%/925/%/959/%/949/", {STRING_32} "%/916/%/949/%/954/">>)
			Result.set_am_pm ({STRING_32} "%/960/.%/956/.", {STRING_32} "%/956/.%/956/.")
		end

	locale_en_001: SIMPLE_I18N_LOCALE_DATA
			-- en_001, from CLDR locale "en-001".
		do
			create Result.make ("en_001", "en-001")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "PHP", {STRING_32} "%/8369/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
			Result.set_date_patterns ({STRING_32} "dd/MM/y",
				{STRING_32} "d MMM y",
				{STRING_32} "d MMMM y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "January", {STRING_32} "February", {STRING_32} "March", {STRING_32} "April", {STRING_32} "May", {STRING_32} "June", {STRING_32} "July", {STRING_32} "August", {STRING_32} "September", {STRING_32} "October", {STRING_32} "November", {STRING_32} "December">>,
				<<{STRING_32} "Jan", {STRING_32} "Feb", {STRING_32} "Mar", {STRING_32} "Apr", {STRING_32} "May", {STRING_32} "Jun", {STRING_32} "Jul", {STRING_32} "Aug", {STRING_32} "Sept", {STRING_32} "Oct", {STRING_32} "Nov", {STRING_32} "Dec">>)
			Result.set_am_pm ({STRING_32} "am", {STRING_32} "pm")
		end

	locale_en_au: SIMPLE_I18N_LOCALE_DATA
			-- en_AU, from CLDR locale "en-AU".
		do
			create Result.make ("en_AU", "en-AU")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "AUD", {STRING_32} "$", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "SCR", {STRING_32} "Rs"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XPF", {STRING_32} "CFP"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "CAD", {STRING_32} "$", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "PHP", {STRING_32} "%/8369/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg"],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "GBP", {STRING_32} "%/163/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "PHP", {STRING_32} "%/8369/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "USD", {STRING_32} "$", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "PHP", {STRING_32} "%/8369/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
			Result.set_date_patterns ({STRING_32} "M/d/yy",
				{STRING_32} "MMM d, y",
				{STRING_32} "MMMM d, y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "January", {STRING_32} "February", {STRING_32} "March", {STRING_32} "April", {STRING_32} "May", {STRING_32} "June", {STRING_32} "July", {STRING_32} "August", {STRING_32} "September", {STRING_32} "October", {STRING_32} "November", {STRING_32} "December">>,
				<<{STRING_32} "Jan", {STRING_32} "Feb", {STRING_32} "Mar", {STRING_32} "Apr", {STRING_32} "May", {STRING_32} "Jun", {STRING_32} "Jul", {STRING_32} "Aug", {STRING_32} "Sep", {STRING_32} "Oct", {STRING_32} "Nov", {STRING_32} "Dec">>)
			Result.set_am_pm ({STRING_32} "AM", {STRING_32} "PM")
		end

	locale_es_419: SIMPLE_I18N_LOCALE_DATA
			-- es_419, from CLDR locale "es-419".
		do
			create Result.make ("es_419", "es-419")
			Result.set_number_symbols ({STRING_32} ".", {STRING_32} ",", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 1)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "%/164/#,##0.00")
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency_symbols (<<
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
			Result.set_date_patterns ({STRING_32} "d/M/yy",
				{STRING_32} "d MMM y",
				{STRING_32} "d 'de' MMMM 'de' y")
			Result.set_time_patterns ({STRING_32} "h:mm%/8239/a", {STRING_32} "h:mm:ss%/8239/a", {STRING_32} "{1}, {0}")
			Result.set_month_names (
				<<{STRING_32} "enero", {STRING_32} "febrero", {STRING_32} "marzo", {STRING_32} "abril", {STRING_32} "mayo", {STRING_32} "junio", {STRING_32} "julio", {STRING_32} "agosto", {STRING_32} "septiembre", {STRING_32} "octubre", {STRING_32} "noviembre", {STRING_32} "diciembre">>,
				<<{STRING_32} "ene", {STRING_32} "feb", {STRING_32} "mar", {STRING_32} "abr", {STRING_32} "may", {STRING_32} "jun", {STRING_32} "jul", {STRING_32} "ago", {STRING_32} "sept", {STRING_32} "oct", {STRING_32} "nov", {STRING_32} "dic">>)
			Result.set_am_pm ({STRING_32} "a.m.", {STRING_32} "p.m.")
		end

	locale_es_es: SIMPLE_I18N_LOCALE_DATA
			-- es_ES, from CLDR locale "es".
		do
			create Result.make ("es_ES", "es")
			Result.set_number_symbols ({STRING_32} ",", {STRING_32} ".", {STRING_32} "-", {STRING_32} "+",
				{STRING_32} "%/8734/", {STRING_32} "NaN", 2)
			Result.set_number_patterns ({STRING_32} "#,##0.###", {STRING_32} "#,##0.00%/160/%/164/")
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "MXN", {STRING_32} "$", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "MRU", {STRING_32} "UM"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "CAD", {STRING_32} "$", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "$%/160/AU"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "$%/160/HK"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "NZD", {STRING_32} "$%/160/NZ"],
				[{STRING_32} "SGD", {STRING_32} "$%/160/SG"],
				[{STRING_32} "USD", {STRING_32} "$%/160/US"],
				[{STRING_32} "XCG", {STRING_32} "Cg."]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "ARS", {STRING_32} "$AR"],
				[{STRING_32} "AUD", {STRING_32} "$AU"],
				[{STRING_32} "BMD", {STRING_32} "$BM"],
				[{STRING_32} "BND", {STRING_32} "$BN"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "BZD", {STRING_32} "$BZ"],
				[{STRING_32} "CAD", {STRING_32} "$CA"],
				[{STRING_32} "CLP", {STRING_32} "$CL"],
				[{STRING_32} "COP", {STRING_32} "$CO"],
				[{STRING_32} "FJD", {STRING_32} "$FJ"],
				[{STRING_32} "FKP", {STRING_32} "%/163/FK"],
				[{STRING_32} "GBP", {STRING_32} "%/163/GB"],
				[{STRING_32} "GIP", {STRING_32} "%/163/GI"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "LBP", {STRING_32} "%/163/LB"],
				[{STRING_32} "MXN", {STRING_32} "$MX"],
				[{STRING_32} "NZD", {STRING_32} "$NZ"],
				[{STRING_32} "SBD", {STRING_32} "$SB"],
				[{STRING_32} "SGD", {STRING_32} "$SG"],
				[{STRING_32} "SRD", {STRING_32} "$SR"],
				[{STRING_32} "TTD", {STRING_32} "$TT"],
				[{STRING_32} "USD", {STRING_32} "$US"],
				[{STRING_32} "UYU", {STRING_32} "$UY"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "WST", {STRING_32} "$WS"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "FCFP"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/8207/#,##0.00%/160/%/8207/%/164/;%/8207/-#,##0.00%/160/%/8207/%/164/")
			Result.set_currency ({STRING_32} "ILS", {STRING_32} "%/8362/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "%/8206/CN%/165/%/8206/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "PHP", {STRING_32} "%/8369/"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cf"],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "JPY", {STRING_32} "%/65509/", 0)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "%/20803/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg"],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "KRW", {STRING_32} "%/8361/", 0)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "NOK", {STRING_32} "kr", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00;%/164/%/160/-#,##0.00")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "C$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "FJD", {STRING_32} "FJ$"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "SBD", {STRING_32} "SI$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "PLN", {STRING_32} "z%/322/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "BRL", {STRING_32} "R$", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "EUR", {STRING_32} "%/8364/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "RUB", {STRING_32} "%/8381/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "A$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TMT", {STRING_32} "%/1058/%/1052/%/1058/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "UAH", {STRING_32} "%/8372/"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg"],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "SEK", {STRING_32} "kr", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "BBD", {STRING_32} "Bds$"],
				[{STRING_32} "BMD", {STRING_32} "BM$"],
				[{STRING_32} "BRL", {STRING_32} "BR$"],
				[{STRING_32} "BSD", {STRING_32} "BS$"],
				[{STRING_32} "BZD", {STRING_32} "BZ$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "DKK", {STRING_32} "Dkr"],
				[{STRING_32} "DOP", {STRING_32} "RD$"],
				[{STRING_32} "EGP", {STRING_32} "EG%/163/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "ISK", {STRING_32} "Ikr"],
				[{STRING_32} "JMD", {STRING_32} "JM$"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NOK", {STRING_32} "Nkr"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "TRY", {STRING_32} "%/8378/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "THB", {STRING_32} "%/3647/"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "#,##0.00%/160/%/164/")
			Result.set_currency ({STRING_32} "UAH", {STRING_32} "%/8372/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "CNY", {STRING_32} "%/165/", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "JP%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/8361/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "TWD", {STRING_32} "NT$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
			Result.set_alpha_currency_pattern ({STRING_32} "%/164/%/160/#,##0.00")
			Result.set_currency ({STRING_32} "TWD", {STRING_32} "$", 2)
			Result.set_currency_symbols (<<
				[{STRING_32} "AUD", {STRING_32} "AU$"],
				[{STRING_32} "BRL", {STRING_32} "R$"],
				[{STRING_32} "CAD", {STRING_32} "CA$"],
				[{STRING_32} "CNY", {STRING_32} "CN%/165/"],
				[{STRING_32} "EUR", {STRING_32} "%/8364/"],
				[{STRING_32} "GBP", {STRING_32} "%/163/"],
				[{STRING_32} "HKD", {STRING_32} "HK$"],
				[{STRING_32} "ILS", {STRING_32} "%/8362/"],
				[{STRING_32} "INR", {STRING_32} "%/8377/"],
				[{STRING_32} "JPY", {STRING_32} "%/165/"],
				[{STRING_32} "KRW", {STRING_32} "%/65510/"],
				[{STRING_32} "MXN", {STRING_32} "MX$"],
				[{STRING_32} "NZD", {STRING_32} "NZ$"],
				[{STRING_32} "USD", {STRING_32} "US$"],
				[{STRING_32} "VND", {STRING_32} "%/8363/"],
				[{STRING_32} "XAF", {STRING_32} "FCFA"],
				[{STRING_32} "XCD", {STRING_32} "EC$"],
				[{STRING_32} "XCG", {STRING_32} "Cg."],
				[{STRING_32} "XOF", {STRING_32} "F%/8239/CFA"],
				[{STRING_32} "XPF", {STRING_32} "CFPF"]>>)
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
