# SIMPLE_I18N

![Windows: tests pass](https://img.shields.io/badge/Windows-tests%20pass-0078D6?logo=windows&logoColor=white) ![Linux: tests pass](https://img.shields.io/badge/Linux-tests%20pass-FCC624?logo=linux&logoColor=black) ![macOS: tests pass](https://img.shields.io/badge/macOS-tests%20pass-000000?logo=apple&logoColor=white)

Simple internationalization wrapper for the ISE i18n library.

## Features

- In-memory programmatic translation registration
- .mo file loading via ISE I18N_LOCALE_MANAGER
- Context-aware translations
- Full plural form support (not just English-like)
- Locale-aware date/time/number/currency formatting from simple_i18n's own locale table (32 locales, from CLDR)
- System locale detection: the operating system gives only the locale's name
- String formatting with placeholders

## Installation

Add to your ECF file:

```xml
<library name="simple_i18n" location="$SIMPLE_EIFFEL/simple_i18n/simple_i18n.ecf"/>
```

Set the environment variable (one-time setup for all simple_* libraries):
```
SIMPLE_EIFFEL=D:\prod
```

## Quick Start

```eiffel
local
    i18n: SIMPLE_I18N
do
    create i18n.make  -- Uses system locale

    -- Register translations
    i18n.register_translation ("hello", "Bonjour")
    i18n.register_translation ("goodbye", "Au revoir")

    -- Use translations
    print (i18n.translate ("hello"))  -- "Bonjour"

    -- Format with placeholders
    i18n.register_translation ("greeting", "Hello, $1!")
    print (i18n.translate_format ("greeting", ["John"]))
    -- Output: "Hello, John!"

    -- Format numbers/dates for locale
    print (i18n.format_currency (1234.56))  -- "$1,234.56"
end
```

## API Overview

### Creation
| Feature | Description |
|---------|-------------|
| `make` | Use system locale |
| `make_with_locale (code)` | Use specific locale |
| `make_from_directory (dir)` | Load .mo files from directory |

### Translation Registration
| Feature | Description |
|---------|-------------|
| `register_translation` | Register key/value pair |
| `register_translation_with_context` | Register with context |
| `register_plural_translation` | Register singular/plural |
| `register_plural_forms` | Register all plural forms |
| `register_translations` | Register multiple pairs |

### Translation Lookup
| Feature | Description |
|---------|-------------|
| `translate (key)` | Get translation |
| `translate_in_context` | Get with context |
| `translate_plural` | Get plural form |
| `has_translation` | Check if exists |

### Formatting
| Feature | Description |
|---------|-------------|
| `format (template, args)` | Format with $1, $2 |
| `translate_format` | Translate then format |
| `format_date`, `format_short_date` | Long and short date for locale |
| `format_time`, `format_short_time` | Time with and without seconds |
| `format_date_time` | Long date and time, joined the locale's way |
| `format_number`, `format_integer` | Format with separators and grouping |
| `format_currency` | Format in the locale's own currency |

### Locale Info
| Feature | Description |
|---------|-------------|
| `language` | Current language code |
| `region` | Current region code |
| `locale_name` | Full locale name |
| `decimal_separator`, `thousands_separator` | Locale separators |
| `currency_symbol`, `currency_code` | Locale currency |
| `date_format`, `short_date_format`, `time_format`, `short_time_format` | CLDR patterns |
| `formatting_locale_name` | The table locale formats come from |
| `is_fallback_locale` | True when the formats are another locale's: the language's, or en_US's |
| `cldr_version` | CLDR release of the table |

## Locale Data

simple_i18n formats numbers, money, dates and times from its own table,
`SIMPLE_I18N_LOCALE_TABLE`, so a program writes the same text on Windows,
Linux and macOS. The operating system supplies only the locale's name (Windows'
user default locale; `LC_ALL`, `LC_NUMERIC` or `LANG` elsewhere). Names such as
`fr_FR.UTF-8@euro`, `pt-BR` or a bare `fr` resolve to a table locale.

A locale the table does not list formats as its language's table locale,
the way CLDR's parent chain ends at the language: `de_AT` formats as `de_DE`,
`fr_BE` as `fr_FR`, `zh_Hant_HK` as `zh_TW` ("language first", Larry's ruling).
CLDR's parent links come first: English outside the United States (`en_IE`,
`en_IN`, `en_NZ`, ...) formats as `en_001`, and Latin American Spanish
(`es_AR`, `es_CO`, `es_US`, ...) as `es_419`. The money is always the requested
region's: `fr_CH` writes `1 234,50 CHF`, the French way.
Only a language the table lacks formats as `en_US`. The program can see which
was used: `is_fallback_locale` is true and `formatting_locale_name` names the
table locale, while `locale_name` still gives the name that was asked for.

The table's 32 locales: ar_SA, cs_CZ, da_DK, de_CH, de_DE, el_GR, en_001, en_AU,
en_CA, en_GB, en_US, es_419, es_ES, es_MX, fi_FI, fr_CA, fr_FR, he_IL, it_IT, ja_JP, ko_KR,
nb_NO, nl_NL, pl_PL, pt_BR, pt_PT, ru_RU, sv_SE, tr_TR, uk_UA, zh_CN, zh_TW.

Patterns are CLDR's own syntax, so `date_format` gives, for example, `d MMMM y`.

### Where the data comes from

The table is generated from the
[Unicode Common Locale Data Repository](https://cldr.unicode.org/) (CLDR),
**version 48.2.0**, by `tools/cldr_generator`, an Eiffel program that is a
development tool only: nothing in the library reads CLDR, and nothing runs at
build or run time. Only its output is committed. CLDR data is used under the
**Unicode License v3** (SPDX `Unicode-3.0`); its full text is in
[LICENSE-CLDR.txt](LICENSE-CLDR.txt). simple_i18n itself stays under the MIT
License.

To move to a new CLDR release, unpack the `cldr-core`, `cldr-numbers-full` and
`cldr-dates-full` npm packages (each to `<root>/<package>/package/...`), then
build and run the generator:

```
ec -config tools/cldr_generator/cldr_generator.ecf -target cldr_generator -finalize -c_compile
cldr_generator <root> src/simple_i18n_locale_table.e <cldr version>
```

The generator stops without writing anything if the data has an unexpected
shape or a pattern uses a letter the library does not support. Every
non-ASCII character in the table is written as a `%/code/` escape, so the
compiler reads the same text whatever encoding it takes the file to be in.

## Plural Forms

```eiffel
-- English (2 forms)
i18n.register_plural_translation ("item", "items", "item", "items")

-- Russian (3 forms: 1, 2-4, 5+)
i18n.register_plural_forms ("яблоко", "яблока",
    << "яблоко", "яблока", "яблок" >>)

print (i18n.translate_plural ("item", 5))  -- "items"
```

## Documentation

- [API Documentation](https://simple-eiffel.github.io/simple_i18n/)

## License

MIT License - see LICENSE file for details. The CLDR locale data in
`src/simple_i18n_locale_table.e` is under the Unicode License v3; see
LICENSE-CLDR.txt.

## Author

Larry Rix
