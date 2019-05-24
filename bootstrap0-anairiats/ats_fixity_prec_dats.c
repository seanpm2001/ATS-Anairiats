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
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, atspre_add_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_sub_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_lte_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_gte_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_compare_int_int) (ats_int_type, ats_int_type) ;
ATSextern_val(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec) ;
ATSextern_val(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__select_prec) ;
ATSextern_fun(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__prec_make_int) (ats_int_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__neginf_prec) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__posinf_prec) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__select_prec) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__backslash_prec) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__infixtemp_prec) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__exi_prec_sta) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__uni_prec_sta) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__delay_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__exist_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__dynload_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__ptrof_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__foldat_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__freeat_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__viewat_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__invar_prec_sta) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__qmark_prec_sta) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__qmarkbang_prec_sta) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__r0ead_prec_sta) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__trans_prec_sta) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__crypt_prec_dyn) ;
ATSglobal(ats_int_type, ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__deref_prec_dyn) ;

/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
ATSstatic (ats_int_type, statmp0) ;
ATSstatic (ats_int_type, statmp1) ;
ATSstatic (ats_int_type, statmp2) ;
ATSstatic (ats_int_type, statmp3) ;
ATSstatic (ats_int_type, statmp4) ;
ATSstatic (ats_int_type, statmp5) ;
ATSstatic (ats_int_type, statmp6) ;
ATSstatic (ats_int_type, statmp7) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/src/ats_fixity_prec.dats: 3092(line=118, offs=23) -- 3099(line=118, offs=30)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__int_of_prec (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp8) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__int_of_prec:
tmp8 = arg0 ;
return (tmp8) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__int_of_prec] */

/*
// /home/hwxi/research/Anairiats/src/ats_fixity_prec.dats: 3125(line=120, offs=25) -- 3218(line=121, offs=77)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__prec_make_int (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp9) ;
ATSlocal (ats_bool_type, tmp10) ;
ATSlocal (ats_bool_type, tmp11) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__prec_make_int:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
__ats_lab_0_1:
tmp10 = atspre_lte_int_int (arg0, -1000000) ;
if (!tmp10) { goto __ats_lab_1_1 ; }
tmp9 = -1000000 ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
__ats_lab_1_1:
tmp11 = atspre_gte_int_int (arg0, 1000000) ;
if (!tmp11) { goto __ats_lab_2_1 ; }
tmp9 = 1000000 ;
break ;

/* branch: __ats_lab_2 */
__ats_lab_2_0:
__ats_lab_2_1:
tmp9 = arg0 ;
break ;
} while (0) ;
return (tmp9) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__prec_make_int] */

/*
// /home/hwxi/research/Anairiats/src/ats_fixity_prec.dats: 3292(line=126, offs=26) -- 3321(line=126, offs=55)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__precedence_inc (ats_int_type arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp12) ;
ATSlocal (ats_int_type, tmp13) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__precedence_inc:
tmp13 = atspre_add_int_int (arg0, arg1) ;
tmp12 = ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__prec_make_int (tmp13) ;
return (tmp12) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__precedence_inc] */

/*
// /home/hwxi/research/Anairiats/src/ats_fixity_prec.dats: 3348(line=127, offs=26) -- 3377(line=127, offs=55)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__precedence_dec (ats_int_type arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp14) ;
ATSlocal (ats_int_type, tmp15) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__precedence_dec:
tmp15 = atspre_sub_int_int (arg0, arg1) ;
tmp14 = ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__prec_make_int (tmp15) ;
return (tmp14) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__precedence_dec] */

/*
// /home/hwxi/research/Anairiats/src/ats_fixity_prec.dats: 3429(line=131, offs=29) -- 3464(line=131, offs=64)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__compare_prec_prec (ats_int_type arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp16) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__compare_prec_prec:
tmp16 = atspre_compare_int_int (arg0, arg1) ;
return (tmp16) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__compare_prec_prec] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_prec_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */
ATS_GC_MARKROOT(&statmp0, sizeof(ats_int_type)) ;
ATS_GC_MARKROOT(&statmp1, sizeof(ats_int_type)) ;
ATS_GC_MARKROOT(&statmp2, sizeof(ats_int_type)) ;
ATS_GC_MARKROOT(&statmp3, sizeof(ats_int_type)) ;
ATS_GC_MARKROOT(&statmp4, sizeof(ats_int_type)) ;
ATS_GC_MARKROOT(&statmp5, sizeof(ats_int_type)) ;
ATS_GC_MARKROOT(&statmp6, sizeof(ats_int_type)) ;
ATS_GC_MARKROOT(&statmp7, sizeof(ats_int_type)) ;

/* marking external values for GC */

/* code for dynamic loading */
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__neginf_prec, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__neginf_prec = -1000000 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__posinf_prec, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__posinf_prec = 1000000 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec = 70 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__select_prec, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__select_prec = 80 ;
statmp0 = atspre_add_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__backslash_prec, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__backslash_prec = statmp0 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__infixtemp_prec, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__infixtemp_prec = 0 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__exi_prec_sta, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__exi_prec_sta = 0 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__uni_prec_sta, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__uni_prec_sta = 0 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__delay_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__delay_prec_dyn = 0 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__exist_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__exist_prec_dyn = 0 ;
statmp1 = atspre_add_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__dynload_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__dynload_prec_dyn = statmp1 ;
statmp2 = atspre_sub_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__select_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__ptrof_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__ptrof_prec_dyn = statmp2 ;
statmp3 = atspre_sub_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__foldat_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__foldat_prec_dyn = statmp3 ;
statmp4 = atspre_sub_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__freeat_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__freeat_prec_dyn = statmp4 ;
statmp5 = atspre_sub_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__viewat_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__viewat_prec_dyn = statmp5 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__invar_prec_sta, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__invar_prec_sta = 1 ;
statmp6 = atspre_sub_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__qmark_prec_sta, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__qmark_prec_sta = statmp6 ;
statmp7 = atspre_sub_int_int (ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__app_prec, 1) ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__qmarkbang_prec_sta, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__qmarkbang_prec_sta = statmp7 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__r0ead_prec_sta, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__r0ead_prec_sta = 100 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__trans_prec_sta, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__trans_prec_sta = 0 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__crypt_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__crypt_prec_dyn = 0 ;
ATS_GC_MARKROOT(&ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__deref_prec_dyn, sizeof(ats_int_type)) ;
ATS_2d0_2e2_2e10_2src_2ats_fixity_2esats__deref_prec_dyn = 100 ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_fixity_prec_dats.c] */
