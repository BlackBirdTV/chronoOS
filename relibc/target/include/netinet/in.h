#ifndef _NETINET_IN_H
#define _NETINET_IN_H

#include <sys/types.h>
#include <sys/socket.h>

#define INADDR_ALLHOSTS_GROUP 3758096385

#define INADDR_ALLRTRS_GROUP 3758096386

#define INADDR_ANY 0

#define INADDR_BROADCAST 4294967295

#define INADDR_LOOPBACK 2130706433

#define INADDR_MAX_LOCAL_GROUP 3758096639

#define INADDR_NONE 4294967295

#define INADDR_UNSPEC_GROUP 3758096384

#define INET6_ADDRSTRLEN 46

#define INET_ADDRSTRLEN 16

#define IPPROTO_ICMP 1

#define IPPROTO_IP 0

#define IPPROTO_IPV6 41

#define IPPROTO_MAX 255

#define IPPROTO_RAW 255

#define IPPROTO_TCP 6

#define IPPROTO_UDP 17

struct in6_addr {
  uint8_t s6_addr[16];
};

typedef uint16_t in_port_t;

struct sockaddr_in6 {
  sa_family_t sin6_family;
  in_port_t sin6_port;
  uint32_t sin6_flowinfo;
  struct in6_addr sin6_addr;
  uint32_t sin6_scope_id;
};

typedef uint32_t in_addr_t;

struct in_addr {
  in_addr_t s_addr;
};

struct sockaddr_in {
  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr sin_addr;
  char sin_zero[8];
};

struct ipv6_mreq {
  struct in6_addr ipv6mr_multiaddr;
  uint32_t ipv6mr_interface;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern const struct in6_addr in6addr_any;

extern const struct in6_addr in6addr_loopback;

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _NETINET_IN_H */

#include <bits/netinet/in.h>
