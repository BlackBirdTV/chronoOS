#ifndef _RELIBC_SIGNAL_H
#define _RELIBC_SIGNAL_H

#include <stdint.h>
#include <sys/types.h>

#if defined(__linux__)
#define MINSIGSTKSZ 2048
#endif

#if defined(__redox__)
#define MINSIGSTKSZ 2048
#endif

#if defined(__linux__)
#define NSIG 32
#endif

#if defined(__redox__)
#define NSIG 32
#endif

#if defined(__linux__)
#define SA_NOCLDSTOP 1
#endif

#if defined(__redox__)
#define SA_NOCLDSTOP 1
#endif

#if defined(__linux__)
#define SA_NOCLDWAIT 2
#endif

#if defined(__redox__)
#define SA_NOCLDWAIT 2
#endif

#if defined(__linux__)
#define SA_NODEFER 1073741824
#endif

#if defined(__redox__)
#define SA_NODEFER 1073741824
#endif

#if defined(__linux__)
#define SA_ONSTACK 134217728
#endif

#if defined(__redox__)
#define SA_ONSTACK 134217728
#endif

#if defined(__linux__)
#define SA_RESETHAND 2147483648
#endif

#if defined(__redox__)
#define SA_RESETHAND 2147483648
#endif

#if defined(__linux__)
#define SA_RESTART 268435456
#endif

#if defined(__redox__)
#define SA_RESTART 268435456
#endif

#if defined(__linux__)
#define SA_RESTORER 67108864
#endif

#if defined(__redox__)
#define SA_RESTORER 67108864
#endif

#if defined(__linux__)
#define SA_SIGINFO 4
#endif

#if defined(__redox__)
#define SA_SIGINFO 4
#endif

#if defined(__linux__)
#define SIGABRT 6
#endif

#if defined(__redox__)
#define SIGABRT 6
#endif

#if defined(__linux__)
#define SIGALRM 14
#endif

#if defined(__redox__)
#define SIGALRM 14
#endif

#if defined(__linux__)
#define SIGBUS 7
#endif

#if defined(__redox__)
#define SIGBUS 7
#endif

#if defined(__linux__)
#define SIGCHLD 17
#endif

#if defined(__redox__)
#define SIGCHLD 17
#endif

#if defined(__linux__)
#define SIGCONT 18
#endif

#if defined(__redox__)
#define SIGCONT 18
#endif

#if defined(__linux__)
#define SIGFPE 8
#endif

#if defined(__redox__)
#define SIGFPE 8
#endif

#if defined(__linux__)
#define SIGHUP 1
#endif

#if defined(__redox__)
#define SIGHUP 1
#endif

#if defined(__linux__)
#define SIGILL 4
#endif

#if defined(__redox__)
#define SIGILL 4
#endif

#if defined(__linux__)
#define SIGINT 2
#endif

#if defined(__redox__)
#define SIGINT 2
#endif

#if defined(__linux__)
#define SIGIO 29
#endif

#if defined(__redox__)
#define SIGIO 29
#endif

#if defined(__linux__)
#define SIGIOT SIGABRT
#endif

#if defined(__linux__)
#define SIGKILL 9
#endif

#if defined(__redox__)
#define SIGKILL 9
#endif

#if defined(__linux__)
#define SIGPIPE 13
#endif

#if defined(__redox__)
#define SIGPIPE 13
#endif

#if defined(__linux__)
#define SIGPOLL SIGIO
#endif

#if defined(__linux__)
#define SIGPROF 27
#endif

#if defined(__redox__)
#define SIGPROF 27
#endif

#if defined(__linux__)
#define SIGPWR 30
#endif

#if defined(__redox__)
#define SIGPWR 30
#endif

#if defined(__linux__)
#define SIGQUIT 3
#endif

#if defined(__redox__)
#define SIGQUIT 3
#endif

#if defined(__linux__)
#define SIGSEGV 11
#endif

#if defined(__redox__)
#define SIGSEGV 11
#endif

#if defined(__linux__)
#define SIGSTKFLT 16
#endif

#if defined(__redox__)
#define SIGSTKFLT 16
#endif

#if defined(__linux__)
#define SIGSTKSZ 8096
#endif

#if defined(__redox__)
#define SIGSTKSZ 8096
#endif

#if defined(__linux__)
#define SIGSTOP 19
#endif

#if defined(__redox__)
#define SIGSTOP 19
#endif

#if defined(__linux__)
#define SIGSYS 31
#endif

#if defined(__redox__)
#define SIGSYS 31
#endif

#if defined(__linux__)
#define SIGTERM 15
#endif

#if defined(__redox__)
#define SIGTERM 15
#endif

#if defined(__linux__)
#define SIGTRAP 5
#endif

#if defined(__redox__)
#define SIGTRAP 5
#endif

#if defined(__linux__)
#define SIGTSTP 20
#endif

#if defined(__redox__)
#define SIGTSTP 20
#endif

#if defined(__linux__)
#define SIGTTIN 21
#endif

#if defined(__redox__)
#define SIGTTIN 21
#endif

#if defined(__linux__)
#define SIGTTOU 22
#endif

#if defined(__redox__)
#define SIGTTOU 22
#endif

#if defined(__linux__)
#define SIGUNUSED SIGSYS
#endif

#if defined(__linux__)
#define SIGURG 23
#endif

#if defined(__redox__)
#define SIGURG 23
#endif

#if defined(__linux__)
#define SIGUSR1 10
#endif

#if defined(__redox__)
#define SIGUSR1 10
#endif

#if defined(__linux__)
#define SIGUSR2 12
#endif

#if defined(__redox__)
#define SIGUSR2 12
#endif

#if defined(__linux__)
#define SIGVTALRM 26
#endif

#if defined(__redox__)
#define SIGVTALRM 26
#endif

#if defined(__linux__)
#define SIGWINCH 28
#endif

#if defined(__redox__)
#define SIGWINCH 28
#endif

#if defined(__linux__)
#define SIGXCPU 24
#endif

#if defined(__redox__)
#define SIGXCPU 24
#endif

#if defined(__linux__)
#define SIGXFSZ 25
#endif

#if defined(__redox__)
#define SIGXFSZ 25
#endif

#define SIG_BLOCK 0

#define SIG_DFL 0

#define SIG_ERR -1

#define SIG_IGN 1

#define SIG_SETMASK 2

#define SIG_UNBLOCK 1

#if defined(__linux__)
#define SS_DISABLE 2
#endif

#if defined(__redox__)
#define SS_DISABLE 2
#endif

#if defined(__linux__)
#define SS_ONSTACK 1
#endif

#if defined(__redox__)
#define SS_ONSTACK 1
#endif

typedef unsigned long sigset_t;

struct sigaction {
  void (*sa_handler)(int);
  unsigned long sa_flags;
  void (*sa_restorer)(void);
  sigset_t sa_mask;
};

struct sigaltstack {
  void *ss_sp;
  int ss_flags;
  size_t ss_size;
};

typedef struct sigaltstack stack_t;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern void __restore_rt(void);

int kill(pid_t pid, int sig);

int killpg(pid_t pgrp, int sig);

int pthread_sigmask(int how, const sigset_t *set, sigset_t *oldset);

int raise(int sig);

int sigaction(int sig, const struct sigaction *act, struct sigaction *oact);

int sigaddset(sigset_t *set, int signo);

int sigaltstack(const stack_t *ss, stack_t *old_ss);

int sigdelset(sigset_t *set, int signo);

int sigemptyset(sigset_t *set);

int sigfillset(sigset_t *set);

int sigismember(const sigset_t *set, int signo);

void (*signal(int sig, void (*func)(int)))(int);

int sigprocmask(int how, const sigset_t *set, sigset_t *oset);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_SIGNAL_H */

#include <bits/signal.h>
