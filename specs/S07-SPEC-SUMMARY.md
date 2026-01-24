# S07-SPEC-SUMMARY.md

**Library:** simple_i18n
**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Library Purpose

simple_i18n provides a simplified wrapper around ISE's i18n library for internationalization in Eiffel applications. It enables:

- Programmatic translation registration (no external files required)
- GNU gettext .mo file loading (full translation file support)
- Locale-aware date, time, number, and currency formatting
- Plural form handling (including complex plural rules)
- Context-aware translations (disambiguation)

## 2. API Summary

### Single Class Facade

**SIMPLE_I18N** is the only class users need. All functionality accessed through one object.

### Core Operations

| Category | Key Features |
|----------|--------------|
| Setup | make, make_with_locale, make_from_directory |
| Register | register_translation, register_plural_translation |
| Lookup | translate, translate_plural, has_translation |
| Format | format, format_date, format_number, format_currency |
| Query | language, region, locale_name |

## 3. Contract Highlights

### Invariants

- All internal state always valid (translations, host_locale, current_locale_id, locale_info)
- No nil checks needed after construction

### Key Preconditions

- Non-empty keys for all translation operations
- Non-empty translations for registration
- Non-void date/time objects for formatting

### Key Postconditions

- translate/format operations NEVER return Void
- Missing translations return the key itself (fail-safe)

## 4. Design Decisions

| Decision | Rationale |
|----------|-----------|
| Fail-safe translation | UI code should never crash on missing translation |
| STRING_32 throughout | Full Unicode support |
| Dual translation sources | In-memory for simple cases, .mo for full i18n |
| Hidden ISE complexity | Users don't need to understand i18n internals |

## 5. Usage Patterns

### Basic Usage

```eiffel
i18n: SIMPLE_I18N
create i18n.make

i18n.register_translation ("hello", "Bonjour")
i18n.register_translation ("goodbye", "Au revoir")

print (i18n.translate ("hello"))  -- Bonjour
print (i18n.translate ("unknown"))  -- unknown (fail-safe)
```

### Plural Usage

```eiffel
i18n.register_plural_translation ("item", "items", "article", "articles")

print (i18n.translate_plural ("item", 1))  -- article
print (i18n.translate_plural ("item", 5))  -- articles
```

### Formatting

```eiffel
message := i18n.translate_format ("greeting", ["Alice", 5])
formatted_date := i18n.format_date (today)
price := i18n.format_currency (99.99)
```

## 6. Dependencies

| Dependency | Required | Purpose |
|------------|----------|---------|
| ISE i18n | Yes | Core i18n functionality |
| ISE time | Yes | Date/time classes |
| simple_date | Yes | SIMPLE_DATE, SIMPLE_TIME |

## 7. Limitations

| Limitation | Workaround |
|------------|------------|
| Simple plural rules in-memory | Use .mo files for complex languages |
| Not thread-safe | One instance per thread |
| No placeholder escaping | Use different marker pattern |
| No automatic locale detection changes | Call set_locale manually |

## 8. Test Coverage

Based on research document, 10 tests implemented:
- test_create_with_system_locale
- test_create_with_specific_locale
- test_register_translation
- test_translate
- test_translate_missing
- test_plural_translation
- test_format_placeholders
- test_translate_format
- test_register_multiple
- test_locale_info

---

*Generated as backwash specification from existing implementation.*
