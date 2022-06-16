#ifndef _SYS_TIMEB_H
#define _SYS_TIMEB_H

#include <sys/types.h>

struct timeb {
  time_t time;
  unsigned short millitm;
  short timezone;
  short dstflag;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int ftime(struct timeb *tp);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_TIMEB_H */
