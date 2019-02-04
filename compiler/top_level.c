/*
** Automatically generated from `top_level.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__top_level__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "top_level.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "top_level.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "top_level.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "top_level.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "top_level.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "top_level.c"
#line 49 "top_level.c"
#include "top_level.mh"

#line 52 "top_level.c"
#line 53 "top_level.c"
#ifndef TOP_LEVEL_DECL_GUARD
#define TOP_LEVEL_DECL_GUARD

#line 57 "top_level.c"
#line 58 "top_level.c"

#endif
#line 61 "top_level.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(main_2_0)



MR_decl_entry(top_level__mercury_compile__real_main_2_0);

MR_BEGIN_MODULE(top_level_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(top_level__mercury_compile__real_main_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__top_level_maybe_bunch_0(void)
{
	top_level_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__top_level__init(void);
void mercury__top_level__init_type_tables(void);
void mercury__top_level__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__top_level__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__top_level__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__top_level__init_threadscope_string_table(void);
#endif

void mercury__top_level__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__top_level_maybe_bunch_0();
	mercury__top_level__init_debugger();
}

void mercury__top_level__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__top_level__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__top_level__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__top_level);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__top_level__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__top_level__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
