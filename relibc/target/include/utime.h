#ifndef _RELIBC_UTIME_H
#define _RELIBC_UTIME_H

struct utimbuf {
  time_t actime;
  time_t modtime;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int utime(const char *filename, const struct utimbuf *times);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_UTIME_H */
