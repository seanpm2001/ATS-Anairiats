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

#include "ats_intinf.cats"

#include "ats_counter.cats"

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

#include "ats_intinf.cats"

#include "ats_counter.cats"

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

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"
/* external codes at top */

#include "ats_counter.cats" /* only needed for [ATS/Geizella] */

/* type definitions */
typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

typedef
struct {
ats_ptr_type atslab_s2exp_srt ;
ats_ptr_type atslab_s2exp_node ;
} anairiats_rec_1 ;

typedef
struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_rec_2 ;

typedef struct {
anairiats_rec_2 atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_3 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_4 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_int_type atslab_1 ;
ats_ptr_type atslab_2 ;
ats_int_type atslab_3 ;
ats_ptr_type atslab_4 ;
ats_ptr_type atslab_5 ;
} anairiats_sum_5 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
} anairiats_sum_6 ;

typedef struct {
atsopt_count_type atslab_0 ;
} anairiats_sum_7 ;

typedef struct {
anairiats_rec_2 atslab_0 ;
} anairiats_sum_8 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_nil_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_vt_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_vt_nil_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_vt_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_vt_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Efun_11) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Emetfn_15) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Euni_30) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_varet_type, ATS_2d0_2e2_2e12_2src_2ats_error_2esats__abort) () ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__eq_stamp_stamp) (atsopt_count_type, atsopt_count_type) ;
ATSextern_val(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2rt_int) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__lte_s2rt_s2rt) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_fun_srt) (ats_ptr_type, ats_ptr_type, ats_int_type, ats_ptr_type, ats_int_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_metfn) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_uni) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(atsopt_count_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2var_get_stamp) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__c3str_metric_nat) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_add_cstr) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_make_elt_tsz) (ats_ref_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_get_view_ptr) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__sasp__metric_env_token = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_void_type aux_1 (ats_ptr_type arg0, ats_ptr_type arg1) ;
static
ats_ptr_type ref_make_elt_03658_ats_ptr_type (ats_ptr_type arg0) ;
static
ats_bool_type aux1_4 (ats_ptr_type arg0, atsopt_count_type arg1) ;
static
ats_ptr_type aux2_5 (ats_ptr_type arg0, atsopt_count_type arg1) ;
static
ats_ptr_type aux_10 (ats_ptr_type arg0) ;
static
ats_ptr_type aux_9 (ats_ptr_type env0, ats_ptr_type arg0, ats_ref_type arg1) ;
static
ats_clo_ptr_type aux_9_closure_make (ats_ptr_type env0) ;
static
ats_ptr_type aux_9_clofun (ats_clo_ptr_type cloptr, ats_ptr_type arg0, ats_ref_type arg1) ;

/* partial value template declarations */
/* static temporary variable declarations */
ATSstatic (ats_ptr_type, statmp8) ;
ATSstatic (ats_ptr_type, statmp11) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 2097(line=69, offs=7) -- 2430(line=80, offs=24)
*/
ATSstaticdec()
ats_void_type
aux_1 (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
// ATSlocal_void (tmp4) ;
ATSlocal (ats_bool_type, tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;

__ats_lab_aux_1:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (arg1 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp2 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
tmp3 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_1) ;
tmp6 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, tmp2), atslab_s2exp_srt) ;
tmp5 = ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__lte_s2rt_s2rt (tmp6, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2rt_int) ;
if (tmp5) {
tmp7 = ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__c3str_metric_nat (arg0, tmp2) ;
/* tmp4 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_add_cstr (tmp7) ;
} else {
/* empty */
} /* end of [if] */
arg0 = arg0 ;
arg1 = tmp3 ;
goto __ats_lab_aux_1 ; // tail call
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (arg1 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
break ;
} while (0) ;
return /* (tmp1) */ ;
} /* end of [aux_1] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 2068(line=68, offs=3) -- 2499(line=84, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_nat_check (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp0) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_nat_check:
/* tmp0 = */ aux_1 (arg0, arg1) ;
return /* (tmp0) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_nat_check] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_reference.dats: 1888(line=57, offs=27) -- 1962(line=59, offs=4)
*/
ATSstaticdec()
ats_ptr_type
ref_make_elt_03658_ats_ptr_type (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;

__ats_lab_ref_make_elt_03658_ats_ptr_type:
/* ats_ptr_type tmp10 ; */
tmp10 = arg0 ;
tmp9 = atspre_ref_make_elt_tsz ((&tmp10), sizeof(ats_ptr_type)) ;
return (tmp9) ;
} /* end of [ref_make_elt_03658_ats_ptr_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 2817(line=102, offs=7) -- 3066(line=108, offs=27)
*/
ATSstaticdec()
ats_bool_type
aux1_4 (ats_ptr_type arg0, atsopt_count_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
ATSlocal (ats_bool_type, tmp16) ;
ATSlocal (atsopt_count_type, tmp17) ;

__ats_lab_aux1_4:
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp14 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp15 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp17 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2var_get_stamp (tmp14) ;
tmp16 = ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__eq_stamp_stamp (tmp17, arg1) ;
if (tmp16) {
tmp13 = ats_true_bool ;
} else {
arg0 = tmp15 ;
arg1 = arg1 ;
goto __ats_lab_aux1_4 ; // tail call
} /* end of [if] */
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
tmp13 = ats_false_bool ;
break ;
} while (0) ;
return (tmp13) ;
} /* end of [aux1_4] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 3095(line=111, offs=7) -- 3480(line=121, offs=44)
*/
ATSstaticdec()
ats_ptr_type
aux2_5 (ats_ptr_type arg0, atsopt_count_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp18) ;
ATSlocal (anairiats_rec_2, tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;
ATSlocal (ats_bool_type, tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
ATSlocal (ats_ptr_type, tmp23) ;
ATSlocal (ats_ptr_type, tmp24) ;

__ats_lab_aux2_5:
do {
/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp19 = ats_caselptrlab_mac(anairiats_sum_3, arg0, atslab_0) ;
tmp20 = &ats_caselptrlab_mac(anairiats_sum_3, arg0, atslab_1) ;
tmp22 = ats_select_mac(tmp19, atslab_0) ;
tmp21 = aux1_4 (tmp22, arg1) ;
if (tmp21) {
tmp23 = ats_select_mac(tmp19, atslab_1) ;
tmp18 = ATS_MALLOC(sizeof(anairiats_sum_4)) ;
ats_selptrset_mac(anairiats_sum_4, tmp18, atslab_0, tmp23) ;
} else {
tmp24 = ats_ptrget_mac(ats_ptr_type, tmp20) ;
arg0 = tmp24 ;
arg1 = arg1 ;
goto __ats_lab_aux2_5 ; // tail call
} /* end of [if] */
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_5_1:
tmp18 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp18) ;
} /* end of [aux2_5] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 2790(line=100, offs=16) -- 3606(line=128, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_get (atsopt_count_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;
ATSlocal (ats_ptr_type, tmp27) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_get:
tmp25 = atspre_ref_get_view_ptr (statmp8) ;
tmp26 = ats_selsin_mac(tmp25, atslab_1) ;
tmp27 = ats_ptrget_mac(ats_ptr_type, tmp26) ;
tmp12 = aux2_5 (tmp27, arg0) ;
return (tmp12) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_get] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 3681(line=133, offs=16) -- 4184(line=148, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_pop () {
/* local vardec */
// ATSlocal_void (tmp28) ;
ATSlocal (ats_int_type, tmp29) ;
ATSlocal (ats_ptr_type, tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;
ATSlocal (ats_ptr_type, tmp33) ;
ATSlocal (ats_ptr_type, tmp34) ;
ATSlocal (ats_bool_type, tmp35) ;
// ATSlocal_void (tmp36) ;
// ATSlocal_void (tmp37) ;
// ATSlocal_void (tmp38) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_pop:
/* ats_int_type tmp29 ; */
tmp29 = 0 ;
tmp30 = atspre_ref_get_view_ptr (statmp8) ;
tmp31 = ats_selsin_mac(tmp30, atslab_1) ;
tmp33 = ats_ptrget_mac(ats_ptr_type, tmp31) ;
do {
/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (tmp33 == (ats_sum_ptr_type)0) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp34 = ats_caselptrlab_mac(anairiats_sum_3, tmp33, atslab_1) ;
ATS_FREE(tmp33) ;
ats_ptrget_mac(ats_ptr_type, tmp31) = tmp34 ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
// if (tmp33 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_7_1:
tmp29 = 1 ;
break ;
} while (0) ;
tmp35 = atspre_gt_int_int (tmp29, 0) ;
if (tmp35) {
/* tmp36 = */ atspre_prerr_string (ATSstrcst("INTERNAL ERROR (ats_trans3_env_met)")) ;
/* tmp37 = */ atspre_prerr_string (ATSstrcst(": metric_env_pop: the_metbindlst is empty.")) ;
/* tmp38 = */ atspre_prerr_newline () ;
/* tmp28 = */ ATS_2d0_2e2_2e12_2src_2ats_error_2esats__abort () ;
} else {
/* empty */
} /* end of [if] */
return /* (tmp28) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_pop] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 4239(line=151, offs=17) -- 4391(line=154, offs=6)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_push (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp39) ;
ATSlocal (ats_ptr_type, tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_ptr_type, tmp42) ;
ATSlocal (anairiats_rec_2, tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_push:
tmp40 = atspre_ref_get_view_ptr (statmp8) ;
tmp41 = ats_selsin_mac(tmp40, atslab_1) ;
tmp43.atslab_0 = arg0 ;
tmp43.atslab_1 = arg1 ;

tmp44 = ats_ptrget_mac(ats_ptr_type, tmp41) ;
tmp42 = ATS_MALLOC(sizeof(anairiats_sum_3)) ;
ats_selptrset_mac(anairiats_sum_3, tmp42, atslab_0, tmp43) ;
ats_selptrset_mac(anairiats_sum_3, tmp42, atslab_1, tmp44) ;
ats_ptrget_mac(ats_ptr_type, tmp41) = tmp42 ;
return /* (tmp39) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_env_push] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 5023(line=178, offs=15) -- 5184(line=180, offs=41)
*/
ATSstaticdec()
ats_ptr_type
aux_10 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp60) ;
ATSlocal (ats_ptr_type, tmp61) ;
ATSlocal (ats_ptr_type, tmp62) ;
ATSlocal (ats_ptr_type, tmp63) ;
ATSlocal (ats_ptr_type, tmp64) ;

__ats_lab_aux_10:
do {
/* branch: __ats_lab_12 */
__ats_lab_12_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_13_0 ; }
__ats_lab_12_1:
tmp61 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp62 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp63 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, tmp61), atslab_s2exp_srt) ;
tmp64 = aux_10 (tmp62) ;
tmp60 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp60, atslab_0, tmp63) ;
ats_selptrset_mac(anairiats_sum_0, tmp60, atslab_1, tmp64) ;
break ;

/* branch: __ats_lab_13 */
__ats_lab_13_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_13_1:
tmp60 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp60) ;
} /* end of [aux_10] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 4538(line=165, offs=7) -- 5541(line=190, offs=6)
*/
ATSstaticdec()
ats_ptr_type
aux_9 (ats_ptr_type env0, ats_ptr_type arg0, ats_ref_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp46) ;
ATSlocal (ats_ptr_type, tmp47) ;
ATSlocal (ats_ptr_type, tmp48) ;
ATSlocal (ats_int_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
ATSlocal (ats_int_type, tmp51) ;
ATSlocal (ats_ptr_type, tmp52) ;
ATSlocal (ats_ptr_type, tmp53) ;
ATSlocal (ats_ptr_type, tmp54) ;
ATSlocal (ats_ptr_type, tmp55) ;
ATSlocal (ats_ptr_type, tmp56) ;
ATSlocal (ats_ptr_type, tmp57) ;
ATSlocal (ats_ptr_type, tmp58) ;
ATSlocal (ats_ptr_type, tmp59) ;
ATSlocal (ats_ptr_type, tmp65) ;
ATSlocal (ats_ptr_type, tmp66) ;
ATSlocal (ats_ptr_type, tmp67) ;
ATSlocal (atsopt_count_type, tmp68) ;
ATSlocal (ats_ptr_type, tmp69) ;
ATSlocal (ats_ptr_type, tmp70) ;
ATSlocal (ats_ptr_type, tmp71) ;
ATSlocal (ats_ptr_type, tmp72) ;
ATSlocal (ats_ptr_type, tmp73) ;
ATSlocal (ats_ptr_type, tmp74) ;

__ats_lab_aux_9:
tmp47 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, arg0), atslab_s2exp_node) ;
do {
/* branch: __ats_lab_8 */
__ats_lab_8_0:
if (((ats_sum_ptr_type)tmp47)->tag != 11) { goto __ats_lab_11_0 ; }
__ats_lab_8_1:
tmp48 = ats_caselptrlab_mac(anairiats_sum_5, tmp47, atslab_0) ;
tmp49 = ats_caselptrlab_mac(anairiats_sum_5, tmp47, atslab_1) ;
tmp50 = ats_caselptrlab_mac(anairiats_sum_5, tmp47, atslab_2) ;
tmp51 = ats_caselptrlab_mac(anairiats_sum_5, tmp47, atslab_3) ;
tmp52 = ats_caselptrlab_mac(anairiats_sum_5, tmp47, atslab_4) ;
tmp53 = ats_caselptrlab_mac(anairiats_sum_5, tmp47, atslab_5) ;
tmp54 = aux_9 (env0, tmp53, arg1) ;
do {
/* branch: __ats_lab_9 */
__ats_lab_9_0:
if (tmp54 == (ats_sum_ptr_type)0) { goto __ats_lab_10_0 ; }
__ats_lab_9_1:
tmp55 = ats_caselptrlab_mac(anairiats_sum_4, tmp54, atslab_0) ;
ATS_FREE(tmp54) ;
tmp57 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_1, arg0), atslab_s2exp_srt) ;
tmp56 = ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_fun_srt (tmp57, tmp48, tmp49, tmp50, tmp51, tmp52, tmp55) ;
tmp46 = ATS_MALLOC(sizeof(anairiats_sum_4)) ;
ats_selptrset_mac(anairiats_sum_4, tmp46, atslab_0, tmp56) ;
break ;

/* branch: __ats_lab_10 */
__ats_lab_10_0:
// if (tmp54 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_10_1:
tmp46 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
break ;

/* branch: __ats_lab_11 */
__ats_lab_11_0:
if (((ats_sum_ptr_type)tmp47)->tag != 15) { goto __ats_lab_14_0 ; }
__ats_lab_11_1:
tmp58 = ats_caselptrlab_mac(anairiats_sum_6, tmp47, atslab_1) ;
tmp59 = ats_caselptrlab_mac(anairiats_sum_6, tmp47, atslab_2) ;
tmp65 = aux_10 (tmp58) ;
ats_ptrget_mac(ats_ptr_type, arg1) = tmp65 ;
tmp68 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2var_get_stamp (env0) ;
tmp67 = ATS_MALLOC(sizeof(anairiats_sum_7)) ;
ats_selptrset_mac(anairiats_sum_7, tmp67, atslab_0, tmp68) ;
tmp66 = ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_metfn (tmp67, tmp58, tmp59) ;
tmp46 = ATS_MALLOC(sizeof(anairiats_sum_4)) ;
ats_selptrset_mac(anairiats_sum_4, tmp46, atslab_0, tmp66) ;
break ;

/* branch: __ats_lab_14 */
__ats_lab_14_0:
if (((ats_sum_ptr_type)tmp47)->tag != 30) { goto __ats_lab_17_0 ; }
__ats_lab_14_1:
tmp69 = ats_caselptrlab_mac(anairiats_sum_6, tmp47, atslab_0) ;
tmp70 = ats_caselptrlab_mac(anairiats_sum_6, tmp47, atslab_1) ;
tmp71 = ats_caselptrlab_mac(anairiats_sum_6, tmp47, atslab_2) ;
tmp72 = aux_9 (env0, tmp71, arg1) ;
do {
/* branch: __ats_lab_15 */
__ats_lab_15_0:
if (tmp72 == (ats_sum_ptr_type)0) { goto __ats_lab_16_0 ; }
__ats_lab_15_1:
tmp73 = ats_caselptrlab_mac(anairiats_sum_4, tmp72, atslab_0) ;
ATS_FREE(tmp72) ;
tmp74 = ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_uni (tmp69, tmp70, tmp73) ;
tmp46 = ATS_MALLOC(sizeof(anairiats_sum_4)) ;
ats_selptrset_mac(anairiats_sum_4, tmp46, atslab_0, tmp74) ;
break ;

/* branch: __ats_lab_16 */
__ats_lab_16_0:
// if (tmp72 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_16_1:
tmp46 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
break ;

/* branch: __ats_lab_17 */
__ats_lab_17_0:
__ats_lab_17_1:
tmp46 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp46) ;
} /* end of [aux_9] */

typedef struct {
ats_fun_ptr_type closure_fun ;
ats_ptr_type closure_env_0 ;
} aux_9_closure_type ;

ats_ptr_type
aux_9_clofun (ats_clo_ptr_type cloptr, ats_ptr_type arg0, ats_ref_type arg1) {
return aux_9 (((aux_9_closure_type*)cloptr)->closure_env_0, arg0, arg1) ;
} /* end of function */

ATSinline()
ats_void_type
aux_9_closure_init (aux_9_closure_type *p_clo, ats_ptr_type env0) {
p_clo->closure_fun = (ats_fun_ptr_type)&aux_9_clofun ;
p_clo->closure_env_0 = env0 ;
return ;
} /* end of function */

ats_clo_ptr_type
aux_9_closure_make (ats_ptr_type env0) {
aux_9_closure_type *p_clo = ATS_MALLOC(sizeof(aux_9_closure_type)) ;
aux_9_closure_init (p_clo, env0) ;
return (ats_clo_ptr_type)p_clo ;
} /* end of function */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_env_met.dats: 4510(line=163, offs=3) -- 5701(line=197, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__s2exp_metfn_load (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp45) ;
ATSlocal (ats_ptr_type, tmp75) ;
ATSlocal (ats_ptr_type, tmp76) ;
ATSlocal (ats_ptr_type, tmp77) ;
ATSlocal (anairiats_rec_2, tmp78) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__s2exp_metfn_load:
/* ats_ptr_type tmp75 ; */
tmp75 = (ats_sum_ptr_type)0 ;
tmp76 = aux_9 (arg1, arg0, (&tmp75)) ;
do {
/* branch: __ats_lab_18 */
__ats_lab_18_0:
if (tmp76 == (ats_sum_ptr_type)0) { goto __ats_lab_19_0 ; }
__ats_lab_18_1:
tmp77 = ats_caselptrlab_mac(anairiats_sum_4, tmp76, atslab_0) ;
ATS_FREE(tmp76) ;
tmp78.atslab_0 = tmp77 ;
tmp78.atslab_1 = tmp75 ;

tmp45 = ATS_MALLOC(sizeof(anairiats_sum_8)) ;
ats_selptrset_mac(anairiats_sum_8, tmp45, atslab_0, tmp78) ;
break ;

/* branch: __ats_lab_19 */
__ats_lab_19_0:
// if (tmp76 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_19_1:
tmp45 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp45) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__s2exp_metfn_load] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_error_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_reference_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_reference_2edats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_error_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_reference_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_reference_2edats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_met_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */
ATS_GC_MARKROOT(&statmp8, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp11, sizeof(ats_ptr_type)) ;

/* marking external values for GC */

/* code for dynamic loading */
statmp11 = (ats_sum_ptr_type)0 ;
statmp8 = ref_make_elt_03658_ats_ptr_type (statmp11) ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_trans3_env_met_dats.c] */
