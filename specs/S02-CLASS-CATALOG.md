# S02-CLASS-CATALOG.md

**Library:** simple_i18n
**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Class Summary

| Class | Type | Role | Inherits |
|-------|------|------|----------|
| SIMPLE_I18N | Effective | Main facade | SHARED_I18N_PLURAL_TOOLS |

## 2. Class Details

### SIMPLE_I18N

**Purpose:** Simple internationalization wrapper for ISE i18n library. Provides in-memory programmatic translation registration, .mo file loading, context-aware translations, plural form support, and locale-aware formatting.

**Role:** Primary facade - the only public class users need to interact with.

**Creation Procedures:**
- `make` - Create with system locale
- `make_with_locale (a_locale_code: STRING)` - Create with specific locale
- `make_from_directory (a_translations_dir: STRING)` - Create loading .mo files

**Feature Groups:**

| Group | Features | Purpose |
|-------|----------|---------|
| Access | language, region, locale_name, translation_count, available_locales | Locale identity and state |
| Locale Management | set_locale, has_locale | Change/query locales |
| Translation Registration | register_translation, register_translation_with_context, register_plural_translation, register_plural_forms, register_translations, clear_translations | Programmatic translation setup |
| Translation Lookup | translate, translate_in_context, translate_plural, translate_plural_in_context, has_translation | Get translations |
| String Formatting | format, translate_format | Placeholder substitution |
| Date/Time Formatting | format_date, format_time, format_date_time | Locale-aware temporal formatting |
| Number Formatting | format_number, format_integer, format_currency | Locale-aware numeric formatting |
| Locale Information | decimal_separator, thousands_separator, currency_symbol, date_format, time_format, short_date_format, short_time_format | Access formatting patterns |
| Status Report | is_system_locale, has_mo_translations | Query locale state |

## 3. Internal Classes Used

| Class | Source | Purpose |
|-------|--------|---------|
| I18N_LOCALE_MANAGER | ISE i18n | Load .mo translation files |
| I18N_LOCALE | ISE i18n | Full locale with dictionary and formatters |
| I18N_LOCALE_ID | ISE i18n | Locale identification (language_region) |
| I18N_LOCALE_INFO | ISE i18n | Formatting information |
| I18N_HOST_LOCALE_IMP | ISE i18n | Host system locale detection |
| I18N_DICTIONARY_ENTRY | ISE i18n | Individual translation entries |
| I18N_DATE_FORMATTER | ISE i18n | Date formatting |
| I18N_VALUE_FORMATTER | ISE i18n | Number formatting |
| I18N_CURRENCY_FORMATTER | ISE i18n | Currency formatting |
| HASH_TABLE | base | In-memory translation storage |

## 4. Class Hierarchy

```
SHARED_I18N_PLURAL_TOOLS
    |
    +-- SIMPLE_I18N
```

## 5. Inheritance Rationale

SIMPLE_I18N inherits from SHARED_I18N_PLURAL_TOOLS to access plural reduction utilities (for languages with complex plural rules like Russian or Arabic). The inheritance is hidden via export {NONE}.

---

*Generated as backwash specification from existing implementation.*
