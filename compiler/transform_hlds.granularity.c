/*
** Automatically generated from `granularity.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__granularity__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.granularity.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.granularity.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.granularity.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.granularity.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.granularity.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.granularity.c"
#line 48 "transform_hlds.granularity.c"
#include "transform_hlds.granularity.mh"

#line 51 "transform_hlds.granularity.c"
#line 52 "transform_hlds.granularity.c"
#ifndef TRANSFORM_HLDS__GRANULARITY_DECL_GUARD
#define TRANSFORM_HLDS__GRANULARITY_DECL_GUARD

#line 56 "transform_hlds.granularity.c"
#line 57 "transform_hlds.granularity.c"

#endif
#line 60 "transform_hlds.granularity.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label2(transform_hlds__granularity__control_granularity_2_0, 2,3)
MR_decl_label3(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0, 15,4,6)
MR_decl_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 112,7,8,9,12,13,15,18)
MR_decl_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 19,20,21,22,23,24,25,26)
MR_decl_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 27,28,29,30,31,11,41,6)
MR_decl_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 43,113,47,117,51,52,53,115)
MR_decl_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 57,116,61,64,118,69,114,72)
MR_decl_label2(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 110,111)
MR_decl_label3(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0, 14,4,5)
MR_decl_label8(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0, 2,3,4,5,6,8,9,10)
MR_decl_label6(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0, 12,13,14,15,16,17)
MR_def_extern_entry(transform_hlds__granularity__control_granularity_2_0)
MR_decl_static(transform_hlds__granularity__runtime_granularity_test_in_scc_3_0)
MR_decl_static(fn__transform_hlds__granularity__this_file_0_0)
MR_decl_static(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0)
MR_decl_static(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0)
MR_decl_static(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0)
MR_decl_static(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__granularity__control_granularity_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__granularity__control_granularity_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__granularity__runtime_granularity_test_in_scc_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__granularity__runtime_granularity_test_in_scc_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__granularity__runtime_granularity_test_in_scc_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__granularity__control_granularity_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.granularity",
"transform_hlds.granularity",
"runtime_granularity_test_in_scc",
3,
0
},
"transform_hlds.granularity",
"granularity.m",
53,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__granularity__runtime_granularity_test_in_scc_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.granularity",
"transform_hlds.granularity",
"runtime_granularity_test_in_proc",
4,
0
},
"transform_hlds.granularity",
"granularity.m",
59,
"d1;c4;"
};

MR_decl_entry(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__granularity_module0)
	MR_init_entry1(transform_hlds__granularity__control_granularity_2_0);
	MR_init_label2(transform_hlds__granularity__control_granularity_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__granularity__control_granularity_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,
		transform_hlds__granularity__control_granularity_2_0_i2);
MR_def_label(transform_hlds__granularity__control_granularity_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__granularity__control_granularity_2_0_i3);
MR_def_label(transform_hlds__granularity__control_granularity_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__granularity_module1)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_scc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_scc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__granularity_module2)
	MR_init_entry1(fn__transform_hlds__granularity__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__granularity__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("granularity.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);
MR_decl_entry(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_throw_exception_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mm_tabled_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_modify_trail_3_0);
MR_decl_entry(hlds__goal_util__generate_foreign_proc_16_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__granularity_module3)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0);
	MR_init_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,112,7,8,9,12,13,15,18)
	MR_init_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,19,20,21,22,23,24,25,26)
	MR_init_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,27,28,29,30,31,11,41,6)
	MR_init_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,43,113,47,117,51,52,53,115)
	MR_init_label8(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,57,116,61,64,118,69,114,72)
	MR_init_label2(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,110,111)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i111);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i111) MR_AND
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i112) MR_AND
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i113) MR_AND
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i114) MR_AND
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i115) MR_AND
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i116) MR_AND
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i117) MR_AND
		MR_LABEL_AP(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i118));
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i7);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i8);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i9);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i11);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i12);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i13);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 372;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i18);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i19);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(");", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i20);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_choose_parallel_over_sequential_cond(", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i21);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SUCCESS_INDICATOR = ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i22);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i23);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i24);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i25);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i26);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i27);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_throw_exception_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i28);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mm_tabled_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i29);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_modify_trail_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i30);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("evaluate_parallelism_condition", 30);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(5);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = (MR_Word) MR_tbmkword(0, 0);
	MR_r14 = MR_sv(2);
	MR_r15 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_foreign_proc_16_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i31);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tempr7 = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr8 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_r1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(2,4,0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr8;
	MR_r1 = MR_tempr6;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__granularity__this_file_0_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i41);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("runtime_granularity_test_in_goal: unsupported target language", 61);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 2);
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i43);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i47);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i51);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i52);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i53);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i57);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r6 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i61);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i110);
	}
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i64);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__granularity__this_file_0_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i69);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("runtime_granularity_test_in_goal: shorthand", 43);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i72);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__granularity_module4)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0);
	MR_init_label3(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goals_6_0_i4);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goals_6_0_i5);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__granularity_module5)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0);
	MR_init_label3(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,15,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_cases_6_0_i4);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_cases_6_0_i6);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__granularity_module6)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0);
	MR_init_label8(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,2,3,4,5,6,8,9,10)
	MR_init_label6(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i2);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i3);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i4);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i5);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i6);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i8);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i9);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i10);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i12);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i13);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i14);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i15);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i16);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i17);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__granularity_maybe_bunch_0(void)
{
	transform_hlds__granularity_module0();
	transform_hlds__granularity_module1();
	transform_hlds__granularity_module2();
	transform_hlds__granularity_module3();
	transform_hlds__granularity_module4();
	transform_hlds__granularity_module5();
	transform_hlds__granularity_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__granularity__init(void);
void mercury__transform_hlds__granularity__init_type_tables(void);
void mercury__transform_hlds__granularity__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__granularity__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__granularity__init_complexity_procs(void);
#endif

void mercury__transform_hlds__granularity__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__granularity_maybe_bunch_0();
	mercury__transform_hlds__granularity__init_debugger();
}

void mercury__transform_hlds__granularity__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__granularity__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__granularity__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__granularity);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__granularity__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
