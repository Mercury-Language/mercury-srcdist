/*
** Automatically generated from `rbmm.condition_renaming.m'
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
INIT mercury__transform_hlds__rbmm__condition_renaming__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.rbmm.condition_renaming.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.rbmm.condition_renaming.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.rbmm.condition_renaming.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.rbmm.condition_renaming.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.rbmm.condition_renaming.c"
#line 44 "transform_hlds.rbmm.condition_renaming.c"
#include "transform_hlds.rbmm.condition_renaming.mh"

#line 47 "transform_hlds.rbmm.condition_renaming.c"
#line 48 "transform_hlds.rbmm.condition_renaming.c"
#ifndef TRANSFORM_HLDS__RBMM__CONDITION_RENAMING_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__CONDITION_RENAMING_DECL_GUARD

#line 52 "transform_hlds.rbmm.condition_renaming.c"
#line 53 "transform_hlds.rbmm.condition_renaming.c"

#endif
#line 56 "transform_hlds.rbmm.condition_renaming.c"

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
	MR_Word * f3[8];
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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0,
	mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0;
MR_decl_label1(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0, 2)
MR_decl_label7(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0, 24,3,8,9,6,11,5)
MR_decl_label5(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0, 2,3,4,5,6)
MR_decl_label4(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0, 24,7,5,8)
MR_decl_label1(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0, 2)
MR_decl_label5(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0, 3,5,7,13,6)
MR_decl_label6(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0, 3,5,6,8,14,7)
MR_decl_label1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0, 2)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0, 8,9,11,13,15,17,40,20)
MR_decl_label3(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0, 21,41,24)
MR_decl_label6(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0, 4,6,7,9,8,2)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0, 17,19,23,63,25,29,31,33)
MR_decl_label4(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0, 64,36,37,40)
MR_decl_label6(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0, 2,3,4,5,6,7)
MR_decl_label3(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0, 2,3,4)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0, 8,9,11,13,15,17,41,20)
MR_decl_label5(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0, 21,22,23,42,25)
MR_decl_label2(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0, 2,3)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0, 3,2,5,6,7,8,9,10)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0, 11,12,14,13,16,17,19,18)
MR_decl_label1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0, 21)
MR_decl_label7(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0, 4,6,7,8,9,10,2)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0, 17,19,23,63,25,29,31,33)
MR_decl_label4(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0, 64,36,37,40)
MR_decl_label6(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0, 4,6,7,8,9,2)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0, 17,19,23,63,25,29,31,33)
MR_decl_label4(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0, 64,36,37,40)
MR_decl_label4(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0, 18,6,4,3)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0, 2,3,4,5,6,8,11,10)
MR_decl_label2(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0, 7,16)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0, 2,3,4,5,7,9,6,10)
MR_decl_label1(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0, 11)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0, 37,7,9,6,11,14,13,16)
MR_decl_label2(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0, 4,3)
MR_decl_label8(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0, 35,7,9,6,10,12,11,14)
MR_decl_label2(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0, 4,3)
MR_def_extern_entry(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0)
MR_def_extern_entry(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0)
MR_def_extern_entry(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0)
MR_def_extern_entry(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0)
MR_decl_static(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_7_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0)
MR_decl_static(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[14] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,14)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,23)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,10)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,14)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[25] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,2),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_COMMON(0,0)
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
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(1,8)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,1,11)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,12)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,16)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,7)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,18)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(1,8)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_2;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_INT_CTOR_ADDR,
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_COMMON(1,22),
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_INT_CTOR_ADDR,
MR_COMMON(0,13),
MR_COMMON(1,24),
MR_COMMON(1,24)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_COMMON(1,22),
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_INT_CTOR_ADDR,
MR_COMMON(0,13),
MR_COMMON(1,24),
MR_COMMON(1,24)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_3;
static const struct mercury_type_3 mercury_common_3[14] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,6),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,6),
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,22),
MR_COMMON(1,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,22),
MR_COMMON(1,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(1,22),
MR_COMMON(1,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,22),
MR_COMMON(1,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,22),
MR_COMMON(1,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(1,22),
MR_COMMON(1,22)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,7),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,6),
MR_COMMON(1,10),
MR_COMMON(1,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(1,22),
MR_COMMON(1,22)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_1;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,15),
MR_COMMON(1,7),
MR_COMMON(1,10),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,6),
MR_COMMON(1,17),
MR_COMMON(1,17)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,20),
MR_COMMON(1,20),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,12),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_COMMON(1,22),
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(1,24),
MR_COMMON(1,24)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(1,22),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(1,24),
MR_COMMON(1,24)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_INT_CTOR_ADDR,
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0)),
	"transform_hlds.rbmm.condition_renaming",
	"proc_goal_path_regions_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0)),
	"transform_hlds.rbmm.condition_renaming",
	"goal_path_regions_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_and_in_cond_regions_pred",
8,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
128,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renamed_regions_proc",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
544,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renaming_proc",
6,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
599,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_annotation_proc",
7,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
837,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_and_in_cond_regions_proc",
9,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
142,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_regions_in_ite",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
356,
"d1;c7;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_regions_in_ite",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
360,
"d1;c7;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_regions_in_ite_case",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
364,
"d1;c7;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_regions_created_in_condition",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
481,
"d1;c7;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_regions_created_in_condition",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
485,
"d1;c7;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_regions_created_in_condition_case",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
489,
"d1;c7;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_and_in_cond_regions_goal",
7,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
197,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_and_in_cond_regions_goal",
7,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
217,
"d6;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_non_local_and_in_cond_regions_case",
7,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
212,
"d5;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renamed_regions_ite",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
556,
"d1;c6;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"record_ite_renaming",
6,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
715,
"d1;c7;t;c5;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renaming_in_condition",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
753,
"d1;c7;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renaming_in_condition",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
758,
"d1;c7;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renaming_in_condition_case",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
763,
"d1;c7;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renaming_goal",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
633,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renaming_goal",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
650,
"d6;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_renaming_case",
5,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
645,
"d5;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_annotation_region_set",
7,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
852,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_annotation_exec_path",
8,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
872,
"d1;c8;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"collect_ite_annotation_exec_path",
8,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
872,
"d1;c8;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.condition_renaming",
"transform_hlds.rbmm.condition_renaming",
"introduce_reverse_renaming",
7,
0
},
"transform_hlds.rbmm.condition_renaming",
"rbmm.condition_renaming.m",
893,
"d2;c11;t;c1;"
};

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module0)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0);
	MR_init_label3(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module1)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0);
	MR_init_label1(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module2)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0);
	MR_init_label1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module3)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0);
	MR_init_label1(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module4)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0);
	MR_init_label2(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_r2;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(set__union_3_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module5)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,37,7,9,6,11,14,13,16)
	MR_init_label2(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i3);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i11);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i11);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i14);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i13);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i37);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i16);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i37);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0_i37);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module6)
	MR_init_entry1(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.condition_renaming.m", 25);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_is_atomic_1_0);
MR_decl_entry(fn__transform_hlds__smm_common__program_point_init_1_0);
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module7)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0);
	MR_init_label7(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,4,6,7,8,9,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__smm_common__program_point_init_1_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0_i8);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0_i10);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module8)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,17,19,23,63,25,29,31,33)
	MR_init_label4(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,64,36,37,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i63);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i63) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i23) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i31) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i64) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i63));
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i19);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i40);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i25);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i40);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i36);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0_i37);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("collect_non_local_regions_in_ite_compound_goal: encountered atomic or unsupported goal", 86);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module9)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,35,7,9,6,10,12,11,14)
	MR_init_label2(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i3);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i10);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i12);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i35);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i14);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i35);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0_i35);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module10)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0);
	MR_init_label6(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,4,6,7,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__smm_common__program_point_init_1_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0_i8);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module11)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,17,19,23,63,25,29,31,33)
	MR_init_label4(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,64,36,37,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i63);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i63) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i23) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i31) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i64) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i63));
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i19);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i40);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i25);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i40);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i36);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,
		transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0_i37);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("collect_regions_created_in_condition_compound_goal: encountered atomic or unsupported goal", 90);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module12)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module13)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,8,9,11,13,15,17,41,20)
	MR_init_label5(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,21,22,23,42,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i15) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i41) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i42));
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r2;
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r7 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r2;
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r7 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r2;
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r7 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i20);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i21);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i22);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i23);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0_i25);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("collect_non_local_and_in_cond_regions_expr: shorthand not handled", 65);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__some_are_special_preds_2_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_3_0);
MR_decl_entry(check_hlds__goal_path__fill_goal_path_slots_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__map__count_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module14)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,3,2,5,6,7,8,9,10)
	MR_init_label8(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,11,12,14,13,16,17,19,18)
	MR_init_label1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_path_slots_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i8);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i10);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i11);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_7_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i12);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__count_1_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i14);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i13);
	}
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i17);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i16);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__map__count_1_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i19);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0_i21);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module15)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_r3, 1), 0);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module16)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module17)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module18)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0);
	MR_init_label6(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0,3,5,6,8,14,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__count_1_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_i8);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0_i7);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__intersect_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module19)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0);
	MR_init_label5(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0,3,5,7,13,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0_i6);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module20)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0);
	MR_init_label4(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,18,6,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0_i3);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	}
	MR_np_localcall_lab(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,
		transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0_i18);
MR_def_label(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__fold_4_1);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module21)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0);
	MR_init_label6(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,4,6,7,9,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__smm_common__program_point_init_1_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(set__fold_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module22)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,17,19,23,63,25,29,31,33)
	MR_init_label4(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,64,36,37,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i63);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i63) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i23) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i31) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i64) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i63));
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i19);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i40);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i25);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i40);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i36);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0_i37);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("collect_ite_renaming_in_condition_compound_goal: encountered atomic or unsupported goal", 87);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module23)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module24)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,8,9,11,13,15,17,40,20)
	MR_init_label3(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,21,41,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i15) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i41));
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i20);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i21);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__condition_renaming__this_file_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0_i24);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("collect_ite_renaming_expr: shorthand not handled", 48);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module25)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0);
	MR_init_label6(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_path_slots_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module26)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 1), 0);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_expr_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module27)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,2,3,4,5,7,9,6,10)
	MR_init_label1(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_ite_", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__set_4_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i10);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0_i11);
MR_def_label(transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module28)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module29)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0);
	MR_init_label5(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module30)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0);
	MR_init_label4(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0,24,7,5,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("rbmm.condition_renaming.m", 25);
	MR_r2 = (MR_Word) MR_string_const("collect_ite_annotation_region_set: empty path to condition.", 59);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 1);
	MR_r7 = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_i7);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0_i8);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_set_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_4);
MR_decl_entry(__Unify___list__list_1_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module31)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0);
	MR_init_label7(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,24,3,8,9,6,11,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_ctfield(1, MR_r6, 1);
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_i6);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(0, MR_ctfield(1, MR_r6, 0), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_ctfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(list__append_3_4,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_i8);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_i9);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_i11);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,18);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(set__fold_4_1);
	}
MR_def_label(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_8_0_i24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module32)
	MR_init_entry1(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0);
	MR_init_label8(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,2,3,4,5,6,8,11,10)
	MR_init_label2(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,7,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i2);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i3);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_ite_", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i4);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i5);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i6);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i8);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i7);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i11);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i16);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i16);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0_i16);
MR_def_label(transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module33)
	MR_init_entry1(__Unify___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module34)
	MR_init_entry1(__Compare___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module35)
	MR_init_entry1(__Unify___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__condition_renaming_module36)
	MR_init_entry1(__Compare___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm__condition_renaming_maybe_bunch_0(void)
{
	transform_hlds__rbmm__condition_renaming_module0();
	transform_hlds__rbmm__condition_renaming_module1();
	transform_hlds__rbmm__condition_renaming_module2();
	transform_hlds__rbmm__condition_renaming_module3();
	transform_hlds__rbmm__condition_renaming_module4();
	transform_hlds__rbmm__condition_renaming_module5();
	transform_hlds__rbmm__condition_renaming_module6();
	transform_hlds__rbmm__condition_renaming_module7();
	transform_hlds__rbmm__condition_renaming_module8();
	transform_hlds__rbmm__condition_renaming_module9();
	transform_hlds__rbmm__condition_renaming_module10();
	transform_hlds__rbmm__condition_renaming_module11();
	transform_hlds__rbmm__condition_renaming_module12();
	transform_hlds__rbmm__condition_renaming_module13();
	transform_hlds__rbmm__condition_renaming_module14();
	transform_hlds__rbmm__condition_renaming_module15();
	transform_hlds__rbmm__condition_renaming_module16();
	transform_hlds__rbmm__condition_renaming_module17();
	transform_hlds__rbmm__condition_renaming_module18();
	transform_hlds__rbmm__condition_renaming_module19();
	transform_hlds__rbmm__condition_renaming_module20();
	transform_hlds__rbmm__condition_renaming_module21();
	transform_hlds__rbmm__condition_renaming_module22();
	transform_hlds__rbmm__condition_renaming_module23();
	transform_hlds__rbmm__condition_renaming_module24();
	transform_hlds__rbmm__condition_renaming_module25();
	transform_hlds__rbmm__condition_renaming_module26();
	transform_hlds__rbmm__condition_renaming_module27();
	transform_hlds__rbmm__condition_renaming_module28();
	transform_hlds__rbmm__condition_renaming_module29();
	transform_hlds__rbmm__condition_renaming_module30();
	transform_hlds__rbmm__condition_renaming_module31();
	transform_hlds__rbmm__condition_renaming_module32();
	transform_hlds__rbmm__condition_renaming_module33();
	transform_hlds__rbmm__condition_renaming_module34();
	transform_hlds__rbmm__condition_renaming_module35();
	transform_hlds__rbmm__condition_renaming_module36();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__condition_renaming__init(void);
void mercury__transform_hlds__rbmm__condition_renaming__init_type_tables(void);
void mercury__transform_hlds__rbmm__condition_renaming__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__condition_renaming__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__condition_renaming__init_complexity_procs(void);
#endif

void mercury__transform_hlds__rbmm__condition_renaming__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__condition_renaming_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0,
		transform_hlds__rbmm__condition_renaming__proc_goal_path_regions_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0,
		transform_hlds__rbmm__condition_renaming__goal_path_regions_table_0_0);
	mercury__transform_hlds__rbmm__condition_renaming__init_debugger();
}

void mercury__transform_hlds__rbmm__condition_renaming__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0);
	}
}


void mercury__transform_hlds__rbmm__condition_renaming__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__condition_renaming__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__condition_renaming__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
