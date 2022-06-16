#ifndef _RELIBC_ASSERT_H
#define _RELIBC_ASSERT_H

#include <bits/assert.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void __assert_fail(const char *func, const char *file, int line, const char *cond);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_ASSERT_H */
