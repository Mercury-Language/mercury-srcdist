/*
** Automatically generated from `hlds.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__hlds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.c"
#line 40 "hlds.c"
#include "hlds.mh"

#line 43 "hlds.c"
#line 44 "hlds.c"
#ifndef HLDS_DECL_GUARD
#define HLDS_DECL_GUARD

#line 48 "hlds.c"
#line 49 "hlds.c"

#endif
#line 52 "hlds.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__init(void);
void mercury__hlds__init_type_tables(void);
void mercury__hlds__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__init_complexity_procs(void);
#endif

void mercury__hlds__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__init_debugger();
}

void mercury__hlds__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
