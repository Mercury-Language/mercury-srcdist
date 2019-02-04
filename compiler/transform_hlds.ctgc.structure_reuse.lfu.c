/*
** Automatically generated from `structure_reuse.lfu.m'
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
INIT mercury__transform_hlds__ctgc__structure_reuse__lfu__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 49 "transform_hlds.ctgc.structure_reuse.lfu.c"
#include "transform_hlds.ctgc.structure_reuse.lfu.mh"

#line 52 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 53 "transform_hlds.ctgc.structure_reuse.lfu.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__LFU_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__LFU_DECL_GUARD

#line 57 "transform_hlds.ctgc.structure_reuse.lfu.c"
#line 58 "transform_hlds.ctgc.structure_reuse.lfu.c"

#endif
#line 61 "transform_hlds.ctgc.structure_reuse.lfu.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label6(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0, 2,3,4,5,6,7)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0, 23,4,5,6,7,8,11)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0, 2,3,4,5,6)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0, 4,3,5,6,7,9,8,12,11,14)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0, 16,17,18,19,20,22,23,24,25,26)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0, 28,15,31,30,36,37,35,41,42,40)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0, 144,46)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0, 22,4,5,6,7,8,10)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0, 2,4,5)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0, 4,3,7,6,10,11,12,13,14,9)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0, 17,16,19,18,22,21,24,2,27,28)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0, 2,3,4)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0, 2,5,6,7,8,9,10,14,18,19)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0, 20,4,22,23)
MR_decl_label6(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0, 2,3,4,5,6,7)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_TAG_COMMON(0,0,2)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.lfu",
"transform_hlds.ctgc.structure_reuse.lfu",
"forward_use_in_disj_goal",
9,
0
},
"transform_hlds.ctgc.structure_reuse.lfu",
"structure_reuse.lfu.m",
215,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.lfu",
"transform_hlds.ctgc.structure_reuse.lfu",
"forward_use_in_case",
9,
0
},
"transform_hlds.ctgc.structure_reuse.lfu",
"structure_reuse.lfu.m",
191,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.lfu",
"transform_hlds.ctgc.structure_reuse.lfu",
"forward_use_in_goal",
7,
0
},
"transform_hlds.ctgc.structure_reuse.lfu",
"structure_reuse.lfu.m",
181,
"9"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl2_7_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module0)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_in_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_r3;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_np_tailcall_ent(list__map_foldl2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_in_cases'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_r3;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tfield(0, MR_tempr1, 4);
	MR_r8 = MR_tfield(0, MR_tempr1, 5);
	MR_np_tailcall_ent(list__map_foldl2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_in_disj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_r3;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tfield(0, MR_tempr1, 4);
	MR_r8 = MR_tfield(0, MR_tempr1, 5);
	MR_np_tailcall_ent(list__map_foldl2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_births_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_births_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
MR_decl_entry(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__union_list_1_0);
MR_decl_entry(parse_tree__set_of_var__difference_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_lfu_3_0);
MR_decl_entry(parse_tree__set_of_var__union_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,2,5,6,7,8,9,10,14,18,19)
	MR_init_label4(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,20,4,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_in_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(7) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_list_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_list_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,4,3,7,6,10,11,12,13,14,9)
	MR_init_label10(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,17,16,19,18,22,21,24,2,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_in_composite_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_r3;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i6);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r2 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i9);
	}
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i16);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r2 = MR_body((MR_Integer) MR_r5, (MR_Integer) 0);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i18);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_r3;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i21);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_r3;
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_r5) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r5, 0) == (MR_Integer) 1)) || ((MR_tag(MR_r5) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r5, 0) == (MR_Integer) 0))) || (MR_tag(MR_r5) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_r5) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.lfu", 39);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", 83);
	MR_sv(7) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("atomic goal", 11);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.lfu", 39);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", 83);
	MR_sv(7) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0_i28);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_liveness_info_2_0);
MR_decl_entry(parse_tree__set_of_var__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0);
	MR_init_label6(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_information'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_liveness_info_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(parse_tree__set_of_var__init_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lfu_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__union_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_reuse_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module6)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_vars_to_lfu_in_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module7)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,4,3,5,6,7,9,8,12,11,14)
	MR_init_label10(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,16,17,18,19,20,22,23,24,25,26)
	MR_init_label10(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,28,15,31,30,36,37,35,41,42,40)
	MR_init_label2(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,144,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_vars_to_lfu_in_goal_expr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i5);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i11);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i14);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i15);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_tfield(3, MR_r2, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i25);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i26);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i28);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i30);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i31);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i144);
	}
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i35);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 6);
	MR_r2 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i36);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i37);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i40);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i41);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i42);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.lfu", 39);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.lfu.add_vars_to_lfu_in_goal_expr\'/3", 82);
	MR_r3 = (MR_Word) MR_string_const("try_goal", 8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(6) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0_i46);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module8)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0);
	MR_init_label7(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,22,4,5,6,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_vars_to_lfu_in_goals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module9)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0);
	MR_init_label7(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,23,4,5,6,7,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_vars_to_lfu_in_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module10)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0);
	MR_init_label6(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_vars_to_lfu'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_lfu_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module11)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_in_case'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__lfu_module12)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'forward_use_in_disj_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__structure_reuse__lfu_maybe_bunch_0(void)
{
	transform_hlds__ctgc__structure_reuse__lfu_module0();
	transform_hlds__ctgc__structure_reuse__lfu_module1();
	transform_hlds__ctgc__structure_reuse__lfu_module2();
	transform_hlds__ctgc__structure_reuse__lfu_module3();
	transform_hlds__ctgc__structure_reuse__lfu_module4();
	transform_hlds__ctgc__structure_reuse__lfu_module5();
	transform_hlds__ctgc__structure_reuse__lfu_module6();
	transform_hlds__ctgc__structure_reuse__lfu_module7();
	transform_hlds__ctgc__structure_reuse__lfu_module8();
	transform_hlds__ctgc__structure_reuse__lfu_module9();
	transform_hlds__ctgc__structure_reuse__lfu_module10();
	transform_hlds__ctgc__structure_reuse__lfu_module11();
	transform_hlds__ctgc__structure_reuse__lfu_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_reuse__lfu__init(void);
void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_reuse__lfu__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__ctgc__structure_reuse__lfu__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__lfu_maybe_bunch_0();
	mercury__transform_hlds__ctgc__structure_reuse__lfu__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_reuse__lfu__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__structure_reuse__lfu);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
