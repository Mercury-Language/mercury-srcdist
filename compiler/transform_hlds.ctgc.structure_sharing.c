/*
** Automatically generated from `structure_sharing.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__structure_sharing__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.ctgc.structure_sharing.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.ctgc.structure_sharing.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.ctgc.structure_sharing.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.ctgc.structure_sharing.c"
#line 40 "transform_hlds.ctgc.structure_sharing.c"
#include "transform_hlds.ctgc.structure_sharing.mh"

#line 43 "transform_hlds.ctgc.structure_sharing.c"
#line 44 "transform_hlds.ctgc.structure_sharing.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_SHARING_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_SHARING_DECL_GUARD

#line 48 "transform_hlds.ctgc.structure_sharing.c"
#line 49 "transform_hlds.ctgc.structure_sharing.c"

#endif
#line 52 "transform_hlds.ctgc.structure_sharing.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_sharing__init(void);
void mercury__transform_hlds__ctgc__structure_sharing__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_sharing__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_sharing__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_sharing__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__structure_sharing__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_sharing__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_sharing__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__ctgc__structure_sharing__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_sharing__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_sharing__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
