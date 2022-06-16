#include <bits/wctype.h>

#ifndef _RELIBC_WCTYPE_H
#define _RELIBC_WCTYPE_H

#include <wchar.h>

typedef uint32_t wctype_t;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int iswalnum(wint_t wc);

int iswalpha(wint_t wc);

int iswblank(wint_t wc);

int iswcntrl(wint_t wc);

int iswctype(wint_t wc, wctype_t desc);

int iswdigit(wint_t wc);

int iswgraph(wint_t wc);

int iswlower(wint_t wc);

int iswprint(wint_t wc);

int iswpunct(wint_t wc);

int iswspace(wint_t wc);

int iswupper(wint_t wc);

int iswxdigit(wint_t wc);

wint_t towlower(wint_t wc);

wint_t towupper(wint_t wc);

wctype_t wctype(const char *name);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_WCTYPE_H */
