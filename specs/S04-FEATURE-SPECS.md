# S04-FEATURE-SPECS.md

**Library:** simple_i18n
**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Creation Procedures

### make

```eiffel
make
    -- Create i18n helper with system locale.
```

**Behavior:** Initializes SIMPLE_I18N using the system's default locale. Creates empty in-memory translation table, detects system locale via I18N_HOST_LOCALE_IMP, and initializes formatters.

**Usage:**
```eiffel
i18n: SIMPLE_I18N
create i18n.make
```

### make_with_locale

```eiffel
make_with_locale (a_locale_code: STRING)
    -- Create i18n helper with specified locale (e.g., "en_US", "fr_FR").
    require
        locale_code_not_empty: not a_locale_code.is_empty
```

**Behavior:** Initializes with a specific locale instead of system default. Locale code should follow format "language_REGION" (e.g., "en_US", "fr_FR", "de_DE").

### make_from_directory

```eiffel
make_from_directory (a_translations_dir: STRING)
    -- Create i18n helper loading translations from .mo files.
    require
        directory_not_empty: not a_translations_dir.is_empty
```

**Behavior:** Loads GNU gettext .mo files from the specified directory. Files should be named after their locale (e.g., en_US.mo, fr_FR.mo). Falls back to in-memory translations if .mo file not found for current locale.

## 2. Access Features

### language

```eiffel
language: STRING_32
    -- Current language code (e.g., "en", "fr")
```

### region

```eiffel
region: STRING_32
    -- Current region code (e.g., "US", "FR")
```

### locale_name

```eiffel
locale_name: STRING_32
    -- Full locale name (e.g., "en_US")
```

### translation_count

```eiffel
translation_count: INTEGER
    -- Number of registered in-memory translations
```

### available_locales

```eiffel
available_locales: LIST [I18N_LOCALE_ID]
    -- List of available locales
```

## 3. Locale Management

### set_locale

```eiffel
set_locale (a_locale_code: STRING)
    -- Change to a different locale.
    require
        locale_code_not_empty: not a_locale_code.is_empty
```

**Behavior:** Changes the current locale, re-initializes formatters, and attempts to load .mo translations if a locale manager exists.

### has_locale

```eiffel
has_locale (a_locale_code: STRING): BOOLEAN
    -- Is the specified locale available?
    require
        locale_code_not_empty: not a_locale_code.is_empty
```

## 4. Translation Registration

### register_translation

```eiffel
register_translation (a_key, a_translation: READABLE_STRING_GENERAL)
    -- Register a simple translation.
    require
        key_not_empty: not a_key.is_empty
        translation_not_empty: not a_translation.is_empty
    ensure
        registered: has_translation (a_key)
```

**Usage:**
```eiffel
i18n.register_translation ("hello", "Bonjour")
i18n.register_translation ("goodbye", "Au revoir")
```

### register_translation_with_context

```eiffel
register_translation_with_context (a_key, a_translation, a_context: READABLE_STRING_GENERAL)
    -- Register a translation with context disambiguation.
```

**Behavior:** Uses gettext-style context encoding (context + EOT + key). Allows the same key to have different translations in different contexts.

**Usage:**
```eiffel
i18n.register_translation_with_context ("open", "Ouvrir", "menu")
i18n.register_translation_with_context ("open", "Ouvert", "status")
```

### register_plural_translation

```eiffel
register_plural_translation (a_singular_key, a_plural_key,
    a_singular_translation, a_plural_translation: READABLE_STRING_GENERAL)
    -- Register a translation with singular and plural forms.
```

**Usage:**
```eiffel
i18n.register_plural_translation ("item", "items", "article", "articles")
```

### register_plural_forms

```eiffel
register_plural_forms (a_singular_key, a_plural_key: READABLE_STRING_GENERAL;
    a_forms: ARRAY [STRING])
    -- Register plural forms for languages with more than 2 forms.
```

**Behavior:** Supports languages like Russian (3 forms) or Arabic (6 forms) that have complex plural rules.

**Usage:**
```eiffel
-- Russian: 1 apple, 2-4 apples, 5+ apples
i18n.register_plural_forms ("apple", "apples", <<"яблоко", "яблока", "яблок">>)
```

### register_translations

```eiffel
register_translations (a_pairs: ARRAY [TUPLE [key, translation: STRING]])
    -- Register multiple translations at once.
```

### clear_translations

```eiffel
clear_translations
    -- Remove all registered in-memory translations.
    ensure
        empty: translation_count = 0
```

## 5. Translation Lookup

### translate

```eiffel
translate (a_key: READABLE_STRING_GENERAL): STRING_32
    -- Get translation for key, or return the key if not found.
    require
        key_not_empty: not a_key.is_empty
    ensure
        result_not_void: Result /= Void
```

**Behavior:** First checks .mo file translations, then in-memory translations. Returns the key itself if no translation found (fail-safe).

### translate_in_context

```eiffel
translate_in_context (a_key: READABLE_STRING_GENERAL;
    a_context: detachable READABLE_STRING_GENERAL): STRING_32
    -- Get translation for key in the given context.
```

### translate_plural

```eiffel
translate_plural (a_singular_key: READABLE_STRING_GENERAL; a_count: INTEGER): STRING_32
    -- Get singular or plural translation based on count.
```

**Usage:**
```eiffel
message := i18n.translate_plural ("item", cart_count)
-- Returns "article" for count=1, "articles" for count>1 (French)
```

### translate_plural_in_context

```eiffel
translate_plural_in_context (a_singular_key: READABLE_STRING_GENERAL;
    a_context: detachable READABLE_STRING_GENERAL; a_count: INTEGER): STRING_32
```

### has_translation

```eiffel
has_translation (a_key: READABLE_STRING_GENERAL): BOOLEAN
    -- Is there a translation for key?
```

## 6. String Formatting

### format

```eiffel
format (a_template: READABLE_STRING_GENERAL; a_args: TUPLE): STRING_32
    -- Format string with placeholder substitution ($1, $2, etc.).
```

**Usage:**
```eiffel
result := i18n.format ("Hello, $1! You have $2 messages.", ["Alice", 5])
-- Returns "Hello, Alice! You have 5 messages."
```

### translate_format

```eiffel
translate_format (a_key: READABLE_STRING_GENERAL; a_args: TUPLE): STRING_32
    -- Translate key and format with arguments.
```

**Usage:**
```eiffel
i18n.register_translation ("greeting", "Bonjour, $1!")
result := i18n.translate_format ("greeting", ["Alice"])
-- Returns "Bonjour, Alice!"
```

## 7. Date/Time Formatting

### format_date

```eiffel
format_date (a_date: SIMPLE_DATE): STRING_32
    -- Format date according to current locale.
```

### format_time

```eiffel
format_time (a_time: SIMPLE_TIME): STRING_32
    -- Format time according to current locale.
```

### format_date_time

```eiffel
format_date_time (a_date_time: SIMPLE_DATE_TIME): STRING_32
    -- Format date and time according to current locale.
```

## 8. Number Formatting

### format_number

```eiffel
format_number (a_value: DOUBLE): STRING_32
    -- Format number with locale-specific decimal separator.
```

### format_integer

```eiffel
format_integer (a_value: INTEGER): STRING_32
    -- Format integer with locale-specific thousands separator.
```

### format_currency

```eiffel
format_currency (a_value: DOUBLE): STRING_32
    -- Format currency value with locale-specific symbol.
```

## 9. Locale Information Queries

| Feature | Returns | Example (en_US) | Example (de_DE) |
|---------|---------|-----------------|-----------------|
| decimal_separator | STRING_32 | "." | "," |
| thousands_separator | STRING_32 | "," | "." |
| currency_symbol | STRING_32 | "$" | "EUR" |
| date_format | STRING_32 | "MMMM d, yyyy" | "d. MMMM yyyy" |
| time_format | STRING_32 | "h:mm:ss a" | "HH:mm:ss" |
| short_date_format | STRING_32 | "M/d/yy" | "dd.MM.yy" |
| short_time_format | STRING_32 | "h:mm a" | "HH:mm" |

## 10. Status Report

### is_system_locale

```eiffel
is_system_locale: BOOLEAN
    -- Is using the system default locale?
```

### has_mo_translations

```eiffel
has_mo_translations: BOOLEAN
    -- Were translations loaded from .mo files?
```

---

*Generated as backwash specification from existing implementation.*
