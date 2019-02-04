/*
** Automatically generated from `follow_vars.m'
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
INIT mercury__ll_backend__follow_vars__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 27 "ll_backend.follow_vars.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "ll_backend.follow_vars.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "ll_backend.follow_vars.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.follow_vars.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.follow_vars.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.follow_vars.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.follow_vars.c"
#line 52 "ll_backend.follow_vars.c"
#include "ll_backend.follow_vars.mh"

#line 55 "ll_backend.follow_vars.c"
#line 56 "ll_backend.follow_vars.c"
#ifndef LL_BACKEND__FOLLOW_VARS_DECL_GUARD
#define LL_BACKEND__FOLLOW_VARS_DECL_GUARD

#line 60 "ll_backend.follow_vars.c"
#line 61 "ll_backend.follow_vars.c"

#endif
#line 64 "ll_backend.follow_vars.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];
MR_decl_label4(ll_backend__follow_vars__find_final_follow_vars_3_0, 2,3,4,5)
MR_decl_label6(ll_backend__follow_vars__find_final_follow_vars_2_5_0, 23,3,14,5,7,8)
MR_decl_label6(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0, 31,3,7,6,10,5)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0, 18,3,5,4)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_in_call_6_0, 2,3,4,5)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_in_cases_8_0, 14,4,5,6)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_conj_9_0, 46,6,5,4,11,12,13,15)
MR_decl_label1(ll_backend__follow_vars__find_follow_vars_in_conj_9_0, 16)
MR_decl_label1(ll_backend__follow_vars__find_follow_vars_in_goal_8_0, 2)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 122,8,10,5,6,12,91,124)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 18,126,22,23,24,25,26,27)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 28,127,35,36,37,38,39,40)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 41,128,48,49,50,51,52,53)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 54,55,56,57,58,59,123,63)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 66,65,67,68,69,70,71,72)
MR_decl_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 73,74,75,76,77,78,79,80)
MR_decl_label7(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0, 81,82,83,84,85,86,87)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0, 14,4,5,6)
MR_decl_static(ll_backend__follow_vars__find_final_follow_vars_2_5_0)
MR_def_extern_entry(ll_backend__follow_vars__find_final_follow_vars_3_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_call_6_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0)
MR_decl_static(fn__ll_backend__follow_vars__this_file_0_0)
MR_def_extern_entry(ll_backend__follow_vars__find_follow_vars_in_goal_8_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_cases_8_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_conj_9_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module0)
	MR_init_entry1(ll_backend__follow_vars__find_final_follow_vars_2_5_0);
	MR_init_label6(ll_backend__follow_vars__find_final_follow_vars_2_5_0,23,3,14,5,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_final_follow_vars_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_ctfield(0, MR_r5, 0);
	MR_r4 = MR_ctfield(0, MR_r6, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_5_0_i5);
	}
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_5_0_i23);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r6, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_ctfield(0, MR_r5, 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__follow_vars__find_final_follow_vars_2_5_0_i7);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__follow_vars__find_final_follow_vars_2_5_0_i8);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_5_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module1)
	MR_init_entry1(ll_backend__follow_vars__find_final_follow_vars_3_0);
	MR_init_label4(ll_backend__follow_vars__find_final_follow_vars_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__follow_vars__find_final_follow_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__follow_vars__find_final_follow_vars_3_0_i2);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__follow_vars__find_final_follow_vars_3_0_i3);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_final_follow_vars_3_0_i4);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__follow_vars__find_final_follow_vars_3_0_i5);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__follow_vars__find_final_follow_vars_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module2)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0);
	MR_init_label6(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,31,3,7,6,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i7);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i10);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i10);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i31);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0_i31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module3)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_call_6_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_in_call_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ll_backend__follow_vars__find_follow_vars_in_call_6_0_i2);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__follow_vars__find_follow_vars_in_call_6_0_i3);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_follow_vars_in_call_6_0_i4);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__follow_vars__find_follow_vars_in_call_6_0_i5);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module4)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0,18,3,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_r6, 0) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__follow_vars__find_follow_vars_from_sequence_5_0_i5);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0_i18);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module5)
	MR_init_entry1(fn__ll_backend__follow_vars__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__follow_vars__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("follow_vars", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module6)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_goal_8_0);
	MR_init_label1(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__follow_vars__find_follow_vars_in_goal_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_8_0_i2);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(hlds__arg_info__make_arg_infos_5_0);
MR_decl_entry(hlds__arg_info__partition_args_3_0);
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(ll_backend__call_gen__generic_call_info_7_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_store_map_3_0);
MR_decl_entry(hlds__hlds_llds__goal_set_follow_vars_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module7)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0);
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,122,8,10,5,6,12,91,124)
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,18,126,22,23,24,25,26,27)
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,28,127,35,36,37,38,39,40)
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,41,128,48,49,50,51,52,53)
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,54,55,56,57,58,59,123,63)
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,66,65,67,68,69,70,71,72)
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,73,74,75,76,77,78,79,80)
	MR_init_label7(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,81,82,83,84,85,86,87)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i122) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i123));
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i6);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r6;
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i8);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i10);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i124);
	}
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_call_6_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i59);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(2, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i126) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i127) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i128) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i91));
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 3);
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i22);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i23);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_5_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i24);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i25);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__arg_info__partition_args_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i26);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i27);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i28);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i55);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 3);
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i35);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i36);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_5_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i37);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i38);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__arg_info__partition_args_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i39);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i40);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i41);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i55);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 3);
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i48);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i49);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_5_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i50);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i51);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__arg_info__partition_args_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i52);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i53);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i54);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i55);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__call_gen__generic_call_info_7_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i56);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i57);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_from_arginfo_5_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i58);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_from_sequence_5_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i59);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i71) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i74) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i76) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i86));
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i65);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i66);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r7;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i67);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_store_map_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i69);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i70);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_store_map_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i72);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_cases_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i73);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i75);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i77);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(6) = MR_tempr4;
	MR_tempr5 = MR_r1;
	MR_sv(8) = MR_ctfield(3, MR_tempr5, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(9) = MR_ctfield(3, MR_tempr5, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i79);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(7) = MR_tempr3;
	MR_sv(10) = MR_tempr4;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i80);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i81);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(2) = MR_tempr3;
	MR_sv(7) = MR_tempr4;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i82);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i83);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i84);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_store_map_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i85);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__follow_vars__this_file_0_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0_i87);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("find_follow_vars_in_goal_2: unexpected shorthand", 48);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module8)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,14,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,
		ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0_i4);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0_i5);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,
		ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0_i6);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module9)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_cases_8_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_in_cases_8_0,14,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_cases_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_r5;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,
		ll_backend__follow_vars__find_follow_vars_in_cases_8_0_i4);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_cases_8_0_i5);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	}
	MR_np_localcall_lab(ll_backend__follow_vars__find_follow_vars_in_cases_8_0,
		ll_backend__follow_vars__find_follow_vars_in_cases_8_0_i6);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module10)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_conj_9_0);
	MR_init_label8(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,46,6,5,4,11,12,13,15)
	MR_init_label1(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i46);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r7 = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i6);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	MR_r9 = MR_tempr2;
	if (MR_RTAGS_TEST(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i4);
	}
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r7;
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i5);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r8, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i4);
	}
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r7;
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i11);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r7;
	MR_r4 = (MR_Integer) 1;
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_localcall_lab(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,
		ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i12);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_10_0,
		ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i13);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_conj_9_0_i16);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__follow_vars_maybe_bunch_0(void)
{
	ll_backend__follow_vars_module0();
	ll_backend__follow_vars_module1();
	ll_backend__follow_vars_module2();
	ll_backend__follow_vars_module3();
	ll_backend__follow_vars_module4();
	ll_backend__follow_vars_module5();
	ll_backend__follow_vars_module6();
	ll_backend__follow_vars_module7();
	ll_backend__follow_vars_module8();
	ll_backend__follow_vars_module9();
	ll_backend__follow_vars_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__follow_vars__init(void);
void mercury__ll_backend__follow_vars__init_type_tables(void);
void mercury__ll_backend__follow_vars__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__follow_vars__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__follow_vars__init_complexity_procs(void);
#endif

void mercury__ll_backend__follow_vars__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__follow_vars_maybe_bunch_0();
	mercury__ll_backend__follow_vars__init_debugger();
}

void mercury__ll_backend__follow_vars__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__follow_vars__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__follow_vars__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__follow_vars);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__follow_vars__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
