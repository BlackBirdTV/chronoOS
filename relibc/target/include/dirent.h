#ifndef _RELIBC_DIRENT_H
#define _RELIBC_DIRENT_H

#include <sys/types.h>

typedef struct DIR DIR;

typedef struct dirent {
  ino_t d_ino;
  off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
} dirent;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int alphasort(const dirent **first, const dirent **second);

int closedir(DIR *dir);

int dirfd(DIR *dir);

DIR *opendir(const char *path);

dirent *readdir(DIR *dir);

void rewinddir(DIR *dir);

int scandir(const char *dirp,
            dirent ***namelist,
            int (*filter)(const dirent *_),
            int (*compare)(const dirent **_, const dirent **_1));

void seekdir(DIR *dir, long off);

long telldir(DIR *dir);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_DIRENT_H */

#include <bits/dirent.h>
