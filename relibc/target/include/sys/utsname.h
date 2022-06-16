#ifndef _SYS_UTSNAME_H
#define _SYS_UTSNAME_H

#define UTSLENGTH 65

struct utsname {
  char sysname[UTSLENGTH];
  char nodename[UTSLENGTH];
  char release[UTSLENGTH];
  char version[UTSLENGTH];
  char machine[UTSLENGTH];
  char domainname[UTSLENGTH];
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int uname(struct utsname *uts);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_UTSNAME_H */
