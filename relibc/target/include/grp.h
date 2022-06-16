#ifndef _RELIBC_GRP_H
#define _RELIBC_GRP_H

struct group {
  char *gr_name;
  char *gr_passwd;
  gid_t gr_gid;
  char **gr_mem;
};

#endif /* _RELIBC_GRP_H */
