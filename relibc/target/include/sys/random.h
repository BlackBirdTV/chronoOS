#ifndef _SYS_RANDOM_H
#define _SYS_RANDOM_H

#include <sys/types.h>

#define GRND_NONBLOCK 1

#define GRND_RANDOM 2

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

ssize_t getrandom(void *buf, size_t buflen, unsigned int flags);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_RANDOM_H */
