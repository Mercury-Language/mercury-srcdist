/*
** Automatically generated from `mode_ordering.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__mode_ordering__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.mode_ordering.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.mode_ordering.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.mode_ordering.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.mode_ordering.c"
#line 40 "check_hlds.mode_ordering.c"
#include "check_hlds.mode_ordering.mh"

#line 43 "check_hlds.mode_ordering.c"
#line 44 "check_hlds.mode_ordering.c"
#ifndef CHECK_HLDS__MODE_ORDERING_DECL_GUARD
#define CHECK_HLDS__MODE_ORDERING_DECL_GUARD

#line 48 "check_hlds.mode_ordering.c"
#line 49 "check_hlds.mode_ordering.c"

#endif
#line 52 "check_hlds.mode_ordering.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0,
	mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0,
	mercury_data_check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0;
MR_decl_label3(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0, 1,2,3)
MR_decl_label4(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0, 1,3,2,5)
MR_decl_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0, 4,2,7,8)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0, 2,3,4,7,10,9,6,14)
MR_decl_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0, 15)
MR_decl_label6(check_hlds__mode_ordering__check_proc_7_0, 2,3,4,5,6,7)
MR_decl_label8(check_hlds__mode_ordering__combine_mode_vars_sets_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label7(check_hlds__mode_ordering__combine_mode_vars_sets_3_0, 10,11,12,13,14,15,16)
MR_decl_label1(check_hlds__mode_ordering__enter_lambda_goal_3_0, 2)
MR_decl_label8(check_hlds__mode_ordering__find_matching_proc_7_0, 2,3,4,5,6,7,10,9)
MR_decl_label2(check_hlds__mode_ordering__find_matching_proc_7_0, 13,12)
MR_decl_label8(check_hlds__mode_ordering__find_matching_proc_2_8_0, 63,3,4,5,12,15,18,19)
MR_decl_label8(check_hlds__mode_ordering__find_matching_proc_2_8_0, 22,23,14,25,26,29,30,33)
MR_decl_label5(check_hlds__mode_ordering__find_matching_proc_2_8_0, 13,10,36,7,1)
MR_decl_label7(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0, 2,3,4,5,6,7,8)
MR_decl_label1(check_hlds__mode_ordering__leave_lambda_goal_2_0, 2)
MR_decl_label8(check_hlds__mode_ordering__mode_order_conj_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(check_hlds__mode_ordering__mode_order_conj_2_0, 11,10,14)
MR_decl_label8(check_hlds__mode_ordering__mode_order_disj_3_0, 20,4,5,6,7,8,9,10)
MR_decl_label1(check_hlds__mode_ordering__mode_order_disj_3_0, 11)
MR_decl_label8(check_hlds__mode_ordering__mode_order_disj_2_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label7(check_hlds__mode_ordering__mode_order_disj_2_3_0, 10,11,12,13,14,15,16)
MR_decl_label1(check_hlds__mode_ordering__mode_order_goal_4_0, 2)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 4,5,28,30,31,27,33,35)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 36,32,37,38,41,19,20,21)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 22,23,24,25,26,8,10,12)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 13,9,15,16,17,42,43,45)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 46,47,48,49,50,51,52,53)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 55,56,58,59,60,62,65,66)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 67,68,69,70,71,72,73,74)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 75,64,76,77,78,79,81,82)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 84,85,87,88,90,91,92,93)
MR_decl_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0, 94,95,96,97,98,99,100,101)
MR_decl_label4(check_hlds__mode_ordering__mode_order_goal_2_6_0, 102,103,104,105)
MR_decl_label4(check_hlds__mode_ordering__proc_7_0, 2,3,4,5)
MR_decl_label1(check_hlds__mode_ordering__scc_4_0, 2)
MR_decl_label7(check_hlds__mode_ordering__set_atomic_prod_vars_5_0, 2,4,5,3,7,8,9)
MR_decl_label8(check_hlds__mode_ordering__union_mode_vars_set_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label7(check_hlds__mode_ordering__union_mode_vars_set_3_0, 10,11,12,13,14,15,16)
MR_decl_label4(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0, 3,2,6,8)
MR_decl_label2(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0, 2,3)
MR_decl_label2(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0, 2,3)
MR_decl_label6(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0, 2,3,4,5,6,7)
MR_decl_label3(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0, 3,5,2)
MR_decl_label3(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0, 3,5,2)
MR_decl_label6(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0, 4,6,8,10,14,1)
MR_decl_label3(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0, 4,8,1)
MR_decl_label7(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label4(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0, 3,2,5,21)
MR_def_extern_entry(check_hlds__mode_ordering__mode_ordering_6_0)
MR_decl_static(check_hlds__mode_ordering__enter_lambda_goal_3_0)
MR_decl_static(check_hlds__mode_ordering__leave_lambda_goal_2_0)
MR_decl_static(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0)
MR_decl_static(check_hlds__mode_ordering__mode_order_disj_3_0)
MR_decl_static(check_hlds__mode_ordering__combine_mode_vars_sets_3_0)
MR_decl_static(check_hlds__mode_ordering__union_mode_vars_sets_3_0)
MR_decl_static(fn__check_hlds__mode_ordering__this_file_0_0)
MR_decl_static(check_hlds__mode_ordering__mode_order_conj_2_0)
MR_decl_static(check_hlds__mode_ordering__set_atomic_prod_vars_5_0)
MR_decl_static(check_hlds__mode_ordering__find_matching_proc_2_8_0)
MR_decl_static(check_hlds__mode_ordering__find_matching_proc_7_0)
MR_decl_static(check_hlds__mode_ordering__mode_order_goal_4_0)
MR_decl_static(check_hlds__mode_ordering__mode_order_goal_2_6_0)
MR_def_extern_entry(check_hlds__mode_ordering__proc_7_0)
MR_decl_static(check_hlds__mode_ordering__scc_4_0)
MR_decl_static(check_hlds__mode_ordering__pred_5_0)
MR_decl_static(check_hlds__mode_ordering__check_proc_7_0)
MR_decl_static(check_hlds__mode_ordering__infer_proc_7_0)
MR_decl_static(check_hlds__mode_ordering__mode_order_disj_2_3_0)
MR_decl_static(check_hlds__mode_ordering__union_mode_vars_set_3_0)
MR_decl_static(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0)
MR_decl_static(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_ordering__pred_constraint_map_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_ordering__pred_constraint_map_0_0)
MR_decl_static(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__427__1_3_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__433__1_3_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0)
MR_decl_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0)
MR_decl_static(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_node_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mode_ordering, pred_constraint_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,1,3),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_CTOR0_ADDR(hlds__inst_graph, node)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_relation__type_ctor_info_relation_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mode_robdd__tfeirn__type_ctor_info_tfeirn_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
static const struct mercury_type_1 mercury_common_1[14] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(relation, relation),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(relation, relation),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,4)
}
},
{
{
MR_CTOR1_ADDR(mode_robdd__tfeirn, tfeirn),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
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
MR_CTOR1_ADDR(mode_robdd__tfeirn, tfeirn),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_ordering_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0_1;
static const struct mercury_type_2 mercury_common_2[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_ordering_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info),
MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info),
MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info),
MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,11),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,11),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_disj_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__union_mode_vars_sets_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_1;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_disj_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__union_mode_vars_sets_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_COMMON(1,9),
MR_COMMON(1,11)
}
},
};

static const struct mercury_type_4 mercury_common_4[8] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(check_hlds__mode_ordering__mode_order_disj_2_3_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(check_hlds__mode_ordering__union_mode_vars_set_3_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(check_hlds__mode_ordering__mode_order_goal_4_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(check_hlds__mode_ordering__mode_order_goal_4_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(check_hlds__mode_ordering__mode_order_goal_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_4;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__find_matching_proc_2_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_2;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__find_matching_proc_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,9),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mode_constraint_info),
MR_COMMON(1,9),
MR_COMMON(1,10),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,10),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mode_constraint_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_COMMON(1,10),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,10),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mode_constraint_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__scc_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_relation__type_ctor_info_relation_key_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_2;
static const struct mercury_type_7 mercury_common_7[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_COMMON(1,9),
MR_COMMON(0,5),
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_COMMON(1,9),
MR_COMMON(0,5),
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_COMMON(1,9),
MR_COMMON(0,5),
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_ordering__scc_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,4),
MR_CTOR0_ADDR(relation, relation_key),
MR_COMMON(1,11),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,4),
MR_CTOR0_ADDR(relation, relation_key),
MR_COMMON(1,11),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_ordering__pred_constraint_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_ordering__pred_constraint_map_0_0)),
	"check_hlds.mode_ordering",
	"pred_constraint_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	&mercury_data_mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0 = {
	"pci",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_ordering__field_types_pred_constraint_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[] = {
	&mercury_data_check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[] = {
	&mercury_data_check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

const MR_Integer mercury_data_check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0)),
	"check_hlds.mode_ordering",
	"pred_constraint_info",
	{ (void *)mercury_data_check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0 },
	{ (void *)mercury_data_check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0 },
	1,
	4,
	mercury_data_check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__inst_graph__type_ctor_info_node_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2list__ti_list_1list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2list__ti_list_1list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
};

const MR_ConstString mercury_data_check_hlds__mode_ordering__field_names_mode_ordering_info_0_0[] = {
	"inst_graph",
	"prodvars_map",
	"lambda_nesting",
	"module_info",
	"pred_constraint_map"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0 = {
	"mode_ordering_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_ordering__field_types_mode_ordering_info_0_0,
	mercury_data_check_hlds__mode_ordering__field_names_mode_ordering_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[] = {
	&mercury_data_check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[] = {
	&mercury_data_check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

const MR_Integer mercury_data_check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0)),
	"check_hlds.mode_ordering",
	"mode_ordering_info",
	{ (void *)mercury_data_check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0 },
	{ (void *)mercury_data_check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0 },
	1,
	4,
	mercury_data_check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_ordering_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"scc",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
73,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_disj_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"mode_order_disj_2",
3,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
351,
"d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__union_mode_vars_sets_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"union_mode_vars_set",
3,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
381,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_414",
3,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
414,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_2 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_426",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
426,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_3 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_432",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
432,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_conj_2_0_4 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_438",
6,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
438,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__find_matching_proc_2_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_558",
7,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
558,
"d1;c13;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"reachable_from_list",
3,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
292,
"d5;c11;d3;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_2 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_249",
5,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
249,
"d5;c11;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_3 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_249",
5,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
249,
"d5;c11;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_4 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_249",
5,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
249,
"d5;c11;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_5 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"mode_order_goal",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
191,
"d1;c9;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_6 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"mode_order_goal",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
202,
"d1;c9;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__mode_order_goal_2_6_0_7 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"mode_order_goal",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
304,
"d6;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_ordering__scc_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"pred",
5,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
81,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_427",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
427,
"d1;c7;q;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_433",
4,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
433,
"d1;c10;q;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_445",
5,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
441,
"d1;c13;q;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_2 = {
{
MR_FUNCTION,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"lambda_mode_ordering_m_453",
5,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
449,
"d1;c13;q;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"infer_proc",
7,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
95,
"d1;c9;t;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.mode_ordering",
"check_hlds.mode_ordering",
"check_proc",
7,
0
},
"check_hlds.mode_ordering",
"mode_ordering.m",
106,
"d1;c9;e;c2;"
};

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module0)
	MR_init_entry1(check_hlds__mode_ordering__mode_ordering_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_ordering__mode_ordering_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__scc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__stack__push_2_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module1)
	MR_init_entry1(check_hlds__mode_ordering__enter_lambda_goal_3_0);
	MR_init_label1(check_hlds__mode_ordering__enter_lambda_goal_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__enter_lambda_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_np_call_localret_ent(fn__stack__push_2_0,
		check_hlds__mode_ordering__enter_lambda_goal_3_0_i2);
MR_def_label(check_hlds__mode_ordering__enter_lambda_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__pop_det_3_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module2)
	MR_init_entry1(check_hlds__mode_ordering__leave_lambda_goal_2_0);
	MR_init_label1(check_hlds__mode_ordering__leave_lambda_goal_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__leave_lambda_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		check_hlds__mode_ordering__leave_lambda_goal_2_0_i2);
MR_def_label(check_hlds__mode_ordering__leave_lambda_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__producing_vars_1_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_0);
MR_decl_entry(fn__hlds__hlds_goal__consuming_vars_1_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0);
MR_decl_entry(fn__hlds__hlds_goal__make_visible_vars_1_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0);
MR_decl_entry(fn__hlds__hlds_goal__need_visible_vars_1_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module3)
	MR_init_entry1(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0);
	MR_init_label7(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0_i2);
MR_def_label(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0_i3);
MR_def_label(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0_i4);
MR_def_label(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0_i5);
MR_def_label(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0_i6);
MR_def_label(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0_i7);
MR_def_label(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0_i8);
MR_def_label(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;

MR_BEGIN_MODULE(check_hlds__mode_ordering_module4)
	MR_init_entry1(check_hlds__mode_ordering__mode_order_disj_3_0);
	MR_init_label8(check_hlds__mode_ordering__mode_order_disj_3_0,20,4,5,6,7,8,9,10)
	MR_init_label1(check_hlds__mode_ordering__mode_order_disj_3_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__mode_order_disj_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_disj_3_0_i20);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i4);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i5);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i6);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i7);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i8);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i9);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i10);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_disj_3_0_i11);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module5)
	MR_init_entry1(check_hlds__mode_ordering__combine_mode_vars_sets_3_0);
	MR_init_label8(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,2,3,4,5,6,7,8,9)
	MR_init_label7(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,10,11,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__combine_mode_vars_sets_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i2);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i3);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i4);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i5);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i6);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i7);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i8);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i9);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i10);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i11);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i12);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i13);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i14);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i15);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__combine_mode_vars_sets_3_0_i16);
MR_def_label(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module6)
	MR_init_entry1(check_hlds__mode_ordering__union_mode_vars_sets_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__union_mode_vars_sets_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module7)
	MR_init_entry1(fn__check_hlds__mode_ordering__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mode_ordering.m.", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(fn__map__foldl_3_0);
MR_decl_entry(fn__relation__init_0_0);
MR_decl_entry(relation__tsort_2_0);
MR_decl_entry(fn__map__apply_to_list_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module8)
	MR_init_entry1(check_hlds__mode_ordering__mode_order_conj_2_0);
	MR_init_label8(check_hlds__mode_ordering__mode_order_conj_2_0,2,3,4,5,6,7,8,9)
	MR_init_label3(check_hlds__mode_ordering__mode_order_conj_2_0,11,10,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__mode_order_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i2);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i3);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i4);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__foldl_3_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i5);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i6);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__foldl_3_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i7);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__relation__init_0_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i8);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__foldl_3_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i9);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(relation__tsort_2_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i11);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_conj_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__map__apply_to_list_2_0);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__mode_ordering__this_file_0_0,
		check_hlds__mode_ordering__mode_order_conj_2_0_i14);
MR_def_label(check_hlds__mode_ordering__mode_order_conj_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("conj: Cycle in goal dependencies.", 33);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_goal_path_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_producing_vars_3_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module9)
	MR_init_entry1(check_hlds__mode_ordering__set_atomic_prod_vars_5_0);
	MR_init_label7(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,2,4,5,3,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__set_atomic_prod_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		check_hlds__mode_ordering__set_atomic_prod_vars_5_0_i2);
MR_def_label(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__stack__push_2_0,
		check_hlds__mode_ordering__set_atomic_prod_vars_5_0_i4);
MR_def_label(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__mode_ordering__set_atomic_prod_vars_5_0_i5);
MR_def_label(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__set_atomic_prod_vars_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__mode_ordering__set_atomic_prod_vars_5_0_i8);
MR_def_label(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__mode_ordering__set_atomic_prod_vars_5_0_i7);
MR_def_label(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_producing_vars_3_0,
		check_hlds__mode_ordering__set_atomic_prod_vars_5_0_i9);
MR_def_label(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_head_modes_constraint_2_0);
MR_decl_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0);
MR_decl_entry(hlds__inst_graph__corresponding_nodes_from_lists_6_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0);
MR_decl_entry(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__solutions__solutions_set_1_1);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module10)
	MR_init_entry1(check_hlds__mode_ordering__find_matching_proc_2_8_0);
	MR_init_label8(check_hlds__mode_ordering__find_matching_proc_2_8_0,63,3,4,5,12,15,18,19)
	MR_init_label8(check_hlds__mode_ordering__find_matching_proc_2_8_0,22,23,14,25,26,29,30,33)
	MR_init_label5(check_hlds__mode_ordering__find_matching_proc_2_8_0,13,10,36,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__find_matching_proc_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i3);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_head_modes_constraint_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i4);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i5);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__mode_ordering__find_matching_proc_2_8_0_i10);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__inst_graph__corresponding_nodes_from_lists_6_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i12);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i15);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_2_8_0_i14);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(11);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i18);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i19);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_2_8_0_i13);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i22);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i23);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_2_8_0_i13);
	}
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(11);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i25);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i26);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i29);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i30);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i33);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_2_8_0_i7);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(fn__solutions__solutions_set_1_1,
		check_hlds__mode_ordering__find_matching_proc_2_8_0_i36);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_2_8_0_i63);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_inst_graph_info_2_0);
MR_decl_entry(fn__hlds__inst_graph__interface_inst_graph_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_infer_modes_1_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module11)
	MR_init_entry1(check_hlds__mode_ordering__find_matching_proc_7_0);
	MR_init_label8(check_hlds__mode_ordering__find_matching_proc_7_0,2,3,4,5,6,7,10,9)
	MR_init_label2(check_hlds__mode_ordering__find_matching_proc_7_0,13,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__find_matching_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, pred_constraint_info);
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i2);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i3);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_inst_graph_info_2_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i4);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__inst_graph__interface_inst_graph_1_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i5);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i6);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i7);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_ordering__find_matching_proc_2_8_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i10);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_7_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_infer_modes_1_0,
		check_hlds__mode_ordering__find_matching_proc_7_0_i13);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__find_matching_proc_7_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("mode_ordering.m.", 16);
	MR_r2 = (MR_Word) MR_string_const("find_matching_proc: infer_modes NYI", 35);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__mode_ordering__find_matching_proc_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mode_ordering.m.", 16);
	MR_r2 = (MR_Word) MR_string_const("find_matching_proc: unexpected mode error", 41);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module12)
	MR_init_entry1(check_hlds__mode_ordering__mode_order_goal_4_0);
	MR_init_label1(check_hlds__mode_ordering__mode_order_goal_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__mode_order_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_2_6_0,
		check_hlds__mode_ordering__mode_order_goal_4_0_i2);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_4_0,2)
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

MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_consuming_vars_3_0);
MR_decl_entry(hlds__inst_graph__reachable_from_list_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_make_visible_vars_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_need_visible_vars_3_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module13)
	MR_init_entry1(check_hlds__mode_ordering__mode_order_goal_2_6_0);
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,4,5,28,30,31,27,33,35)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,36,32,37,38,41,19,20,21)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,22,23,24,25,26,8,10,12)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,13,9,15,16,17,42,43,45)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,46,47,48,49,50,51,52,53)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,55,56,58,59,60,62,65,66)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,67,68,69,70,71,72,73,74)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,75,64,76,77,78,79,81,82)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,84,85,87,88,90,91,92,93)
	MR_init_label8(check_hlds__mode_ordering__mode_order_goal_2_6_0,94,95,96,97,98,99,100,101)
	MR_init_label4(check_hlds__mode_ordering__mode_order_goal_2_6_0,102,103,104,105)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__mode_order_goal_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i45) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i55) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i58));
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r1, 3);
	MR_sv(6) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i5);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_goal_2_6_0_i8);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_goal_2_6_0_i19);
	}
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_tempr2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i28);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_goal_2_6_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i30);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i31);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__solutions__solutions_set_1_1,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i41);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i33);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_goal_2_6_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i35);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i36);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__solutions__solutions_set_1_1,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i41);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i37);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i38);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__solutions__solutions_set_1_1,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i41);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(2) = MR_sv(14);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_consuming_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i42);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(2, MR_tempr2, 6);
	MR_sv(11) = MR_ctfield(2, MR_tempr2, 7);
	MR_sv(12) = MR_ctfield(2, MR_tempr2, 5);
	MR_tempr3 = MR_r2;
	MR_sv(13) = MR_tempr3;
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i20);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__mode_ordering__enter_lambda_goal_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i21);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_4_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i22);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 8);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 7) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__leave_lambda_goal_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i23);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__reachable_from_list_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_sv(2) = MR_r1;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__solutions__solutions_set_1_1,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i24);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i25);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_ctfield(2, MR_sv(10), 3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i26);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_consuming_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i42);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r5, 2);
	MR_sv(2) = MR_tempr1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i10);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_goal_2_6_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i12);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i13);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i17);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i15);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i16);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i17);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(14);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_consuming_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i42);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_make_visible_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i43);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_need_visible_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i103);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 2);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_ordering__set_atomic_prod_vars_5_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i46);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i47);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i48);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_ordering__find_matching_proc_7_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i49);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tempr2 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 3);
	MR_tfield(1, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 4);
	MR_tfield(1, MR_tempr1, 5) = MR_ctfield(1, MR_tempr2, 5);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i50);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i51);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_consuming_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i52);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_make_visible_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i53);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_need_visible_vars_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i103);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__mode_ordering__this_file_0_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i56);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mode_order_goal_2: generic_call NYI", 35);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i59) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i62) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i78) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i81) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i84) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i87) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i90) MR_AND
		MR_LABEL_AP(check_hlds__mode_ordering__mode_order_goal_2_6_0_i104));
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__mode_ordering__this_file_0_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i60);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mode_order_goal_2: pragma_foreign_code NYI", 42);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__mode_order_goal_2_6_0_i64);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i65);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_conj_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i66);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_ordering__union_mode_vars_sets_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i67);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i68);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i69);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i70);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i71);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i72);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i73);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i74);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i75);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i76);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_ordering__union_mode_vars_sets_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i77);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, mode_ordering_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i79);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_disj_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i103);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__mode_ordering__this_file_0_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i82);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mode_order_goal_2: switch", 25);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_4_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i85);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i103);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_4_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i88);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i103);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_4_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i91);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_4_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i92);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_4_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i93);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tempr4 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tempr5 = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__union_mode_vars_sets_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i94);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i95);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i96);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i97);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i98);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i99);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i100);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i101);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i102);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(check_hlds__mode_ordering__combine_mode_vars_sets_3_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i103);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__mode_ordering__this_file_0_0,
		check_hlds__mode_ordering__mode_order_goal_2_6_0_i105);
MR_def_label(check_hlds__mode_ordering__mode_order_goal_2_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mode_order_goal_2: shorthand", 28);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0);
MR_decl_entry(fn__stack__init_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module14)
	MR_init_entry1(check_hlds__mode_ordering__proc_7_0);
	MR_init_label4(check_hlds__mode_ordering__proc_7_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_ordering__proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0,
		check_hlds__mode_ordering__proc_7_0_i2);
MR_def_label(check_hlds__mode_ordering__proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(fn__stack__init_0_0,
		check_hlds__mode_ordering__proc_7_0_i3);
MR_def_label(check_hlds__mode_ordering__proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__mode_ordering__proc_7_0_i4);
MR_def_label(check_hlds__mode_ordering__proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_ordering__mode_order_goal_2_6_0,
		check_hlds__mode_ordering__proc_7_0_i5);
MR_def_label(check_hlds__mode_ordering__proc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module15)
	MR_init_entry1(check_hlds__mode_ordering__scc_4_0);
	MR_init_label1(check_hlds__mode_ordering__scc_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__scc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0,
		check_hlds__mode_ordering__scc_4_0_i2);
MR_def_label(check_hlds__mode_ordering__scc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__pred_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module16)
	MR_init_entry1(check_hlds__mode_ordering__pred_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__pred_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);
MR_decl_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);
MR_decl_entry(fn__hlds__inst_graph__implementation_inst_graph_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module17)
	MR_init_entry1(check_hlds__mode_ordering__check_proc_7_0);
	MR_init_label6(check_hlds__mode_ordering__check_proc_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__check_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		check_hlds__mode_ordering__check_proc_7_0_i2);
MR_def_label(check_hlds__mode_ordering__check_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_head_modes_constraint_2_0,
		check_hlds__mode_ordering__check_proc_7_0_i3);
MR_def_label(check_hlds__mode_ordering__check_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__check_proc_7_0_i4);
MR_def_label(check_hlds__mode_ordering__check_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_inst_graph_info_2_0,
		check_hlds__mode_ordering__check_proc_7_0_i5);
MR_def_label(check_hlds__mode_ordering__check_proc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__inst_graph__implementation_inst_graph_1_0,
		check_hlds__mode_ordering__check_proc_7_0_i6);
MR_def_label(check_hlds__mode_ordering__check_proc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_ordering__proc_7_0,
		check_hlds__mode_ordering__check_proc_7_0_i7);
MR_def_label(check_hlds__mode_ordering__check_proc_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module18)
	MR_init_entry1(check_hlds__mode_ordering__infer_proc_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__infer_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module19)
	MR_init_entry1(check_hlds__mode_ordering__mode_order_disj_2_3_0);
	MR_init_label8(check_hlds__mode_ordering__mode_order_disj_2_3_0,2,3,4,5,6,7,8,9)
	MR_init_label7(check_hlds__mode_ordering__mode_order_disj_2_3_0,10,11,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__mode_order_disj_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i2);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i3);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i4);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i5);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i6);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i7);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i8);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i9);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i10);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i11);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i12);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i13);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i14);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i15);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__mode_order_disj_2_3_0_i16);
MR_def_label(check_hlds__mode_ordering__mode_order_disj_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module20)
	MR_init_entry1(check_hlds__mode_ordering__union_mode_vars_set_3_0);
	MR_init_label8(check_hlds__mode_ordering__union_mode_vars_set_3_0,2,3,4,5,6,7,8,9)
	MR_init_label7(check_hlds__mode_ordering__union_mode_vars_set_3_0,10,11,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__union_mode_vars_set_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i2);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i3);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i4);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i5);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i6);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i7);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i8);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i9);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i10);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i11);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i12);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i13);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i14);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i15);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__union_mode_vars_set_3_0_i16);
MR_def_label(check_hlds__mode_ordering__union_mode_vars_set_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_103_111_97_108_95_95_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_node_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module21)
	MR_init_entry1(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0);
	MR_init_label6(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i14);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i6);
MR_def_label(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i8);
MR_def_label(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i10);
MR_def_label(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, pred_constraint_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_ordering__mode_ordering_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module22)
	MR_init_entry1(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0);
	MR_init_label7(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i13);
MR_def_label(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i17);
MR_def_label(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, pred_constraint_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___check_hlds__mode_ordering__mode_ordering_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mode_robdd__tfeirn__tfeirn_1_0);
MR_decl_entry(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module23)
	MR_init_entry1(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0);
	MR_init_label3(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_ordering__pred_constraint_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mode_robdd__tfeirn__tfeirn_1_0,
		__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
MR_def_label(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_ordering__pred_constraint_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mode_robdd__tfeirn__tfeirn_1_0);
MR_decl_entry(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module24)
	MR_init_entry1(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0);
	MR_init_label4(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_ordering__pred_constraint_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mode_robdd__tfeirn__tfeirn_1_0,
		__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
MR_def_label(__Compare___check_hlds__mode_ordering__pred_constraint_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module25)
	MR_init_entry1(__Unify___check_hlds__mode_ordering__pred_constraint_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_ordering__pred_constraint_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, pred_constraint_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module26)
	MR_init_entry1(__Compare___check_hlds__mode_ordering__pred_constraint_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_ordering__pred_constraint_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, pred_constraint_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(hlds__inst_graph__same_graph_corresponding_nodes_5_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module27)
	MR_init_entry1(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0);
	MR_init_label4(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0,1,3,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.mode_ordering.IntroducedFrom__pred__mode_order_goal_2__249__1/5-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(hlds__inst_graph__same_graph_corresponding_nodes_5_0,
		check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0_i1);
MR_def_label(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0_i3);
MR_def_label(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0_i2);
	}
	MR_r1 = MR_fv(3);
	MR_succeed();
MR_def_label(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_fv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0_i5);
MR_def_label(check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__249__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__det_insert_3_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module28)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0);
	MR_init_label4(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0,3,2,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0_i3);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0_i2);
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__map__det_insert_3_0);
	}
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__mode_ordering__this_file_0_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0_i6);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mode_order_conj: goal_path error", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0_i8);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__414__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__map__det_insert_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module29)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__427__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__427__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_tailcall_ent(fn__map__det_insert_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module30)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0);
	MR_init_label2(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__427__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0_i2);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0_i3);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__426__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__set_3_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module31)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__433__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__433__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_tailcall_ent(fn__map__set_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module32)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0);
	MR_init_label2(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__433__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0_i2);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0_i3);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__432__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(relation__add_element_4_0);
MR_decl_entry(relation__add_4_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module33)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0);
	MR_init_label3(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0_i3);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(relation__add_element_4_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0_i5);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(relation__add_4_0);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module34)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0);
	MR_init_label3(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0_i3);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(relation__add_element_4_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0_i5);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(relation__add_4_0);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module35)
	MR_init_entry1(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0);
	MR_init_label6(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_r4, 1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(relation__add_element_4_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_i2);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_i3);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_i4);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_i5);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_i6);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0_i7);
MR_def_label(fn__check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__438__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_ordering_module36)
	MR_init_entry1(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0);
	MR_init_label3(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0,1,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.mode_ordering.IntroducedFrom__pred__find_matching_proc_2__558__1/7-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r4;
	MR_fv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(hlds__inst_graph__corresponding_nodes_from_lists_6_0,
		check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0_i1);
MR_def_label(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0,
		check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0_i2);
MR_def_label(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_fv(2);
	MR_np_call_localret_ent(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0_i3);
MR_def_label(check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__558__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(3);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module37)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0);
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,2,3,4,7,10,9,6,14)
	MR_init_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_ordering, pred_constraint_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_infer_modes_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__infer_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_ordering__check_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_95_91_50_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_succeed_0_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_proc_id_0_0);

MR_BEGIN_MODULE(check_hlds__mode_ordering_module38)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0);
	MR_init_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0,4,2,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(builtin__semidet_succeed_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("mode_ordering.m.", 16);
	MR_r2 = (MR_Word) MR_string_const("NYI: pred_info_create_proc_info_for_mode_decl_constraint", 56);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_102_101_114_95_112_114_111_99_95_95_91_53_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__mode_ordering__check_proc_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__mode_ordering_maybe_bunch_0(void)
{
	check_hlds__mode_ordering_module0();
	check_hlds__mode_ordering_module1();
	check_hlds__mode_ordering_module2();
	check_hlds__mode_ordering_module3();
	check_hlds__mode_ordering_module4();
	check_hlds__mode_ordering_module5();
	check_hlds__mode_ordering_module6();
	check_hlds__mode_ordering_module7();
	check_hlds__mode_ordering_module8();
	check_hlds__mode_ordering_module9();
	check_hlds__mode_ordering_module10();
	check_hlds__mode_ordering_module11();
	check_hlds__mode_ordering_module12();
	check_hlds__mode_ordering_module13();
	check_hlds__mode_ordering_module14();
	check_hlds__mode_ordering_module15();
	check_hlds__mode_ordering_module16();
	check_hlds__mode_ordering_module17();
	check_hlds__mode_ordering_module18();
	check_hlds__mode_ordering_module19();
	check_hlds__mode_ordering_module20();
	check_hlds__mode_ordering_module21();
	check_hlds__mode_ordering_module22();
	check_hlds__mode_ordering_module23();
	check_hlds__mode_ordering_module24();
	check_hlds__mode_ordering_module25();
	check_hlds__mode_ordering_module26();
	check_hlds__mode_ordering_module27();
	check_hlds__mode_ordering_module28();
	check_hlds__mode_ordering_module29();
	check_hlds__mode_ordering_module30();
	check_hlds__mode_ordering_module31();
	check_hlds__mode_ordering_module32();
	check_hlds__mode_ordering_module33();
	check_hlds__mode_ordering_module34();
	check_hlds__mode_ordering_module35();
	check_hlds__mode_ordering_module36();
	check_hlds__mode_ordering_module37();
	check_hlds__mode_ordering_module38();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__mode_ordering__init(void);
void mercury__check_hlds__mode_ordering__init_type_tables(void);
void mercury__check_hlds__mode_ordering__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__mode_ordering__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__mode_ordering__init_complexity_procs(void);
#endif

void mercury__check_hlds__mode_ordering__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__mode_ordering_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0,
		check_hlds__mode_ordering__pred_constraint_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0,
		check_hlds__mode_ordering__pred_constraint_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0,
		check_hlds__mode_ordering__mode_ordering_info_0_0);
	mercury__check_hlds__mode_ordering__init_debugger();
}

void mercury__check_hlds__mode_ordering__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0);
	}
}


void mercury__check_hlds__mode_ordering__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__mode_ordering__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__mode_ordering__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
