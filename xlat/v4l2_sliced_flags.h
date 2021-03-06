/* Generated by ./xlat/gen.sh from ./xlat/v4l2_sliced_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_sliced_flags[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_sliced_flags[] = {
#if defined(V4L2_SLICED_TELETEXT_B) || (defined(HAVE_DECL_V4L2_SLICED_TELETEXT_B) && HAVE_DECL_V4L2_SLICED_TELETEXT_B)
  XLAT(V4L2_SLICED_TELETEXT_B),
#endif
#if defined(V4L2_SLICED_VPS) || (defined(HAVE_DECL_V4L2_SLICED_VPS) && HAVE_DECL_V4L2_SLICED_VPS)
  XLAT(V4L2_SLICED_VPS),
#endif
#if defined(V4L2_SLICED_CAPTION_525) || (defined(HAVE_DECL_V4L2_SLICED_CAPTION_525) && HAVE_DECL_V4L2_SLICED_CAPTION_525)
  XLAT(V4L2_SLICED_CAPTION_525),
#endif
#if defined(V4L2_SLICED_WSS_625) || (defined(HAVE_DECL_V4L2_SLICED_WSS_625) && HAVE_DECL_V4L2_SLICED_WSS_625)
  XLAT(V4L2_SLICED_WSS_625),
#endif
#if defined(V4L2_SLICED_VBI_525) || (defined(HAVE_DECL_V4L2_SLICED_VBI_525) && HAVE_DECL_V4L2_SLICED_VBI_525)
  XLAT(V4L2_SLICED_VBI_525),
#endif
#if defined(V4L2_SLICED_VBI_625) || (defined(HAVE_DECL_V4L2_SLICED_VBI_625) && HAVE_DECL_V4L2_SLICED_VBI_625)
  XLAT(V4L2_SLICED_VBI_625),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
