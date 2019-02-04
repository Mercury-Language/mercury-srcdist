/*
** Automatically generated from `erl_backend.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__erl_backend__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "erl_backend.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "erl_backend.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "erl_backend.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "erl_backend.c"
#line 41 "erl_backend.c"
#include "erl_backend.mh"

#line 44 "erl_backend.c"
#line 45 "erl_backend.c"
#ifndef ERL_BACKEND_DECL_GUARD
#define ERL_BACKEND_DECL_GUARD

#line 49 "erl_backend.c"
#line 50 "erl_backend.c"

#endif
#line 53 "erl_backend.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif



/* suppress gcc -Wmissing-decls warnings */
void mercury__erl_backend__init(void);
void mercury__erl_backend__init_type_tables(void);
void mercury__erl_backend__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__erl_backend__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__erl_backend__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__erl_backend__init_threadscope_string_table(void);
#endif

void mercury__erl_backend__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__erl_backend__init_debugger();
}

void mercury__erl_backend__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__erl_backend__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__erl_backend__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__erl_backend);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__erl_backend__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__erl_backend__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
