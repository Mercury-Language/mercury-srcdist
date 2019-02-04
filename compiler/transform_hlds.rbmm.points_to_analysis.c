/*
** Automatically generated from `rbmm.points_to_analysis.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__rbmm__points_to_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.rbmm.points_to_analysis.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.rbmm.points_to_analysis.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.rbmm.points_to_analysis.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.rbmm.points_to_analysis.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.rbmm.points_to_analysis.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 47 "transform_hlds.rbmm.points_to_analysis.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "transform_hlds.rbmm.points_to_analysis.c"
#line 52 "transform_hlds.rbmm.points_to_analysis.c"
#include "transform_hlds.rbmm.points_to_analysis.mh"

#line 55 "transform_hlds.rbmm.points_to_analysis.c"
#line 56 "transform_hlds.rbmm.points_to_analysis.c"
#ifndef TRANSFORM_HLDS__RBMM__POINTS_TO_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__POINTS_TO_ANALYSIS_DECL_GUARD

#line 60 "transform_hlds.rbmm.points_to_analysis.c"
#line 61 "transform_hlds.rbmm.points_to_analysis.c"

#endif
#line 64 "transform_hlds.rbmm.points_to_analysis.c"

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
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0;
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0, 51,3,9,10,12,17,18,19)
MR_decl_label4(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0, 15,11,21,8)
MR_decl_label2(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0, 2,3)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0, 20,4,5,6,7,8,9,10)
MR_decl_label4(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0, 11,12,13,3)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0, 44,4,5,7,9,11,13,15)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0, 16,17,6,18,19,20,21,3)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0, 4,59,6,9,10,11,12,13)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0, 14,15,16,8,60,18,20,62)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0, 22,24,26,28,30,32,63,35)
MR_decl_label3(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0, 36,64,39)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0, 3,2,7,6,9,10,12,13)
MR_decl_label3(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0, 14,15,16)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0, 4,8,9,10,12,14,16,18)
MR_decl_label5(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0, 39,21,22,40,25)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0, 29,30,31,9,10,11,12,15)
MR_decl_label2(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0, 19,16)
MR_decl_label2(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0, 2,3)
MR_decl_label6(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0, 3,2,5,6,7,8)
MR_decl_label6(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0, 3,2,7,6,9,10)
MR_decl_label7(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0, 27,3,4,6,9,10,5)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0, 31,5,3,7,8,11,13,14)
MR_decl_label2(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0, 15,10)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0, 2,3,6,4,8,9,10,11)
MR_decl_label7(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0, 12,13,14,15,16,17,18)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0, 2,3,4,5,6,8,10,11)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__rule_1_3_0, 21,2,3,4,5,7,8,24)
MR_decl_label7(transform_hlds__rbmm__points_to_analysis__rule_3_3_0, 21,2,3,5,7,8,24)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0, 29,3,8,6,9,10,11,14)
MR_decl_label4(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0, 15,16,4,5)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__rule_6_6_0, 2,3,6,8,10,17,9,12)
MR_decl_label1(transform_hlds__rbmm__points_to_analysis__rule_6_6_0, 13)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__rule_7_6_0, 2,3,6,17,4,9,10,12)
MR_decl_label2(transform_hlds__rbmm__points_to_analysis__rule_7_6_0, 13,14)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__rule_8_6_0, 2,3,6,4,9,10,8,12)
MR_decl_label8(transform_hlds__rbmm__points_to_analysis__rule_8_6_0, 13,14,15,16,17,18,19,20)
MR_decl_label3(transform_hlds__rbmm__points_to_analysis__rule_8_6_0, 21,22,23)
MR_decl_label3(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0, 4,2,6)
MR_decl_label5(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0, 15,2,4,3,7)
MR_decl_label1(transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0, 2)
MR_decl_label2(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0, 3,2)
MR_decl_static(fn__transform_hlds__rbmm__points_to_analysis__this_file_0_0)
MR_def_extern_entry(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__rule_1_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__rule_3_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__rule_6_6_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__rule_7_6_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__rule_8_6_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0)
MR_decl_static(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0)
MR_decl_static(__Unify___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0)
MR_decl_static(__Compare___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0)
MR_decl_static(transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1099__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_arc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_arc),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_CTOR_ADDR(transform_hlds__ctgc__fixpoint_table, fixpoint_table, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
MR_CTOR_ADDR(transform_hlds__ctgc__fixpoint_table, fixpoint_table, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,0),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_2 mercury_common_2[4] =
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
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(2,2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(2,2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0_1;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
};

static const struct mercury_type_6 mercury_common_6[4] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1099__1_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0)),
	"transform_hlds.rbmm.points_to_analysis",
	"rpta_fixpoint_table",
	{ 0 },
	{ (void *)&mercury_data_transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"intra_proc_rpta_pred",
4,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
91,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"run_with_dependency",
4,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
276,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"intra_proc_rpta_proc",
5,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
99,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"process_cons_and_decons",
7,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
198,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"process_cons_and_decons",
7,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
198,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"intra_analyse_goal",
3,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
127,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"intra_analyse_goal",
3,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
139,
"d6;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"intra_analyse_case",
3,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
137,
"d5;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"inter_analyse_proc",
5,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
297,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"update_rpta_info_in_rpta_info_table",
4,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
302,
"d1;c8;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"wrapped_init",
3,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
1084,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"inter_analyse_goal",
7,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
367,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"inter_analyse_goal",
7,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
444,
"d6;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"inter_analyse_case",
7,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
427,
"d4;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_analysis",
"transform_hlds.rbmm.points_to_analysis",
"lambda_rbmm_points_to_analysis_m_1099",
2,
0
},
"transform_hlds.rbmm.points_to_analysis",
"rbmm.points_to_analysis.m",
1098,
"d1;c5;"
};


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module0)
	MR_init_entry1(fn__transform_hlds__rbmm__points_to_analysis__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__rbmm__points_to_analysis__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.points_to_analysis.m", 25);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module1)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,2,3,4,5,6,8,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_0,
		transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0,
		transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("rbmm.points_to_analysis.m", 25);
	MR_r2 = (MR_Word) MR_string_const("inter_proc_rpta: no dependency information", 42);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module2)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0);
	MR_init_label2(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__get_node_by_varset_3_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_get_edgemap_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module3)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__rule_1_3_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,21,2,3,4,5,7,8,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__rule_1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_varset_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_get_edgemap_2_0,
		transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_arc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,
		transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i24);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_1_3_0_i21);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0);
MR_decl_entry(__Unify___transform_hlds__rbmm__points_to_graph__rptg_arc_content_0_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__unify_operator_4_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module4)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,31,5,3,7,8,11,13,14)
	MR_init_label2(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,15,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_r2;
	MR_succip_word = MR_sv(7);
	continue;
	}
	break; } /* end while */
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(__Unify___transform_hlds__rbmm__points_to_graph__rptg_arc_content_0_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__unify_operator_4_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i14);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i15);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arcs_6_0_i31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module5)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0);
	MR_init_label2(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module6)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,29,30,31,9,10,11,12,15)
	MR_init_label2(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,19,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i30) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i31) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i15));
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r5 = MR_ctfield(0, MR_tempr2, 2);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i19);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r5 = MR_ctfield(1, MR_tempr2, 2);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i19);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(2, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__unify_operator_4_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__apply_rule_1_3_0);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.points_to_analysis.m", 25);
	MR_r2 = (MR_Word) MR_string_const("complicated_unify in region points-to analysis.", 47);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module7)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module8)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,4,8,9,10,12,14,16,18)
	MR_init_label5(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,39,21,22,40,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i8));
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i10) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i12) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i14) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i16) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i18) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i39) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i40));
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i21);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i22);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_analysis__this_file_0_0,
		transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0_i25);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("intra_analyse_goal_expr: shorthand not handled", 46);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__some_are_special_preds_2_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_3_0);
MR_decl_entry(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module9)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0);
	MR_init_label6(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0,3,2,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0,
		transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0,
		transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module10)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 1), 0);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module11)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0);
	MR_init_label7(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,27,3,4,6,9,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i5);
	}
	if ((MR_sv(5) == MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__unify_operator_4_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__rule_1_3_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0_i27);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_path_4_0);
MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__reachable_and_having_type_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module12)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,29,3,8,6,9,10,11,14)
	MR_init_label4(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,15,16,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i6);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_path_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__reachable_and_having_type_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i4);
	}
	if ((MR_sv(3) == MR_r2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__unify_operator_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i14);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i15);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i16);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0_i29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_get_nodemap_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
MR_decl_entry(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module13)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__rule_3_3_0);
	MR_init_label7(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,21,2,3,5,7,8,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__rule_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_get_nodemap_2_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_3_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node_content);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_3_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("rbmm.points_to_analysis.m", 25);
	MR_r2 = (MR_Word) MR_string_const("rule_3: impossible having no node in graph", 42);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_3_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_3_2_5_0,
		transform_hlds__rbmm__points_to_analysis__rule_3_3_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_3_0_i24);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_3_3_0_i21);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__edge_in_graph_4_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__edge_operator_5_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module14)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,2,3,6,4,8,9,10,11)
	MR_init_label7(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__edge_in_graph_4_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i4);
	}
	MR_r1 = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_sv(7);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__edge_operator_5_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_varset_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_varset_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_get_edgemap_2_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i14);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_arc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i15);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_arc_5_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i16);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i17);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,
		transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0_i18);
MR_def_label(transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0);
MR_decl_entry(transform_hlds__ctgc__fixpoint_table__new_run_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module15)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0);
	MR_init_label5(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0,15,2,4,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0,
		transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__new_run_2_0,
		transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module16)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0);
	MR_init_label3(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0,4,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0,
		transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0);
MR_decl_entry(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0);
MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module17)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0);
	MR_init_label6(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,3,2,7,6,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0,
		transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0_i2);
	}
	MR_r1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0,
		transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0_i6);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_0,
		transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module18)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,51,3,9,10,12,17,18,19)
	MR_init_label4(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,15,11,21,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i8);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0,
		transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_variable_3_0,
		transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i11);
	}
	if ((MR_r2 == MR_sv(6))) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i15);
	}
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__unify_operator_4_0,
		transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i17);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i18);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,
		transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i19);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i51);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i51);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i21);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0_i51);
MR_def_label(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.points_to_analysis.m", 25);
	MR_r2 = (MR_Word) MR_string_const("alpha_mapping_at_call_site: actuals and formals do not match.", 61);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__find_arc_from_node_with_same_label_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module19)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__rule_6_6_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,2,3,6,8,10,17,9,12)
	MR_init_label1(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__rule_6_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0,
		transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_sv(7);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__find_arc_from_node_with_same_label_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i17);
	}
	MR_sv(3) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i9);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_6_6_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module20)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__rule_7_6_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,2,3,6,17,4,9,10,12)
	MR_init_label2(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__rule_7_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_sv(7);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__find_arc_from_node_with_same_label_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i4);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__edge_operator_5_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_7_6_0_i14);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_get_node_supply_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_set_node_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module21)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__rule_8_6_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,2,3,6,4,9,10,8,12)
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,13,14,15,16,17,18,19,20)
	MR_init_label3(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,21,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__rule_8_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_r3, 0);
	MR_sv(8) = MR_r5;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_tempr2 = MR_sv(8);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__find_arc_from_node_with_same_label_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i8);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_get_node_supply_2_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("R", 1);
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i14);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i15);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i16);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i17);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_set_node_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i18);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__edge_operator_5_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i19);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i20);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i21);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i22);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_3_3_0,
		transform_hlds__rbmm__points_to_analysis__rule_8_6_0_i23);
MR_def_label(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module22)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,44,4,5,7,9,11,13,15)
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,16,17,6,18,19,20,21,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_arc_contents_5_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__find_arc_from_node_with_same_label_4_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i6);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i6);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__get_node_by_node_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) == MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__unify_operator_4_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i15);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_node_contents_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i16);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_1_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i17);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i18);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r5 = MR_sv(4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_6_6_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i19);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_7_6_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i20);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__rule_8_6_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i21);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0_i44);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_successors_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(list__delete_elems_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module23)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,20,4,5,6,7,8,9,10)
	MR_init_label4(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,11,12,13,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_get_edgemap_2_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_arc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__apply_rules_arcs_6_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_successors_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__delete_elems_3_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0_i20);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module24)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__smm_common__program_point_init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module25)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,4,59,6,9,10,11,12,13)
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,14,15,16,8,60,18,20,62)
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,22,24,26,28,30,32,63,35)
	MR_init_label3(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,36,64,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i59) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i60) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i20));
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_ctfield(1, MR_r1, 2);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = MR_r2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__smm_common__program_point_init_1_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_ctfield(0, MR_sv(6), 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i14);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i15);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__apply_rules_6_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i16);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_analysis__this_file_0_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i18);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inter_analyse_goal_expr: generic_call not handled", 49);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i62) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i24) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i26) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i28) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i30) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i32) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i63) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i64));
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_analysis__this_file_0_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i22);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inter_analyse_goal_expr: foreign code not handled", 49);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r4 = MR_tempr1;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r4 = MR_tempr1;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r4 = MR_tempr1;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0);
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i35);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i36);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_0);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_analysis__this_file_0_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0_i39);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inter_analyse_goal_expr: shorthand goal not handled", 51);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__goal_path__fill_goal_path_slots_3_0);
MR_decl_entry(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module26)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0);
	MR_init_label8(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,3,2,7,6,9,10,12,13)
	MR_init_label3(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(5) = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i12);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(5) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i13);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_path_slots_3_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i14);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i15);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0,
		transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0_i16);
MR_def_label(transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module27)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module28)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0);
	MR_init_label1(transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0,
		transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module29)
	MR_init_entry1(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0);
	MR_init_label2(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0,
		fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0_i3);
MR_def_label(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__rbmm__points_to_analysis__wrapped_init_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.points_to_analysis.m", 25);
	MR_r2 = (MR_Word) MR_string_const("wrapper_init: rpta_info should exist.", 37);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module30)
	MR_init_entry1(__Unify___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module31)
	MR_init_entry1(__Compare___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_analysis_module32)
	MR_init_entry1(transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1099__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1099__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm__points_to_analysis_maybe_bunch_0(void)
{
	transform_hlds__rbmm__points_to_analysis_module0();
	transform_hlds__rbmm__points_to_analysis_module1();
	transform_hlds__rbmm__points_to_analysis_module2();
	transform_hlds__rbmm__points_to_analysis_module3();
	transform_hlds__rbmm__points_to_analysis_module4();
	transform_hlds__rbmm__points_to_analysis_module5();
	transform_hlds__rbmm__points_to_analysis_module6();
	transform_hlds__rbmm__points_to_analysis_module7();
	transform_hlds__rbmm__points_to_analysis_module8();
	transform_hlds__rbmm__points_to_analysis_module9();
	transform_hlds__rbmm__points_to_analysis_module10();
	transform_hlds__rbmm__points_to_analysis_module11();
	transform_hlds__rbmm__points_to_analysis_module12();
	transform_hlds__rbmm__points_to_analysis_module13();
	transform_hlds__rbmm__points_to_analysis_module14();
	transform_hlds__rbmm__points_to_analysis_module15();
	transform_hlds__rbmm__points_to_analysis_module16();
	transform_hlds__rbmm__points_to_analysis_module17();
	transform_hlds__rbmm__points_to_analysis_module18();
	transform_hlds__rbmm__points_to_analysis_module19();
	transform_hlds__rbmm__points_to_analysis_module20();
	transform_hlds__rbmm__points_to_analysis_module21();
	transform_hlds__rbmm__points_to_analysis_module22();
	transform_hlds__rbmm__points_to_analysis_module23();
	transform_hlds__rbmm__points_to_analysis_module24();
	transform_hlds__rbmm__points_to_analysis_module25();
	transform_hlds__rbmm__points_to_analysis_module26();
	transform_hlds__rbmm__points_to_analysis_module27();
	transform_hlds__rbmm__points_to_analysis_module28();
	transform_hlds__rbmm__points_to_analysis_module29();
	transform_hlds__rbmm__points_to_analysis_module30();
	transform_hlds__rbmm__points_to_analysis_module31();
	transform_hlds__rbmm__points_to_analysis_module32();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__points_to_analysis__init(void);
void mercury__transform_hlds__rbmm__points_to_analysis__init_type_tables(void);
void mercury__transform_hlds__rbmm__points_to_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__points_to_analysis__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__points_to_analysis__init_complexity_procs(void);
#endif

void mercury__transform_hlds__rbmm__points_to_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__points_to_analysis_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0,
		transform_hlds__rbmm__points_to_analysis__rpta_fixpoint_table_0_0);
	mercury__transform_hlds__rbmm__points_to_analysis__init_debugger();
}

void mercury__transform_hlds__rbmm__points_to_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0);
	}
}


void mercury__transform_hlds__rbmm__points_to_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__points_to_analysis__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__points_to_analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
