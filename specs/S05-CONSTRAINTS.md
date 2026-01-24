# S05-CONSTRAINTS.md

**Library:** simple_i18n
**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Platform Constraints

### Windows

- Uses Windows NLS (National Language Support) APIs via I18N_HOST_LOCALE_IMP
- Locale detection through GetUserDefaultLocaleName
- System locales depend on Windows language packs installed

### Linux/macOS

- Uses POSIX locale APIs via I18N_HOST_LOCALE_IMP
- Reads LC_* environment variables
- May parse /etc/locale.conf on Linux

## 2. Locale Code Format

### Supported Formats

| Format | Example | Notes |
|--------|---------|-------|
| language_REGION | en_US, fr_FR | Standard format |
| language | en, fr | Uses default region |
| language-REGION | en-US | Converted to underscore |

### Invalid Formats

- Empty string (fails precondition)
- Numeric codes (e.g., "1033" for en_US - not supported)
- Full names (e.g., "English" - not supported)

## 3. Translation Key Constraints

### Key Naming

| Constraint | Rule | Rationale |
|------------|------|-----------|
| Non-empty | Keys cannot be empty strings | Precondition enforced |
| Uniqueness | Keys must be unique within context | Later registration overwrites earlier |
| Character set | Any valid STRING_32 characters | Full Unicode support |

### Context Keys

- Context combined with key using EOT character (%/4/)
- Same key can exist with different contexts
- Context is optional (Void allowed in lookups)

## 4. Plural Form Constraints

### English-like Languages (2 forms)

- Form 0: Singular (count = 1)
- Form 1: Plural (count != 1)

### Slavic Languages (3 forms)

- Form 0: Ends in 1, not 11 (Russian: 1 яблоко)
- Form 1: Ends in 2-4, not 12-14 (Russian: 2 яблока)
- Form 2: All other (Russian: 5 яблок)

### Limitation

The simple plural reduction in SIMPLE_I18N uses English-like rules. For proper complex plural handling, use .mo files loaded via make_from_directory, which uses ISE's full plural tools.

## 5. .mo File Constraints

### File Format

- Must be valid GNU gettext .mo binary format
- Little-endian or big-endian both supported
- UTF-8 encoding recommended

### File Naming

- Files should be named: `{locale}.mo` (e.g., fr_FR.mo)
- Placed in directory passed to make_from_directory
- Subdirectories not automatically scanned

### Loading Behavior

- Silently skips if file not found for locale
- Falls back to in-memory translations
- No error raised for missing files

## 6. Formatting Constraints

### Placeholder Format

| Format | Example | Notes |
|--------|---------|-------|
| $N | $1, $2, $99 | Positional, 1-based |
| Max args | Limited by tuple capacity | Practical limit ~20 |

### Numeric Precision

- format_number: Uses host formatter or fallback with ~15 decimal digits
- format_integer: Full INTEGER range supported
- format_currency: Same precision as format_number

### Date/Time Constraints

- Requires SIMPLE_DATE, SIMPLE_TIME, or SIMPLE_DATE_TIME from simple_date library
- Invalid dates may produce undefined formatting results
- Timezone handling depends on host locale implementation

## 7. Thread Safety

### Not Thread-Safe

SIMPLE_I18N instances are NOT thread-safe. Each thread should:
- Create its own instance, OR
- Use synchronization when accessing shared instances

### SCOOP Consideration

For SCOOP environments, SIMPLE_I18N can be made separate:
```eiffel
separate i18n: SIMPLE_I18N
```

## 8. Memory Constraints

### In-Memory Translations

- HASH_TABLE initial capacity: 50 entries
- Auto-expands as needed
- No upper limit enforced (limited by available memory)

### .mo File Loading

- Entire file loaded into memory via ISE library
- Large translation files may consume significant memory
- Consider splitting very large translation sets

## 9. Performance Constraints

### Lookup Complexity

| Operation | Complexity | Notes |
|-----------|------------|-------|
| translate | O(1) average | Hash table lookup |
| has_translation | O(1) average | Hash table check |
| format | O(n*m) | n=template length, m=args |
| format_date/time | O(1) | Host formatter call |

### Initialization Cost

- make: Fast (milliseconds)
- make_with_locale: Fast (milliseconds)
- make_from_directory: Depends on .mo file size (may be slower)

---

*Generated as backwash specification from existing implementation.*
