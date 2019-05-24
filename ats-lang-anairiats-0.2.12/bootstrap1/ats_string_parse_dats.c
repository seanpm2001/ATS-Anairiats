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

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"
/* external codes at top */
/* type definitions */
typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_nil_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_vt_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_vt_nil_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_char_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_double_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_double_long_2) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_int_3) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_int_long_4) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_int_long_long_5) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_int_short_6) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_int_short_short_7) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_ptr_8) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_string_9) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_uint_10) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_uint_long_11) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_uint_long_long_12) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_uint_short_13) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__FAT_c_uint_short_short_14) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_tylst) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_char_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_double_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_double_long_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_int_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ptr_type) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_string_type) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_uint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_lint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ulint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_llint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ullint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_sint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_usint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ssint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ussint_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtype) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type aux_2 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_string_parse.dats: 1679(line=47, offs=29) -- 2412(line=64, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtype (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtype:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_char_t0ype () ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_2_0 ; }
__ats_lab_1_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_double_t0ype () ;
break ;

/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (((ats_sum_ptr_type)arg0)->tag != 2) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_double_long_t0ype () ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
if (((ats_sum_ptr_type)arg0)->tag != 3) { goto __ats_lab_4_0 ; }
__ats_lab_3_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_int_t0ype () ;
break ;

/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (((ats_sum_ptr_type)arg0)->tag != 4) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_lint_t0ype () ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
if (((ats_sum_ptr_type)arg0)->tag != 5) { goto __ats_lab_6_0 ; }
__ats_lab_5_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_llint_t0ype () ;
break ;

/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (((ats_sum_ptr_type)arg0)->tag != 6) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_sint_t0ype () ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
if (((ats_sum_ptr_type)arg0)->tag != 7) { goto __ats_lab_8_0 ; }
__ats_lab_7_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ssint_t0ype () ;
break ;

/* branch: __ats_lab_8 */
__ats_lab_8_0:
if (((ats_sum_ptr_type)arg0)->tag != 8) { goto __ats_lab_9_0 ; }
__ats_lab_8_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ptr_type () ;
break ;

/* branch: __ats_lab_9 */
__ats_lab_9_0:
if (((ats_sum_ptr_type)arg0)->tag != 9) { goto __ats_lab_10_0 ; }
__ats_lab_9_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_string_type () ;
break ;

/* branch: __ats_lab_10 */
__ats_lab_10_0:
if (((ats_sum_ptr_type)arg0)->tag != 10) { goto __ats_lab_11_0 ; }
__ats_lab_10_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_uint_t0ype () ;
break ;

/* branch: __ats_lab_11 */
__ats_lab_11_0:
if (((ats_sum_ptr_type)arg0)->tag != 11) { goto __ats_lab_12_0 ; }
__ats_lab_11_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ulint_t0ype () ;
break ;

/* branch: __ats_lab_12 */
__ats_lab_12_0:
if (((ats_sum_ptr_type)arg0)->tag != 12) { goto __ats_lab_13_0 ; }
__ats_lab_12_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ullint_t0ype () ;
break ;

/* branch: __ats_lab_13 */
__ats_lab_13_0:
if (((ats_sum_ptr_type)arg0)->tag != 13) { goto __ats_lab_14_0 ; }
__ats_lab_13_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_usint_t0ype () ;
break ;

/* branch: __ats_lab_14 */
__ats_lab_14_0:
// if (((ats_sum_ptr_type)arg0)->tag != 14) { ats_deadcode_failure_handle () ; }
__ats_lab_14_1:
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_ussint_t0ype () ;
break ;
} while (0) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtype] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_string_parse.dats: 2512(line=68, offs=7) -- 2782(line=74, offs=6)
*/
ATSstaticdec()
ats_ptr_type
aux_2 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;

__ats_lab_aux_2:
do {
/* branch: __ats_lab_15 */
__ats_lab_15_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_16_0 ; }
__ats_lab_15_1:
tmp3 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp4 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
ATS_FREE(arg0) ;
tmp5 = ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtype (tmp3) ;
tmp6 = aux_2 (tmp4) ;
tmp2 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp2, atslab_0, tmp5) ;
ats_selptrset_mac(anairiats_sum_0, tmp2, atslab_1, tmp6) ;
break ;

/* branch: __ats_lab_16 */
__ats_lab_16_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_16_1:
tmp2 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp2) ;
} /* end of [aux_2] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_string_parse.dats: 2493(line=67, offs=30) -- 2830(line=77, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtypes (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp7) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtypes:
tmp7 = aux_2 (arg0) ;
tmp1 = ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_tylst (tmp7) ;
return (tmp1) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__s2exp_make_printf_c_argtypes] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_string_parse_2edats__staload () ;

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

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_string_parse_dats.c] */
