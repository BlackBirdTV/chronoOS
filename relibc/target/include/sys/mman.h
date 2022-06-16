#ifndef _SYS_MMAN_H
#define _SYS_MMAN_H

#include <stdint.h>
#include <sys/types.h>

#define MAP_ANON 32

#define MAP_ANONYMOUS MAP_ANON

#if defined(__linux__)
#define MAP_FIXED 16
#endif

#if defined(__redox__)
#define MAP_FIXED 4
#endif

#if defined(__linux__)
#define MAP_FIXED_NOREPLACE 1048576
#endif

#if defined(__redox__)
#define MAP_FIXED_NOREPLACE 12
#endif

#define MAP_PRIVATE 2

#define MAP_SHARED 1

#define MAP_TYPE 15

#define MS_ASYNC 1

#define MS_INVALIDATE 2

#define MS_SYNC 4

#if defined(__linux__)
#define PROT_EXEC 4
#endif

#if defined(__redox__)
#define PROT_EXEC 1
#endif

#if defined(__linux__)
#define PROT_NONE 0
#endif

#if defined(__redox__)
#define PROT_NONE 0
#endif

#if defined(__linux__)
#define PROT_READ 1
#endif

#if defined(__redox__)
#define PROT_READ 4
#endif

#if defined(__linux__)
#define PROT_WRITE 2
#endif

#if defined(__redox__)
#define PROT_WRITE 2
#endif

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int mlock(const void *addr, uintptr_t len);

int mlockall(int flags);

void *mmap(void *addr, size_t len, int prot, int flags, int fildes, off_t off);

int mprotect(void *addr, size_t len, int prot);

int msync(void *addr, size_t len, int flags);

int munlock(const void *addr, uintptr_t len);

int munlockall(void);

int munmap(void *addr, size_t len);

int shm_open(const char *name, int oflag, mode_t mode);

int shm_unlink(const char *name);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_MMAN_H */

#include <bits/sys/mman.h>
