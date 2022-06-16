#ifndef _RELIBC_STRINGS_H
#define _RELIBC_STRINGS_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int bcmp(const void *first, const void *second, size_t n);

void bcopy(const void *src, void *dst, size_t n);

void bzero(void *dst, size_t n);

int ffs(int i);

char *index(const char *s, int c);

char *rindex(const char *s, int c);

int strcasecmp(const char *first, const char *second);

int strncasecmp(const char *first, const char *second, size_t n);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_STRINGS_H */
