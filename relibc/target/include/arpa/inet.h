#ifndef _ARPA_INET_H
#define _ARPA_INET_H

#include <stddef.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

uint32_t htonl(uint32_t hostlong);

uint16_t htons(uint16_t hostshort);

in_addr_t inet_addr(const char *cp);

int inet_aton(const char *cp, struct in_addr *inp);

in_addr_t inet_lnaof(struct in_addr input);

struct in_addr inet_makeaddr(in_addr_t net, in_addr_t host);

in_addr_t inet_netof(struct in_addr input);

in_addr_t inet_network(char *cp);

const char *inet_ntoa(struct in_addr addr);

const char *inet_ntop(int domain, const void *src, char *dest, socklen_t size);

int inet_pton(int domain, const char *src, void *dest);

uint32_t ntohl(uint32_t netlong);

uint16_t ntohs(uint16_t netshort);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _ARPA_INET_H */
