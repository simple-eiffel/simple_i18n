/* simple_i18n: the user's locale name from macOS (CFLocale, which NSLocale.currentLocale
   wraps). Only the name: every format comes from simple_i18n's own CLDR table. A program
   started from the Finder has no LANG, so the environment cannot be trusted there.
   Elsewhere this answers 0 and simple_i18n reads Windows' or the environment's name. */
#ifndef SIMPLE_I18N_LOCALE_H
#define SIMPLE_I18N_LOCALE_H

#ifdef __APPLE__
#include <CoreFoundation/CoreFoundation.h>
#include <string.h>
/* The current locale's identifier ("en_US", "de_AT@rg=chzzzz") into `a_buf' (NUL-ended,
   ASCII); its length, or 0 when there is none or it does not fit. */
static int si_mac_locale_name(char *a_buf, int a_cap)
{
	int l_count = 0;
	CFLocaleRef l_locale = CFLocaleCopyCurrent();
	if (l_locale) {
		CFStringRef l_id = CFLocaleGetIdentifier(l_locale);
		if (l_id && a_cap > 1 && CFStringGetCString(l_id, a_buf, a_cap, kCFStringEncodingASCII))
			l_count = (int)strlen(a_buf);
		CFRelease(l_locale);
	}
	return l_count;
}
#else
static int si_mac_locale_name(char *a_buf, int a_cap) { (void)a_buf; (void)a_cap; return 0; }
#endif

#endif
