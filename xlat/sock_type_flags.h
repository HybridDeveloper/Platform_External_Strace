/* Generated by ./xlat/gen.sh from ./xlat/sock_type_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_type_flags in mpers mode

# else

static
const struct xlat sock_type_flags[] = {
#if defined(SOCK_CLOEXEC) || (defined(HAVE_DECL_SOCK_CLOEXEC) && HAVE_DECL_SOCK_CLOEXEC)
  XLAT(SOCK_CLOEXEC),
#endif
#if defined(SOCK_NONBLOCK) || (defined(HAVE_DECL_SOCK_NONBLOCK) && HAVE_DECL_SOCK_NONBLOCK)
  XLAT(SOCK_NONBLOCK),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
