/*
** Automatically generated from `commit_gen.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__commit_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.commit_gen.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.commit_gen.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.commit_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.commit_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.commit_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.commit_gen.c"
#line 49 "ll_backend.commit_gen.c"
#include "ll_backend.commit_gen.mh"

#line 52 "ll_backend.commit_gen.c"
#line 53 "ll_backend.commit_gen.c"
#ifndef LL_BACKEND__COMMIT_GEN_DECL_GUARD
#define LL_BACKEND__COMMIT_GEN_DECL_GUARD

#line 57 "ll_backend.commit_gen.c"
#line 58 "ll_backend.commit_gen.c"

#endif
#line 61 "ll_backend.commit_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(ll_backend__commit_gen__generate_scope_8_0, 79,6,7,8,12,15,16,17,18,14)
MR_decl_label9(ll_backend__commit_gen__generate_scope_8_0, 10,21,48,24,27,28,29,30,31)
MR_def_extern_entry(ll_backend__commit_gen__generate_scope_8_0)



MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_trail_ops_2_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_region_ops_2_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__prepare_for_det_commit_8_0);
MR_decl_entry(ll_backend__code_info__generate_det_commit_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(ll_backend__code_info__prepare_for_semi_commit_8_0);
MR_decl_entry(ll_backend__code_info__generate_semi_commit_4_0);

MR_BEGIN_MODULE(ll_backend__commit_gen_module0)
	MR_init_entry1(ll_backend__commit_gen__generate_scope_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__commit_gen__generate_scope_8_0);
	MR_init_label10(ll_backend__commit_gen__generate_scope_8_0,79,6,7,8,12,15,16,17,18,14)
	MR_init_label9(ll_backend__commit_gen__generate_scope_8_0,10,21,48,24,27,28,29,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_scope'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__commit_gen__generate_scope_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i79);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i79);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.commit_gen", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.commit_gen.generate_scope\'/8", 50);
	MR_r3 = (MR_Word) MR_string_const("trace_goal", 10);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i6);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_region_ops_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i7);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(2), 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__commit_gen__generate_scope_8_0_i8);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i10);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i12);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__code_gen__generate_goal_5_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i14);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_det_commit_8_0,
		ll_backend__commit_gen__generate_scope_8_0_i15);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__commit_gen__generate_scope_8_0_i16);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_det_commit_4_0,
		ll_backend__commit_gen__generate_scope_8_0_i17);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i18);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i31);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.commit_gen", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.commit_gen.generate_commit\'/7", 51);
	MR_r3 = (MR_Word) MR_string_const("semidet model in det context", 28);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i21);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__code_gen__generate_goal_5_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i24);
	}
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__code_gen__generate_goal_5_0);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__commit_gen__generate_scope_8_0_i48);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_semi_commit_8_0,
		ll_backend__commit_gen__generate_scope_8_0_i27);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__commit_gen__generate_scope_8_0_i28);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_semi_commit_4_0,
		ll_backend__commit_gen__generate_scope_8_0_i29);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i30);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__commit_gen__generate_scope_8_0_i31);
MR_def_label(ll_backend__commit_gen__generate_scope_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
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
void mercury__ll_backend__commit_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__commit_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__commit_gen__init_threadscope_string_table(void);
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

void mercury__ll_backend__commit_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__commit_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__commit_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__commit_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
