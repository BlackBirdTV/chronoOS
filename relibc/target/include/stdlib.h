#ifndef _RELIBC_STDLIB_H
#define _RELIBC_STDLIB_H

#include <stddef.h>
#include <alloca.h>

#define EXIT_FAILURE 1

#define EXIT_SUCCESS 0

#define MB_CUR_MAX 4

#define MB_LEN_MAX 4

#define RAND_MAX 2147483647

typedef struct {
  int quot;
  int rem;
} div_t;

typedef struct {
  long quot;
  long rem;
} ldiv_t;

typedef struct {
  long long quot;
  long long rem;
} lldiv_t;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void _Exit(int status);

long a64l(const char *s);

void abort(void);

int abs(int i);

void *aligned_alloc(size_t alignment, size_t size);

int atexit(void (*func)(void));

double atof(const char *s);

int atoi(const char *s);

long atol(const char *s);

long long atoll(const char *s);

void *bsearch(const void *key,
              const void *base,
              size_t nel,
              size_t width,
              int (*compar)(const void*, const void*));

void *calloc(size_t nelem, size_t elsize);

div_t div(int numer, int denom);

double drand48(void);

double erand48(unsigned short *xsubi);

void exit(int status);

void free(void *ptr);

char *getenv(const char *name);

char *initstate(unsigned int seed, char *state, size_t size);

long jrand48(unsigned short *xsubi);

char *l64a(long value);

long labs(long i);

void lcong48(unsigned short *param);

ldiv_t ldiv(long numer, long denom);

long long llabs(long long i);

lldiv_t lldiv(long long numer, long long denom);

long lrand48(void);

void *malloc(size_t size);

int mblen(const char *s, size_t n);

size_t mbstowcs(wchar_t *pwcs, const char *s, size_t n);

int mbtowc(wchar_t *pwc, const char *s, size_t n);

void *memalign(size_t alignment, size_t size);

int mkostemp(char *name, int flags);

int mkostemps(char *name, int suffix_len, int flags);

int mkstemp(char *name);

int mkstemps(char *name, int suffix_len);

char *mktemp(char *name);

long mrand48(void);

long nrand48(unsigned short *xsubi);

int posix_memalign(void **memptr, size_t alignment, size_t size);

int putenv(char *insert);

void qsort(void *base, size_t nel, size_t width, int (*compar)(const void*, const void*));

int rand(void);

int rand_r(unsigned int *seed);

long random(void);

void *realloc(void *ptr, size_t size);

char *realpath(const char *pathname, char *resolved);

unsigned short *seed48(unsigned short *seed16v);

int setenv(const char *key, const char *value, int overwrite);

char *setstate(char *state);

void srand(unsigned int seed);

void srand48(long seedval);

void srandom(unsigned int seed);

double strtod(const char *s, char **endptr);

float strtof(const char *s, char **endptr);

long strtol(const char *s, char **endptr, int base);

long long strtoll(const char *s, char **endptr, int base);

unsigned long strtoul(const char *s, char **endptr, int base);

unsigned long long strtoull(const char *s, char **endptr, int base);

int system(const char *command);

int unsetenv(const char *key);

void *valloc(size_t size);

size_t wcstombs(char *s, const wchar_t **pwcs, size_t n);

int wctomb(char *s, wchar_t wc);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_STDLIB_H */

#include <bits/stdlib.h>
