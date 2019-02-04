/*
** Automatically generated from `switch_gen.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__switch_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.switch_gen.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.switch_gen.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.switch_gen.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.switch_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.switch_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.switch_gen.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.switch_gen.c"
#line 52 "ll_backend.switch_gen.c"
#include "ll_backend.switch_gen.mh"

#line 55 "ll_backend.switch_gen.c"
#line 56 "ll_backend.switch_gen.c"
#ifndef LL_BACKEND__SWITCH_GEN_DECL_GUARD
#define LL_BACKEND__SWITCH_GEN_DECL_GUARD

#line 60 "ll_backend.switch_gen.c"
#line 61 "ll_backend.switch_gen.c"

#endif
#line 64 "ll_backend.switch_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0, 6,5,46,7,8,12,11,15)
MR_decl_label8(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0, 16,17,18,10,19,20,21,23)
MR_decl_label1(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0, 24)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 10,11,12,16,18,19,21,15)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 13,26,27,29,31,32,33,35)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 28,37,38,39,36,45,46,47)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 48,52,53,54,55,59,60,62)
MR_decl_label4(ll_backend__switch_gen__lookup_tags_4_0, 14,4,5,6)
MR_decl_label8(ll_backend__switch_gen__order_and_generate_cases_11_0, 2,3,5,7,10,11,12,4)
MR_decl_label2(ll_backend__switch_gen__order_and_generate_cases_11_0, 14,16)
MR_decl_label8(ll_backend__switch_gen__order_cannot_succeed_cases_5_0, 2,11,12,13,14,15,16,19)
MR_decl_label8(ll_backend__switch_gen__order_cannot_succeed_cases_5_0, 24,25,18,30,33,34,36,5)
MR_decl_label1(ll_backend__switch_gen__order_cannot_succeed_cases_5_0, 4)
MR_decl_label5(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0, 26,4,5,6,11)
MR_decl_label6(ll_backend__switch_gen__separate_reserved_address_cases_3_0, 24,25,28,10,4,2)
MR_decl_static(ll_backend__switch_gen__lookup_tags_4_0)
MR_decl_static(ll_backend__switch_gen__separate_reserved_address_cases_3_0)
MR_decl_static(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0)
MR_decl_static(ll_backend__switch_gen__order_cannot_succeed_cases_5_0)
MR_decl_static(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0)
MR_decl_static(ll_backend__switch_gen__order_and_generate_cases_11_0)
MR_def_extern_entry(ll_backend__switch_gen__generate_switch_8_0)

MR_decl_entry(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0);
MR_decl_entry(fn__backend_libs__switch_util__switch_priority_1_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module0)
	MR_init_entry1(ll_backend__switch_gen__lookup_tags_4_0);
	MR_init_label4(ll_backend__switch_gen__lookup_tags_4_0,14,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__lookup_tags_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__lookup_tags_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0,
		ll_backend__switch_gen__lookup_tags_4_0_i4);
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_priority_1_0,
		ll_backend__switch_gen__lookup_tags_4_0_i5);
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__switch_gen__lookup_tags_4_0,
		ll_backend__switch_gen__lookup_tags_4_0_i6);
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__switch_gen_module1)
	MR_init_entry1(ll_backend__switch_gen__separate_reserved_address_cases_3_0);
	MR_init_label6(ll_backend__switch_gen__separate_reserved_address_cases_3_0,24,25,28,10,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__separate_reserved_address_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_sv(1), 1);
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i10);
	}
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i4);
	}
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),11)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i25);
	}
	MR_proceed();
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module2)
	MR_init_entry1(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0);
	MR_init_label5(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,26,4,5,6,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,
		ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i4);
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_sv(1), 3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i5);
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i6);
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(ll_backend__code_info__get_pred_id_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_id_2_0);
MR_decl_entry(hlds__goal_form__count_recursive_calls_5_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module3)
	MR_init_entry1(ll_backend__switch_gen__order_cannot_succeed_cases_5_0);
	MR_init_label8(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,2,11,12,13,14,15,16,19)
	MR_init_label8(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,24,25,18,30,33,34,36,5)
	MR_init_label1(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__order_cannot_succeed_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i2);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i4);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i5);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i5);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i5);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i5);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_sv(2), 3);
	MR_sv(6) = MR_ctfield(0, MR_sv(3), 3);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i11);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i12);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i13);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i14);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i15);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i16);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i19);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i19);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i24);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i18);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i18);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 380;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i25);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i30);
	}
	if (MR_INT_LE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i30);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i33);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i5);
	}
	if (MR_INT_LE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_sv(3);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 381;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i34);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_cannot_succeed_cases_5_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__unify_gen__generate_tag_test_7_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module4)
	MR_init_entry1(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0);
	MR_init_label8(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,6,5,46,7,8,12,11,15)
	MR_init_label8(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,16,17,18,10,19,20,21,23)
	MR_init_label1(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i46);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i5);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i6);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of switch", 13);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_tempr2;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of switch", 13);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(2, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
	}
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_r7;
	MR_tempr3 = MR_r8;
	MR_sv(10) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i7);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i8);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i12);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r5;
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i11);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_7_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i15);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i16);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i17);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i18);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("skip to the end of the switch", 29);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("next case", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(7), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(7), 0) = MR_tempr3;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i23);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i19);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i20);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i21);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(7), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(7), 0) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i23);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0_i24);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(ll_backend__code_info__search_type_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module5)
	MR_init_entry1(ll_backend__switch_gen__order_and_generate_cases_11_0);
	MR_init_label8(ll_backend__switch_gen__order_and_generate_cases_11_0,2,3,5,7,10,11,12,4)
	MR_init_label2(ll_backend__switch_gen__order_and_generate_cases_11_0,14,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__order_and_generate_cases_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i2);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i3);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__search_type_defn_3_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i5);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_and_generate_cases_11_0_i4);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i7);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_and_generate_cases_11_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_and_generate_cases_11_0_i4);
	}
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__separate_reserved_address_cases_3_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i10);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i11);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i12);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i14);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_cannot_succeed_cases_5_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i14);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__switch_gen__generate_if_then_else_chain_cases_11_0,
		ll_backend__switch_gen__order_and_generate_cases_11_0_i16);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);
MR_decl_entry(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(ll_backend__lookup_switch__is_lookup_switch_12_0);
MR_decl_entry(ll_backend__lookup_switch__generate_lookup_switch_7_0);
MR_decl_entry(ll_backend__code_info__after_all_branches_4_0);
MR_decl_entry(ll_backend__dense_switch__cases_list_is_dense_switch_8_0);
MR_decl_entry(ll_backend__dense_switch__generate_dense_switch_13_0);
MR_decl_entry(ll_backend__string_switch__generate_string_switch_11_0);
MR_decl_entry(ll_backend__tag_switch__generate_tag_switch_11_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module6)
	MR_init_entry1(ll_backend__switch_gen__generate_switch_8_0);
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,10,11,12,16,18,19,21,15)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,13,26,27,29,31,32,33,35)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,28,37,38,39,36,45,46,47)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,48,52,53,54,55,59,60,62)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__switch_gen__generate_switch_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i2);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i3);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(12) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__lookup_tags_4_0,
		ll_backend__switch_gen__generate_switch_8_0_i4);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i5);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i6);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 371;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i7);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i8);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i9);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i10);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i11);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,
		ll_backend__switch_gen__generate_switch_8_0_i12);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i16);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r8 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i15);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i18);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i19);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i13);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i21);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i13);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r8 = MR_sv(12);
	}
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ll_backend__switch_gen__generate_switch_8_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__switch_gen__generate_switch_8_0_i45) MR_AND
		MR_LABEL_AP(ll_backend__switch_gen__generate_switch_8_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__switch_gen__generate_switch_8_0_i59));
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i27);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i29);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i28);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 375;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i31);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(9) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i28);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 373;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i32);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__lookup_switch__is_lookup_switch_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i33);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_lookup_switch_7_0,
		ll_backend__switch_gen__generate_switch_8_0_i35);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__switch_gen__generate_switch_8_0_i62);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 374;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i37);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(9) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i36);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 372;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i38);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,
		ll_backend__switch_gen__generate_switch_8_0_i39);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i36);
	}
	MR_r1 = MR_sv(7);
	MR_r6 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(4);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__dense_switch__generate_dense_switch_13_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i46);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r2 = (MR_Integer) 376;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i47);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(8) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i48);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_switch_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i53);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r2 = (MR_Integer) 377;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i54);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(8) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i55);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_tag_switch_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__switch_gen__generate_switch_8_0_i62);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__switch_gen_maybe_bunch_0(void)
{
	ll_backend__switch_gen_module0();
	ll_backend__switch_gen_module1();
	ll_backend__switch_gen_module2();
	ll_backend__switch_gen_module3();
	ll_backend__switch_gen_module4();
	ll_backend__switch_gen_module5();
	ll_backend__switch_gen_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__switch_gen__init(void);
void mercury__ll_backend__switch_gen__init_type_tables(void);
void mercury__ll_backend__switch_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__switch_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__switch_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__switch_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__switch_gen_maybe_bunch_0();
	mercury__ll_backend__switch_gen__init_debugger();
}

void mercury__ll_backend__switch_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__switch_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__switch_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__switch_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__switch_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
