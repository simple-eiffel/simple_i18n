# SIMPLE_I18N

Simple internationalization wrapper for the ISE i18n library.

## Features

- In-memory programmatic translation registration
- .mo file loading via ISE I18N_LOCALE_MANAGER
- Context-aware translations
- Full plural form support (not just English-like)
- Locale-aware date/time/number/currency formatting
- System locale detection
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
| `format_date` | Format date for locale |
| `format_time` | Format time for locale |
| `format_number` | Format with separators |
| `format_currency` | Format with symbol |

### Locale Info
| Feature | Description |
|---------|-------------|
| `language` | Current language code |
| `region` | Current region code |
| `locale_name` | Full locale name |
| `decimal_separator` | Locale decimal |
| `currency_symbol` | Locale currency |

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

MIT License - see LICENSE file for details.

## Author

Larry Rix
