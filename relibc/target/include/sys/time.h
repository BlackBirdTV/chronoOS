#ifndef _SYS_TIME_H
#define _SYS_TIME_H

#include <sys/types.h>

#define ITIMER_PROF 2

#define ITIMER_REAL 0

#define ITIMER_VIRTUAL 1

struct timeval {
  time_t tv_sec;
  suseconds_t tv_usec;
};

struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};

struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int getitimer(int which, struct itimerval *value);

int gettimeofday(struct timeval *tp, struct timezone *tzp);

int setitimer(int which, const struct itimerval *value, struct itimerval *ovalue);

int utimes(const char *path, const struct timeval *times);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_TIME_H */

#include <bits/sys/time.h>
