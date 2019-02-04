/*
** Automatically generated from `compiler_util.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__libs__compiler_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "libs.compiler_util.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "libs.compiler_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "libs.compiler_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "libs.compiler_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "libs.compiler_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "libs.compiler_util.c"
#line 49 "libs.compiler_util.c"
#include "libs.compiler_util.mh"

#line 52 "libs.compiler_util.c"
#line 53 "libs.compiler_util.c"
#ifndef LIBS__COMPILER_UTIL_DECL_GUARD
#define LIBS__COMPILER_UTIL_DECL_GUARD

#line 57 "libs.compiler_util.c"
#line 58 "libs.compiler_util.c"

#endif
#line 61 "libs.compiler_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(libs__compiler_util__record_warning_3_0, 2,3)
MR_decl_label3(libs__compiler_util__report_warning_4_0, 2,8,4)
MR_decl_label3(libs__compiler_util__report_warning_to_stream_5_0, 2,8,4)
MR_def_extern_entry(libs__compiler_util__record_warning_3_0)
MR_def_extern_entry(libs__compiler_util__report_warning_4_0)
MR_def_extern_entry(libs__compiler_util__report_warning_to_stream_5_0)



MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(libs__compiler_util_module0)
	MR_init_entry1(libs__compiler_util__record_warning_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__compiler_util__record_warning_3_0);
	MR_init_label2(libs__compiler_util__record_warning_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_warning'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__compiler_util__record_warning_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__compiler_util__record_warning_3_0_i2);
MR_def_label(libs__compiler_util__record_warning_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(libs__compiler_util__record_warning_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(libs__compiler_util__record_warning_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(libs__compiler_util_module1)
	MR_init_entry1(libs__compiler_util__report_warning_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__compiler_util__report_warning_4_0);
	MR_init_label3(libs__compiler_util__report_warning_4_0,2,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_warning'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__compiler_util__report_warning_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__compiler_util__report_warning_4_0_i2);
MR_def_label(libs__compiler_util__report_warning_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__compiler_util__report_warning_4_0_i4);
	}
MR_def_label(libs__compiler_util__report_warning_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(libs__compiler_util__report_warning_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__compiler_util__report_warning_4_0_i8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(libs__compiler_util_module2)
	MR_init_entry1(libs__compiler_util__report_warning_to_stream_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__compiler_util__report_warning_to_stream_5_0);
	MR_init_label3(libs__compiler_util__report_warning_to_stream_5_0,2,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_warning_to_stream'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__compiler_util__report_warning_to_stream_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__compiler_util__report_warning_to_stream_5_0_i2);
MR_def_label(libs__compiler_util__report_warning_to_stream_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__compiler_util__report_warning_to_stream_5_0_i4);
	}
MR_def_label(libs__compiler_util__report_warning_to_stream_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_4_0);
MR_def_label(libs__compiler_util__report_warning_to_stream_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__compiler_util__report_warning_to_stream_5_0_i8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__compiler_util_maybe_bunch_0(void)
{
	libs__compiler_util_module0();
	libs__compiler_util_module1();
	libs__compiler_util_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__compiler_util__init(void);
void mercury__libs__compiler_util__init_type_tables(void);
void mercury__libs__compiler_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__compiler_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__compiler_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__libs__compiler_util__init_threadscope_string_table(void);
#endif

void mercury__libs__compiler_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__compiler_util_maybe_bunch_0();
	mercury__libs__compiler_util__init_debugger();
}

void mercury__libs__compiler_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__libs__compiler_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__compiler_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__compiler_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__compiler_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__libs__compiler_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
