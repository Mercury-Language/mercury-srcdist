/*
** Automatically generated from `commit_gen.m'
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
INIT mercury__ll_backend__commit_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.commit_gen.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.commit_gen.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.commit_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.commit_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.commit_gen.c"
#line 44 "ll_backend.commit_gen.c"
#include "ll_backend.commit_gen.mh"

#line 47 "ll_backend.commit_gen.c"
#line 48 "ll_backend.commit_gen.c"
#ifndef LL_BACKEND__COMMIT_GEN_DECL_GUARD
#define LL_BACKEND__COMMIT_GEN_DECL_GUARD

#line 52 "ll_backend.commit_gen.c"
#line 53 "ll_backend.commit_gen.c"

#endif
#line 56 "ll_backend.commit_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(ll_backend__commit_gen__generate_scope_8_0, 75,6,7,8,12,14,16,17)
MR_decl_label7(ll_backend__commit_gen__generate_scope_8_0, 10,21,45,23,25,26,27)
MR_def_extern_entry(ll_backend__commit_gen__generate_scope_8_0)

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_trail_ops_2_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_region_ops_2_0);
MR_decl_entry(hlds__code_model__goal_info_get_code_model_2_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__prepare_for_det_commit_7_0);
MR_decl_entry(ll_backend__code_info__generate_det_commit_4_0);
MR_decl_entry(ll_backend__code_info__prepare_for_semi_commit_7_0);
MR_decl_entry(ll_backend__code_info__generate_semi_commit_4_0);

MR_BEGIN_MODULE(ll_backend__commit_gen_module0)
	MR_init_entry1(ll_backend__commit_gen__generate_scope_8_0);
	MR_init_label8(ll_backend__commit_gen__generate_scope_8_0,75,6,7,8,12,14,16,17)
	MR_init_label7(ll_backend__commit_gen__generate_scope_8_0,10,21,45,23,25,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__commit_gen__generate_scope_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i75);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i75);
	}
	MR_r1 = (MR_Word) MR_string_const("commit_gen.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_scope: trace_goal", 26);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i6);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_region_ops_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i7);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(hlds__code_model__goal_info_get_code_model_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i8);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i10);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i12);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__code_gen__generate_goal_5_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("commit_gen.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_commit: semidet model in det context", 45);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_det_commit_7_0,
		ll_backend__commit_gen__generate_scope_8_0_i16);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__commit_gen__generate_scope_8_0_i17);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_det_commit_4_0,
		ll_backend__commit_gen__generate_scope_8_0_i27);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i45);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i21);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__code_gen__generate_goal_5_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i23);
	}
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__code_gen__generate_goal_5_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_semi_commit_7_0,
		ll_backend__commit_gen__generate_scope_8_0_i25);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__commit_gen__generate_scope_8_0_i26);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_semi_commit_4_0,
		ll_backend__commit_gen__generate_scope_8_0_i27);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__commit_gen_maybe_bunch_0(void)
{
	ll_backend__commit_gen_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__commit_gen__init(void);
void mercury__ll_backend__commit_gen__init_type_tables(void);
void mercury__ll_backend__commit_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__commit_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__commit_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__commit_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__commit_gen_maybe_bunch_0();
	mercury__ll_backend__commit_gen__init_debugger();
}

void mercury__ll_backend__commit_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__commit_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__commit_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__commit_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
