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


#include <errno.h>
#include <unistd.h>
#include <sys/wait.h>

ats_int_type
atslib_fork_and_exec_and_wait
  (ats_clo_ptr_type f_child) {
  pid_t pid ;
  int status ;

  pid = fork () ;
  if (pid < 0) {
    ats_exit_errmsg (errno, "Exit: [fork] failed.\n") ;
  }
  if (pid > 0) { wait (&status) ; return status ; }
  /* this is the child */
  ((ats_void_type (*)(ats_clo_ptr_type))f_child->closure_fun)(f_child) ;
  exit (0) ;
} // end of [atslib_fork_and_exec_and_wait]

#define __GETCWD_BUFSZ 64

ats_ptr_type
atslib_getcwd0 () {
  char *buf, *res ;
  int sz = __GETCWD_BUFSZ ;
//
  buf = (char*)ATS_MALLOC (__GETCWD_BUFSZ) ;
  while (1) {
    res = getcwd (buf, sz) ;
    if (!res) {
      ATS_FREE (buf) ;
      sz = sz + sz ; buf = (char*)ATS_MALLOC (sz) ;
      continue ;
    }
    break ;
  } // end of [while]
//
  return buf ;
} // end of [atslib_getcwd0]


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
ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__staload () {
static int ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__staload_flag = 1 ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__dynload () {
// ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2src_2libc_dats_unistd_2edats__staload () ;

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

/* end of [/home/hwxi/research/Anairiats/bootstrap1/libc_dats_unistd_dats.c] */
