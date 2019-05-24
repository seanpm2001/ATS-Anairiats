/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2016-8-25: 20h:18m
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
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/matrix.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */
/* external codes at top */

#include "prelude/CATS/array.cats"

/* type definitions */
typedef
struct {
ats_ptr_type atslab_2 ;
ats_size_type atslab_3 ;
} anairiats_rec_0 ;

/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_vbox_make_view_ptr) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__sasp__array_viewt0ype_int_type = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/prelude_dats_array.dats: 2773(line=96, offs=10) -- 2922(line=101, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2prelude_2SATS_2array_2esats__array_make_arrpsz (anairiats_rec_0 arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
// ATSlocal_void (tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
// ATSlocal_void (tmp3) ;

__ats_lab_ATS_2d0_2e2_2e12_2prelude_2SATS_2array_2esats__array_make_arrpsz:
tmp2 = ats_select_mac(arg0, atslab_2) ;
/* tmp1 = */ atspre_vbox_make_view_ptr (tmp2) ;
/* tmp3 = ats_selsin_mac(tmp1, atslab_1) */ ;
tmp0 = ats_select_mac(arg0, atslab_2) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2SATS_2array_2esats__array_make_arrpsz] */

/* static load function */

ats_void_type
ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__staload_flag = 1 ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__dynload () {
// ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2prelude_dats_array_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */


typedef unsigned char byte ;

ats_void_type
atspre_array_ptr_initialize_elt_tsz (
   ats_ptr_type A
 , ats_size_type asz 
 , ats_ptr_type ini
 , ats_size_type tsz
 )  {
  int i, itsz ; int left ; ats_ptr_type p ;
  if (asz == 0) return ;
  memcpy (A, ini, tsz) ;
  i = 1 ; itsz = tsz ; left = asz - i ;
  while (left > 0) {
    p = (ats_ptr_type)(((byte*)A) + itsz) ;
    if (left <= i) {
      memcpy (p, A, left * tsz) ; return ;
    } /* end of [if] */
    memcpy (p, A, itsz);
    i = i + i ; itsz = itsz + itsz ; left = asz - i ;
  } /* end of [while] */
  return ;
} /* end of [atspre_array_ptr_initialize_elt_tsz] */



/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/prelude_dats_array_dats.c] */
