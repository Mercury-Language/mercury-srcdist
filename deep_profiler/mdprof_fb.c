/*
** Automatically generated from `mdprof_fb.m'
** by the Mercury compiler,
** version 11.07-beta-2011-11-14, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_fb__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "mdprof_fb.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "mdprof_fb.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "mdprof_fb.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mdprof_fb.c"
#line 41 "mdprof_fb.c"
#include "mdprof_fb.mh"

#line 44 "mdprof_fb.c"
#line 45 "mdprof_fb.c"
#ifndef MDPROF_FB_DECL_GUARD
#define MDPROF_FB_DECL_GUARD

#line 49 "mdprof_fb.c"
#line 50 "mdprof_fb.c"

#endif
#line 53 "mdprof_fb.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif



/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__init(void);
void mercury__mdprof_fb__init_type_tables(void);
void mercury__mdprof_fb__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_fb__init_threadscope_string_table(void);
#endif

void mercury__mdprof_fb__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__init_debugger();
}

void mercury__mdprof_fb__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdprof_fb__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_fb__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
