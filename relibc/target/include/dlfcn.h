#ifndef _RELIBC_DLFCN_H
#define _RELIBC_DLFCN_H

#define RTLD_GLOBAL 256

#define RTLD_LAZY 1

#define RTLD_LOCAL 0

#define RTLD_NOW 2

typedef struct {
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int dladdr(void *addr, Dl_info *info);

int dlclose(void *handle);

char *dlerror(void);

void *dlopen(const char *cfilename, int flags);

void *dlsym(void *handle, const char *symbol);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_DLFCN_H */
