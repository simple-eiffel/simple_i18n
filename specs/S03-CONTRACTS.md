# S03-CONTRACTS.md

**Library:** simple_i18n
**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Class Invariants

### SIMPLE_I18N

```eiffel
invariant
    translations_not_void: translations /= Void
    host_locale_not_void: host_locale /= Void
    current_locale_id_not_void: current_locale_id /= Void
    locale_info_not_void: locale_info /= Void
```

**Rationale:**
- Core data structures must always be initialized
- Locale identity must always be known
- Ensures all operations have valid targets

## 2. Preconditions by Feature Group

### Initialization

| Feature | Precondition | Rationale |
|---------|--------------|-----------|
| make_with_locale | locale_code_not_empty: not a_locale_code.is_empty | Locale code required for initialization |
| make_from_directory | directory_not_empty: not a_translations_dir.is_empty | Directory path required for loading |

### Locale Management

| Feature | Precondition | Rationale |
|---------|--------------|-----------|
| set_locale | locale_code_not_empty: not a_locale_code.is_empty | Valid locale code required |
| has_locale | locale_code_not_empty: not a_locale_code.is_empty | Cannot check empty code |

### Translation Registration

| Feature | Precondition | Rationale |
|---------|--------------|-----------|
| register_translation | key_not_empty, translation_not_empty | Both key and value required |
| register_translation_with_context | key_not_empty, translation_not_empty, context_not_empty | Context disambiguates translations |
| register_plural_translation | singular_key_not_empty, plural_key_not_empty, singular_translation_not_empty, plural_translation_not_empty | Both forms required |
| register_plural_forms | singular_key_not_empty, plural_key_not_empty, forms_not_empty | At least one form required |
| register_translations | pairs_not_empty: not a_pairs.is_empty | At least one translation pair |

### Translation Lookup

| Feature | Precondition | Rationale |
|---------|--------------|-----------|
| translate | key_not_empty: not a_key.is_empty | Key required for lookup |
| translate_in_context | key_not_empty: not a_key.is_empty | Key required even with context |
| translate_plural | key_not_empty: not a_singular_key.is_empty | Singular key required |
| translate_plural_in_context | key_not_empty: not a_singular_key.is_empty | Key required for contextual lookup |
| has_translation | key_not_empty: not a_key.is_empty | Cannot check empty key |

### Formatting

| Feature | Precondition | Rationale |
|---------|--------------|-----------|
| format | template_not_void: a_template /= Void | Template required for formatting |
| translate_format | key_not_empty: not a_key.is_empty | Key required for translation |
| format_date | date_not_void: a_date /= Void | Valid date required |
| format_time | time_not_void: a_time /= Void | Valid time required |
| format_date_time | date_time_not_void: a_date_time /= Void | Valid datetime required |

## 3. Postconditions by Feature Group

### Translation Registration

| Feature | Postcondition | Rationale |
|---------|---------------|-----------|
| register_translation | registered: has_translation (a_key) | Guarantees registration succeeded |
| clear_translations | empty: translation_count = 0 | All translations removed |

### Translation Lookup

| Feature | Postcondition | Rationale |
|---------|---------------|-----------|
| translate | result_not_void: Result /= Void | Always returns a string (key if no translation) |
| translate_in_context | result_not_void: Result /= Void | Never returns Void |
| translate_plural | result_not_void: Result /= Void | Always returns a string |
| translate_plural_in_context | result_not_void: Result /= Void | Never returns Void |

### Formatting

| Feature | Postcondition | Rationale |
|---------|---------------|-----------|
| format | result_not_void: Result /= Void | Always returns formatted string |
| translate_format | result_not_void: Result /= Void | Never returns Void |
| format_date | result_not_void: Result /= Void | Always returns formatted date |
| format_time | result_not_void: Result /= Void | Always returns formatted time |
| format_date_time | result_not_void: Result /= Void | Always returns formatted datetime |
| format_number | result_not_void: Result /= Void | Always returns formatted number |
| format_integer | result_not_void: Result /= Void | Always returns formatted integer |
| format_currency | result_not_void: Result /= Void | Always returns formatted currency |

## 4. Contract Philosophy

The SIMPLE_I18N class follows these design principles:

1. **Fail-Safe Lookup:** Translation lookup never fails - if a key is not found, the key itself is returned. This prevents runtime failures in UI code.

2. **Non-Void Results:** All formatting operations guarantee non-void results, making void-safe usage straightforward.

3. **Registration Validation:** Only registration operations check for empty strings, as the data quality matters at input time.

4. **Invariant Focus:** The class invariants ensure all internal state is always valid, reducing the need for defensive checks in individual features.

---

*Generated as backwash specification from existing implementation.*
