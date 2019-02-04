/*
** Automatically generated from `mdb.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__mdb__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "mdb.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "mdb.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "mdb.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "mdb.c"
#line 40 "mdb.c"
#include "mdb.mh"

#line 43 "mdb.c"
#line 44 "mdb.c"
#ifndef MDB_DECL_GUARD
#define MDB_DECL_GUARD

#line 48 "mdb.c"
#line 49 "mdb.c"

#endif
#line 52 "mdb.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(mdb__version_1_0)


MR_BEGIN_MODULE(mdb_module0)
	MR_init_entry1(mdb__version_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__version_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Version;
#define	MR_PROC_LABEL	mercury__mdb__version_1_0
{
#line 60 "mdb.m"

    MR_ConstString version_string = 
        MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;
;}
#line 86 "mdb.c"
	MR_r1 = (MR_Word) Version;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb_maybe_bunch_0(void)
{
	mdb_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__init(void);
void mercury__mdb__init_type_tables(void);
void mercury__mdb__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__init_complexity_procs(void);
#endif

void mercury__mdb__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb_maybe_bunch_0();
	mercury__mdb__init_debugger();
}

void mercury__mdb__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdb__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
