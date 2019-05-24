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


/*
** HX-2011-01-26:
** extern YYSTYPE yylval ; // generated by [bison]
*/
typedef void YYSTYPE ;
#define YYSTYPE_IS_DECLARED 1
#include "ats_grammar_yats.h"

typedef
struct {
  char *key ; int val ;
} keyval ;

#define KEYWORD_TABLE_SIZE 1024

keyval
theKeywordTable[KEYWORD_TABLE_SIZE] = {0} ;

extern
ats_uint_type
atspre_string_hash_33 (ats_ptr_type key) ;

static
void
keyval_insert (
  char *key, int val
) {
  unsigned int hash_val ; int i ; keyval *itm ;
//
  hash_val = atspre_string_hash_33 ((char*)key) ;
  i = hash_val % KEYWORD_TABLE_SIZE ; itm = &theKeywordTable[i] ;
//
  while (itm->key) {
    i += 1 ; if (i == KEYWORD_TABLE_SIZE) i = 0 ;
    itm = &theKeywordTable[i] ;
  } // end of [while]
//
  itm->key = (char*)key ; itm->val = (int)val ;
  return ;
} // end of [keyval_insert]

ats_int_type
atsopt_keyword_search
  (ats_ptr_type key) {
  unsigned int hash_val ; int i ; keyval *itm ;
//
  hash_val = atspre_string_hash_33 (key) ;
  i = hash_val % KEYWORD_TABLE_SIZE ; itm = &theKeywordTable[i] ;
//
  while (itm->key) {
    if (!strcmp((char*)key, itm->key))
      return itm->val ;
    i += 1 ; if (i == KEYWORD_TABLE_SIZE) i = 0 ;
    itm = &theKeywordTable[i] ;
  } // end of [while]
//
  return -1 ;
} // end of [atsopt_keyword_search]

static
ats_void_type
atsopt_keyval_table_initialize (
  // no argument for this function
) {
//
// HX: [theKeywordTable] is already initialized:
//
#if(0)
memset (&theKeywordTable[0], 0, sizeof(theKeywordTable)) ;
#endif

//
// HX: symbolic keywords
//
keyval_insert("&", AMPERSAND) ;
keyval_insert("`", BACKQUOTE) ;
keyval_insert("!", BANG) ;
keyval_insert("|", BAR) ;
keyval_insert(":", COLON) ;
keyval_insert("$", DOLLAR) ;
keyval_insert(".", DOT) ;
keyval_insert("=", EQ) ;
keyval_insert("#", HASH) ;
keyval_insert("~", TILDE) ;
keyval_insert("..", DOTDOT) ;
keyval_insert("...", DOTDOTDOT) ;
keyval_insert("=>", EQGT) ; // implication without decoration
keyval_insert("=<", EQLT) ; // implication decoration
keyval_insert("=<>", EQLTGT) ; // implication with empty decoration
keyval_insert("=/=>", EQSLASHEQGT) ;
keyval_insert("=>>", EQGTGT) ;
keyval_insert("=/=>>", EQSLASHEQGTGT) ;
keyval_insert("<", LT) ;
keyval_insert(">", GT) ;
keyval_insert("><", GTLT) ;
keyval_insert(".<", DOTLT) ;
keyval_insert(">.", GTDOT) ; // .<...>. : metric
keyval_insert(".<>.", DOTLTGTDOT) ;
keyval_insert("->", MINUSGT) ; // implication
keyval_insert("-<", MINUSLT) ; // -<...> : decorated implication
keyval_insert("-<>", MINUSLTGT) ;
keyval_insert(":<", COLONLT) ; // :<...> : decorated implication
keyval_insert(":<>", COLONLTGT) ;
//
// HX: alphanumeric keywords
//
keyval_insert("absprop", ABSPROP) ;
keyval_insert("abstype", ABSTYPE) ;
keyval_insert("absview", ABSVIEW) ;
keyval_insert("absvtype", ABSVIEWTYPE) ;
keyval_insert("absviewtype", ABSVIEWTYPE) ;
keyval_insert("and", AND) ;
keyval_insert("as", AS) ;
keyval_insert("assume", ASSUME) ;
keyval_insert("begin", BEGIN) ;
keyval_insert("break", BREAK) ;
keyval_insert("case", CASE) ;
keyval_insert("castfn", CASTFN) ; // for casting functions
keyval_insert("classdec", CLASSDEC) ;
keyval_insert("continue", CONTINUE) ;
keyval_insert("datasort", DATASORT) ;
keyval_insert("dataparasort", DATAPARASORT) ;
keyval_insert("dataprop", DATAPROP) ;
keyval_insert("datatype", DATATYPE) ;
keyval_insert("dataview", DATAVIEW) ;
keyval_insert("datavtype", DATAVIEWTYPE) ;
keyval_insert("dataviewtype", DATAVIEWTYPE) ;
keyval_insert("do", DO) ;
keyval_insert("dyn", DYN) ;
keyval_insert("dynload", DYNLOAD) ;
keyval_insert("else", ELSE) ;
keyval_insert("end", END) ;
keyval_insert("exception", EXCEPTION) ;
keyval_insert("extern", EXTERN) ;
keyval_insert("fix", FIX) ;
keyval_insert("fn", FN) ;
keyval_insert("for", FOR) ;
keyval_insert("fun", FUN) ;
keyval_insert("if", IF) ;
keyval_insert("implement", IMPLEMENT) ;
keyval_insert("in", IN) ;
keyval_insert("infix", INFIX) ;
keyval_insert("infixl", INFIXL) ;
keyval_insert("infixr", INFIXR) ;
keyval_insert("lam", LAM) ;
keyval_insert("let", LET) ;
keyval_insert("llam", LLAM) ;
keyval_insert("local", LOCAL) ;
keyval_insert("macdef", MACDEF) ;
keyval_insert("macrodef", MACRODEF) ;
/*
keyval_insert("method", METHOD) ;
keyval_insert("modcls", MODCLS) ;
*/
keyval_insert("nonfix", NONFIX) ;
keyval_insert("overload", OVERLOAD) ;
keyval_insert("par", PAR) ;
keyval_insert("postfix", POSTFIX) ;
keyval_insert("praxi", PRAXI) ;
keyval_insert("prefix", PREFIX) ;
keyval_insert("prfn", PRFN) ;
keyval_insert("prfun", PRFUN) ;
keyval_insert("prval", PRVAL) ;
keyval_insert("of", OF) ;
keyval_insert("op", OP) ;
keyval_insert("propdef", PROPDEF) ;
keyval_insert("rec", REC) ;
keyval_insert("scase", SCASE) ;
keyval_insert("sif", SIF) ;
keyval_insert("sortdef", SORTDEF) ;
keyval_insert("sta", STACST) ; // HX-2011-09-09: BWC
keyval_insert("stacst", STACST) ; // HX-2011-09-09: sta -> stacst
keyval_insert("stadef", STADEF) ;
keyval_insert("staif", STAIF) ;
keyval_insert("staload", STALOAD) ;
keyval_insert("stavar", STAVAR) ;
/*
keyval_insert("struct", STRUCT) ;
keyval_insert("super", SUPER) ;
*/
keyval_insert("symelim", SYMELIM) ;
keyval_insert("symintr", SYMINTR) ;
keyval_insert("then", THEN) ;
keyval_insert("try", TRY) ;
keyval_insert("typedef", TYPEDEF) ;
/*
keyval_insert("union", UNION) ;
*/
keyval_insert("val", VAL) ;
keyval_insert("var", VAR) ;
keyval_insert("viewdef", VIEWDEF) ;
keyval_insert("vtypedef", VIEWTYPEDEF) ;
keyval_insert("viewtypedef", VIEWTYPEDEF) ;
keyval_insert("when", WHEN) ;
keyval_insert("where", WHERE) ;
keyval_insert("while", WHILE) ;
keyval_insert("with", WITH) ;
keyval_insert("withprop", WITHPROP) ;
keyval_insert("withtype", WITHTYPE) ;
keyval_insert("withview", WITHVIEW) ;
keyval_insert("withvtype", WITHVIEWTYPE) ;
keyval_insert("withviewtype", WITHVIEWTYPE) ;
//
keyval_insert("$arrpsz", DLRARRPSZ) ;
keyval_insert("$decrypt", DLRDECRYPT) ;
keyval_insert("$delay", DLRDELAY) ; // $delay
keyval_insert("$dynload", DLRDYNLOAD) ;
/*
keyval_insert("$exec", DLREXEC) ;
*/
keyval_insert("$effmask_all", DLREFFMASK_ALL) ;
keyval_insert("$effmask_exn", DLREFFMASK_EXN) ;
keyval_insert("$effmask_ntm", DLREFFMASK_NTM) ;
keyval_insert("$effmask_ref", DLREFFMASK_REF) ;
keyval_insert("$extern", DLREXTERN) ;
keyval_insert("$extval", DLREXTVAL) ;
keyval_insert("$extype", DLREXTYPE) ;
keyval_insert("$extype_struct", DLREXTYPE_STRUCT) ;
keyval_insert("$encrypt", DLRENCRYPT) ;
/*
keyval_insert("$fold", DLRFOLD) ;
*/
keyval_insert("$ldelay", DLRLDELAY) ; // linear $delay
keyval_insert("$lst", DLRLST_T) ;
keyval_insert("$lst_t", DLRLST_T) ;
keyval_insert("$lst_vt", DLRLST_VT) ;
keyval_insert("$raise", DLRRAISE) ;
keyval_insert("$rec_t", DLRREC_T) ;
keyval_insert("$rec_vt", DLRREC_VT) ;
keyval_insert("$tup_t", DLRTUP_T) ;
keyval_insert("$tup_vt", DLRTUP_VT) ;
keyval_insert("$showtype", DLRSHOWTYPE) ;
/*
keyval_insert("$unfold", DLRUNFOLD) ;
*/
//
keyval_insert("#assert", SRPASSERT) ;
keyval_insert("#define", SRPDEFINE) ;
keyval_insert("#elif", SRPELIF) ;
keyval_insert("#elifdef", SRPELIFDEF) ;
keyval_insert("#elifndef", SRPELIFNDEF) ;
keyval_insert("#else", SRPELSE) ;
keyval_insert("#endif", SRPENDIF) ;
keyval_insert("#error", SRPERROR) ;
keyval_insert("#if", SRPIF) ;
keyval_insert("#ifdef", SRPIFDEF) ;
keyval_insert("#ifndef", SRPIFNDEF) ;
keyval_insert("#include", SRPINCLUDE) ;
keyval_insert("#print", SRPPRINT) ;
keyval_insert("#then", SRPTHEN) ;
keyval_insert("#undef", SRPUNDEF) ;
//
keyval_insert("#FILENAME", SRPFILENAME) ;
keyval_insert("#LOCATION", SRPLOCATION) ;
/*
//
// HX: these keywords are hard-wired into [ats_lexer.lats]:
//
keyval_insert("fn*", FNSTAR)
keyval_insert("for*", FORSTAR)
keyval_insert("while*", WHILESTAR)
//
keyval_insert("@lam", ATLAM) ;
keyval_insert("@llam", ATLLAM) ;
keyval_insert("@fix", ATFIX) ;
//
keyval_insert("fold@", FOLDAT) ;
keyval_insert("free@", FREEAT) ;
keyval_insert("view@", VIEWAT) ;
//
keyval_insert("r@ead", R0EAD) ;
//
keyval_insert("val+", VALPLUS) ;
keyval_insert("val-", VALMINUS) ;
keyval_insert("case+", CASEPLUS) ;
keyval_insert("case-", CASEMINUS) ;
//
keyval_insert("prop+", PROPPLUS) ;
keyval_insert("prop-", PROPMINUS) ;
keyval_insert("type+", TYPEPLUS) ;
keyval_insert("type-", TYPEMINUS) ;
keyval_insert("view+", VIEWPLUS) ;
keyval_insert("view-", VIEWMINUS) ;
keyval_insert("vtype+", VIEWTYPEPLUS) ;
keyval_insert("vtype-", VIEWTYPEMINUS) ;
keyval_insert("viewtype+", VIEWTYPEPLUS) ;
keyval_insert("viewtype-", VIEWTYPEMINUS) ;
//
keyval_insert("abst@ype", ABST0YPE) ;
keyval_insert("absviewt@ype", ABSVIEWT0YPE) ;
//
keyval_insert("t@ype", T0YPE) ;
keyval_insert("t@ype+", T0YPEPLUS) ;
keyval_insert("t@ype-", T0YPEMINUS) ;
keyval_insert("vt@ype", VIEWT0YPE) ;
keyval_insert("vt@ype+", VIEWT0YPEPLUS) ;
keyval_insert("vt@ype-", VIEWT0YPEMINUS) ;
keyval_insert("viewt@ype", VIEWT0YPE) ;
keyval_insert("viewt@ype+", VIEWT0YPEPLUS) ;
keyval_insert("viewt@ype-", VIEWT0YPEMINUS) ;
*/
return ;
} // end of [atsopt_keyval_table_initialize]


/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atsopt_keyval_table_initialize) () ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
/* partial value template declarations */
/* static temporary variable declarations */
// ATSstatic_void (statmp0) ;

/* external value variable declarations */

/* function implementations */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_lexer_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_keyword_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_lexer_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_keyword_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_keyword_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
/* statmp0 = */ atsopt_keyval_table_initialize () ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_keyword_dats.c] */
