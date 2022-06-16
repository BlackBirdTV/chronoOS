#ifndef _SYS_RESOURCE_H
#define _SYS_RESOURCE_H

#include <sys/types.h>
#include <stdint.h>
#include <sys/time.h>

#define RLIMIT_AS 9

#define RLIMIT_CORE 4

#define RLIMIT_CPU 0

#define RLIMIT_DATA 2

#define RLIMIT_FSIZE 1

#define RLIMIT_LOCKS 10

#define RLIMIT_MEMLOCK 8

#define RLIMIT_MSGQUEUE 12

#define RLIMIT_NICE 13

#define RLIMIT_NLIMITS 15

#define RLIMIT_NOFILE 7

#define RLIMIT_NPROC 6

#define RLIMIT_RSS 5

#define RLIMIT_RTPRIO 14

#define RLIMIT_SIGPENDING 11

#define RLIMIT_STACK 3

#define RLIM_INFINITY 18446744073709551615ULL

#define RLIM_SAVED_CUR RLIM_INFINITY

#define RLIM_SAVED_MAX RLIM_INFINITY

typedef uint64_t rlim_t;

struct rlimit {
  rlim_t rlim_cur;
  rlim_t rlim_max;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int getrlimit(int resource, struct rlimit *rlp);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_RESOURCE_H */

#include <bits/sys/resource.h>
