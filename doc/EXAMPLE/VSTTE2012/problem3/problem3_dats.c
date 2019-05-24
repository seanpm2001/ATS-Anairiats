/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2018-1-26: 17h: 4m
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
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/reference.cats"
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
/* type definitions */
typedef
struct {
ats_ptr_type atslab_3 ;
ats_ptr_type atslab_4 ;
} anairiats_rec_0 ;

typedef
struct {
ats_ptr_type atslab_data ;
ats_int_type atslab_size ;
ats_int_type atslab_first ;
ats_int_type atslab_len ;
} anairiats_rec_1 ;

/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_vbox_make_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_print_newline) () ;
ATSextern_fun(ats_void_type, atspre_print_double) (ats_double_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_nmod2) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_size1_of_int1) (ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_add_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_sub_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_mul_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_size_type, atspre_mul2_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_lt_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_neq_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_ptr_alloc_tsz) (ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_ptr_free) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_ptr_zero_tsz) (ats_ref_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_print_string) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_array_ptr_alloc_tsz) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_free) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_initialize_funenv_tsz) (ats_ref_type, ats_size_type, ats_ptr_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_initialize_cloenv_tsz) (ats_ref_type, ats_size_type, ats_ref_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_array_ptr_split_tsz) (ats_ptr_type, ats_size_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_array_ptr_takeout_tsz) (ats_ptr_type, ats_size_type, ats_size_type) ;
ATSextern_fun(anairiats_rec_0, atspre_array_ptr_takeout2_tsz) (ats_ptr_type, ats_size_type, ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_foreach_funenv_tsz) (ats_ref_type, ats_ptr_type, ats_size_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_iforeach_funenv_tsz) (ats_ref_type, ats_ptr_type, ats_size_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_array2_ptr_takeout_tsz) (ats_ptr_type, ats_size_type, ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__rbfree) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2array_2esats__array_v_takeout2_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2libats_2SATS_2ilistp_2esats__length_isfun_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____copy_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____free_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats____assert_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__sasp__ringbuf = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type ptr_alloc_01070_anairiats_rec_1 () ;
static
ats_ptr_type array_ptr_alloc_01563_ats_double_type (ats_size_type arg0) ;
static
ats_ptr_type create_01745_ats_double_type (ats_int_type arg0) ;
static
ats_void_type ptr0_set_01794_ats_double_type (ats_ptr_type arg0, ats_double_type arg1) ;
static
ats_void_type ptrset_01798_ats_double_type (ats_ptr_type arg0, ats_double_type arg1) ;
static
ats_void_type arrseg0_set_01756_ats_double_type (ats_ptr_type arg0, ats_int_type arg1, ats_double_type arg2) ;
static
ats_void_type push_01749_ats_double_type (ats_ptr_type arg0, ats_double_type arg1) ;
static
ats_double_type ptr0_get_01793_ats_double_type (ats_ptr_type arg0) ;
static
ats_double_type ptrget_01797_ats_double_type (ats_ptr_type arg0) ;
static
ats_double_type arrseg_get_01755_ats_double_type (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2) ;
static
ats_double_type pop_01750_ats_double_type (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem3/problem3.dats: 7738(line=327, offs=12) -- 7987(line=335, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__rbfree (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
// ATSlocal_void (tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;

__ats_lab_ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__rbfree:
tmp1 = ats_varget_mac(ats_ptr_type, arg0) ;
tmp3 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp1), atslab_data) ;
/* tmp2 = */ atspre_array_ptr_free (tmp3) ;
/* tmp0 = */ atspre_ptr_free (tmp1) ;
return /* (tmp0) */ ;
} /* end of [ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__rbfree] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/pointer.dats: 1817(line=56, offs=24) -- 1850(line=56, offs=57)
*/
ATSstaticdec()
ats_ptr_type
ptr_alloc_01070_anairiats_rec_1 () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;

__ats_lab_ptr_alloc_01070_anairiats_rec_1:
tmp8 = atspre_ptr_alloc_tsz (sizeof(anairiats_rec_1)) ;
return (tmp8) ;
} /* end of [ptr_alloc_01070_anairiats_rec_1] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/array.dats: 3612(line=123, offs=17) -- 3660(line=123, offs=65)
*/
ATSstaticdec()
ats_ptr_type
array_ptr_alloc_01563_ats_double_type (ats_size_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp11) ;

__ats_lab_array_ptr_alloc_01563_ats_double_type:
tmp11 = atspre_array_ptr_alloc_tsz (arg0, sizeof(ats_double_type)) ;
return (tmp11) ;
} /* end of [array_ptr_alloc_01563_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem3/problem3.dats: 7248(line=303, offs=8) -- 7675(line=322, offs=8)
*/
ATSstaticdec()
ats_ptr_type
create_01745_ats_double_type (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_size_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;

__ats_lab_create_01745_ats_double_type:
tmp7 = ptr_alloc_01070_anairiats_rec_1 () ;
tmp9 = ats_selsin_mac(tmp7, atslab_2) ;
tmp12 = atspre_size1_of_int1 (arg0) ;
tmp10 = array_ptr_alloc_01563_ats_double_type (tmp12) ;
tmp13 = ats_selsin_mac(tmp10, atslab_2) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp9), atslab_data) = tmp13 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp9), atslab_size) = arg0 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp9), atslab_first) = 0 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp9), atslab_len) = 0 ;
tmp6 = tmp9 ;
return (tmp6) ;
} /* end of [create_01745_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/unsafe.dats: 2038(line=65, offs=9) -- 2264(line=75, offs=2)
*/
ATSstaticdec()
ats_void_type
ptr0_set_01794_ats_double_type (ats_ptr_type arg0, ats_double_type arg1) {
/* local vardec */
// ATSlocal_void (tmp29) ;

__ats_lab_ptr0_set_01794_ats_double_type:
ats_ptrget_mac(ats_double_type, ats_castfn_mac(ats_ptr_type, arg0)) = arg1 ;
return /* (tmp29) */ ;
} /* end of [ptr0_set_01794_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/unsafe.dats: 2486(line=85, offs=21) -- 2513(line=85, offs=48)
*/
ATSstaticdec()
ats_void_type
ptrset_01798_ats_double_type (ats_ptr_type arg0, ats_double_type arg1) {
/* local vardec */
// ATSlocal_void (tmp28) ;

__ats_lab_ptrset_01798_ats_double_type:
/* tmp28 = */ ptr0_set_01794_ats_double_type (arg0, arg1) ;
return /* (tmp28) */ ;
} /* end of [ptrset_01798_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem3/problem3.dats: 12373(line=526, offs=3) -- 12672(line=536, offs=4)
*/
ATSstaticdec()
ats_void_type
arrseg0_set_01756_ats_double_type (ats_ptr_type arg0, ats_int_type arg1, ats_double_type arg2) {
/* local vardec */
// ATSlocal_void (tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;
ATSlocal (ats_size_type, tmp26) ;
ATSlocal (ats_size_type, tmp27) ;

__ats_lab_arrseg0_set_01756_ats_double_type:
tmp27 = atspre_size1_of_int1 (arg1) ;
tmp26 = atspre_mul_size1_size1 (tmp27, sizeof(ats_double_type)) ;
tmp25 = atspre_padd_size (arg0, tmp26) ;
/* tmp24 = */ ptrset_01798_ats_double_type (ats_castfn_mac(ats_ptr_type, tmp25), arg2) ;
return /* (tmp24) */ ;
} /* end of [arrseg0_set_01756_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem3/problem3.dats: 9924(line=426, offs=6) -- 10461(line=443, offs=4)
*/
ATSstaticdec()
ats_void_type
push_01749_ats_double_type (ats_ptr_type arg0, ats_double_type arg1) {
/* local vardec */
// ATSlocal_void (tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
ATSlocal (ats_int_type, tmp17) ;
ATSlocal (ats_int_type, tmp18) ;
ATSlocal (ats_int_type, tmp19) ;
ATSlocal (ats_int_type, tmp20) ;
ATSlocal (ats_int_type, tmp21) ;
ATSlocal (ats_int_type, tmp22) ;
// ATSlocal_void (tmp23) ;
ATSlocal (ats_ptr_type, tmp30) ;
ATSlocal (ats_int_type, tmp31) ;

__ats_lab_push_01749_ats_double_type:
tmp16 = ats_varget_mac(ats_ptr_type, arg0) ;
tmp17 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp16), atslab_first) ;
tmp18 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp16), atslab_len) ;
tmp20 = atspre_iadd (tmp17, tmp18) ;
tmp21 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp16), atslab_size) ;
tmp19 = atspre_nmod2 (tmp20, tmp21) ;
tmp22 = ats_selsin_mac(tmp19, atslab_1) ;
tmp30 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp16), atslab_data) ;
/* tmp23 = */ arrseg0_set_01756_ats_double_type (tmp30, tmp22, arg1) ;
tmp31 = atspre_iadd (tmp18, 1) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp16), atslab_len) = tmp31 ;
return /* (tmp15) */ ;
} /* end of [push_01749_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/unsafe.dats: 1770(line=51, offs=9) -- 1986(line=61, offs=2)
*/
ATSstaticdec()
ats_double_type
ptr0_get_01793_ats_double_type (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_double_type, tmp45) ;

__ats_lab_ptr0_get_01793_ats_double_type:
tmp45 = ats_ptrget_mac(ats_double_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp45) ;
} /* end of [ptr0_get_01793_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/unsafe.dats: 2444(line=84, offs=21) -- 2464(line=84, offs=41)
*/
ATSstaticdec()
ats_double_type
ptrget_01797_ats_double_type (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_double_type, tmp44) ;

__ats_lab_ptrget_01797_ats_double_type:
tmp44 = ptr0_get_01793_ats_double_type (arg0) ;
return (tmp44) ;
} /* end of [ptrget_01797_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem3/problem3.dats: 12181(line=516, offs=3) -- 12305(line=521, offs=4)
*/
ATSstaticdec()
ats_double_type
arrseg_get_01755_ats_double_type (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2) {
/* local vardec */
ATSlocal (ats_double_type, tmp39) ;
ATSlocal (ats_int_type, tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_size_type, tmp42) ;
ATSlocal (ats_size_type, tmp43) ;

__ats_lab_arrseg_get_01755_ats_double_type:
tmp40 = atspre_iadd (arg1, arg2) ;
tmp43 = atspre_size1_of_int1 (tmp40) ;
tmp42 = atspre_mul_size1_size1 (tmp43, sizeof(ats_double_type)) ;
tmp41 = atspre_padd_size (arg0, tmp42) ;
tmp39 = ptrget_01797_ats_double_type (ats_castfn_mac(ats_ptr_type, tmp41)) ;
return (tmp39) ;
} /* end of [arrseg_get_01755_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem3/problem3.dats: 11077(line=471, offs=5) -- 11682(line=487, offs=4)
*/
ATSstaticdec()
ats_double_type
pop_01750_ats_double_type (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_double_type, tmp34) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_int_type, tmp36) ;
ATSlocal (ats_int_type, tmp37) ;
ATSlocal (ats_double_type, tmp38) ;
ATSlocal (ats_ptr_type, tmp46) ;
ATSlocal (ats_int_type, tmp47) ;
ATSlocal (ats_int_type, tmp48) ;
ATSlocal (ats_int_type, tmp49) ;
ATSlocal (ats_int_type, tmp50) ;
ATSlocal (ats_int_type, tmp51) ;

__ats_lab_pop_01750_ats_double_type:
tmp35 = ats_varget_mac(ats_ptr_type, arg0) ;
tmp36 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp35), atslab_first) ;
tmp37 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp35), atslab_len) ;
tmp46 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp35), atslab_data) ;
tmp38 = arrseg_get_01755_ats_double_type (tmp46, tmp36, 0) ;
tmp47 = atspre_isub (tmp37, 1) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp35), atslab_len) = tmp47 ;
tmp49 = atspre_iadd (tmp36, 1) ;
tmp50 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp35), atslab_size) ;
tmp48 = atspre_nmod2 (tmp49, tmp50) ;
tmp51 = ats_selsin_mac(tmp48, atslab_1) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp35), atslab_first) = tmp51 ;
tmp34 = tmp38 ;
return (tmp34) ;
} /* end of [pop_01750_ats_double_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/doc/EXAMPLE/VSTTE2012/problem3/problem3.dats: 12757(line=543, offs=6) -- 14049(line=585, offs=2)
*/
ATSglobaldec()
ats_void_type
mainats () {
/* local vardec */
// ATSlocal_void (tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
// ATSlocal_void (tmp14) ;
// ATSlocal_void (tmp32) ;
ATSlocal (ats_double_type, tmp33) ;
// ATSlocal_void (tmp52) ;
// ATSlocal_void (tmp53) ;
// ATSlocal_void (tmp54) ;
// ATSlocal_void (tmp55) ;
ATSlocal (ats_double_type, tmp56) ;
// ATSlocal_void (tmp57) ;
// ATSlocal_void (tmp58) ;
// ATSlocal_void (tmp59) ;
ATSlocal (ats_double_type, tmp60) ;
// ATSlocal_void (tmp61) ;
// ATSlocal_void (tmp62) ;
// ATSlocal_void (tmp63) ;

__ats_lab_mainats:
tmp5 = create_01745_ats_double_type (2) ;
/* tmp14 = */ push_01749_ats_double_type (tmp5, ats_castfn_mac(ats_double_type, 1.0)) ;
/* tmp32 = */ push_01749_ats_double_type (tmp5, ats_castfn_mac(ats_double_type, 2.0)) ;
tmp33 = pop_01750_ats_double_type (tmp5) ;
/* tmp52 = */ atspre_print_string (ATSstrcst("h = ")) ;
/* tmp53 = */ atspre_print_double (ats_castfn_mac(ats_double_type, tmp33)) ;
/* tmp54 = */ atspre_print_newline () ;
/* tmp55 = */ push_01749_ats_double_type (tmp5, ats_castfn_mac(ats_double_type, 3.0)) ;
tmp56 = pop_01750_ats_double_type (tmp5) ;
/* tmp57 = */ atspre_print_string (ATSstrcst("h = ")) ;
/* tmp58 = */ atspre_print_double (ats_castfn_mac(ats_double_type, tmp56)) ;
/* tmp59 = */ atspre_print_newline () ;
tmp60 = pop_01750_ats_double_type (tmp5) ;
/* tmp61 = */ atspre_print_string (ATSstrcst("h = ")) ;
/* tmp62 = */ atspre_print_double (ats_castfn_mac(ats_double_type, tmp60)) ;
/* tmp63 = */ atspre_print_newline () ;
/* tmp4 = */ ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__rbfree (tmp5) ;
return /* (tmp4) */ ;
} /* end of [mainats] */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2libats_2SATS_2ilistp_2esats__staload (void) ;
// extern ats_void_type ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2queue_alg_2esats__staload (void) ;
// extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__staload (void) ;
// extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2unsafe_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2unsafe_2edats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__staload () {
static int ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2libats_2SATS_2ilistp_2esats__staload () ;
// ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2queue_alg_2esats__staload () ;
// ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats__staload () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__staload () ;
// ATS_2d0_2e2_2e12_2prelude_2SATS_2unsafe_2esats__staload () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2unsafe_2edats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__dynload () {
// ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2SATS_2array_2esats__array_v_takeout2_prfck () ;
ATS_2d0_2e2_2e12_2libats_2SATS_2ilistp_2esats__length_isfun_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____copy_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____free_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats____assert_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

int main (int argc, char *argv[]) {
ATS_GC_INIT() ;
mainats_prelude() ;
ATS_2d0_2e2_2e12_2doc_2EXAMPLE_2VSTTE2012_2problem3_2problem3_2edats__dynload() ;
mainats((ats_int_type)argc, (ats_ptr_type)argv) ;
return (0) ;
} /* end of main */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [problem3_dats.c] */
