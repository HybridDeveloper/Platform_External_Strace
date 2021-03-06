/* Generated by ./xlat/gen.sh from ./xlat/bpf_miscop.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_TAX) || (defined(HAVE_DECL_BPF_TAX) && HAVE_DECL_BPF_TAX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_TAX) == (0x00), "BPF_TAX != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_TAX 0x00
#endif
#if defined(BPF_TXA) || (defined(HAVE_DECL_BPF_TXA) && HAVE_DECL_BPF_TXA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_TXA) == (0x80), "BPF_TXA != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_TXA 0x80
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_miscop in mpers mode

# else

static
const struct xlat bpf_miscop[] = {
 XLAT(BPF_TAX),
 XLAT(BPF_TXA),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
