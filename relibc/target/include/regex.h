#ifndef _RELIBC_REGEX_H
#define _RELIBC_REGEX_H

#include <sys/types.h>

#define REG_BADBR 11

#define REG_BADPAT 2

#define REG_BADRPT 14

#define REG_EBRACE 10

#define REG_EBRACK 7

#define REG_ECOLLATE 3

#define REG_ECTYPE 4

#define REG_EESCAPE 5

#define REG_ENOSYS 8

#define REG_EPAREN 9

#define REG_ERANGE 12

#define REG_ESPACE 13

#define REG_ESUBREG 6

#define REG_EXTENDED 1

#define REG_ICASE 2

#define REG_NEWLINE 8

#define REG_NOMATCH 1

#define REG_NOSUB 4

#define REG_NOTBOL 16

#define REG_NOTEOL 32

typedef struct {
  void *ptr;
  size_t length;
  size_t capacity;
  int cflags;
  size_t re_nsub;
} regex_t;

typedef size_t regoff_t;

typedef struct {
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int regcomp(regex_t *out, const char *pat, int cflags);

size_t regerror(int code, const regex_t *_regex, char *out, size_t max);

int regexec(const regex_t *regex, const char *input, size_t nmatch, regmatch_t *pmatch, int eflags);

void regfree(regex_t *regex);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_REGEX_H */
