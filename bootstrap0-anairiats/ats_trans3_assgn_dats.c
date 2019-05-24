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

#include "ats_counter.cats"

#include "ats_intinf.cats"

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
} anairiats_rec_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
} anairiats_rec_1 ;

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
ats_ptr_type atslab_3 ;
ats_ptr_type atslab_4 ;
} anairiats_rec_2 ;

typedef struct {
anairiats_rec_2 atslab_0 ;
} anairiats_sum_3 ;

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_4 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_5 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_cons) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__list_nil) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__None) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__Some) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__None_vt) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2prelude_2basics_sta_2esats__Some_vt) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_bool_type, atspre_neg_bool) (ats_bool_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_varet_type, ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_list_2esats__list_append) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2lablst_trim_s2lablst_s2lablst) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2lab) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_is_proof) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_is_linear) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2exp) (ats_ptr_type) ;
ATSextern_fun(anairiats_rec_0, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_addr_normalize) (ats_ptr_type) ;
ATSextern_fun(anairiats_rec_1, ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_linset_slablst_cstr) (ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_staexp2_solve_2esats__s2exp_size_equal_solve_err) (ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_inc_lin) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_addr) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_typ) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_typ) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__prerr_d2var) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_is_linear) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_reset_typ_at) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__s2exp_void_t0ype) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__trans3_env_add_proplst) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_d2varset_env_d2var_is_llam_local) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_d2varset_env_find_viewat) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__s2exp_addr_assgn_slablst) (ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_void_type aux_1 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_assgn.dats: 4057(line=119, offs=11) -- 4201(line=121, offs=28)
*/
ATSstaticdec()
ats_void_type
aux_1 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp44) ;
ATSlocal (ats_ptr_type, tmp45) ;
ATSlocal (ats_ptr_type, tmp46) ;
// ATSlocal_void (tmp47) ;
// ATSlocal_void (tmp48) ;

__ats_lab_aux_1:
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp45 = ats_caselptrlab_mac(anairiats_sum_4, arg0, atslab_0) ;
tmp46 = ats_caselptrlab_mac(anairiats_sum_4, arg0, atslab_1) ;
/* tmp47 = */ atspre_prerr_string (ATSstrcst(".")) ;
/* tmp48 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2lab (tmp45) ;
arg0 = tmp46 ;
goto __ats_lab_aux_1 ; // tail call
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
break ;
} while (0) ;
return /* (tmp44) */ ;
} /* end of [aux_1] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_assgn.dats: 2024(line=67, offs=3) -- 4440(line=131, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__s2exp_addr_assgn_slablst (ats_ptr_type arg0, ats_ptr_type arg1, ats_ptr_type arg2, ats_ptr_type arg3) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (anairiats_rec_0, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
ATSlocal (anairiats_rec_2, tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_bool_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (anairiats_rec_1, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
ATSlocal (ats_ptr_type, tmp17) ;
// ATSlocal_void (tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_int_type, tmp20) ;
// ATSlocal_void (tmp21) ;
ATSlocal (ats_bool_type, tmp22) ;
ATSlocal (ats_bool_type, tmp23) ;
// ATSlocal_void (tmp24) ;
ATSlocal (ats_bool_type, tmp25) ;
// ATSlocal_void (tmp26) ;
// ATSlocal_void (tmp27) ;
// ATSlocal_void (tmp28) ;
// ATSlocal_void (tmp29) ;
// ATSlocal_void (tmp30) ;
// ATSlocal_void (tmp31) ;
// ATSlocal_void (tmp32) ;
// ATSlocal_void (tmp33) ;
// ATSlocal_void (tmp34) ;
// ATSlocal_void (tmp35) ;
// ATSlocal_void (tmp36) ;
ATSlocal (ats_bool_type, tmp37) ;
// ATSlocal_void (tmp38) ;
// ATSlocal_void (tmp39) ;
// ATSlocal_void (tmp40) ;
// ATSlocal_void (tmp41) ;
// ATSlocal_void (tmp42) ;
// ATSlocal_void (tmp43) ;
// ATSlocal_void (tmp49) ;
// ATSlocal_void (tmp50) ;
// ATSlocal_void (tmp51) ;
// ATSlocal_void (tmp52) ;
// ATSlocal_void (tmp53) ;
// ATSlocal_void (tmp54) ;
// ATSlocal_void (tmp55) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__s2exp_addr_assgn_slablst:
tmp1 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_addr_normalize (arg1) ;
tmp2 = ats_select_mac(tmp1, atslab_0) ;
tmp3 = ats_select_mac(tmp1, atslab_1) ;
tmp4 = ATS_2d0_2e2_2e10_2src_2ats_list_2esats__list_append (tmp3, arg2) ;
tmp5 = ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_d2varset_env_find_viewat (tmp2, tmp4) ;
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (tmp5 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp6 = ats_caselptrlab_mac(anairiats_sum_3, tmp5, atslab_0) ;
ATS_FREE(tmp5) ;
tmp7 = ats_select_mac(tmp6, atslab_0) ;
tmp8 = ats_select_mac(tmp6, atslab_1) ;
tmp9 = ats_select_mac(tmp6, atslab_2) ;
tmp10 = ats_select_mac(tmp6, atslab_3) ;
tmp11 = ats_select_mac(tmp6, atslab_4) ;
tmp12 = ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__the_d2varset_env_d2var_is_llam_local (tmp7) ;
/* ats_ptr_type tmp13 ; */
tmp13 = (ats_sum_ptr_type)0 ;
tmp14 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_linset_slablst_cstr (arg0, tmp8, tmp11, arg3, (&tmp13)) ;
tmp15 = ats_select_mac(tmp14, atslab_0) ;
tmp16 = ats_select_mac(tmp14, atslab_1) ;
tmp17 = ats_select_mac(tmp14, atslab_2) ;
/* tmp18 = */ ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__trans3_env_add_proplst (arg0, tmp13) ;
tmp19 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2lablst_trim_s2lablst_s2lablst (tmp3, tmp10, tmp17) ;
/* ats_int_type tmp20 ; */
tmp20 = 0 ;
tmp23 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_is_proof (arg3) ;
tmp22 = atspre_neg_bool (tmp23) ;
if (tmp22) {
/* tmp21 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_solve_2esats__s2exp_size_equal_solve_err (arg0, arg3, tmp15, (&tmp20)) ;
} else {
/* empty */
} /* end of [if] */
tmp25 = atspre_gt_int_int (tmp20, 0) ;
if (tmp25) {
/* tmp26 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp27 = */ atspre_prerr_string (ATSstrcst(": error(3)")) ;
/* tmp28 = */ atspre_prerr_string (ATSstrcst(": size mismatch for assignment")) ;
/* tmp29 = */ atspre_prerr_string (ATSstrcst(": the following two types are expected to be size-equal but they may not be:")) ;
/* tmp30 = */ atspre_prerr_newline () ;
/* tmp31 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2exp (arg3) ;
/* tmp32 = */ atspre_prerr_newline () ;
/* tmp33 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2exp (tmp15) ;
/* tmp34 = */ atspre_prerr_newline () ;
/* tmp24 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
} else {
/* empty */
} /* end of [if] */
/* tmp35 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_reset_typ_at (tmp7, tmp16, tmp9) ;
tmp37 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_is_linear (tmp15) ;
if (tmp37) {
/* tmp38 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp39 = */ atspre_prerr_string (ATSstrcst(": error(3)")) ;
/* tmp40 = */ atspre_prerr_string (ATSstrcst(": a linear value of the type [")) ;
/* tmp41 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2exp (tmp15) ;
/* tmp42 = */ atspre_prerr_string (ATSstrcst("] is abandoned.")) ;
/* tmp43 = */ atspre_prerr_newline () ;
/* tmp36 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
} else {
/* empty */
} /* end of [if] */
tmp0 = tmp19 ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (tmp5 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
/* tmp49 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp50 = */ atspre_prerr_string (ATSstrcst(": error(3)")) ;
/* tmp51 = */ atspre_prerr_string (ATSstrcst(": there is no view at [")) ;
/* tmp52 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2exp (tmp2) ;
/* tmp53 = */ aux_1 (tmp4) ;
/* tmp54 = */ atspre_prerr_string (ATSstrcst("]")) ;
/* tmp55 = */ atspre_prerr_newline () ;
/* tmp0 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
break ;
} while (0) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__s2exp_addr_assgn_slablst] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_assgn.dats: 4536(line=137, offs=3) -- 5897(line=185, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__d2var_lin_assgn_slablst (ats_ptr_type arg0, ats_ptr_type arg1, ats_ptr_type arg2, ats_ptr_type arg3) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp56) ;
ATSlocal (ats_ptr_type, tmp57) ;
ATSlocal (ats_ptr_type, tmp58) ;
ATSlocal (ats_ptr_type, tmp59) ;
ATSlocal (ats_ptr_type, tmp60) ;
ATSlocal (anairiats_rec_1, tmp61) ;
ATSlocal (ats_ptr_type, tmp62) ;
ATSlocal (ats_ptr_type, tmp63) ;
ATSlocal (ats_ptr_type, tmp64) ;
// ATSlocal_void (tmp65) ;
// ATSlocal_void (tmp66) ;
ATSlocal (ats_bool_type, tmp67) ;
// ATSlocal_void (tmp68) ;
ATSlocal (ats_bool_type, tmp69) ;
// ATSlocal_void (tmp70) ;
// ATSlocal_void (tmp71) ;
// ATSlocal_void (tmp72) ;
// ATSlocal_void (tmp73) ;
// ATSlocal_void (tmp74) ;
// ATSlocal_void (tmp75) ;
// ATSlocal_void (tmp76) ;
ATSlocal (ats_ptr_type, tmp77) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__d2var_lin_assgn_slablst:
tmp58 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_typ (arg1) ;
do {
/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (tmp58 == (ats_sum_ptr_type)0) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp59 = ats_caselptrlab_mac(anairiats_sum_5, tmp58, atslab_0) ;
tmp57 = tmp59 ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
// if (tmp58 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_5_1:
tmp57 = ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__s2exp_void_t0ype () ;
break ;
} while (0) ;
/* ats_ptr_type tmp60 ; */
tmp60 = (ats_sum_ptr_type)0 ;
tmp61 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_linset_slablst_cstr (arg0, tmp57, arg2, arg3, (&tmp60)) ;
tmp62 = ats_select_mac(tmp61, atslab_0) ;
tmp63 = ats_select_mac(tmp61, atslab_1) ;
tmp64 = ats_select_mac(tmp61, atslab_2) ;
/* tmp65 = */ ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__trans3_env_add_proplst (arg0, tmp60) ;
tmp67 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_is_linear (arg1) ;
if (tmp67) {
tmp69 = ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__s2exp_is_linear (tmp62) ;
if (tmp69) {
/* tmp70 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp71 = */ atspre_prerr_string (ATSstrcst(": error(3)")) ;
/* tmp72 = */ atspre_prerr_string (ATSstrcst(": a linear value of the type [")) ;
/* tmp73 = */ ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__prerr_s2exp (tmp62) ;
/* tmp74 = */ atspre_prerr_string (ATSstrcst("] is abandoned.")) ;
/* tmp75 = */ atspre_prerr_newline () ;
/* tmp68 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
} else {
/* empty */
} /* end of [if] */
/* tmp66 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_inc_lin (arg1) ;
} else {
/* empty */
} /* end of [if] */
tmp77 = ATS_MALLOC(sizeof(anairiats_sum_5)) ;
ats_selptrset_mac(anairiats_sum_5, tmp77, atslab_0, tmp63) ;
/* tmp76 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_set_typ (arg1, tmp77) ;
tmp56 = tmp64 ;
return (tmp56) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__d2var_lin_assgn_slablst] */

/*
// /home/hwxi/research/Anairiats/src/ats_trans3_assgn.dats: 5992(line=191, offs=3) -- 6453(line=205, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__d2var_mut_assgn_slablst (ats_ptr_type arg0, ats_ptr_type arg1, ats_ptr_type arg2, ats_ptr_type arg3) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp78) ;
ATSlocal (ats_ptr_type, tmp79) ;
ATSlocal (ats_ptr_type, tmp80) ;
ATSlocal (ats_ptr_type, tmp81) ;
// ATSlocal_void (tmp82) ;
// ATSlocal_void (tmp83) ;
// ATSlocal_void (tmp84) ;
// ATSlocal_void (tmp85) ;
// ATSlocal_void (tmp86) ;
// ATSlocal_void (tmp87) ;

__ats_lab_ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__d2var_mut_assgn_slablst:
tmp80 = ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__d2var_get_addr (arg1) ;
do {
/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (tmp80 == (ats_sum_ptr_type)0) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp81 = ats_caselptrlab_mac(anairiats_sum_5, tmp80, atslab_0) ;
tmp79 = tmp81 ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
// if (tmp80 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_7_1:
/* tmp82 = */ ATS_2d0_2e2_2e10_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp83 = */ atspre_prerr_string (ATSstrcst(": error(3)")) ;
/* tmp84 = */ atspre_prerr_string (ATSstrcst(": the dynamic variable [")) ;
/* tmp85 = */ ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__prerr_d2var (arg1) ;
/* tmp86 = */ atspre_prerr_string (ATSstrcst("] is expected to be mutable but it is not.")) ;
/* tmp87 = */ atspre_prerr_newline () ;
/* tmp79 = */ ATS_2d0_2e2_2e10_2src_2ats_error_2esats__abort () ;
break ;
} while (0) ;
tmp78 = ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__s2exp_addr_assgn_slablst (arg0, tmp79, arg2, arg3) ;
return (tmp78) ;
} /* end of [ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__d2var_mut_assgn_slablst] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_error_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_list_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_staexp2_solve_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2ats_error_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_list_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_staexp2_solve_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_dynexp2_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_stadyncst2_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_trans3_env_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_trans3_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__dynload () {
ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2ats_trans3_assgn_2edats__staload () ;

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

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_trans3_assgn_dats.c] */
