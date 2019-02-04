/*
** Automatically generated from `llds_out.m'
** by the Mercury compiler,
** version rotd-2011-09-25, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__ll_backend__llds_out__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.llds_out.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.llds_out.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ll_backend.llds_out.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ll_backend.llds_out.c"
#line 41 "ll_backend.llds_out.c"
#include "ll_backend.llds_out.mh"

#line 44 "ll_backend.llds_out.c"
#line 45 "ll_backend.llds_out.c"
#ifndef LL_BACKEND__LLDS_OUT_DECL_GUARD
#define LL_BACKEND__LLDS_OUT_DECL_GUARD

#line 49 "ll_backend.llds_out.c"
#line 50 "ll_backend.llds_out.c"

#endif
#line 53 "ll_backend.llds_out.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif



/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds_out__init(void);
void mercury__ll_backend__llds_out__init_type_tables(void);
void mercury__ll_backend__llds_out__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds_out__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__llds_out__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__llds_out__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_out__init_debugger();
}

void mercury__ll_backend__llds_out__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__llds_out__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__llds_out);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_out__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__llds_out__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
