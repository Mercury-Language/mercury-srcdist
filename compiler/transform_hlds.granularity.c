/*
** Automatically generated from `granularity.m'
** by the Mercury compiler,
** version rotd-2011-08-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__granularity__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.granularity.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "transform_hlds.granularity.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.granularity.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.granularity.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.granularity.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.granularity.c"
#line 49 "transform_hlds.granularity.c"
#include "transform_hlds.granularity.mh"

#line 52 "transform_hlds.granularity.c"
#line 53 "transform_hlds.granularity.c"
#ifndef TRANSFORM_HLDS__GRANULARITY_DECL_GUARD
#define TRANSFORM_HLDS__GRANULARITY_DECL_GUARD

#line 57 "transform_hlds.granularity.c"
#line 58 "transform_hlds.granularity.c"

#endif
#line 61 "transform_hlds.granularity.c"

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
MR_decl_label3(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0, 18,4,6)
MR_decl_label10(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 7,8,9,12,13,15,18,19,20,21)
MR_decl_label10(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 22,23,24,25,26,27,28,29,11,6)
MR_decl_label10(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 40,4,44,43,48,49,50,47,54,53)
MR_decl_label7(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0, 57,60,56,65,64,148,147)
MR_decl_label3(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0, 17,4,5)
MR_decl_label10(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0, 2,3,4,5,6,8,9,10,12,13)
MR_decl_label4(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0, 14,15,16,17)
MR_def_extern_entry(transform_hlds__granularity__control_granularity_2_0)
MR_decl_static(transform_hlds__granularity__runtime_granularity_test_in_scc_3_0)
MR_decl_static(fn__transform_hlds__granularity__runtime_test_code_0_0)
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
58,
"5"
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
52,
"6"
};


MR_decl_entry(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__granularity_module0)
	MR_init_entry1(transform_hlds__granularity__control_granularity_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__granularity__control_granularity_2_0);
	MR_init_label2(transform_hlds__granularity__control_granularity_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'control_granularity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__granularity__control_granularity_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,
		transform_hlds__granularity__control_granularity_2_0_i2);
MR_def_label(transform_hlds__granularity__control_granularity_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(2);
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
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__granularity_module1)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_scc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__granularity__runtime_granularity_test_in_scc_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'runtime_granularity_test_in_scc'/3 mode 0 */
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
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__granularity_module2)
	MR_init_entry1(fn__transform_hlds__granularity__runtime_test_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__granularity__runtime_test_code_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'runtime_test_code'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__granularity__runtime_test_code_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SUCCESS_INDICATOR = MR_par_cond_local_wsdeque_length;\n#ifdef MR_DEBUG_RUNTIME_GRANULARITY_CONTROL\nMR_record_conditional_parallelism_decision(SUCCESS_INDICATOR);" "\n#endif\n", 168);
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
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_throw_exception_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mm_tabled_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_modify_trail_3_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
MR_decl_entry(hlds__goal_util__generate_foreign_proc_16_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__granularity_module3)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__granularity__runtime_granularity_test_in_goal_6_0);
	MR_init_label10(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,7,8,9,12,13,15,18,19,20,21)
	MR_init_label10(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,22,23,24,25,26,27,28,29,11,6)
	MR_init_label10(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,40,4,44,43,48,49,50,47,54,53)
	MR_init_label7(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,57,60,56,65,64,148,147)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'runtime_granularity_test_in_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if ((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i148);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i4);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r5;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i6);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i7);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i8);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
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
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i18);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i19);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i20);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i21);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i22);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i23);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_throw_exception_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i24);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mm_tabled_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i25);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_modify_trail_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i26);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__granularity__runtime_test_code_0_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i27);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i28);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("evaluate_parallelism_condition", 30);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(7);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_tempr1;
	MR_r14 = MR_sv(3);
	MR_r15 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_foreign_proc_16_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i29);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tempr5 = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_r1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(2,4,0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr3;
	MR_tfield(0, MR_r1, 1) = MR_tempr6;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.granularity", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", 73);
	MR_r3 = (MR_Word) MR_string_const("unsupported target language", 27);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i40);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i43);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i44);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i47);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i48);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i49);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i50);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i53);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_r5, (MR_Integer) 0);
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i54);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i56);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r6 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i57);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i147);
	}
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i60);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i64);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goal_6_0_i65);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.granularity", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", 73);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__granularity_module4)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__granularity__runtime_granularity_test_in_goals_6_0);
	MR_init_label3(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'runtime_granularity_test_in_goals'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__granularity__runtime_granularity_test_in_goal_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goals_6_0_i4);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_goals_6_0_i5);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_goals_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__granularity__runtime_granularity_test_in_cases_6_0);
	MR_init_label3(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'runtime_granularity_test_in_cases'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
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
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,
		transform_hlds__granularity__runtime_granularity_test_in_cases_6_0_i6);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_cases_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__granularity_module6)
	MR_init_entry1(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__granularity__runtime_granularity_test_in_proc_4_0);
	MR_init_label10(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,2,3,4,5,6,8,9,10,12,13)
	MR_init_label4(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'runtime_granularity_test_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i2);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
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
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
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
	MR_decr_sp_and_return(13);
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
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i13);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i14);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
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
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__granularity__runtime_granularity_test_in_proc_4_0_i17);
MR_def_label(transform_hlds__granularity__runtime_granularity_test_in_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
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
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__granularity__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__granularity__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
