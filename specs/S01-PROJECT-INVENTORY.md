# S01-PROJECT-INVENTORY.md

**Library:** simple_i18n
**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Project Overview

| Field | Value |
|-------|-------|
| Name | simple_i18n |
| Purpose | Internationalization wrapper for ISE i18n library |
| Phase | Production |
| Primary Facade | SIMPLE_I18N |
| ECF | simple_i18n.ecf |

## 2. File Inventory

### Source Files

| File | Class | LOC | Purpose |
|------|-------|-----|---------|
| src/simple_i18n.e | SIMPLE_I18N | ~660 | Main facade - translation and locale formatting |

### Configuration Files

| File | Purpose |
|------|---------|
| simple_i18n.ecf | EiffelStudio project configuration |
| simple_i18n.rc | Windows resource file |

### Documentation Files

| File | Purpose |
|------|---------|
| README.md | Library overview and usage |
| CHANGELOG.md | Version history |
| research/SIMPLE_I18N_RESEARCH.md | 7-step research document |

### Test Files

| File | Purpose |
|------|---------|
| testing/i18n_test_app.e | Test application |

## 3. Dependencies

### ISE Libraries

| Library | ECF Path | Purpose |
|---------|----------|---------|
| i18n | $ISE_LIBRARY/library/i18n/i18n.ecf | Core i18n functionality |
| time | $ISE_LIBRARY/library/time/time.ecf | Date/time classes |
| base | $ISE_LIBRARY/library/base/base.ecf | Base classes |

### simple_* Libraries

| Library | Purpose |
|---------|---------|
| simple_date | SIMPLE_DATE, SIMPLE_TIME, SIMPLE_DATE_TIME classes |

## 4. Build Targets

| Target | Type | Purpose |
|--------|------|---------|
| simple_i18n | library | Main library build |
| simple_i18n_tests | executable | Test runner |

## 5. External Dependencies

- Windows NLS (National Language Support) for Windows locale detection
- POSIX locale APIs for Linux/macOS

---

*Generated as backwash specification from existing implementation.*
