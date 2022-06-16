#ifndef _RELIBC_NETDB_H
#define _RELIBC_NETDB_H

#include <sys/socket.h>
#include <netinet/in.h>

#define AI_ADDRCONFIG 32

#define AI_ALL 16

#define AI_CANONNAME 2

#define AI_NUMERICHOST 4

#define AI_NUMERICSERV 1024

#define AI_PASSIVE 1

#define AI_V4MAPPED 8

#define EAI_ADDRFAMILY -9

#define EAI_AGAIN -3

#define EAI_BADFLAGS -1

#define EAI_FAIL -4

#define EAI_FAMILY -6

#define EAI_MEMORY -10

#define EAI_NODATA -5

#define EAI_NONAME -2

#define EAI_OVERFLOW -12

#define EAI_SERVICE -8

#define EAI_SOCKTYPE -7

#define EAI_SYSTEM -11

#define HOST_NOT_FOUND 1

#define NI_DGRAM 16

#define NI_MAXHOST 1025

#define NI_MAXSERV 32

#define NI_NAMEREQD 8

#define NI_NOFQDN 4

#define NI_NUMERICHOST 1

#define NI_NUMERICSERV 2

#define NO_DATA 2

#define NO_RECOVERY 3

#define TRY_AGAIN 4

struct addrinfo {
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  size_t ai_addrlen;
  char *ai_canonname;
  struct sockaddr *ai_addr;
  struct addrinfo *ai_next;
};

struct hostent {
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;
};

struct netent {
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  unsigned long n_net;
};

struct protoent {
  char *p_name;
  char **p_aliases;
  int p_proto;
};

struct servent {
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern int h_errno;

void endhostent(void);

void endnetent(void);

void endprotoent(void);

void endservent(void);

void freeaddrinfo(struct addrinfo *res);

const char *gai_strerror(int errcode);

int getaddrinfo(const char *node,
                const char *service,
                const struct addrinfo *hints,
                struct addrinfo **res);

struct hostent *gethostbyaddr(const void *v, socklen_t length, int format);

struct hostent *gethostbyname(const char *name);

struct hostent *gethostent(void);

int getnameinfo(const struct sockaddr *addr,
                socklen_t addrlen,
                char *host,
                socklen_t hostlen,
                char *serv,
                socklen_t servlen,
                int flags);

struct netent *getnetbyname(const char *name);

struct netent *getnetent(void);

struct protoent *getprotobyname(const char *name);

struct protoent *getprotobynumber(int number);

struct protoent *getprotoent(void);

struct servent *getservbyname(const char *name, const char *proto);

struct servent *getservbyport(int port, const char *proto);

struct servent *getservent(void);

void sethostent(int stayopen);

void setnetent(int stayopen);

void setprotoent(int stayopen);

void setservent(int stayopen);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_NETDB_H */

#include <bits/netdb.h>
