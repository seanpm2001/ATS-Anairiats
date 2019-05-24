/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2013-8-29: 22h:22m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/matrix.cats"
#include "prelude/CATS/option.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */
/* external codes at top */

// HX: there is no need for marking
static //  the variable as it contains no pointer
ats_int_type the_debug_flag = 0 ;
//
ats_int_type
atsopt_debug_flag_get () { return the_debug_flag ; }
//
ats_void_type
atsopt_debug_flag_set
  (ats_int_type i) { the_debug_flag = i ; return ; }
// end of [atsopt_debug_flag_set]

// HX: there is no need for marking
static //  the variable as it contains no pointer
ats_int_type the_gline_flag = 0 ;
//
ats_int_type
atsopt_gline_flag_get () { return the_gline_flag ; }
//
ats_void_type
atsopt_gline_flag_set
  (ats_int_type i) { the_gline_flag = i ; return ; }
// end of [atsopt_gline_flag_set]


ats_void_type
atsopt_debug_vfprintf (
  ats_ptr_type out
, ats_ptr_type fmt
, va_list ap // variadic arguments
) {
//
  if (!the_debug_flag) return ;
//
  (void)vfprintf((FILE*)out, (char*)fmt, ap) ;
//
  return ;
} // end of [atsopt_debug_printf]

ats_void_type
atsopt_debug_printf (
  ats_ptr_type fmt, ...
) {
  va_list ap ;
  va_start(ap, fmt) ;
  atsopt_debug_vfprintf(stdout, (char*)fmt, ap) ;
  va_end(ap) ;
  return ;
} // end of [atsopt_debug_printf]

ats_void_type
atsopt_debug_prerrf (
  ats_ptr_type fmt, ...
) {
  va_list ap ;
  va_start(ap, fmt) ;
  atsopt_debug_vfprintf(stderr, (char*)fmt, ap) ;
  va_end(ap) ;
  return ;
} // end of [atsopt_debug_prerrf]


/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
/* empty */
#endif /* _ATS_PROOFCHECK */

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/* static load function */

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__staload_flag = 1 ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_debug_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_debug_dats.c] */
