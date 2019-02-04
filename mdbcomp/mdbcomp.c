/*
** Automatically generated from `mdbcomp.m'
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
INIT mercury__mdbcomp__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "mdbcomp.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "mdbcomp.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "mdbcomp.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "mdbcomp.c"
#line 40 "mdbcomp.c"
#include "mdbcomp.mh"

#line 43 "mdbcomp.c"
#line 44 "mdbcomp.c"
#ifndef MDBCOMP_DECL_GUARD
#define MDBCOMP_DECL_GUARD

#line 48 "mdbcomp.c"
#line 49 "mdbcomp.c"

#endif
#line 52 "mdbcomp.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(mdbcomp__version_1_0)


MR_BEGIN_MODULE(mdbcomp_module0)
	MR_init_entry1(mdbcomp__version_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__version_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Version;
#define	MR_PROC_LABEL	mercury__mdbcomp__version_1_0
{
#line 39 "mdbcomp.m"

    MR_ConstString version_string;

    version_string = MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;
;}
#line 87 "mdbcomp.c"
	MR_r1 = (MR_Word) Version;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp_maybe_bunch_0(void)
{
	mdbcomp_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__init(void);
void mercury__mdbcomp__init_type_tables(void);
void mercury__mdbcomp__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__init_complexity_procs(void);
#endif

void mercury__mdbcomp__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp_maybe_bunch_0();
	mercury__mdbcomp__init_debugger();
}

void mercury__mdbcomp__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdbcomp__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
