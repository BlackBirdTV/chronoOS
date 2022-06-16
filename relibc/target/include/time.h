#ifndef _RELIBC_TIME_H
#define _RELIBC_TIME_H

#include <sys/types.h>
#include <stdint.h>
#include <stddef.h>

#define CLOCKS_PER_SEC 1000000

#if defined(__linux__)
#define CLOCK_BOOTTIME 7
#endif

#if defined(__linux__)
#define CLOCK_BOOTTIME_ALARM 9
#endif

#if defined(__linux__)
#define CLOCK_MONOTONIC 1
#endif

#if defined(__redox__)
#define CLOCK_MONOTONIC 4
#endif

#if defined(__linux__)
#define CLOCK_MONOTONIC_COARSE 6
#endif

#if defined(__linux__)
#define CLOCK_MONOTONIC_RAW 4
#endif

#if defined(__linux__)
#define CLOCK_PROCESS_CPUTIME_ID 2
#endif

#if defined(__linux__)
#define CLOCK_REALTIME 0
#endif

#if defined(__redox__)
#define CLOCK_REALTIME 1
#endif

#if defined(__linux__)
#define CLOCK_REALTIME_ALARM 8
#endif

#if defined(__linux__)
#define CLOCK_REALTIME_COARSE 5
#endif

#if defined(__linux__)
#define CLOCK_TAI 11
#endif

#if defined(__linux__)
#define CLOCK_THREAD_CPUTIME_ID 3
#endif

struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  const char *tm_zone;
};

struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

char *asctime(const struct tm *timeptr);

char *asctime_r(const struct tm *tm, char *buf);

clock_t clock(void);

int clock_gettime(clockid_t clock_id, struct timespec *tp);

char *ctime(const time_t *clock);

char *ctime_r(const time_t *clock, char *buf);

double difftime(time_t time1, time_t time0);

struct tm *gmtime(const time_t *timer);

struct tm *gmtime_r(const time_t *clock, struct tm *result);

struct tm *localtime(const time_t *clock);

struct tm *localtime_r(const time_t *clock, struct tm *t);

time_t mktime(struct tm *t);

int nanosleep(const struct timespec *rqtp, struct timespec *rmtp);

size_t strftime(char *s, size_t maxsize, const char *format, const struct tm *timeptr);

time_t time(time_t *tloc);

time_t timegm(struct tm *tm);

time_t timelocal(struct tm *tm);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_TIME_H */
