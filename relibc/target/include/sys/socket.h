#ifndef _SYS_SOCKET_H
#define _SYS_SOCKET_H

#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#define AF_INET 2

#define AF_INET6 10

#define AF_UNIX 1

#define AF_UNSPEC 0

#define MSG_CTRUNC 8

#define MSG_DONTROUTE 4

#define MSG_EOR 128

#define MSG_OOB 1

#define MSG_PEEK 2

#define MSG_TRUNC 32

#define MSG_WAITALL 256

#define PF_INET 2

#define PF_INET6 10

#define PF_UNIX 1

#define PF_UNSPEC 0

#define SHUT_RD 0

#define SHUT_RDWR 2

#define SHUT_WR 1

#define SOCK_CLOEXEC 524288

#define SOCK_DGRAM 2

#define SOCK_NONBLOCK 2048

#define SOCK_SEQPACKET 5

#define SOCK_STREAM 1

#define SOL_SOCKET 1

#define SOMAXCONN 128

#define SO_ACCEPTCONN 30

#define SO_BROADCAST 6

#define SO_BSDCOMPAT 14

#define SO_DEBUG 1

#define SO_DOMAIN 39

#define SO_DONTROUTE 5

#define SO_ERROR 4

#define SO_KEEPALIVE 9

#define SO_LINGER 13

#define SO_NO_CHECK 11

#define SO_OOBINLINE 10

#define SO_PASSCRED 16

#define SO_PEERCRED 17

#define SO_PEERSEC 31

#define SO_PRIORITY 12

#define SO_PROTOCOL 38

#define SO_RCVBUF 8

#define SO_RCVBUFFORCE 33

#define SO_RCVLOWAT 18

#define SO_RCVTIMEO 20

#define SO_REUSEADDR 2

#define SO_REUSEPORT 15

#define SO_SNDBUF 7

#define SO_SNDBUFFORCE 32

#define SO_SNDLOWAT 19

#define SO_SNDTIMEO 21

#define SO_TYPE 3

typedef uint16_t sa_family_t;

struct sockaddr {
  sa_family_t sa_family;
  char sa_data[14];
};

typedef uint32_t socklen_t;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int accept(int socket, struct sockaddr *address, socklen_t *address_len);

int bind(int socket, const struct sockaddr *address, socklen_t address_len);

int connect(int socket, const struct sockaddr *address, socklen_t address_len);

int getpeername(int socket, struct sockaddr *address, socklen_t *address_len);

int getsockname(int socket, struct sockaddr *address, socklen_t *address_len);

int getsockopt(int socket, int level, int option_name, void *option_value, socklen_t *option_len);

int listen(int socket, int backlog);

ssize_t recv(int socket, void *buffer, size_t length, int flags);

ssize_t recvfrom(int socket,
                 void *buffer,
                 size_t length,
                 int flags,
                 struct sockaddr *address,
                 socklen_t *address_len);

ssize_t send(int socket, const void *message, size_t length, int flags);

ssize_t sendto(int socket,
               const void *message,
               size_t length,
               int flags,
               const struct sockaddr *dest_addr,
               socklen_t dest_len);

int setsockopt(int socket,
               int level,
               int option_name,
               const void *option_value,
               socklen_t option_len);

int shutdown(int socket, int how);

int socket(int domain, int kind, int protocol);

int socketpair(int domain, int kind, int protocol, int *sv);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _SYS_SOCKET_H */

#include <bits/sys/socket.h>
