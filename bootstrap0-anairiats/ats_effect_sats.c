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

/* prologues from statically loaded files */
/* external codes at top */
/* type definitions */
typedef struct {
ats_ptr_type atslab_0 ;
ats_int_type atslab_1 ;
ats_int_type atslab_2 ;
ats_ptr_type atslab_3 ;
} anairiats_rec_0 ;

/* external typedefs */
/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__EFFCSTall) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__EFFCSTnil) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__EFFCSTset) ;

/* exn constructor declarations */
/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_location_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2src_2ats_syntax_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__staload () {
static int ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2src_2ats_location_2esats__staload () ;
ATS_2d0_2e2_2e10_2src_2ats_syntax_2esats__staload () ;

ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__EFFCSTall.tag = 0 ;
ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__EFFCSTnil.tag = 1 ;
// ATS_2d0_2e2_2e10_2src_2ats_effect_2esats__EFFCSTset.tag = 2 ;
return ;
} /* staload function */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/research/Anairiats/bootstrap1/ats_effect_sats.c] */
