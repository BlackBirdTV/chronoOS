#ifndef _SYS_FILE_H
#define _SYS_FILE_H

#define LOCK_EX 2

#define LOCK_NB 4

#define LOCK_SH 1

#define LOCK_UN 8

#define L_INCR 1

#define L_SET 0

#define L_XTND 2

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int flock(int fd, int operation);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_FILE_H */
