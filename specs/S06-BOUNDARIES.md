# S06-BOUNDARIES.md

**Library:** simple_i18n
**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Input Boundaries

### Locale Codes

| Boundary | Value | Behavior |
|----------|-------|----------|
| Empty string | "" | Precondition violation |
| Single char | "a" | May create invalid locale, no error |
| Very long | 1000+ chars | Accepted, but likely invalid locale |
| Unicode | Accented chars | May not match any system locale |

### Translation Keys

| Boundary | Value | Behavior |
|----------|-------|----------|
| Empty string | "" | Precondition violation |
| Single char | "a" | Valid key |
| Very long | 10000+ chars | Valid key (memory-limited) |
| Unicode | Full UTF-32 | Supported in STRING_32 keys |
| Special chars | EOT, NULL | May interfere with context encoding |

### Translation Values

| Boundary | Value | Behavior |
|----------|-------|----------|
| Empty string | "" | Precondition violation for registration |
| Unicode | Full UTF-32 | Fully supported |
| Placeholders | $1, $2 | Interpreted during format |
| Escaped $ | No escape mechanism | Use different placeholder pattern |

## 2. Output Boundaries

### translate/translate_plural

| Condition | Result |
|-----------|--------|
| Key found | Translation string |
| Key not found | Original key returned (fail-safe) |
| Empty result | Never - always returns non-empty |
| Void | Never - postcondition guarantees |

### format

| Condition | Result |
|-----------|--------|
| No placeholders | Template unchanged |
| Missing args | Placeholders remain in output |
| Extra args | Ignored |
| Type mismatch | .out conversion used |

### Numeric Formatting

| Boundary | format_number | format_integer | format_currency |
|----------|--------------|----------------|-----------------|
| Zero | "0" or "0.0" | "0" | "$0.0" |
| Negative | "-123.45" | "-1,234" | "-$123.45" |
| Very large | Scientific notation possible | With grouping | With grouping |
| NaN | Platform-dependent | N/A | Platform-dependent |
| Infinity | Platform-dependent | N/A | Platform-dependent |

## 3. Plural Count Boundaries

| Count | English Form | Slavic Form |
|-------|--------------|-------------|
| -1 | Plural | Plural (absolute value not used) |
| 0 | Plural | Form 2 |
| 1 | Singular | Form 0 (ends in 1) |
| 2-4 | Plural | Form 1 |
| 5-20 | Plural | Form 2 |
| 21 | Plural | Form 0 (ends in 1) |
| 22-24 | Plural | Form 1 |
| 25+ | Plural | Form 2 |

## 4. Date/Time Boundaries

### Date Boundaries

| Boundary | Behavior |
|----------|----------|
| Year 0 | Platform-dependent formatting |
| Negative year | Platform-dependent |
| Year 9999+ | May overflow format patterns |
| Invalid month (13) | Undefined behavior |
| Invalid day (32) | Undefined behavior |

### Time Boundaries

| Boundary | Behavior |
|----------|----------|
| Hour 0 | "12:00 AM" (12-hour) or "00:00" (24-hour) |
| Hour 23 | "11:00 PM" or "23:00" |
| Hour 24+ | Undefined behavior |
| Minute/Second 60+ | Undefined behavior |

## 5. Collection Boundaries

### register_translations Array

| Boundary | Behavior |
|----------|----------|
| Empty array | Precondition violation |
| Null elements | Skipped via attached check |
| 1 element | Valid, single registration |
| 1000+ elements | Valid, may be slow |

### available_locales List

| Condition | Result |
|-----------|--------|
| No locale manager | List with single current locale |
| With locale manager | All available from manager |

## 6. Integration Boundaries

### ISE i18n Library

| Boundary | Handling |
|----------|----------|
| Missing i18n.ecf | Compile error |
| Incompatible version | May have API differences |
| Missing NLS DLLs | Runtime error on Windows |

### simple_date Library

| Boundary | Handling |
|----------|----------|
| Missing simple_date | Compile error |
| Invalid SIMPLE_DATE | Undefined formatting |

## 7. Error Conditions

### No Error Raised

| Condition | Behavior Instead |
|-----------|------------------|
| Key not found | Return key as translation |
| Locale unavailable | Use default formatting |
| .mo file missing | Use in-memory translations |
| Invalid .mo format | Silent failure (ISE library handles) |

### Precondition Violations

| Condition | Triggers |
|-----------|----------|
| Empty key | Assertion failure in debug |
| Empty translation | Assertion failure in debug |
| Empty locale code | Assertion failure in debug |
| Void template | Assertion failure in debug |

## 8. Capacity Limits

| Resource | Limit | Notes |
|----------|-------|-------|
| Translation count | Memory-limited | No artificial cap |
| Key length | STRING_32 max | ~2 billion chars |
| Value length | STRING_32 max | ~2 billion chars |
| Placeholder count | TUPLE capacity | ~20 practical |
| Locale name length | ~50 chars typical | No hard limit |

---

*Generated as backwash specification from existing implementation.*
