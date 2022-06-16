#ifndef _RELIBC_FLOAT_H
#define _RELIBC_FLOAT_H

#include <sys/types.h>
#include <bits/float.h>

#define FLT_RADIX 2

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int flt_rounds(void);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_FLOAT_H */
