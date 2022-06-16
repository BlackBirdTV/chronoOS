#ifndef _SYS_AUXV_H
#define _SYS_AUXV_H

#define AT_BASE 7

#define AT_BASE_PLATFORM 24

#define AT_CLKTCK 17

#define AT_DCACHEBSIZE 19

#define AT_EGID 14

#define AT_ENTRY 9

#define AT_EUID 12

#define AT_EXECFD 2

#define AT_EXECFN 31

#define AT_FLAGS 8

#define AT_FPUCW 18

#define AT_GID 13

#define AT_HWCAP 16

#define AT_HWCAP2 26

#define AT_ICACHEBSIZE 20

#define AT_IGNORE 1

#define AT_IGNOREPPC 22

#define AT_NOTELF 10

#define AT_NULL 0

#define AT_PAGESZ 6

#define AT_PHDR 3

#define AT_PHENT 4

#define AT_PHNUM 5

#define AT_PLATFORM 15

#define AT_RANDOM 25

#define AT_UCACHEBSIZE 21

#define AT_UID 11

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

unsigned long getauxval(unsigned long _t);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_AUXV_H */
