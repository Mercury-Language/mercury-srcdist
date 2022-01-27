/*
** Automatically generated from `mdbcomp.shared_utilities.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__mdbcomp__shared_utilities__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdbcomp.shared_utilities.c"
#include "mdbcomp.shared_utilities.mh"

#line 28 "mdbcomp.shared_utilities.c"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 32 "mdbcomp.shared_utilities.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdbcomp.shared_utilities.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 40 "mdbcomp.shared_utilities.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 44 "mdbcomp.shared_utilities.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdbcomp.shared_utilities.c"
#line 49 "mdbcomp.shared_utilities.c"
#ifndef MDBCOMP__SHARED_UTILITIES_DECL_GUARD
#define MDBCOMP__SHARED_UTILITIES_DECL_GUARD

#line 53 "mdbcomp.shared_utilities.c"
#line 36 "shared_utilities.m"


/*
** On some systems (e.g. Mac OS X 10.3) RLIMIT_STACK is defined in the
** header sys/resource.h.
*/
#if defined(MR_HAVE_SYS_RESOURCE_H)
    #include <sys/resource.h>
#endif


#line 66 "mdbcomp.shared_utilities.c"
#line 67 "mdbcomp.shared_utilities.c"

#endif
#line 70 "mdbcomp.shared_utilities.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(mdbcomp__shared_utilities__unlimit_stack_2_0)




MR_BEGIN_MODULE(mdbcomp__shared_utilities_module0)
	MR_init_entry1(mdbcomp__shared_utilities__unlimit_stack_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__shared_utilities__unlimit_stack_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlimit_stack'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__shared_utilities__unlimit_stack_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__mdbcomp__shared_utilities__unlimit_stack_2_0
	MR_OBTAIN_GLOBAL_LOCK("unlimit_stack");
{
#line 51 "shared_utilities.m"

#if defined(MR_HAVE_SETRLIMIT)
    struct rlimit   limit_struct;
    rlim_t          max_value;

    if (getrlimit(RLIMIT_STACK, &limit_struct) != 0) {
        MR_fatal_error("could not get current stack limit");
    }

    max_value = limit_struct.rlim_max;
    limit_struct.rlim_cur = limit_struct.rlim_max;
    /* If this fails, we have no recourse, so ignore any failure. */
    (void) setrlimit(RLIMIT_STACK, &limit_struct);
#endif
;}
#line 115 "mdbcomp.shared_utilities.c"
	MR_RELEASE_GLOBAL_LOCK("unlimit_stack");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp__shared_utilities_maybe_bunch_0(void)
{
	mdbcomp__shared_utilities_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__shared_utilities__init(void);
void mercury__mdbcomp__shared_utilities__init_type_tables(void);
void mercury__mdbcomp__shared_utilities__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__shared_utilities__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__shared_utilities__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdbcomp__shared_utilities__init_threadscope_string_table(void);
#endif

void mercury__mdbcomp__shared_utilities__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__shared_utilities_maybe_bunch_0();
	mercury__mdbcomp__shared_utilities__init_debugger();
}

void mercury__mdbcomp__shared_utilities__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdbcomp__shared_utilities__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__shared_utilities__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__mdbcomp__shared_utilities);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__shared_utilities__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdbcomp__shared_utilities__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
