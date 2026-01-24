# Drift Analysis: simple_i18n

Generated: 2026-01-24
Method: `ec.exe -flatshort` vs `specs/*.md` + `research/*.md`

## Specification Sources

| Source | Files | Lines |
|--------|-------|-------|
| specs/*.md | 8 | 1232 |
| research/*.md | 1 | 219 |

## Classes Analyzed

| Class | Spec'd Features | Actual Features | Drift |
|-------|-----------------|-----------------|-------|
| SIMPLE_I18N | 15 | 63 | +48 |

## Feature-Level Drift

### Specified, Implemented ✓
- `available_locales` ✓
- `currency_symbol` ✓

### Specified, NOT Implemented ✗
- `currency_decimal_separator` ✗
- `currency_formatter` ✗
- `date_formatter` ✗
- `four_plural_forms_special_slovenian` ✗
- `long_date_format` ✗
- `long_time_format` ✗
- `one_plural_form` ✗
- `system_locale` ✗
- `three_plural_forms_special_slavic` ✗
- `two_plural_forms_singular_one` ✗
- ... and 3 more

### Implemented, NOT Specified
- `Io`
- `Operating_environment`
- `Plural_tools`
- `author`
- `clear_translations`
- `conforms_to`
- `copy`
- `copyright`
- `current_locale_id`
- `current_locale_id_not_void`
- ... and 51 more

## Summary

| Category | Count |
|----------|-------|
| Spec'd, implemented | 2 |
| Spec'd, missing | 13 |
| Implemented, not spec'd | 61 |
| **Overall Drift** | **HIGH** |

## Conclusion

**simple_i18n** has high drift. Significant gaps between spec and implementation.
