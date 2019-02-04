/*
** Automatically generated from `closure_analysis.m'
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
INIT mercury__transform_hlds__closure_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.closure_analysis.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.closure_analysis.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.closure_analysis.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.closure_analysis.c"
#line 40 "transform_hlds.closure_analysis.c"
#include "transform_hlds.closure_analysis.mh"

#line 43 "transform_hlds.closure_analysis.c"
#line 44 "transform_hlds.closure_analysis.c"
#ifndef TRANSFORM_HLDS__CLOSURE_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__CLOSURE_ANALYSIS_DECL_GUARD

#line 48 "transform_hlds.closure_analysis.c"
#line 49 "transform_hlds.closure_analysis.c"

#endif
#line 52 "transform_hlds.closure_analysis.c"

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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0,
	mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_info_0;
MR_decl_label2(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0, 2,3)
MR_decl_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0, 3,13,8)
MR_decl_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0, 3,13,8)
MR_decl_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0, 3,5,1)
MR_decl_label8(transform_hlds__closure_analysis__dump_closure_info_expr_5_0, 7,9,11,13,40,16,18,20)
MR_decl_label4(transform_hlds__closure_analysis__dump_closure_info_expr_5_0, 22,41,25,38)
MR_decl_label2(transform_hlds__closure_analysis__dump_ho_value_5_0, 2,3)
MR_decl_label6(transform_hlds__closure_analysis__dump_ho_values_4_0, 2,6,8,9,10,12)
MR_decl_label8(transform_hlds__closure_analysis__merge_closure_values_3_0, 21,20,11,66,17,65,4,68)
MR_decl_label2(transform_hlds__closure_analysis__merge_closure_values_3_0, 8,69)
MR_decl_label8(transform_hlds__closure_analysis__partition_arguments_8_0, 59,3,10,11,15,17,14,20)
MR_decl_label3(transform_hlds__closure_analysis__partition_arguments_8_0, 22,9,8)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 108,4,7,10,11,124,15,125)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 20,26,28,23,30,31,32,18)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 89,121,37,38,39,40,41,42)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 43,44,122,47,48,49,52,50)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 53,54,55,56,57,123,59,60)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 61,62,63,64,65,66,67,68)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 69,70,71,72,73,74,75,76)
MR_decl_label8(transform_hlds__closure_analysis__process_goal_6_0, 77,78,79,80,81,82,83,84)
MR_decl_label4(transform_hlds__closure_analysis__process_module_4_0, 2,3,4,5)
MR_decl_label8(transform_hlds__closure_analysis__process_proc_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__closure_analysis__process_proc_6_0, 10,11,12,13,14,15,17,18)
MR_decl_label2(transform_hlds__closure_analysis__process_proc_6_0, 19,20)
MR_decl_label1(transform_hlds__closure_analysis__var_has_ho_type_2_0, 2)
MR_decl_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0, 2)
MR_decl_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0, 2)
MR_decl_label4(__Unify___transform_hlds__closure_analysis__closure_values_0_0, 10,6,22,1)
MR_decl_label6(__Compare___transform_hlds__closure_analysis__closure_values_0_0, 36,12,6,31,11,9)
MR_def_extern_entry(transform_hlds__closure_analysis__process_module_4_0)
MR_decl_static(transform_hlds__closure_analysis__process_scc_6_0)
MR_decl_static(transform_hlds__closure_analysis__var_has_ho_type_2_0)
MR_decl_static(fn__transform_hlds__closure_analysis__this_file_0_0)
MR_decl_static(transform_hlds__closure_analysis__partition_arguments_8_0)
MR_decl_static(transform_hlds__closure_analysis__insert_unknown_3_0)
MR_decl_static(transform_hlds__closure_analysis__process_goal_6_0)
MR_decl_static(transform_hlds__closure_analysis__dump_ho_values_4_0)
MR_decl_static(transform_hlds__closure_analysis__dump_closure_info_4_0)
MR_decl_static(transform_hlds__closure_analysis__dump_closure_info_expr_5_0)
MR_decl_static(transform_hlds__closure_analysis__process_proc_6_0)
MR_decl_static(transform_hlds__closure_analysis__merge_closure_infos_3_0)
MR_decl_static(transform_hlds__closure_analysis__merge_closure_values_3_0)
MR_decl_static(transform_hlds__closure_analysis__dump_ho_value_5_0)
MR_decl_static(__Unify___transform_hlds__closure_analysis__closure_info_0_0)
MR_decl_static(__Compare___transform_hlds__closure_analysis__closure_info_0_0)
MR_decl_static(__Unify___transform_hlds__closure_analysis__closure_values_0_0)
MR_decl_static(__Compare___transform_hlds__closure_analysis__closure_values_0_0)
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0)
MR_decl_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0)
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0)
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0)
MR_decl_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0)
MR_decl_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__445__1_1_0)
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_0 mercury_common_0[7] =
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
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_module_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_scc_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_9;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_module_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_scc_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_9,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_2 mercury_common_2[12] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,2),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,7)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_TAG_COMMON(0,2,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(2,7)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_TAG_COMMON(0,2,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_1;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_COMMON(0,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_8;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_14;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__merge_closure_infos_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_value_5_0_1;
static const struct mercury_type_4 mercury_common_4[10] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(2,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_11,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,2),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_13,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,2),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_14,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__merge_closure_infos_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values),
MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_value_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[10] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_infos_3_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_infos_3_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_values_3_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__445__1_1_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(4,8),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_values_3_0),
0
},
{
MR_COMMON(4,9),
MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_5;
static const struct mercury_type_6 mercury_common_6[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,2),
MR_COMMON(0,4),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,2),
MR_COMMON(0,4),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,2),
MR_COMMON(0,4),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_values_4_0_1;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_10,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_12,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(2,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_values_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,6),
MR_COMMON(0,4),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0 = {
	"unknown",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__closure_analysis__field_types_closure_values_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1 = {
	"partial",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__closure_analysis__field_types_closure_values_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__closure_analysis__field_types_closure_values_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2 = {
	"exclusive",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__closure_analysis__field_types_closure_values_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[] = {
	&mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[] = {
	&mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[] = {
	&mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2

};

const MR_DuPtagLayout mercury_data_transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__closure_analysis__du_name_ordered_closure_values_0[] = {
	&mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2,
	&mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1,
	&mercury_data_transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0
};

const MR_Integer mercury_data_transform_hlds__closure_analysis__functor_number_map_closure_values_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__closure_analysis__closure_values_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__closure_analysis__closure_values_0_0)),
	"transform_hlds.closure_analysis",
	"closure_values",
	{ (void *)mercury_data_transform_hlds__closure_analysis__du_name_ordered_closure_values_0 },
	{ (void *)mercury_data_transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0 },
	3,
	4,
	mercury_data_transform_hlds__closure_analysis__functor_number_map_closure_values_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__closure_analysis__closure_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__closure_analysis__closure_info_0_0)),
	"transform_hlds.closure_analysis",
	"closure_info",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_module_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"process_scc",
6,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
72,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_scc_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"process_proc",
6,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
83,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"var_has_ho_type",
2,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
300,
"d5;c9;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"insert_unknown",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
301,
"d5;c9;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_217",
4,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
204,
"d2;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_4 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"insert_unknown",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
226,
"d2;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_5 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_257",
4,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
244,
"d3;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_6 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_257",
4,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
244,
"d3;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_7 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"insert_unknown",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
266,
"d3;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_8 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_359",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
359,
"d10;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_9 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"process_goal",
6,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
181,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_10 = {
{
MR_FUNCTION,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_325",
5,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
325,
"d6;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_11 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"merge_closure_infos",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
332,
"d6;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_12 = {
{
MR_FUNCTION,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_270",
5,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
270,
"d4;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_13 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"merge_closure_infos",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
278,
"d4;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_14 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"merge_closure_values",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
348,
"d9;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_values_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"dump_ho_value",
5,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
468,
"d1;c6;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"dump_closure_info",
4,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
437,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"dump_closure_info",
4,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
455,
"d10;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_3 = {
{
MR_FUNCTION,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_445",
2,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
445,
"d5;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_4 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"dump_closure_info",
4,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
447,
"d5;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_5 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"dump_closure_info",
4,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
449,
"d6;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"var_has_ho_type",
2,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
120,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"insert_unknown",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
121,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__merge_closure_infos_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"merge_closure_values",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
406,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_value_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_479",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
479,
"d1;c12;"
};

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module0)
	MR_init_entry1(transform_hlds__closure_analysis__process_module_4_0);
	MR_init_label4(transform_hlds__closure_analysis__process_module_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__closure_analysis__process_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 60;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__closure_analysis__process_module_4_0_i2);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__closure_analysis__process_module_4_0_i3);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__closure_analysis__process_module_4_0_i4);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__closure_analysis__process_module_4_0_i5);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__process_scc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module1)
	MR_init_entry1(transform_hlds__closure_analysis__process_scc_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__process_scc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__process_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module2)
	MR_init_entry1(transform_hlds__closure_analysis__var_has_ho_type_2_0);
	MR_init_label1(transform_hlds__closure_analysis__var_has_ho_type_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__var_has_ho_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__closure_analysis__var_has_ho_type_2_0_i2);
MR_def_label(transform_hlds__closure_analysis__var_has_ho_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(parse_tree__prog_type__type_is_higher_order_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module3)
	MR_init_entry1(fn__transform_hlds__closure_analysis__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__closure_analysis__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("closure_analysis.m", 18);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module4)
	MR_init_entry1(transform_hlds__closure_analysis__partition_arguments_8_0);
	MR_init_label8(transform_hlds__closure_analysis__partition_arguments_8_0,59,3,10,11,15,17,14,20)
	MR_init_label3(transform_hlds__closure_analysis__partition_arguments_8_0,22,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__partition_arguments_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i8);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i10);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i11);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i15);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i17);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i59);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i20);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i22);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i59);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i59);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("closure_analysis.m", 18);
	MR_r2 = (MR_Word) MR_string_const("partition_arguments/7 unequal length lists.", 43);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module5)
	MR_init_entry1(transform_hlds__closure_analysis__insert_unknown_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__insert_unknown_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(set__fold_4_1);
MR_decl_entry(hlds__hlds_goal__goal_info_set_ho_values_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(svmap__det_insert_from_assoc_list_3_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(assoc_list__keys_and_values_3_0);
MR_decl_entry(map__union_4_1);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module6)
	MR_init_entry1(transform_hlds__closure_analysis__process_goal_6_0);
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,108,4,7,10,11,124,15,125)
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,20,26,28,23,30,31,32,18)
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,89,121,37,38,39,40,41,42)
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,43,44,122,47,48,49,52,50)
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,53,54,55,56,57,123,59,60)
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,61,62,63,64,65,66,67,68)
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,69,70,71,72,73,74,75,76)
	MR_init_label8(transform_hlds__closure_analysis__process_goal_6_0,77,78,79,80,81,82,83,84)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__process_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i121) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i122) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i123));
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r5, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i124) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i125) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i89));
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r6, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i89);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_ctfield(0, MR_r6, 0);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		transform_hlds__closure_analysis__process_goal_6_0_i10);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		transform_hlds__closure_analysis__process_goal_6_0_i11);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r5, 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i32);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__var_has_ho_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_r6, 2);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i15);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i32);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__var_has_ho_type_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i20);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__closure_analysis__var_has_ho_type_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i26);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i23);
	}
	MR_np_call_localret_ent(fn__transform_hlds__closure_analysis__this_file_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i28);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("not a higher-order var in process_goal_2", 40);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i30);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i31);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i32);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_sv(11) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__closure_analysis__process_goal_6_0_i37);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i38);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i39);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i40);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__closure_analysis__partition_arguments_8_0,
		transform_hlds__closure_analysis__process_goal_6_0_i41);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i42);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i43);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_ho_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i44);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i57);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i47);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i48);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__closure_analysis__partition_arguments_8_0,
		transform_hlds__closure_analysis__process_goal_6_0_i49);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i50);
	}
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_ctfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i52);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i53);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(9);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i54);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i55);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_ho_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i56);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i57);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i59) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i62) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i64) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i69) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i74) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i76) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i78) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i83));
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r5, 4);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i60);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(svmap__det_insert_from_assoc_list_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i61);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i108);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r5, 1);
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_r5, 2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__closure_analysis__process_goal_6_0_i63);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i65);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i66);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i67);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i68);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i70);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i71);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i72);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i73);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i75);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i77);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(10) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i79);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i80);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i81);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_np_call_localret_ent(map__union_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i82);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__closure_analysis__this_file_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i84);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand/1 goal during closure analysis.", 41);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_ho_values_1_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(parse_tree__prog_out__write_context_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module7)
	MR_init_entry1(transform_hlds__closure_analysis__dump_ho_values_4_0);
	MR_init_label6(transform_hlds__closure_analysis__dump_ho_values_4_0,2,6,8,9,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__dump_ho_values_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_ho_values_1_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i2);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i6);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_ho_values_4_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i8);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i9);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i10);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_ho_value_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module8)
	MR_init_entry1(transform_hlds__closure_analysis__dump_closure_info_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__dump_closure_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_closure_info_expr_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module9)
	MR_init_entry1(transform_hlds__closure_analysis__dump_closure_info_expr_5_0);
	MR_init_label8(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,7,9,11,13,40,16,18,20)
	MR_init_label4(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,22,41,25,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__dump_closure_info_expr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i9));
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_ho_values_4_0);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i18) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i20) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i22) MR_AND
		MR_LABEL_AP(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i41));
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_closure_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_closure_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i16);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_closure_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_closure_info_4_0);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_closure_info_4_0);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_closure_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr4 = MR_r2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr4, 4);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(3, MR_tempr4, 3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr4, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__closure_analysis__this_file_0_0,
		transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i25);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand goal encountered.\n", 28);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(fn__set__filter_2_0);
MR_decl_entry(hlds__passes_aux__write_proc_progress_message_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module10)
	MR_init_entry1(transform_hlds__closure_analysis__process_proc_6_0);
	MR_init_label8(transform_hlds__closure_analysis__process_proc_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__closure_analysis__process_proc_6_0,10,11,12,13,14,15,17,18)
	MR_init_label2(transform_hlds__closure_analysis__process_proc_6_0,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__process_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__closure_analysis__process_proc_6_0_i2);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i3);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i4);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i5);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__closure_analysis__process_proc_6_0_i6);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__closure_analysis__process_proc_6_0_i7);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__closure_analysis__partition_arguments_8_0,
		transform_hlds__closure_analysis__process_proc_6_0_i8);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__var_has_ho_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i9);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_proc_6_0_i10);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__closure_analysis__process_proc_6_0_i11);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Analysing closures in ", 24);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_5_0,
		transform_hlds__closure_analysis__process_proc_6_0_i12);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i13);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_proc_6_0_i14);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__closure_analysis__process_proc_6_0_i15);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_proc_6_0_i17);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i18);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,
		transform_hlds__closure_analysis__process_proc_6_0_i19);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i20);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module11)
	MR_init_entry1(transform_hlds__closure_analysis__merge_closure_infos_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__merge_closure_infos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,8);
	MR_np_tailcall_ent(map__union_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module12)
	MR_init_entry1(transform_hlds__closure_analysis__merge_closure_values_3_0);
	MR_init_label8(transform_hlds__closure_analysis__merge_closure_values_3_0,21,20,11,66,17,65,4,68)
	MR_init_label2(transform_hlds__closure_analysis__merge_closure_values_3_0,8,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__merge_closure_values_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i11);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i20);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(2, MR_r2, 0);
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i65);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i17);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i8);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i68);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i69);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i8);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i8);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(io__format_4_0);
MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module13)
	MR_init_entry1(transform_hlds__closure_analysis__dump_ho_value_5_0);
	MR_init_label2(transform_hlds__closure_analysis__dump_ho_value_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__dump_ho_value_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		transform_hlds__closure_analysis__dump_ho_value_5_0_i2);
MR_def_label(transform_hlds__closure_analysis__dump_ho_value_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%s =\n", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		transform_hlds__closure_analysis__dump_ho_value_5_0_i3);
MR_def_label(transform_hlds__closure_analysis__dump_ho_value_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,9);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__fold_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module14)
	MR_init_entry1(__Unify___transform_hlds__closure_analysis__closure_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__closure_analysis__closure_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
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

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module15)
	MR_init_entry1(__Compare___transform_hlds__closure_analysis__closure_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__closure_analysis__closure_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module16)
	MR_init_entry1(__Unify___transform_hlds__closure_analysis__closure_values_0_0);
	MR_init_label4(__Unify___transform_hlds__closure_analysis__closure_values_0_0,10,6,22,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__closure_analysis__closure_values_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i22);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module17)
	MR_init_entry1(__Compare___transform_hlds__closure_analysis__closure_values_0_0);
	MR_init_label6(__Compare___transform_hlds__closure_analysis__closure_values_0_0,36,12,6,31,11,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__closure_analysis__closure_values_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i11);
	}
	}
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i31);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i11);
	}
	}
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_r3 = MR_const_mask_field(MR_r5, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module18)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0);
	MR_init_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0,3,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0_i3);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0_i5);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__359__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module19)
	MR_init_entry1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0);
	MR_init_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__process_goal_6_0,
		fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0_i2);
MR_def_label(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__325__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module20)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0);
	MR_init_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,3,13,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i3);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i13);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i13);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i8);
	}
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_ctfield(2, MR_tempr1, 0);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module21)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0);
	MR_init_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,3,13,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i3);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i13);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i13);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i8);
	}
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_ctfield(2, MR_tempr1, 0);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module22)
	MR_init_entry1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0);
	MR_init_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__process_goal_6_0,
		fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0_i2);
MR_def_label(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module23)
	MR_init_entry1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__445__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__445__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module24)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0);
	MR_init_label2(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0_i2);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0_i3);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__479__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__closure_analysis_maybe_bunch_0(void)
{
	transform_hlds__closure_analysis_module0();
	transform_hlds__closure_analysis_module1();
	transform_hlds__closure_analysis_module2();
	transform_hlds__closure_analysis_module3();
	transform_hlds__closure_analysis_module4();
	transform_hlds__closure_analysis_module5();
	transform_hlds__closure_analysis_module6();
	transform_hlds__closure_analysis_module7();
	transform_hlds__closure_analysis_module8();
	transform_hlds__closure_analysis_module9();
	transform_hlds__closure_analysis_module10();
	transform_hlds__closure_analysis_module11();
	transform_hlds__closure_analysis_module12();
	transform_hlds__closure_analysis_module13();
	transform_hlds__closure_analysis_module14();
	transform_hlds__closure_analysis_module15();
	transform_hlds__closure_analysis_module16();
	transform_hlds__closure_analysis_module17();
	transform_hlds__closure_analysis_module18();
	transform_hlds__closure_analysis_module19();
	transform_hlds__closure_analysis_module20();
	transform_hlds__closure_analysis_module21();
	transform_hlds__closure_analysis_module22();
	transform_hlds__closure_analysis_module23();
	transform_hlds__closure_analysis_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__closure_analysis__init(void);
void mercury__transform_hlds__closure_analysis__init_type_tables(void);
void mercury__transform_hlds__closure_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__closure_analysis__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__closure_analysis__init_complexity_procs(void);
#endif

void mercury__transform_hlds__closure_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__closure_analysis_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0,
		transform_hlds__closure_analysis__closure_values_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_info_0,
		transform_hlds__closure_analysis__closure_info_0_0);
	mercury__transform_hlds__closure_analysis__init_debugger();
}

void mercury__transform_hlds__closure_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_info_0);
	}
}


void mercury__transform_hlds__closure_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__closure_analysis__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__closure_analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
