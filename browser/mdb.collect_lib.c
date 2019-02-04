/*
** Automatically generated from `collect_lib.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__mdb__collect_lib__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdb.collect_lib.c"
#include "mdb.collect_lib.mh"

#line 27 "mdb.collect_lib.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 31 "mdb.collect_lib.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 35 "mdb.collect_lib.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 39 "mdb.collect_lib.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "mdb.collect_lib.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "mdb.collect_lib.c"
#line 48 "mdb.collect_lib.c"
#ifndef MDB__COLLECT_LIB_DECL_GUARD
#define MDB__COLLECT_LIB_DECL_GUARD

#line 52 "mdb.collect_lib.c"
#line 53 "mdb.collect_lib.c"

#endif
#line 56 "mdb.collect_lib.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(mdb__collect_lib__link_collect_10_0, 2,5,6,7,8,9,10,4)
MR_decl_label3(mdb__collect_lib__link_collect_10_0, 17,18,19)
MR_decl_label4(mdb__collect_lib__unlink_collect_3_0, 4,19,21,20)
MR_def_extern_entry(mdb__collect_lib__dummy_pred_to_avoid_warning_about_nothing_exported_0_0)
MR_decl_static(mdb__collect_lib__set_to_null_pointer_1_0)
MR_decl_static(mdb__collect_lib__link_collect_10_0)
MR_decl_static(mdb__collect_lib__unlink_collect_3_0)


MR_BEGIN_MODULE(mdb__collect_lib_module0)
	MR_init_entry1(mdb__collect_lib__dummy_pred_to_avoid_warning_about_nothing_exported_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__collect_lib__dummy_pred_to_avoid_warning_about_nothing_exported_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__collect_lib_module1)
	MR_init_entry1(mdb__collect_lib__set_to_null_pointer_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__collect_lib__set_to_null_pointer_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__set_to_null_pointer_1_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 108 "mdb.collect_lib.c"
	MR_r1 = Pointer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__dl__open_6_0);
MR_decl_entry(mdb__dl__sym_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(io__print_3_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(mdb__collect_lib_module2)
	MR_init_entry1(mdb__collect_lib__link_collect_10_0);
	MR_init_label8(mdb__collect_lib__link_collect_10_0,2,5,6,7,8,9,10,4)
	MR_init_label3(mdb__collect_lib__link_collect_10_0,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__collect_lib__link_collect_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdb__dl__open_6_0,
		mdb__collect_lib__link_collect_10_0_i2);
MR_def_label(mdb__collect_lib__link_collect_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__collect_lib__link_collect_10_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("ML_COLLECT_initialize", 21);
	MR_np_call_localret_ent(mdb__dl__sym_5_0,
		mdb__collect_lib__link_collect_10_0_i5);
MR_def_label(mdb__collect_lib__link_collect_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("ML_COLLECT_filter", 17);
	MR_np_call_localret_ent(mdb__dl__sym_5_0,
		mdb__collect_lib__link_collect_10_0_i6);
MR_def_label(mdb__collect_lib__link_collect_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("ML_COLLECT_post_process", 23);
	MR_np_call_localret_ent(mdb__dl__sym_5_0,
		mdb__collect_lib__link_collect_10_0_i7);
MR_def_label(mdb__collect_lib__link_collect_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("ML_COLLECT_send_collect_result", 30);
	MR_np_call_localret_ent(mdb__dl__sym_5_0,
		mdb__collect_lib__link_collect_10_0_i8);
MR_def_label(mdb__collect_lib__link_collect_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ML_COLLECT_collected_variable_type", 34);
	}
	MR_np_call_localret_ent(mdb__dl__sym_5_0,
		mdb__collect_lib__link_collect_10_0_i9);
MR_def_label(mdb__collect_lib__link_collect_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(mdb__collect_lib__link_collect_10_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(mdb__collect_lib__link_collect_10_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(mdb__collect_lib__link_collect_10_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(mdb__collect_lib__link_collect_10_0_i10);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__collect_lib__link_collect_10_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 0);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_ctfield(0, MR_sv(5), 0);
	MR_r4 = MR_ctfield(0, MR_sv(2), 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 121;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__collect_lib__link_collect_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 225 "mdb.collect_lib.c"
	MR_r4 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 237 "mdb.collect_lib.c"
	MR_r1 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 249 "mdb.collect_lib.c"
	MR_r3 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 261 "mdb.collect_lib.c"
	MR_r5 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 273 "mdb.collect_lib.c"
	MR_r6 = Pointer;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 110;
	MR_decr_sp_and_return(6);
MR_def_label(mdb__collect_lib__link_collect_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("dlopen failed: ", 15);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__collect_lib__link_collect_10_0_i17);
MR_def_label(mdb__collect_lib__link_collect_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__collect_lib__link_collect_10_0_i18);
MR_def_label(mdb__collect_lib__link_collect_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdb__collect_lib__link_collect_10_0_i19);
MR_def_label(mdb__collect_lib__link_collect_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 311 "mdb.collect_lib.c"
	MR_r2 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 325 "mdb.collect_lib.c"
	MR_tempr1 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 337 "mdb.collect_lib.c"
	MR_r3 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 349 "mdb.collect_lib.c"
	MR_r4 = Pointer;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Pointer;
#define	MR_PROC_LABEL	mercury__mdb__collect_lib__link_collect_10_0
{
#line 152 "collect_lib.m"

    (Pointer = (MR_Word) NULL)
;}
#line 361 "mdb.collect_lib.c"
	MR_r5 = Pointer;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 110;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__dl__close_4_0);

MR_BEGIN_MODULE(mdb__collect_lib_module3)
	MR_init_entry1(mdb__collect_lib__unlink_collect_3_0);
	MR_init_label4(mdb__collect_lib__unlink_collect_3_0,4,19,21,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__collect_lib__unlink_collect_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__collect_lib__unlink_collect_3_0_i21);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(mdb__dl__close_4_0,
		mdb__collect_lib__unlink_collect_3_0_i4);
MR_def_label(mdb__collect_lib__unlink_collect_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__collect_lib__unlink_collect_3_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__print_3_0,
		mdb__collect_lib__unlink_collect_3_0_i19);
MR_def_label(mdb__collect_lib__unlink_collect_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(mdb__collect_lib__unlink_collect_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(mdb__collect_lib__unlink_collect_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__mdb__collect_lib__unlink_collect_3_0);

void
ML_CL_unlink_collect(MR_Word Mercury__argument1);

void
ML_CL_unlink_collect(MR_Word Mercury__argument1)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdb__collect_lib__unlink_collect_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__collect_lib__unlink_collect_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__collect_lib__link_collect_10_0);

void
ML_CL_link_collect(MR_String Mercury__argument1, MR_Word * Mercury__argument2, MR_Word * Mercury__argument3, MR_Word * Mercury__argument4, MR_Word * Mercury__argument5, MR_Word * Mercury__argument6, MR_Word * Mercury__argument7, MR_Char * Mercury__argument8);

void
ML_CL_link_collect(MR_String Mercury__argument1, MR_Word * Mercury__argument2, MR_Word * Mercury__argument3, MR_Word * Mercury__argument4, MR_Word * Mercury__argument5, MR_Word * Mercury__argument6, MR_Word * Mercury__argument7, MR_Char * Mercury__argument8)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdb__collect_lib__link_collect_10_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__collect_lib__link_collect_10_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
	*Mercury__argument3 = MR_r2;
	*Mercury__argument4 = MR_r3;
	*Mercury__argument5 = MR_r4;
	*Mercury__argument6 = MR_r5;
	*Mercury__argument7 = MR_r6;
	*Mercury__argument8 = MR_r7;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__collect_lib_maybe_bunch_0(void)
{
	mdb__collect_lib_module0();
	mdb__collect_lib_module1();
	mdb__collect_lib_module2();
	mdb__collect_lib_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__collect_lib__init(void);
void mercury__mdb__collect_lib__init_type_tables(void);
void mercury__mdb__collect_lib__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__collect_lib__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__collect_lib__init_complexity_procs(void);
#endif

void mercury__mdb__collect_lib__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__collect_lib_maybe_bunch_0();
	mercury__mdb__collect_lib__init_debugger();
}

void mercury__mdb__collect_lib__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdb__collect_lib__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__collect_lib__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__collect_lib__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
