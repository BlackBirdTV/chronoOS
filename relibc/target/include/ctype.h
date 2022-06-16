#ifndef _RELIBC_CTYPE_H
#define _RELIBC_CTYPE_H

#include <bits/ctype.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int isalnum(int c);

int isalpha(int c);

int isascii(int c);

int isblank(int c);

int iscntrl(int c);

int isdigit(int c);

int isgraph(int c);

int islower(int c);

int isprint(int c);

int ispunct(int c);

int isspace(int c);

int isupper(int c);

int isxdigit(int c);

/**
 * The comment in musl:
 * "nonsense function that should NEVER be used!"
 */
int toascii(int c);

int tolower(int c);

int toupper(int c);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_CTYPE_H */
