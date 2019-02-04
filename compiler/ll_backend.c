/*
** Automatically generated from `ll_backend.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.c"
#line 40 "ll_backend.c"
#include "ll_backend.mh"

#line 43 "ll_backend.c"
#line 44 "ll_backend.c"
#ifndef LL_BACKEND_DECL_GUARD
#define LL_BACKEND_DECL_GUARD

#line 48 "ll_backend.c"
#line 49 "ll_backend.c"

#endif
#line 52 "ll_backend.c"


/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__init(void);
void mercury__ll_backend__init_type_tables(void);
void mercury__ll_backend__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__init_complexity_procs(void);
#endif

void mercury__ll_backend__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__init_debugger();
}

void mercury__ll_backend__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
