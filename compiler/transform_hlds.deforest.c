/*
** Automatically generated from `deforest.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__deforest__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.deforest.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.deforest.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.deforest.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.deforest.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.deforest.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.deforest.c"
#line 49 "transform_hlds.deforest.c"
#include "transform_hlds.deforest.mh"

#line 52 "transform_hlds.deforest.c"
#line 53 "transform_hlds.deforest.c"
#ifndef TRANSFORM_HLDS__DEFOREST_DECL_GUARD
#define TRANSFORM_HLDS__DEFOREST_DECL_GUARD

#line 57 "transform_hlds.deforest.c"
#line 58 "transform_hlds.deforest.c"

#endif
#line 61 "transform_hlds.deforest.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__deforest__type_ctor_info_annotated_conj_0,
	mercury_data_transform_hlds__deforest__type_ctor_info_can_move_0,
	mercury_data_transform_hlds__deforest__type_ctor_info_deforest_info_0;
MR_decl_label1(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0, 2)
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0, 13,2,4)
MR_decl_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0, 14,3)
MR_decl_label10(transform_hlds__deforest__append_goal_9_0, 3,5,8,9,11,2,13,14,18,19)
MR_decl_label6(transform_hlds__deforest__append_goal_9_0, 20,21,22,23,24,25)
MR_decl_label6(transform_hlds__deforest__append_goal_to_cases_10_0, 21,4,5,6,8,9)
MR_decl_label5(transform_hlds__deforest__append_goal_to_disjuncts_9_0, 19,4,5,6,7)
MR_decl_label10(transform_hlds__deforest__can_optimize_conj_6_0, 2,3,4,5,6,7,8,9,10,94)
MR_decl_label10(transform_hlds__deforest__can_optimize_conj_6_0, 11,22,23,21,27,28,29,17,18,32)
MR_decl_label10(transform_hlds__deforest__can_optimize_conj_6_0, 16,39,40,44,46,36,37,48,35,54)
MR_decl_label10(transform_hlds__deforest__can_optimize_conj_6_0, 50,63,62,64,67,59,69,58,78,77)
MR_decl_label4(transform_hlds__deforest__can_optimize_conj_6_0, 82,74,84,72)
MR_decl_label10(transform_hlds__deforest__compute_goal_infos_4_0, 60,5,8,7,11,15,17,12,10,4)
MR_decl_label2(transform_hlds__deforest__compute_goal_infos_4_0, 23,24)
MR_decl_label10(transform_hlds__deforest__deforest_call_9_0, 2,3,4,5,7,8,9,10,11,12)
MR_decl_label10(transform_hlds__deforest__deforest_call_9_0, 13,14,21,23,24,25,27,29,31,33)
MR_decl_label10(transform_hlds__deforest__deforest_call_9_0, 34,35,37,36,17,39,44,47,49,50)
MR_decl_label7(transform_hlds__deforest__deforest_call_9_0, 51,53,54,55,46,16,62)
MR_decl_label6(transform_hlds__deforest__deforest_cases_5_0, 22,4,5,6,9,10)
MR_decl_label10(transform_hlds__deforest__deforest_conj_6_0, 46,4,3,8,10,13,12,5,6,17)
MR_decl_label5(transform_hlds__deforest__deforest_disj_4_0, 20,4,5,7,8)
MR_decl_label1(transform_hlds__deforest__deforest_goal_4_0, 2)
MR_decl_label10(transform_hlds__deforest__deforest_goal_expr_6_0, 7,8,9,10,11,12,13,15,16,17)
MR_decl_label10(transform_hlds__deforest__deforest_goal_expr_6_0, 18,19,20,22,23,24,4,27,26,31)
MR_decl_label10(transform_hlds__deforest__deforest_goal_expr_6_0, 32,33,34,35,36,37,30,40,39,43)
MR_decl_label8(transform_hlds__deforest__deforest_goal_expr_6_0, 41,48,45,50,44,54,53,167)
MR_decl_label1(transform_hlds__deforest__deforest_proc_3_0, 2)
MR_decl_label10(transform_hlds__deforest__deforest_proc_deltas_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__deforest__deforest_proc_deltas_5_0, 12,14,15,16,19,20,21,18,23,24)
MR_decl_label10(transform_hlds__deforest__deforest_proc_deltas_5_0, 25,26,27,28,29,30,31,32,33,34)
MR_decl_label10(transform_hlds__deforest__deforest_proc_deltas_5_0, 36,37,35,38,39,40,17,42,43,44)
MR_decl_label2(transform_hlds__deforest__deforest_proc_deltas_5_0, 45,46)
MR_decl_label10(transform_hlds__deforest__deforestation_4_0, 3,5,8,12,9,10,15,16,17,18)
MR_decl_label10(transform_hlds__deforest__deforestation_4_0, 19,20,22,23,24,25,26,27,28,33)
MR_decl_label7(transform_hlds__deforest__deforestation_4_0, 34,35,36,37,38,40,29)
MR_decl_label3(transform_hlds__deforest__get_branch_vars_proc_univ_7_0, 4,5,6)
MR_decl_label8(transform_hlds__deforest__get_sub_conj_nonlocals_7_0, 5,9,11,13,15,17,19,20)
MR_decl_label8(transform_hlds__deforest__get_sub_conj_nonlocals_9_0, 5,7,9,11,13,15,21,17)
MR_decl_label10(transform_hlds__deforest__handle_deforestation_9_0, 2,3,4,5,6,7,10,11,12,14)
MR_decl_label10(transform_hlds__deforest__handle_deforestation_9_0, 15,16,17,18,19,21,25,26,31,33)
MR_decl_label10(transform_hlds__deforest__handle_deforestation_9_0, 35,22,38,44,47,49,52,53,54,55)
MR_decl_label10(transform_hlds__deforest__handle_deforestation_9_0, 37,58,60,62,63,66,67,68,69,57)
MR_decl_label10(transform_hlds__deforest__handle_deforestation_9_0, 70,20,74,75,76,79,80,81,82,83)
MR_decl_label10(transform_hlds__deforest__handle_deforestation_9_0, 85,78,89,90,95,96,97,98,77,101)
MR_decl_label1(transform_hlds__deforest__handle_deforestation_9_0, 102)
MR_decl_label4(transform_hlds__deforest__is_simple_goal_1_0, 4,7,2,1)
MR_decl_label4(transform_hlds__deforest__is_simple_goal_list_1_0, 17,4,2,1)
MR_decl_label6(transform_hlds__deforest__move_goals__ho1_9_0, 30,3,11,14,9,4)
MR_decl_label6(transform_hlds__deforest__move_goals__ho2_9_0, 30,3,11,14,9,4)
MR_decl_label8(transform_hlds__deforest__partially_evaluate_conj_goals_5_0, 29,4,3,5,7,11,12,8)
MR_decl_label10(transform_hlds__deforest__propagate_conj_constraints_6_0, 69,4,3,5,9,12,15,17,18,19)
MR_decl_label9(transform_hlds__deforest__propagate_conj_constraints_6_0, 22,23,24,27,26,30,31,7,34)
MR_decl_label10(transform_hlds__deforest__push_goal_into_goal_8_0, 2,5,4,8,9,10,11,12,13,7)
MR_decl_label10(transform_hlds__deforest__push_goal_into_goal_8_0, 16,17,15,3,20,22,23,24,25,26)
MR_decl_label10(transform_hlds__deforest__push_goal_into_goal_8_0, 27,28,29,30,31,32,34,35,36,37)
MR_decl_label5(transform_hlds__deforest__push_goal_into_goal_8_0, 39,40,41,42,43)
MR_decl_label8(transform_hlds__deforest__reorder_conj_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(transform_hlds__deforest__reset_inferred_proc_determinism_3_0, 2,3,5,4,6)
MR_decl_label10(transform_hlds__deforest__search_for_deforest_goal_6_0, 48,8,9,12,14,17,21,22,3,4)
MR_decl_label1(transform_hlds__deforest__search_for_deforest_goal_6_0, 1)
MR_decl_label10(transform_hlds__deforest__should_try_deforestation_4_0, 2,3,4,5,14,33,7,22,21,23)
MR_decl_label4(transform_hlds__deforest__should_try_deforestation_4_0, 24,25,26,19)
MR_decl_label10(transform_hlds__deforest__unfold_call_10_0, 2,3,4,5,6,7,9,10,14,16)
MR_decl_label10(transform_hlds__deforest__unfold_call_10_0, 13,18,19,20,21,22,23,24,25,26)
MR_decl_label10(transform_hlds__deforest__unfold_call_10_0, 27,28,29,102,31,33,34,35,36,37)
MR_decl_label10(transform_hlds__deforest__unfold_call_10_0, 38,39,40,43,41,45,46,47,48,49)
MR_decl_label10(transform_hlds__deforest__unfold_call_10_0, 50,51,52,54,53,55,56,57,58,59)
MR_decl_label10(transform_hlds__deforest__unfold_call_10_0, 60,61,66,69,68,71,65,78,79,80)
MR_decl_label10(transform_hlds__deforest__unfold_call_10_0, 81,82,83,84,63,90,91,92,93,94)
MR_decl_label3(transform_hlds__deforest__unfold_call_10_0, 95,12,97)
MR_decl_label10(fn__transform_hlds__deforest__is_improvement_worth_while_4_0, 2,3,4,5,6,7,11,12,13,14)
MR_decl_label4(fn__transform_hlds__deforest__is_improvement_worth_while_4_0, 19,8,9,24)
MR_decl_label1(__Unify___transform_hlds__deforest__list__list_1_1, 1)
MR_decl_label7(__Unify___transform_hlds__deforest__deforest_info_0_0, 4,7,9,11,13,17,1)
MR_decl_label8(__Compare___transform_hlds__deforest__deforest_info_0_0, 3,2,5,10,14,18,23,73)
MR_def_extern_entry(transform_hlds__deforest__deforestation_4_0)
MR_decl_static(transform_hlds__deforest__reset_inferred_proc_determinism_3_0)
MR_decl_static(transform_hlds__deforest__get_branch_vars_proc_univ_7_0)
MR_decl_static(transform_hlds__deforest__compute_goal_infos_4_0)
MR_decl_static(transform_hlds__deforest__is_simple_goal_list_1_0)
MR_decl_static(transform_hlds__deforest__is_simple_goal_1_0)
MR_decl_static(transform_hlds__deforest__can_optimize_conj_6_0)
MR_decl_static(transform_hlds__deforest__get_sub_conj_nonlocals_9_0)
MR_decl_static(transform_hlds__deforest__propagate_conj_constraints_6_0)
MR_decl_static(transform_hlds__deforest__search_for_deforest_goal_6_0)
MR_decl_static(transform_hlds__deforest__should_try_deforestation_4_0)
MR_decl_static(fn__transform_hlds__deforest__is_improvement_worth_while_4_0)
MR_decl_static(transform_hlds__deforest__get_sub_conj_nonlocals_7_0)
MR_decl_static(transform_hlds__deforest__reorder_conj_5_0)
MR_decl_static(transform_hlds__deforest__unfold_call_10_0)
MR_decl_static(transform_hlds__deforest__deforest_goal_4_0)
MR_decl_static(transform_hlds__deforest__deforest_goal_expr_6_0)
MR_decl_static(transform_hlds__deforest__deforest_disj_4_0)
MR_decl_static(transform_hlds__deforest__deforest_cases_5_0)
MR_decl_static(transform_hlds__deforest__partially_evaluate_conj_goals_5_0)
MR_decl_static(transform_hlds__deforest__deforest_conj_6_0)
MR_decl_static(transform_hlds__deforest__handle_deforestation_9_0)
MR_decl_static(transform_hlds__deforest__push_goal_into_goal_8_0)
MR_decl_static(transform_hlds__deforest__append_goal_to_disjuncts_9_0)
MR_decl_static(transform_hlds__deforest__append_goal_to_cases_10_0)
MR_decl_static(transform_hlds__deforest__append_goal_9_0)
MR_decl_static(transform_hlds__deforest__deforest_call_9_0)
MR_decl_static(transform_hlds__deforest__deforest_proc_deltas_5_0)
MR_decl_static(transform_hlds__deforest__deforest_proc_3_0)
MR_decl_static(__Unify___transform_hlds__deforest__annotated_conj_0_0)
MR_decl_static(__Compare___transform_hlds__deforest__annotated_conj_0_0)
MR_decl_static(__Unify___transform_hlds__deforest__can_move_0_0)
MR_decl_static(__Compare___transform_hlds__deforest__can_move_0_0)
MR_decl_static(__Unify___transform_hlds__deforest__deforest_info_0_0)
MR_decl_static(__Compare___transform_hlds__deforest__deforest_info_0_0)
MR_decl_static(__Unify___transform_hlds__deforest__list__list_1_1)
MR_decl_static(transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_0)
MR_decl_static(transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_0)
MR_decl_static(transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_0)
MR_decl_static(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0)
MR_decl_static(transform_hlds__deforest__move_goals__ho1_9_0)
MR_decl_static(transform_hlds__deforest__move_goals__ho2_9_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__pd_info__type_ctor_info_pd_branch_info_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
{
MR_CTOR1_ADDR(transform_hlds__pd_info, pd_branch_info),
MR_INT_CTOR_ADDR
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
MR_TAG_COMMON(0,0,1)
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
MR_COMMON(0,3)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(transform_hlds__pd_info, pd_branch_info),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,0,8)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,3),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_TAG_COMMON(0,0,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(univ, univ),
MR_CTOR0_ADDR(univ, univ)
}
},
};

MR_decl_entry(transform_hlds__pd_info__pd_info_update_goal_3_0);
MR_decl_entry(transform_hlds__pd_info__remove_version_3_0);
static const struct mercury_type_3 mercury_common_3[18] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__deforest__get_branch_vars_proc_univ_7_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__deforest__deforest_proc_3_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(transform_hlds__deforest__reset_inferred_proc_determinism_3_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_0),
0
},
{
MR_COMMON(4,8),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,9),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,10),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,11),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,12),
MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0),
0
},
{
MR_COMMON(4,13),
MR_ENTRY_AP(transform_hlds__pd_info__pd_info_update_goal_3_0),
0
},
{
MR_COMMON(4,14),
MR_ENTRY_AP(transform_hlds__pd_info__remove_version_3_0),
0
},
{
MR_COMMON(4,15),
MR_ENTRY_AP(transform_hlds__pd_info__pd_info_update_goal_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__pd_info__type_ctor_info_pd_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__search_for_deforest_goal_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__handle_deforestation_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__handle_deforestation_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__append_goal_9_0_1;
static const struct mercury_type_4 mercury_common_4[16] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__search_for_deforest_goal_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__handle_deforestation_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__handle_deforestation_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__append_goal_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info),
MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__propagate_conj_constraints_6_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__deforest__propagate_conj_constraints_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__deforest__type_ctor_info_annotated_conj_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__deforest__annotated_conj_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__deforest__annotated_conj_0_0)),
	"transform_hlds.deforest",
	"annotated_conj",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__deforest__type_ctor_info_can_move_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__deforest__can_move_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__deforest__can_move_0_0)),
	"transform_hlds.deforest",
	"can_move",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__deforest__field_types_deforest_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__deforest__du_functor_desc_deforest_info_0_0 = {
	"deforest_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__deforest__field_types_deforest_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[] = {
	&mercury_data_transform_hlds__deforest__du_functor_desc_deforest_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__deforest__du_ptag_ordered_deforest_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__deforest__du_stag_ordered_deforest_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__deforest__du_name_ordered_deforest_info_0[] = {
	&mercury_data_transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

const MR_Integer mercury_data_transform_hlds__deforest__functor_number_map_deforest_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__deforest__type_ctor_info_deforest_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__deforest__deforest_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__deforest__deforest_info_0_0)),
	"transform_hlds.deforest",
	"deforest_info",
	{ (void *)mercury_data_transform_hlds__deforest__du_name_ordered_deforest_info_0 },
	{ (void *)mercury_data_transform_hlds__deforest__du_ptag_ordered_deforest_info_0 },
	1,
	4,
	mercury_data_transform_hlds__deforest__functor_number_map_deforest_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__append_goal_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_info",
"transform_hlds.pd_info",
"pd_info_update_goal",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1851,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__handle_deforestation_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.pd_info",
"transform_hlds.pd_info",
"remove_version",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
785,
"153"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__handle_deforestation_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_info",
"transform_hlds.pd_info",
"pd_info_update_goal",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
672,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_5 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_4 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_3 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__search_for_deforest_goal_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_631",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
631,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__propagate_conj_constraints_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_492",
1,
0
},
"transform_hlds.deforest",
"deforest.m",
492,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_5 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_4 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_3 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__get_sub_conj_nonlocals_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_1627",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
1627,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_4 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"lambda_deforest_m_145",
2,
0
},
"transform_hlds.deforest",
"deforest.m",
145,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_3 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"reset_inferred_proc_determinism",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
137,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"deforest_proc",
3,
0
},
"transform_hlds.deforest",
"deforest.m",
121,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__deforest__deforestation_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.deforest",
"transform_hlds.deforest",
"get_branch_vars_proc_univ",
7,
0
},
"transform_hlds.deforest",
"deforest.m",
101,
"9"
};


MR_decl_entry(map__init_1_0);
MR_decl_entry(univ__type_to_univ_2_1);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_update_4_0);
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_init_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__pd_info__type_ctor_info_pd_info_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_module_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_clobber_dependency_info_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_versions_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__pd_info__type_ctor_info_version_info_0;
MR_decl_entry(map__keys_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(check_hlds__det_report__disable_det_warnings_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_globals_3_0);
MR_decl_entry(check_hlds__det_analysis__determinism_pass_3_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module0)
	MR_init_entry1(transform_hlds__deforest__deforestation_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforestation_4_0);
	MR_init_label10(transform_hlds__deforest__deforestation_4_0,3,5,8,12,9,10,15,16,17,18)
	MR_init_label10(transform_hlds__deforest__deforestation_4_0,19,20,22,23,24,25,26,27,28,33)
	MR_init_label7(transform_hlds__deforest__deforestation_4_0,34,35,36,37,38,40,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforestation'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__deforest__deforestation_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__deforest__deforestation_4_0_i3);
MR_def_label(transform_hlds__deforest__deforestation_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		transform_hlds__deforest__deforestation_4_0_i5);
MR_def_label(transform_hlds__deforest__deforestation_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_update_4_0,
		transform_hlds__deforest__deforestation_4_0_i8);
MR_def_label(transform_hlds__deforest__deforestation_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforestation_4_0_i10);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		transform_hlds__deforest__deforestation_4_0_i12);
MR_def_label(transform_hlds__deforest__deforestation_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforestation_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__deforest__deforestation_4_0_i16);
MR_def_label(transform_hlds__deforest__deforestation_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(transform_hlds__deforest__deforestation_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.deforest", 23);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.deforest.deforestation\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("passes_aux stuffed up", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__deforest__deforestation_4_0_i15);
MR_def_label(transform_hlds__deforest__deforestation_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__deforest__deforestation_4_0_i16);
MR_def_label(transform_hlds__deforest__deforestation_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__deforest__deforestation_4_0_i17);
MR_def_label(transform_hlds__deforest__deforestation_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__deforest__deforestation_4_0_i18);
MR_def_label(transform_hlds__deforest__deforestation_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__deforest__deforestation_4_0_i19);
MR_def_label(transform_hlds__deforest__deforestation_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_init_3_0,
		transform_hlds__deforest__deforestation_4_0_i20);
MR_def_label(transform_hlds__deforest__deforestation_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__deforestation_4_0_i22);
MR_def_label(transform_hlds__deforest__deforestation_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__deforestation_4_0_i23);
MR_def_label(transform_hlds__deforest__deforestation_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0,
		transform_hlds__deforest__deforestation_4_0_i24);
MR_def_label(transform_hlds__deforest__deforestation_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_versions_2_0,
		transform_hlds__deforest__deforestation_4_0_i25);
MR_def_label(transform_hlds__deforest__deforestation_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__pd_info, version_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__deforest__deforestation_4_0_i26);
MR_def_label(transform_hlds__deforest__deforestation_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__deforestation_4_0_i27);
MR_def_label(transform_hlds__deforest__deforestation_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 340;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__deforestation_4_0_i28);
MR_def_label(transform_hlds__deforest__deforestation_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforestation_4_0_i29);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforestation_4_0_i29);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__deforestation_4_0_i33);
MR_def_label(transform_hlds__deforest__deforestation_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__det_report__disable_det_warnings_3_0,
		transform_hlds__deforest__deforestation_4_0_i34);
MR_def_label(transform_hlds__deforest__deforestation_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_globals_3_0,
		transform_hlds__deforest__deforestation_4_0_i35);
MR_def_label(transform_hlds__deforest__deforestation_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_analysis__determinism_pass_3_0,
		transform_hlds__deforest__deforestation_4_0_i36);
MR_def_label(transform_hlds__deforest__deforestation_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_globals_3_0,
		transform_hlds__deforest__deforestation_4_0_i37);
MR_def_label(transform_hlds__deforest__deforestation_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		transform_hlds__deforest__deforestation_4_0_i38);
MR_def_label(transform_hlds__deforest__deforestation_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.deforest", 23);
	MR_r3 = (MR_Word) MR_string_const("predicate \140transform_hlds.deforest.deforestation\'/4", 51);
	MR_r4 = (MR_Word) MR_string_const("determinism errors after deforestation", 38);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		transform_hlds__deforest__deforestation_4_0_i40);
MR_def_label(transform_hlds__deforest__deforestation_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__deforest__deforestation_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module1)
	MR_init_entry1(transform_hlds__deforest__reset_inferred_proc_determinism_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__reset_inferred_proc_determinism_3_0);
	MR_init_label5(transform_hlds__deforest__reset_inferred_proc_determinism_3_0,2,3,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_inferred_proc_determinism'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__reset_inferred_proc_determinism_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__deforest__reset_inferred_proc_determinism_3_0_i2);
MR_def_label(transform_hlds__deforest__reset_inferred_proc_determinism_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		transform_hlds__deforest__reset_inferred_proc_determinism_3_0_i3);
MR_def_label(transform_hlds__deforest__reset_inferred_proc_determinism_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__deforest__reset_inferred_proc_determinism_3_0_i5);
MR_def_label(transform_hlds__deforest__reset_inferred_proc_determinism_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__deforest__reset_inferred_proc_determinism_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__deforest__reset_inferred_proc_determinism_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		transform_hlds__deforest__reset_inferred_proc_determinism_3_0_i6);
MR_def_label(transform_hlds__deforest__reset_inferred_proc_determinism_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__det_univ_to_type_2_0);
MR_decl_entry(transform_hlds__pd_util__get_branch_vars_proc_6_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module2)
	MR_init_entry1(transform_hlds__deforest__get_branch_vars_proc_univ_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__get_branch_vars_proc_univ_7_0);
	MR_init_label3(transform_hlds__deforest__get_branch_vars_proc_univ_7_0,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_branch_vars_proc_univ'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__get_branch_vars_proc_univ_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		transform_hlds__deforest__get_branch_vars_proc_univ_7_0_i4);
MR_def_label(transform_hlds__deforest__get_branch_vars_proc_univ_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_branch_vars_proc_6_0,
		transform_hlds__deforest__get_branch_vars_proc_univ_7_0_i5);
MR_def_label(transform_hlds__deforest__get_branch_vars_proc_univ_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		transform_hlds__deforest__get_branch_vars_proc_univ_7_0_i6);
MR_def_label(transform_hlds__deforest__get_branch_vars_proc_univ_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_util__get_branch_vars_goal_4_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_proc_arg_info_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(transform_hlds__pd_util__convert_branch_info_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module3)
	MR_init_entry1(transform_hlds__deforest__compute_goal_infos_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__compute_goal_infos_4_0);
	MR_init_label10(transform_hlds__deforest__compute_goal_infos_4_0,60,5,8,7,11,15,17,12,10,4)
	MR_init_label2(transform_hlds__deforest__compute_goal_infos_4_0,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_goal_infos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__compute_goal_infos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__compute_goal_infos_4_0_i60);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tempr1;
	if (!((((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 2))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 5))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(transform_hlds__deforest__compute_goal_infos_4_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i23);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 3)) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r3, 0) == (MR_Integer) 4))))) {
		MR_GOTO_LAB(transform_hlds__deforest__compute_goal_infos_4_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_util__get_branch_vars_goal_4_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i8);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i23);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__compute_goal_infos_4_0_i10);
	}
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_arg_info_2_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i11);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i15);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__compute_goal_infos_4_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__pd_util__convert_branch_info_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i17);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i23);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i23);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.deforest", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.deforest.deforest_get_branch_vars_goal\'/4", 67);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i4);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i23);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__deforest__compute_goal_infos_4_0,
		transform_hlds__deforest__compute_goal_infos_4_0_i24);
MR_def_label(transform_hlds__deforest__compute_goal_infos_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module4)
	MR_init_entry1(transform_hlds__deforest__is_simple_goal_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__is_simple_goal_list_1_0);
	MR_init_label4(transform_hlds__deforest__is_simple_goal_list_1_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_simple_goal_list'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__is_simple_goal_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__deforest__is_simple_goal_list_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__is_simple_goal_list_1_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__deforest__is_simple_goal_1_0,
		transform_hlds__deforest__is_simple_goal_list_1_0_i4);
MR_def_label(transform_hlds__deforest__is_simple_goal_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__is_simple_goal_list_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__deforest__is_simple_goal_list_1_0_i17);
MR_def_label(transform_hlds__deforest__is_simple_goal_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__deforest__is_simple_goal_list_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module5)
	MR_init_entry1(transform_hlds__deforest__is_simple_goal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__is_simple_goal_1_0);
	MR_init_label4(transform_hlds__deforest__is_simple_goal_1_0,4,7,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_simple_goal'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__is_simple_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0,
		transform_hlds__deforest__is_simple_goal_1_0_i4);
MR_def_label(transform_hlds__deforest__is_simple_goal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__deforest__is_simple_goal_1_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__deforest__is_simple_goal_1_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__deforest__is_simple_goal_1_0_i7);
MR_def_label(transform_hlds__deforest__is_simple_goal_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__deforest__is_simple_goal_list_1_0);
MR_def_label(transform_hlds__deforest__is_simple_goal_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__deforest__is_simple_goal_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_pred_info_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_depth_2_0);
MR_decl_entry(libs__globals__lookup_option_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_depth_3_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__goal_util__goal_size_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(transform_hlds__pd_debug__pd_debug_message_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(transform_hlds__inlining__can_inline_proc_6_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(hlds__goal_util__reordering_maintains_termination_old_4_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module6)
	MR_init_entry1(transform_hlds__deforest__can_optimize_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__can_optimize_conj_6_0);
	MR_init_label10(transform_hlds__deforest__can_optimize_conj_6_0,2,3,4,5,6,7,8,9,10,94)
	MR_init_label10(transform_hlds__deforest__can_optimize_conj_6_0,11,22,23,21,27,28,29,17,18,32)
	MR_init_label10(transform_hlds__deforest__can_optimize_conj_6_0,16,39,40,44,46,36,37,48,35,54)
	MR_init_label10(transform_hlds__deforest__can_optimize_conj_6_0,50,63,62,64,67,59,69,58,78,77)
	MR_init_label4(transform_hlds__deforest__can_optimize_conj_6_0,82,74,84,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_optimize_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__can_optimize_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_info_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i2);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_depth_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i3);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i4);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i5);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 381;
	MR_np_call_localret_ent(libs__globals__lookup_option_3_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i6);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i7);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_depth_3_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i8);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 384;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i9);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 155;
	}
	MR_np_call_localret_ent(libs__globals__lookup_option_3_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i10);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(5), 0);
	if (MR_INT_EQ(MR_tempr1,-1)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i11);
	}
	if (((MR_Integer) MR_sv(6) < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i11);
	}
	}
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(17);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i17);
	if (MR_INT_EQ(MR_sv(7),-1)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i18);
	}
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i23);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i21);
	}
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_sv(2), 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i18);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i27);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i28);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i29);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),-1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(7))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i32);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i16);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("goal too large\n", 15);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i94);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i36);
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i39);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i40);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(7) = MR_tfield(2, MR_r2, 3);
	MR_sv(5) = MR_tfield(2, MR_r2, 0);
	MR_sv(11) = MR_tfield(2, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i44);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i37);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_sv(2), 0), 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i37);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(7) = MR_tfield(2, MR_r2, 3);
	MR_sv(5) = MR_tfield(2, MR_r2, 0);
	MR_sv(11) = MR_tfield(2, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i44);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__inlining__can_inline_proc_6_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i46);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i48);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i35);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("non-inlineable calls\n", 21);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i94);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__deforest__is_simple_goal_list_1_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i54);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i50);
	}
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("between goals not simple enough\n", 32);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i94);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i59);
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i62);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__deforest__can_optimize_conj_6_0_i63);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i67);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i64);
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i67);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i59);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_sv(2), 0), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i67);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i69);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i58);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("goal list contains impure goal(s)\n", 34);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i94);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i74);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i74);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__can_optimize_conj_6_0_i77);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__deforest__can_optimize_conj_6_0_i78);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__reordering_maintains_termination_old_4_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i82);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i74);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(hlds__goal_util__reordering_maintains_termination_old_4_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i82);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i84);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__can_optimize_conj_6_0_i72);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("interleaving execution could change termination behaviour\n", 58);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__can_optimize_conj_6_0_i94);
MR_def_label(transform_hlds__deforest__can_optimize_conj_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(parse_tree__set_of_var__intersect_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module7)
	MR_init_entry1(transform_hlds__deforest__get_sub_conj_nonlocals_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__get_sub_conj_nonlocals_9_0);
	MR_init_label8(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,5,7,9,11,13,15,21,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_sub_conj_nonlocals'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__get_sub_conj_nonlocals_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i5);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i7);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i9);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i11);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i13);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i15);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i17);
	}
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__set_of_var__intersect_3_0);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_9_0_i21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(list__takewhile_4_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_rerun_det_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module8)
	MR_init_entry1(transform_hlds__deforest__propagate_conj_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__propagate_conj_constraints_6_0);
	MR_init_label10(transform_hlds__deforest__propagate_conj_constraints_6_0,69,4,3,5,9,12,15,17,18,19)
	MR_init_label9(transform_hlds__deforest__propagate_conj_constraints_6_0,22,23,24,27,26,30,31,7,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_conj_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__propagate_conj_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i3);
	}
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i4);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i5);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i7);
	}
	MR_sv(7) = MR_r1;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 5);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i9);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i12);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__takewhile_4_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i15);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i17);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i18);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i19);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("propagating constraints into call to %s\n", 40);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i22);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__deforest__get_sub_conj_nonlocals_9_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i23);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i24);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i26);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i27);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i69);
	}
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_rerun_det_3_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i30);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i31);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i69);
	}
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__propagate_conj_constraints_6_0_i34);
MR_def_label(transform_hlds__deforest__propagate_conj_constraints_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__deforest__propagate_conj_constraints_6_0_i69);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(assoc_list__keys_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module9)
	MR_init_entry1(transform_hlds__deforest__search_for_deforest_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__search_for_deforest_goal_6_0);
	MR_init_label10(transform_hlds__deforest__search_for_deforest_goal_6_0,48,8,9,12,14,17,21,22,3,4)
	MR_init_label1(transform_hlds__deforest__search_for_deforest_goal_6_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_for_deforest_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__search_for_deforest_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__search_for_deforest_goal_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__search_for_deforest_goal_6_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tfield(0, MR_sv(2), 0);
	MR_r5 = MR_tfield(0, MR_sv(5), 1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__deforest__search_for_deforest_goal_6_0_i8);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__deforest__search_for_deforest_goal_6_0_i9);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__deforest__search_for_deforest_goal_6_0_i12);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__deforest__search_for_deforest_goal_6_0_i3);
	}
	MR_r1 = MR_sv(8);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__deforest__search_for_deforest_goal_6_0_i14);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tempr3 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__search_for_deforest_goal_6_0_i17);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__pd_info, pd_branch_info);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(maybe, maybe);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__deforest__search_for_deforest_goal_6_0_i21);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		transform_hlds__deforest__search_for_deforest_goal_6_0_i22);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__deforest__search_for_deforest_goal_6_0_i48);
	}
MR_def_label(transform_hlds__deforest__search_for_deforest_goal_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_useless_versions_2_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__set_to_bitset_1_0);
MR_decl_entry(parse_tree__set_of_var__is_non_empty_1_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module10)
	MR_init_entry1(transform_hlds__deforest__should_try_deforestation_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__should_try_deforestation_4_0);
	MR_init_label10(transform_hlds__deforest__should_try_deforestation_4_0,2,3,4,5,14,33,7,22,21,23)
	MR_init_label4(transform_hlds__deforest__should_try_deforestation_4_0,24,25,26,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_try_deforestation'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__should_try_deforestation_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_useless_versions_2_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i2);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i3);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i4);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i5);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__should_try_deforestation_4_0_i7);
	}
	MR_tempr2 = MR_tfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__should_try_deforestation_4_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(2, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(2, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i14);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__should_try_deforestation_4_0_i7);
	}
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__should_try_deforestation_4_0_i19);
	MR_sv(3) = MR_tfield(0, MR_sv(4), 2);
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__should_try_deforestation_4_0_i21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__deforest__should_try_deforestation_4_0_i22);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i23);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i23);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__set_to_bitset_1_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i24);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i25);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_non_empty_1_0,
		transform_hlds__deforest__should_try_deforestation_4_0_i26);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__deforest__should_try_deforestation_4_0_i33);
MR_def_label(transform_hlds__deforest__should_try_deforestation_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_cost_delta_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_size_delta_2_0);
MR_decl_entry(fn__transform_hlds__pd_cost__cost_of_heap_incr_0_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module11)
	MR_init_entry1(fn__transform_hlds__deforest__is_improvement_worth_while_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__deforest__is_improvement_worth_while_4_0);
	MR_init_label10(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,2,3,4,5,6,7,11,12,13,14)
	MR_init_label4(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,19,8,9,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_improvement_worth_while'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__deforest__is_improvement_worth_while_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_cost_delta_2_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i2);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_size_delta_2_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i3);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_sv(3));
	MR_sv(3) = ((MR_Integer) MR_r1 - (MR_Integer) MR_sv(4));
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i4);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i5);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 382;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i6);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 70;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i7);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i9);
	}
	if (MR_INT_GT(MR_sv(3),5)) {
		MR_GOTO_LAB(fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i11);
	}
	if (MR_INT_LE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i9);
	}
	MR_GOTO_LAB(fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i14);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_heap_incr_0_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i12);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 1000 * (MR_Integer) MR_r1) * (MR_Integer) MR_sv(3));
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i13);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_sv(4));
	if (((MR_Integer) MR_tempr1 < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i8);
	}
	MR_r1 = MR_sv(5);
	}
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const("Enough improvement: cost(%i) size(%i)\n", 38);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i19);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const("Not enough improvement: cost(%i) size(%i)\n", 42);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		fn__transform_hlds__deforest__is_improvement_worth_while_4_0_i24);
MR_def_label(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module12)
	MR_init_entry1(transform_hlds__deforest__get_sub_conj_nonlocals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__get_sub_conj_nonlocals_7_0);
	MR_init_label8(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,5,9,11,13,15,17,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_sub_conj_nonlocals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__get_sub_conj_nonlocals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i5);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i9);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i11);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i13);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i15);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i17);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,14);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i19);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0,
		transform_hlds__deforest__get_sub_conj_nonlocals_7_0_i20);
MR_def_label(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__set_of_var__intersect_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module13)
	MR_init_entry1(transform_hlds__deforest__reorder_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__reorder_conj_5_0);
	MR_init_label8(transform_hlds__deforest__reorder_conj_5_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reorder_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__reorder_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__reorder_conj_5_0_i2);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__reorder_conj_5_0_i3);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__reorder_conj_5_0_i4);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Reordering conjunction\n", 23);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__reorder_conj_5_0_i5);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr3 = MR_sv(6);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 155;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__reorder_conj_5_0_i6);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__move_goals__ho2_9_0,
		transform_hlds__deforest__reorder_conj_5_0_i7);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__move_goals__ho1_9_0,
		transform_hlds__deforest__reorder_conj_5_0_i8);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__deforest__reorder_conj_5_0_i9);
MR_def_label(transform_hlds__deforest__reorder_conj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_proc_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(varset__vars_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(transform_hlds__inlining__do_inline_call_13_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_proc_info_3_0);
MR_decl_entry(transform_hlds__pd_cost__goal_cost_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_changed_2_0);
MR_decl_entry(parse_tree__set_of_var__list_to_set_2_0);
MR_decl_entry(parse_tree__set_of_var__equal_2_0);
MR_decl_entry(transform_hlds__pd_util__pd_requantify_goal_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arglives_3_0);
MR_decl_entry(check_hlds__modecheck_util__get_live_vars_3_0);
MR_decl_entry(transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_0);
MR_decl_entry(check_hlds__simplify__find_simplifications_3_0);
MR_decl_entry(transform_hlds__pd_util__pd_simplify_goal_5_0);
MR_decl_entry(fn__transform_hlds__pd_cost__cost_of_call_0_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_incr_size_delta_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_changed_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_size_delta_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_cost_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module14)
	MR_init_entry1(transform_hlds__deforest__unfold_call_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__unfold_call_10_0);
	MR_init_label10(transform_hlds__deforest__unfold_call_10_0,2,3,4,5,6,7,9,10,14,16)
	MR_init_label10(transform_hlds__deforest__unfold_call_10_0,13,18,19,20,21,22,23,24,25,26)
	MR_init_label10(transform_hlds__deforest__unfold_call_10_0,27,28,29,102,31,33,34,35,36,37)
	MR_init_label10(transform_hlds__deforest__unfold_call_10_0,38,39,40,43,41,45,46,47,48,49)
	MR_init_label10(transform_hlds__deforest__unfold_call_10_0,50,51,52,54,53,55,56,57,58,59)
	MR_init_label10(transform_hlds__deforest__unfold_call_10_0,60,61,66,69,68,71,65,78,79,80)
	MR_init_label10(transform_hlds__deforest__unfold_call_10_0,81,82,83,84,63,90,91,92,93,94)
	MR_init_label3(transform_hlds__deforest__unfold_call_10_0,95,12,97)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unfold_call'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__unfold_call_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(13) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__unfold_call_10_0_i2);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__unfold_call_10_0_i3);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 383;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__deforest__unfold_call_10_0_i4);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__deforest__unfold_call_10_0_i5);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__deforest__unfold_call_10_0_i6);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(varset__vars_2_0,
		transform_hlds__deforest__unfold_call_10_0_i7);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__deforest__unfold_call_10_0_i9);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__unfold_call_10_0_i10);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i14);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i13);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),-1)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i16);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i13);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i12);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_info_2_0,
		transform_hlds__deforest__unfold_call_10_0_i18);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__deforest__unfold_call_10_0_i19);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__deforest__unfold_call_10_0_i20);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_0,
		transform_hlds__deforest__unfold_call_10_0_i21);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__deforest__unfold_call_10_0_i22);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__deforest__unfold_call_10_0_i23);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__inlining__do_inline_call_13_0,
		transform_hlds__deforest__unfold_call_10_0_i24);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		transform_hlds__deforest__unfold_call_10_0_i25);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__deforest__unfold_call_10_0_i26);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__deforest__unfold_call_10_0_i27);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__deforest__unfold_call_10_0_i28);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__deforest__unfold_call_10_0_i29);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i31);
	}
MR_def_label(transform_hlds__deforest__unfold_call_10_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_pred_info_3_0,
		transform_hlds__deforest__unfold_call_10_0_i33);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		transform_hlds__deforest__unfold_call_10_0_i102);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_proc_info_3_0,
		transform_hlds__deforest__unfold_call_10_0_i34);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		transform_hlds__deforest__unfold_call_10_0_i35);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_cost_delta_2_0,
		transform_hlds__deforest__unfold_call_10_0_i36);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_size_delta_2_0,
		transform_hlds__deforest__unfold_call_10_0_i37);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_changed_2_0,
		transform_hlds__deforest__unfold_call_10_0_i38);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(14), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__deforest__unfold_call_10_0_i39);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		transform_hlds__deforest__unfold_call_10_0_i40);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__equal_2_0,
		transform_hlds__deforest__unfold_call_10_0_i43);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i41);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i46);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_requantify_goal_5_0,
		transform_hlds__deforest__unfold_call_10_0_i45);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(16) = MR_r2;
MR_def_label(transform_hlds__deforest__unfold_call_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("Running unique modes\n", 21);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__unfold_call_10_0_i47);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arglives_3_0,
		transform_hlds__deforest__unfold_call_10_0_i48);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__get_live_vars_3_0,
		transform_hlds__deforest__unfold_call_10_0_i49);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		transform_hlds__deforest__unfold_call_10_0_i50);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		transform_hlds__deforest__unfold_call_10_0_i51);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_0,
		transform_hlds__deforest__unfold_call_10_0_i52);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i54);
	}
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(8) = MR_r3;
	MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i53);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(8) = MR_r3;
MR_def_label(transform_hlds__deforest__unfold_call_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("Running simplify\n", 17);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__unfold_call_10_0_i55);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__find_simplifications_3_0,
		transform_hlds__deforest__unfold_call_10_0_i56);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_simplify_goal_5_0,
		transform_hlds__deforest__unfold_call_10_0_i57);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_cost_delta_2_0,
		transform_hlds__deforest__unfold_call_10_0_i58);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = ((MR_Integer) MR_r1 - (MR_Integer) MR_sv(10));
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__deforest__unfold_call_10_0_i59);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_call_0_0,
		transform_hlds__deforest__unfold_call_10_0_i60);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_sv(13) - (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 382;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__deforest__unfold_call_10_0_i61);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i63);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i66);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i65);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__deforest__is_simple_goal_1_0,
		transform_hlds__deforest__unfold_call_10_0_i69);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i68);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i65);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0,
		transform_hlds__deforest__unfold_call_10_0_i71);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i63);
	}
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(3) = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("inlined: cost(%i) size(%i)\n", 27);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__unfold_call_10_0_i78);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_incr_size_delta_3_0,
		transform_hlds__deforest__unfold_call_10_0_i79);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_changed_3_0,
		transform_hlds__deforest__unfold_call_10_0_i80);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__deforest__unfold_call_10_0_i81);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__deforest__unfold_call_10_0_i82);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(6))) {
		MR_GOTO_LAB(transform_hlds__deforest__unfold_call_10_0_i83);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(18);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_rerun_det_3_0,
		transform_hlds__deforest__unfold_call_10_0_i84);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(transform_hlds__deforest__unfold_call_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("not enough improvement - not inlining: cost(%i) size(%i)\n", 57);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__unfold_call_10_0_i90);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_pred_info_3_0,
		transform_hlds__deforest__unfold_call_10_0_i91);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_proc_info_3_0,
		transform_hlds__deforest__unfold_call_10_0_i92);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_size_delta_3_0,
		transform_hlds__deforest__unfold_call_10_0_i93);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_cost_delta_3_0,
		transform_hlds__deforest__unfold_call_10_0_i94);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_changed_3_0,
		transform_hlds__deforest__unfold_call_10_0_i95);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(transform_hlds__deforest__unfold_call_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("too many variables - not inlining\n", 34);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__unfold_call_10_0_i97);
MR_def_label(transform_hlds__deforest__unfold_call_10_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(13);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module15)
	MR_init_entry1(transform_hlds__deforest__deforest_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_goal_4_0);
	MR_init_label1(transform_hlds__deforest__deforest_goal_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_expr_6_0,
		transform_hlds__deforest__deforest_goal_4_0_i2);
MR_def_label(transform_hlds__deforest__deforest_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_instmap_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_instmap_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module16)
	MR_init_entry1(transform_hlds__deforest__deforest_goal_expr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_goal_expr_6_0);
	MR_init_label10(transform_hlds__deforest__deforest_goal_expr_6_0,7,8,9,10,11,12,13,15,16,17)
	MR_init_label10(transform_hlds__deforest__deforest_goal_expr_6_0,18,19,20,22,23,24,4,27,26,31)
	MR_init_label10(transform_hlds__deforest__deforest_goal_expr_6_0,32,33,34,35,36,37,30,40,39,43)
	MR_init_label8(transform_hlds__deforest__deforest_goal_expr_6_0,41,48,45,50,44,54,53,167)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_goal_expr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_goal_expr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i167);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i167);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i7);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i8);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i9);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i10);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i11);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i12);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 380;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i13);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i15);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(7);
	MR_r2 = (MR_Integer) 340;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i19);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__deforest__compute_goal_infos_4_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i16);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i17);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_conj_6_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i18);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 340;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i19);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i20);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i24);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__propagate_conj_constraints_6_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i23);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i24);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i26);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_disj_4_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i27);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i167);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i30);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i31);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_4_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i32);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i33);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_4_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i34);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i35);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_4_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i36);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i37);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i39);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_4_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i40);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i41);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_tfield(2, MR_tfield(0, MR_tempr1, 0), 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(2, MR_tfield(0, MR_tempr1, 0), 2);
	MR_r4 = MR_tfield(2, MR_tfield(0, MR_tempr1, 0), 5);
	MR_r5 = MR_tfield(2, MR_tfield(0, MR_tempr1, 0), 3);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_call_9_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i43);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i44);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r8 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i45);
	}
	MR_r9 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i48);
	}
	MR_tempr2 = MR_r8;
	MR_decr_sp(8);
	MR_proceed();
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r8;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_4_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i50);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i53);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_cases_5_0,
		transform_hlds__deforest__deforest_goal_expr_6_0_i54);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_goal_expr_6_0_i167);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.deforest", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.deforest.deforest_goal_expr\'/6", 56);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__deforest__deforest_goal_expr_6_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module17)
	MR_init_entry1(transform_hlds__deforest__deforest_disj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_disj_4_0);
	MR_init_label5(transform_hlds__deforest__deforest_disj_4_0,20,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_disj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_disj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_disj_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__deforest__deforest_disj_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__deforest_disj_4_0_i4);
MR_def_label(transform_hlds__deforest__deforest_disj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_expr_6_0,
		transform_hlds__deforest__deforest_disj_4_0_i5);
MR_def_label(transform_hlds__deforest__deforest_disj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_disj_4_0_i7);
MR_def_label(transform_hlds__deforest__deforest_disj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__deforest__deforest_disj_4_0,
		transform_hlds__deforest__deforest_disj_4_0_i8);
MR_def_label(transform_hlds__deforest__deforest_disj_4_0,8)
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

MR_decl_entry(transform_hlds__pd_info__pd_info_bind_var_to_functors_5_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module18)
	MR_init_entry1(transform_hlds__deforest__deforest_cases_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_cases_5_0);
	MR_init_label6(transform_hlds__deforest__deforest_cases_5_0,22,4,5,6,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_cases_5_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__deforest__deforest_cases_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__deforest_cases_5_0_i4);
MR_def_label(transform_hlds__deforest__deforest_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_bind_var_to_functors_5_0,
		transform_hlds__deforest__deforest_cases_5_0_i5);
MR_def_label(transform_hlds__deforest__deforest_cases_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_expr_6_0,
		transform_hlds__deforest__deforest_cases_5_0_i6);
MR_def_label(transform_hlds__deforest__deforest_cases_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__deforest_cases_5_0_i9);
MR_def_label(transform_hlds__deforest__deforest_cases_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__deforest__deforest_cases_5_0,
		transform_hlds__deforest__deforest_cases_5_0_i10);
MR_def_label(transform_hlds__deforest__deforest_cases_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__deforest_module19)
	MR_init_entry1(transform_hlds__deforest__partially_evaluate_conj_goals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__partially_evaluate_conj_goals_5_0);
	MR_init_label8(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,29,4,3,5,7,11,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partially_evaluate_conj_goals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__partially_evaluate_conj_goals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i4);
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_expr_6_0,
		transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i5);
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i7);
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i8);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i8);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i11);
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i12);
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i29);
	}
MR_def_label(transform_hlds__deforest__partially_evaluate_conj_goals_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__deforest__partially_evaluate_conj_goals_5_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module20)
	MR_init_entry1(transform_hlds__deforest__deforest_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_conj_6_0);
	MR_init_label10(transform_hlds__deforest__deforest_conj_6_0,46,4,3,8,10,13,12,5,6,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_conj_6_0_i3);
	}
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__deforest__deforest_conj_6_0_i4);
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_tempr3;
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_conj_6_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__search_for_deforest_goal_6_0,
		transform_hlds__deforest__deforest_conj_6_0_i8);
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_conj_6_0_i5);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__handle_deforestation_9_0,
		transform_hlds__deforest__deforest_conj_6_0_i10);
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_conj_6_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__deforest_conj_6_0_i13);
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__deforest__deforest_conj_6_0_i46);
	}
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__deforest__deforest_conj_6_0_i46);
	}
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r5 = MR_sv(5);
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__deforest_conj_6_0_i17);
MR_def_label(transform_hlds__deforest__deforest_conj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__deforest__deforest_conj_6_0_i46);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_created_versions_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_pred_proc_id_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_parents_2_0);
MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(hlds__goal_util__goal_is_branched_1_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_parents_3_0);
MR_decl_entry(hlds__goal_util__goals_size_2_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module21)
	MR_init_entry1(transform_hlds__deforest__handle_deforestation_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__handle_deforestation_9_0);
	MR_init_label10(transform_hlds__deforest__handle_deforestation_9_0,2,3,4,5,6,7,10,11,12,14)
	MR_init_label10(transform_hlds__deforest__handle_deforestation_9_0,15,16,17,18,19,21,25,26,31,33)
	MR_init_label10(transform_hlds__deforest__handle_deforestation_9_0,35,22,38,44,47,49,52,53,54,55)
	MR_init_label10(transform_hlds__deforest__handle_deforestation_9_0,37,58,60,62,63,66,67,68,69,57)
	MR_init_label10(transform_hlds__deforest__handle_deforestation_9_0,70,20,74,75,76,79,80,81,82,83)
	MR_init_label10(transform_hlds__deforest__handle_deforestation_9_0,85,78,89,90,95,96,97,98,77,101)
	MR_init_label1(transform_hlds__deforest__handle_deforestation_9_0,102)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_deforestation'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__handle_deforestation_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(19) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i2);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i3);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i4);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i5);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_created_versions_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i6);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_depth_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i7);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("checking for deforestation at depth %i\n", 39);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__handle_deforestation_9_0_i10);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(transform_hlds__deforest__reorder_conj_5_0,
		transform_hlds__deforest__handle_deforestation_9_0_i11);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(19);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__get_sub_conj_nonlocals_7_0,
		transform_hlds__deforest__handle_deforestation_9_0_i12);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,15);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__handle_deforestation_9_0_i14);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_proc_id_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i15);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_parents_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i16);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_cost_delta_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i17);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_size_delta_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i18);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__should_try_deforestation_4_0,
		transform_hlds__deforest__handle_deforestation_9_0_i19);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i21);
	}
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_sv(15) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r5;
	MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i20);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(10), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i22);
	}
	MR_tempr2 = MR_tfield(0, MR_sv(12), 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i22);
	}
	MR_sv(14) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(20) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i25);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i26);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("deforesting calls to %s and %s\n", 31);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__handle_deforestation_9_0_i31);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(12);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0,
		transform_hlds__deforest__handle_deforestation_9_0_i33);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i35);
	}
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_sv(15) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r5;
	MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i20);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_r5;
	MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i20);
	}
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(10), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_is_branched_1_0,
		transform_hlds__deforest__handle_deforestation_9_0_i38);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(12), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i37);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tfield(2, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_sv(16);
	MR_sv(16) = MR_tempr1;
	MR_sv(17) = MR_r1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		transform_hlds__deforest__handle_deforestation_9_0_i44);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i37);
	}
	MR_r3 = MR_sv(16);
	MR_r1 = MR_sv(17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i47);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i37);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i49);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Pushing call to %s into goal\n", 29);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__handle_deforestation_9_0_i52);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i53);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_parents_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i54);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__push_goal_into_goal_8_0,
		transform_hlds__deforest__handle_deforestation_9_0_i55);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_r5;
	MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i20);
	}
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_tfield(0, MR_sv(12), 0);
	MR_r1 = MR_tfield(0, MR_sv(10), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_is_branched_1_0,
		transform_hlds__deforest__handle_deforestation_9_0_i58);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i57);
	}
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__goal_util__goal_is_branched_1_0,
		transform_hlds__deforest__handle_deforestation_9_0_i60);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i57);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Pushing goal into goal\n", 23);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__handle_deforestation_9_0_i62);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(20);
	MR_np_call_localret_ent(transform_hlds__deforest__push_goal_into_goal_8_0,
		transform_hlds__deforest__handle_deforestation_9_0_i63);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(11);
	MR_sv(16) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__goal_util__goals_size_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i66);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i67);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(15), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i68);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(10)) - (MR_Integer) MR_sv(14));
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_incr_size_delta_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i69);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i20);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("not optimizing\n", 15);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__handle_deforestation_9_0_i70);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
	MR_sv(15) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(20);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__deforest__is_improvement_worth_while_4_0,
		transform_hlds__deforest__handle_deforestation_9_0_i74);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_depth_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i75);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i76);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_cost_delta_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i79);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_size_delta_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i80);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_created_versions_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i81);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i82);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i83);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(22);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,16);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__handle_deforestation_9_0_i85);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(5) = MR_sv(19);
	MR_GOTO_LAB(transform_hlds__deforest__handle_deforestation_9_0_i77);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(21);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__deforest__handle_deforestation_9_0_i89);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__deforest__compute_goal_infos_4_0,
		transform_hlds__deforest__handle_deforestation_9_0_i90);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(19);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__deforest__handle_deforestation_9_0_i95);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i96);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_changed_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i97);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_rerun_det_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i98);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("finished deforestation at depth %i\n", 35);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__handle_deforestation_9_0_i101);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_parents_3_0,
		transform_hlds__deforest__handle_deforestation_9_0_i102);
MR_def_label(transform_hlds__deforest__handle_deforestation_9_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__union_3_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_apply_instmap_delta_4_0);
MR_decl_entry(hlds__instmap__instmap_delta_restrict_3_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_detism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(fn__parse_tree__prog_data__worst_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);
MR_decl_entry(fn__check_hlds__simplify__simplifications_to_list_1_0);
MR_decl_entry(fn__check_hlds__simplify__list_to_simplifications_1_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module22)
	MR_init_entry1(transform_hlds__deforest__push_goal_into_goal_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__push_goal_into_goal_8_0);
	MR_init_label10(transform_hlds__deforest__push_goal_into_goal_8_0,2,5,4,8,9,10,11,12,13,7)
	MR_init_label10(transform_hlds__deforest__push_goal_into_goal_8_0,16,17,15,3,20,22,23,24,25,26)
	MR_init_label10(transform_hlds__deforest__push_goal_into_goal_8_0,27,28,29,30,31,32,34,35,36,37)
	MR_init_label5(transform_hlds__deforest__push_goal_into_goal_8_0,39,40,41,42,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_goal_into_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__push_goal_into_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i2);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__deforest__push_goal_into_goal_8_0_i4);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tfield(3, MR_tempr2, 1);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__append_goal_to_disjuncts_9_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i5);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__deforest__push_goal_into_goal_8_0_i3);
	}
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(transform_hlds__deforest__push_goal_into_goal_8_0_i7);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_update_goal_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i8);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(8), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i9);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i10);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__append_goal_9_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i11);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i12);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 2;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__append_goal_9_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i13);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__deforest__push_goal_into_goal_8_0_i3);
	}
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(transform_hlds__deforest__push_goal_into_goal_8_0_i15);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i16);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__append_goal_to_cases_10_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i17);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__deforest__push_goal_into_goal_8_0_i3);
	}
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.deforest", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", 57);
	MR_r3 = (MR_Word) MR_string_const("unexpected goal type", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i3);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i20);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i22);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_sv(3), 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i23);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i24);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_restrict_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i25);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i26);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i27);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i28);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i29);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i30);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i31);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i32);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i34);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i35);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_simplifications_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i36);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__simplify__simplifications_to_list_1_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i37);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 11;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__simplify__list_to_simplifications_1_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i39);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_simplify_goal_5_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i40);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i41);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_4_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i42);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__push_goal_into_goal_8_0_i43);
MR_def_label(transform_hlds__deforest__push_goal_into_goal_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module23)
	MR_init_entry1(transform_hlds__deforest__append_goal_to_disjuncts_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__append_goal_to_disjuncts_9_0);
	MR_init_label5(transform_hlds__deforest__append_goal_to_disjuncts_9_0,19,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_goal_to_disjuncts'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__append_goal_to_disjuncts_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__append_goal_to_disjuncts_9_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__deforest__append_goal_to_disjuncts_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(8) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__append_goal_to_disjuncts_9_0_i4);
MR_def_label(transform_hlds__deforest__append_goal_to_disjuncts_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__append_goal_9_0,
		transform_hlds__deforest__append_goal_to_disjuncts_9_0_i5);
MR_def_label(transform_hlds__deforest__append_goal_to_disjuncts_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__append_goal_to_disjuncts_9_0_i6);
MR_def_label(transform_hlds__deforest__append_goal_to_disjuncts_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__deforest__append_goal_to_disjuncts_9_0,
		transform_hlds__deforest__append_goal_to_disjuncts_9_0_i7);
MR_def_label(transform_hlds__deforest__append_goal_to_disjuncts_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module24)
	MR_init_entry1(transform_hlds__deforest__append_goal_to_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__append_goal_to_cases_10_0);
	MR_init_label6(transform_hlds__deforest__append_goal_to_cases_10_0,21,4,5,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_goal_to_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__append_goal_to_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__append_goal_to_cases_10_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(transform_hlds__deforest__append_goal_to_cases_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r8;
	MR_sv(11) = MR_tempr2;
	MR_tempr3 = MR_r7;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__append_goal_to_cases_10_0_i4);
MR_def_label(transform_hlds__deforest__append_goal_to_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_bind_var_to_functors_5_0,
		transform_hlds__deforest__append_goal_to_cases_10_0_i5);
MR_def_label(transform_hlds__deforest__append_goal_to_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__append_goal_9_0,
		transform_hlds__deforest__append_goal_to_cases_10_0_i6);
MR_def_label(transform_hlds__deforest__append_goal_to_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_tempr3 = MR_sv(11);
	MR_sv(11) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__append_goal_to_cases_10_0_i8);
MR_def_label(transform_hlds__deforest__append_goal_to_cases_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__deforest__append_goal_to_cases_10_0,
		transform_hlds__deforest__append_goal_to_cases_10_0_i9);
MR_def_label(transform_hlds__deforest__append_goal_to_cases_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module25)
	MR_init_entry1(transform_hlds__deforest__append_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__append_goal_9_0);
	MR_init_label10(transform_hlds__deforest__append_goal_9_0,3,5,8,9,11,2,13,14,18,19)
	MR_init_label6(transform_hlds__deforest__append_goal_9_0,20,21,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__append_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__deforest__append_goal_9_0_i3);
MR_def_label(transform_hlds__deforest__append_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__append_goal_9_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__append_goal_9_0_i5);
MR_def_label(transform_hlds__deforest__append_goal_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__pd_info, pd_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,17);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__deforest__append_goal_9_0_i8);
MR_def_label(transform_hlds__deforest__append_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_expr_6_0,
		transform_hlds__deforest__append_goal_9_0_i9);
MR_def_label(transform_hlds__deforest__append_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_instmap_3_0,
		transform_hlds__deforest__append_goal_9_0_i11);
MR_def_label(transform_hlds__deforest__append_goal_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__deforest__append_goal_9_0_i13);
MR_def_label(transform_hlds__deforest__append_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__deforest__append_goal_9_0_i13);
MR_def_label(transform_hlds__deforest__append_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__deforest__append_goal_9_0_i14);
MR_def_label(transform_hlds__deforest__append_goal_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__deforest__append_goal_9_0_i18);
MR_def_label(transform_hlds__deforest__append_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__deforest__append_goal_9_0_i19);
MR_def_label(transform_hlds__deforest__append_goal_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		transform_hlds__deforest__append_goal_9_0_i20);
MR_def_label(transform_hlds__deforest__append_goal_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__deforest__append_goal_9_0_i21);
MR_def_label(transform_hlds__deforest__append_goal_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_restrict_3_0,
		transform_hlds__deforest__append_goal_9_0_i22);
MR_def_label(transform_hlds__deforest__append_goal_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__deforest__append_goal_9_0_i23);
MR_def_label(transform_hlds__deforest__append_goal_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__deforest__append_goal_9_0_i24);
MR_def_label(transform_hlds__deforest__append_goal_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		transform_hlds__deforest__append_goal_9_0_i25);
MR_def_label(transform_hlds__deforest__append_goal_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_local_term_info_2_0);
MR_decl_entry(set__member_2_1);
MR_decl_entry(list__det_index1_3_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_to_functors_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(transform_hlds__pd_debug__pd_debug_message_context_6_0);
MR_decl_entry(transform_hlds__pd_term__local_check_5_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_local_term_info_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module26)
	MR_init_entry1(transform_hlds__deforest__deforest_call_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_call_9_0);
	MR_init_label10(transform_hlds__deforest__deforest_call_9_0,2,3,4,5,7,8,9,10,11,12)
	MR_init_label10(transform_hlds__deforest__deforest_call_9_0,13,14,21,23,24,25,27,29,31,33)
	MR_init_label10(transform_hlds__deforest__deforest_call_9_0,34,35,37,36,17,39,44,47,49,50)
	MR_init_label7(transform_hlds__deforest__deforest_call_9_0,51,53,54,55,46,16,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_call'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_call_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_arg_info_2_0,
		transform_hlds__deforest__deforest_call_9_0_i2);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__deforest_call_9_0_i3);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__deforest__deforest_call_9_0_i4);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		transform_hlds__deforest__deforest_call_9_0_i5);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__deforest__deforest_call_9_0_i7);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__deforest__deforest_call_9_0_i8);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_local_term_info_2_0,
		transform_hlds__deforest__deforest_call_9_0_i9);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_info_2_0,
		transform_hlds__deforest__deforest_call_9_0_i10);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__deforest_call_9_0_i11);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = (MR_Integer) 384;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__deforest__deforest_call_9_0_i12);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__deforest__deforest_call_9_0_i13);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 70;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__deforest__deforest_call_9_0_i14);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(19) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(20));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__deforest_call_9_0_i17);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__deforest__deforest_call_9_0_i21);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_call_9_0_i17);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(set__member_2_1,
		transform_hlds__deforest__deforest_call_9_0_i23);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_index1_3_0,
		transform_hlds__deforest__deforest_call_9_0_i24);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__deforest__deforest_call_9_0_i25);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(16), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(16), 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_to_functors_3_0,
		transform_hlds__deforest__deforest_call_9_0_i27);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__deforest__list__list_1_1,
		transform_hlds__deforest__deforest_call_9_0_i29);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__inlining__can_inline_proc_6_0,
		transform_hlds__deforest__deforest_call_9_0_i31);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__deforest__deforest_call_9_0_i33);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__deforest__deforest_call_9_0_i34);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		transform_hlds__deforest__deforest_call_9_0_i35);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),-1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_call_9_0_i37);
	}
	MR_r2 = MR_sv(9);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__deforest__deforest_call_9_0_i36);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(11))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_sv(9);
	MR_r1 = MR_sv(13);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(20));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(18);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(19);
	MR_GOTO_LAB(transform_hlds__deforest__deforest_call_9_0_i39);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(18);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(19);
	MR_GOTO_LAB(transform_hlds__deforest__deforest_call_9_0_i16);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(13) = MR_r1;
	MR_r3 = (MR_Word) MR_string_const("Found extra information for call to %s/%i\n", 42);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_context_6_0,
		transform_hlds__deforest__deforest_call_9_0_i44);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__pd_term__local_check_5_0,
		transform_hlds__deforest__deforest_call_9_0_i47);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_call_9_0_i46);
	}
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_string_const("Local termination check succeeded\n", 34);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__deforest_call_9_0_i49);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_local_term_info_3_0,
		transform_hlds__deforest__deforest_call_9_0_i50);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__deforest__unfold_call_10_0,
		transform_hlds__deforest__deforest_call_9_0_i51);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_call_9_0_i53);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_local_term_info_3_0,
		transform_hlds__deforest__deforest_call_9_0_i55);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_4_0,
		transform_hlds__deforest__deforest_call_9_0_i54);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_local_term_info_3_0,
		transform_hlds__deforest__deforest_call_9_0_i55);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(transform_hlds__deforest__deforest_call_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_string_const("Local termination check failed\n", 31);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_5_0,
		transform_hlds__deforest__deforest_call_9_0_i62);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_string_const("No extra information for call to %s/%i\n", 39);
	}
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_message_context_6_0,
		transform_hlds__deforest__deforest_call_9_0_i62);
MR_def_label(transform_hlds__deforest__deforest_call_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_init_unfold_info_5_0);
MR_decl_entry(transform_hlds__pd_util__propagate_constraints_4_0);
MR_decl_entry(transform_hlds__pd_debug__pd_debug_output_goal_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_module_info_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_rerun_det_2_0);
MR_decl_entry(check_hlds__det_analysis__det_infer_proc_8_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_set_proc_arg_info_3_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_unset_unfold_info_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module27)
	MR_init_entry1(transform_hlds__deforest__deforest_proc_deltas_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_proc_deltas_5_0);
	MR_init_label10(transform_hlds__deforest__deforest_proc_deltas_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__deforest__deforest_proc_deltas_5_0,12,14,15,16,19,20,21,18,23,24)
	MR_init_label10(transform_hlds__deforest__deforest_proc_deltas_5_0,25,26,27,28,29,30,31,32,33,34)
	MR_init_label10(transform_hlds__deforest__deforest_proc_deltas_5_0,36,37,35,38,39,40,17,42,43,44)
	MR_init_label2(transform_hlds__deforest__deforest_proc_deltas_5_0,45,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_proc_deltas'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_proc_deltas_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i2);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Deforesting ", 14);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i3);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i4);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_init_unfold_info_5_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i5);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i6);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i7);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_simplifications_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i8);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_simplify_goal_5_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i9);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__pd_util__propagate_constraints_4_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i10);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("after constraints\n", 18);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_output_goal_5_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i11);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_goal_expr_6_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i12);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i14);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i15);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_changed_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i16);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_proc_deltas_5_0_i18);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i19);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i20);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i21);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i17);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i23);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i24);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i25);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i26);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i27);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i28);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i29);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i30);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_pred_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i31);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i32);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i33);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_rerun_det_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i34);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__deforest_proc_deltas_5_0_i36);
	}
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__deforest__deforest_proc_deltas_5_0_i35);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_proc_8_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i37);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_arg_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i38);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__get_branch_vars_proc_6_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i39);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_proc_arg_info_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i40);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_set_module_info_3_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i17);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i42);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Finished deforesting ", 23);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i43);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_cost_delta_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i44);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_size_delta_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i45);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_unset_unfold_info_2_0,
		transform_hlds__deforest__deforest_proc_deltas_5_0_i46);
MR_def_label(transform_hlds__deforest__deforest_proc_deltas_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module28)
	MR_init_entry1(transform_hlds__deforest__deforest_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__deforest_proc_3_0);
	MR_init_label1(transform_hlds__deforest__deforest_proc_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deforest_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__deforest_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__deforest__deforest_proc_deltas_5_0,
		transform_hlds__deforest__deforest_proc_3_0_i2);
MR_def_label(transform_hlds__deforest__deforest_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module29)
	MR_init_entry1(__Unify___transform_hlds__deforest__annotated_conj_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__deforest__annotated_conj_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__deforest__annotated_conj_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module30)
	MR_init_entry1(__Compare___transform_hlds__deforest__annotated_conj_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__deforest__annotated_conj_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__deforest__annotated_conj_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module31)
	MR_init_entry1(__Unify___transform_hlds__deforest__can_move_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__deforest__can_move_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__deforest__can_move_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module32)
	MR_init_entry1(__Compare___transform_hlds__deforest__can_move_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__deforest__can_move_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__deforest__can_move_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Unify___transform_hlds__pd_info__pd_branch_info_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module33)
	MR_init_entry1(__Unify___transform_hlds__deforest__deforest_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__deforest__deforest_info_0_0);
	MR_init_label7(__Unify___transform_hlds__deforest__deforest_info_0_0,4,7,9,11,13,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__deforest__deforest_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__deforest__deforest_info_0_0_i17);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___transform_hlds__deforest__deforest_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__deforest__deforest_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__deforest__deforest_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__pd_info__pd_branch_info_1_0,
		__Unify___transform_hlds__deforest__deforest_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__deforest__deforest_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__deforest__deforest_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__deforest__deforest_info_0_0_i9);
MR_def_label(__Unify___transform_hlds__deforest__deforest_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__deforest__deforest_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___transform_hlds__deforest__deforest_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__deforest__deforest_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__deforest__deforest_info_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___transform_hlds__pd_info__pd_branch_info_1_0,
		__Unify___transform_hlds__deforest__deforest_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__deforest__deforest_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__deforest__deforest_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___transform_hlds__deforest__deforest_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__deforest__deforest_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Compare___transform_hlds__pd_info__pd_branch_info_1_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module34)
	MR_init_entry1(__Compare___transform_hlds__deforest__deforest_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__deforest__deforest_info_0_0);
	MR_init_label8(__Compare___transform_hlds__deforest__deforest_info_0_0,3,2,5,10,14,18,23,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__deforest__deforest_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__deforest__deforest_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__deforest__deforest_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___transform_hlds__deforest__deforest_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__deforest__deforest_info_0_0_i73);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___transform_hlds__pd_info__pd_branch_info_1_0,
		__Compare___transform_hlds__deforest__deforest_info_0_0_i10);
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__deforest__deforest_info_0_0_i73);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__deforest__deforest_info_0_0_i14);
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__deforest__deforest_info_0_0_i73);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___transform_hlds__deforest__deforest_info_0_0_i18);
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__deforest__deforest_info_0_0_i73);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___transform_hlds__pd_info__pd_branch_info_1_0,
		__Compare___transform_hlds__deforest__deforest_info_0_0_i23);
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__deforest__deforest_info_0_0_i73);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___transform_hlds__deforest__deforest_info_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module35)
	MR_init_entry1(__Unify___transform_hlds__deforest__list__list_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__deforest__list__list_1_1);
	MR_init_label1(__Unify___transform_hlds__deforest__list__list_1_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__deforest__list__list_1_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__deforest__list__list_1_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___transform_hlds__deforest__list__list_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module36)
	MR_init_entry1(transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__deforestation__145__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module37)
	MR_init_entry1(transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__propagate_conj_constraints__492__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_has_feature_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module38)
	MR_init_entry1(transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__potential_deforestation__631__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(set__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module39)
	MR_init_entry1(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0);
	MR_init_label1(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0_i2);
MR_def_label(transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__set_of_var__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_util__pd_can_reorder_goals_4_0);

MR_BEGIN_MODULE(transform_hlds__deforest_module40)
	MR_init_entry1(transform_hlds__deforest__move_goals__ho1_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__move_goals__ho1_9_0);
	MR_init_label6(transform_hlds__deforest__move_goals__ho1_9_0,30,3,11,14,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'move_goals__ho1'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__move_goals__ho1_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__deforest__move_goals__ho1_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho1_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__deforest__move_goals__ho1_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__move_goals__ho1_9_0_i9);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__deforest__move_goals__ho1_9_0_i11);
MR_def_label(transform_hlds__deforest__move_goals__ho1_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_can_reorder_goals_4_0,
		transform_hlds__deforest__move_goals__ho1_9_0_i14);
MR_def_label(transform_hlds__deforest__move_goals__ho1_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho1_9_0_i4);
MR_def_label(transform_hlds__deforest__move_goals__ho1_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r6;
	MR_r3 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho1_9_0_i30);
	}
MR_def_label(transform_hlds__deforest__move_goals__ho1_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho1_9_0_i30);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module41)
	MR_init_entry1(transform_hlds__deforest__move_goals__ho2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__deforest__move_goals__ho2_9_0);
	MR_init_label6(transform_hlds__deforest__move_goals__ho2_9_0,30,3,11,14,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'move_goals__ho2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__deforest__move_goals__ho2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__deforest__move_goals__ho2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho2_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__deforest__move_goals__ho2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__deforest__move_goals__ho2_9_0_i9);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__deforest__move_goals__ho2_9_0_i11);
MR_def_label(transform_hlds__deforest__move_goals__ho2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__pd_util__pd_can_reorder_goals_4_0,
		transform_hlds__deforest__move_goals__ho2_9_0_i14);
MR_def_label(transform_hlds__deforest__move_goals__ho2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho2_9_0_i4);
MR_def_label(transform_hlds__deforest__move_goals__ho2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r6;
	MR_r3 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho2_9_0_i30);
	}
MR_def_label(transform_hlds__deforest__move_goals__ho2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__deforest__move_goals__ho2_9_0_i30);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module42)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0);
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0,13,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__call_call__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__deforest__can_optimize_conj_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__deforest_module43)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0);
	MR_init_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__check_improvement__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,5)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0_i14);
	}
	MR_r1 = ((MR_Integer) MR_r3 > (MR_Integer) 0);
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = ((MR_Integer) MR_r3 * (MR_Integer) 100);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_102_111_114_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 >= (MR_Integer) 5);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__deforest_maybe_bunch_0(void)
{
	transform_hlds__deforest_module0();
	transform_hlds__deforest_module1();
	transform_hlds__deforest_module2();
	transform_hlds__deforest_module3();
	transform_hlds__deforest_module4();
	transform_hlds__deforest_module5();
	transform_hlds__deforest_module6();
	transform_hlds__deforest_module7();
	transform_hlds__deforest_module8();
	transform_hlds__deforest_module9();
	transform_hlds__deforest_module10();
	transform_hlds__deforest_module11();
	transform_hlds__deforest_module12();
	transform_hlds__deforest_module13();
	transform_hlds__deforest_module14();
	transform_hlds__deforest_module15();
	transform_hlds__deforest_module16();
	transform_hlds__deforest_module17();
	transform_hlds__deforest_module18();
	transform_hlds__deforest_module19();
	transform_hlds__deforest_module20();
	transform_hlds__deforest_module21();
	transform_hlds__deforest_module22();
	transform_hlds__deforest_module23();
	transform_hlds__deforest_module24();
	transform_hlds__deforest_module25();
	transform_hlds__deforest_module26();
	transform_hlds__deforest_module27();
	transform_hlds__deforest_module28();
	transform_hlds__deforest_module29();
	transform_hlds__deforest_module30();
	transform_hlds__deforest_module31();
	transform_hlds__deforest_module32();
	transform_hlds__deforest_module33();
	transform_hlds__deforest_module34();
	transform_hlds__deforest_module35();
	transform_hlds__deforest_module36();
	transform_hlds__deforest_module37();
	transform_hlds__deforest_module38();
	transform_hlds__deforest_module39();
}

static void mercury__transform_hlds__deforest_maybe_bunch_1(void)
{
	transform_hlds__deforest_module40();
	transform_hlds__deforest_module41();
	transform_hlds__deforest_module42();
	transform_hlds__deforest_module43();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__deforest__init(void);
void mercury__transform_hlds__deforest__init_type_tables(void);
void mercury__transform_hlds__deforest__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__deforest__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__deforest__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__deforest__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__deforest__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__deforest_maybe_bunch_0();
	mercury__transform_hlds__deforest_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__deforest__type_ctor_info_annotated_conj_0,
		transform_hlds__deforest__annotated_conj_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__deforest__type_ctor_info_can_move_0,
		transform_hlds__deforest__can_move_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__deforest__type_ctor_info_deforest_info_0,
		transform_hlds__deforest__deforest_info_0_0);
	mercury__transform_hlds__deforest__init_debugger();
}

void mercury__transform_hlds__deforest__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__deforest__type_ctor_info_annotated_conj_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__deforest__type_ctor_info_can_move_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__deforest__type_ctor_info_deforest_info_0);
	}
}


void mercury__transform_hlds__deforest__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__deforest__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__deforest);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__deforest__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__deforest__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
