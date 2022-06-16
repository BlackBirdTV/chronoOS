#ifndef _RELIBC_LOCALE_H
#define _RELIBC_LOCALE_H

struct lconv {
  const char *currency_symbol;
  const char *decimal_point;
  char frac_digits;
  const char *grouping;
  const char *int_curr_symbol;
  char int_frac_digits;
  const char *mon_decimal_point;
  const char *mon_grouping;
  const char *mon_thousands_sep;
  const char *negative_sign;
  char n_cs_precedes;
  char n_sep_by_space;
  char n_sign_posn;
  const char *positive_sign;
  char p_cs_precedes;
  char p_sep_by_space;
  char p_sign_posn;
  const char *thousands_sep;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

const struct lconv *localeconv(void);

char *setlocale(int _option, const char *val);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _RELIBC_LOCALE_H */

#include <bits/locale.h>
