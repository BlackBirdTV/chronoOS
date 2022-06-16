#ifndef _RELIBC_POLL_H
#define _RELIBC_POLL_H

#define POLLERR 8

#define POLLHUP 16

#define POLLIN 1

#define POLLNVAL 32

#define POLLOUT 4

#define POLLPRI 2

struct pollfd {
  int fd;
  short events;
  short revents;
};

typedef unsigned long nfds_t;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int poll(struct pollfd *fds, nfds_t nfds, int timeout);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_POLL_H */
