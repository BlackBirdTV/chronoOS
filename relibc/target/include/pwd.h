#ifndef _RELIBC_PWD_H
#define _RELIBC_PWD_H

#include <stddef.h>
#include <sys/types.h>

struct passwd {
  char *pw_name;
  char *pw_passwd;
  uid_t pw_uid;
  gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void endpwent(void);

struct passwd *getpwent(void);

struct passwd *getpwnam(const char *name);

int getpwnam_r(const char *name,
               struct passwd *out,
               char *buf,
               size_t size,
               struct passwd **result);

struct passwd *getpwuid(uid_t uid);

int getpwuid_r(uid_t uid, struct passwd *out, char *buf, size_t size, struct passwd **result);

void setpwent(void);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_PWD_H */
