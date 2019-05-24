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
/* type definitions */
typedef struct {
ats_int_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_1 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_vt_cons) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_vt_nil) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__COMARGkey) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_bool_type, atspre_neq_char_char) (ats_char_type, ats_char_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_int1_of_size1) (ats_size_type) ;
ATSextern_fun(ats_char_type, atspre_string_get_char_at__intsz) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_string_length) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarg_parse) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type loop_1 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2) ;
static
ats_void_type loop_3 (ats_int_type env0, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;
static
ats_clo_ptr_type loop_3_closure_make (ats_int_type env0) ;
static
ats_void_type loop_3_clofun (ats_clo_ptr_type cloptr, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/src/ats_comarg.dats: 1675(line=46, offs=7) -- 1914(line=52, offs=8)
*/
ATSstaticdec()
ats_ptr_type
loop_1 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_bool_type, tmp2) ;
ATSlocal (ats_bool_type, tmp3) ;
ATSlocal (ats_char_type, tmp4) ;
ATSlocal (ats_int_type, tmp5) ;

__ats_lab_loop_1:
tmp2 = atspre_ilt (arg2, arg1) ;
if (tmp2) {
tmp4 = atspre_string_get_char_at__intsz (arg0, arg2) ;
tmp3 = atspre_neq_char_char (tmp4, '-') ;
if (tmp3) {
tmp1 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp1, atslab_0, arg2) ;
ats_selptrset_mac(anairiats_sum_0, tmp1, atslab_1, arg0) ;
} else {
tmp5 = atspre_iadd (arg2, 1) ;
arg0 = arg0 ;
arg1 = arg1 ;
arg2 = tmp5 ;
goto __ats_lab_loop_1 ; // tail call
} /* end of [if] */
} else {
tmp1 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp1, atslab_0, arg1) ;
ats_selptrset_mac(anairiats_sum_0, tmp1, atslab_1, arg0) ;
} /* end of [if] */
return (tmp1) ;
} /* end of [loop_1] */

/*
// /home/hwxi/research/Anairiats/src/ats_comarg.dats: 1659(line=45, offs=24) -- 2053(line=58, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarg_parse (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (ats_size_type, tmp6) ;
ATSlocal (ats_int_type, tmp7) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarg_parse:
tmp6 = atspre_string_length (ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp7 = atspre_int1_of_size1 (tmp6) ;
tmp0 = loop_1 (ats_castfn_mac(ats_ptr_type, arg0), tmp7, 0) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarg_parse] */

/*
// /home/hwxi/research/Anairiats/src/ats_comarg.dats: 2187(line=62, offs=7) -- 2655(line=73, offs=24)
*/
ATSstaticdec()
ats_void_type
loop_3 (ats_int_type env0, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
/* local vardec */
// ATSlocal_void (tmp9) ;
ATSlocal (ats_bool_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
// ATSlocal_void (tmp17) ;
ATSlocal (ats_int_type, tmp18) ;
// ATSlocal_void (tmp19) ;

__ats_lab_loop_3:
tmp10 = atspre_ilt (arg1, env0) ;
if (tmp10) {
tmp11 = ats_ptrget_mac(ats_ptr_type, arg2) ;
// if (tmp11 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
tmp13 = ats_caselptrind_mac(ats_ptr_type, arg0, [arg1]) ;
tmp12 = ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarg_parse (tmp13) ;
tmp15 = (ats_sum_ptr_type)0 ;
tmp14 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp14, atslab_0, tmp12) ;
ats_selptrset_mac(anairiats_sum_1, tmp14, atslab_1, tmp15) ;
// if (tmp14 == (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
tmp16 = &ats_caselptrlab_mac(anairiats_sum_1, tmp14, atslab_1) ;
tmp18 = atspre_iadd (arg1, 1) ;
/* tmp17 = */ loop_3 (env0, arg0, tmp18, tmp16) ;
/* tmp19 = ats_selsin_mac(tmp17, atslab_1) */ ;
ats_ptrget_mac(ats_ptr_type, arg2) = tmp14 ;
} else {
/* empty */
} /* end of [if] */
return /* (tmp9) */ ;
} /* end of [loop_3] */

typedef struct {
ats_fun_ptr_type closure_fun ;
ats_int_type closure_env_0 ;
} loop_3_closure_type ;

ats_void_type
loop_3_clofun (ats_clo_ptr_type cloptr, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
loop_3 (((loop_3_closure_type*)cloptr)->closure_env_0, arg0, arg1, arg2) ; return ;
} /* end of function */

ATSinline()
ats_void_type
loop_3_closure_init (loop_3_closure_type *p_clo, ats_int_type env0) {
p_clo->closure_fun = (ats_fun_ptr_type)&loop_3_clofun ;
p_clo->closure_env_0 = env0 ;
return ;
} /* end of function */

ats_clo_ptr_type
loop_3_closure_make (ats_int_type env0) {
loop_3_closure_type *p_clo = ATS_MALLOC(sizeof(loop_3_closure_type)) ;
loop_3_closure_init (p_clo, env0) ;
return (ats_clo_ptr_type)p_clo ;
} /* end of function */

/*
// /home/hwxi/research/Anairiats/src/ats_comarg.dats: 2110(line=60, offs=31) -- 2777(line=78, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarglst_parse (ats_int_type arg0, ats_ref_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_ptr_type, tmp20) ;
// ATSlocal_void (tmp21) ;
// ATSlocal_void (tmp22) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarglst_parse:
/* ats_ptr_type tmp20 ; */
tmp20 = (ats_sum_ptr_type)0 ;
/* tmp21 = */ loop_3 (arg0, arg1, 0, (&tmp20)) ;
/* tmp22 = ats_selsin_mac(tmp21, atslab_1) */ ;
tmp8 = tmp20 ;
return (tmp8) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__comarglst_parse] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2ats_comarg_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_comarg_2edats__staload () ;

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

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_comarg_dats.c] */
