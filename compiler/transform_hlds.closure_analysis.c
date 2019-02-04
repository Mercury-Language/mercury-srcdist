/*
** Automatically generated from `closure_analysis.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__closure_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.closure_analysis.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.closure_analysis.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.closure_analysis.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.closure_analysis.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.closure_analysis.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.closure_analysis.c"
#line 49 "transform_hlds.closure_analysis.c"
#include "transform_hlds.closure_analysis.mh"

#line 52 "transform_hlds.closure_analysis.c"
#line 53 "transform_hlds.closure_analysis.c"
#ifndef TRANSFORM_HLDS__CLOSURE_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__CLOSURE_ANALYSIS_DECL_GUARD

#line 57 "transform_hlds.closure_analysis.c"
#line 58 "transform_hlds.closure_analysis.c"

#endif
#line 61 "transform_hlds.closure_analysis.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_info_0,
	mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
MR_decl_label2(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0, 2,3)
MR_decl_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0, 4,13,7)
MR_decl_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0, 4,13,7)
MR_decl_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0, 3,5,1)
MR_decl_label10(transform_hlds__closure_analysis__dump_closure_info_expr_5_0, 4,7,10,12,18,20,22,26,24,103)
MR_decl_label3(transform_hlds__closure_analysis__dump_ho_value_5_0, 2,3,4)
MR_decl_label6(transform_hlds__closure_analysis__dump_ho_values_4_0, 2,8,10,11,12,17)
MR_decl_label10(transform_hlds__closure_analysis__merge_closure_values_3_0, 5,6,3,84,13,12,8,20,19,22)
MR_decl_label1(transform_hlds__closure_analysis__merge_closure_values_3_0, 86)
MR_decl_label10(transform_hlds__closure_analysis__partition_arguments_8_0, 66,3,11,12,16,18,15,21,23,20)
MR_decl_label2(transform_hlds__closure_analysis__partition_arguments_8_0, 9,8)
MR_decl_label10(transform_hlds__closure_analysis__process_goal_6_0, 258,7,3,13,9,21,22,23,25,16)
MR_decl_label10(transform_hlds__closure_analysis__process_goal_6_0, 29,30,31,34,32,41,42,44,45,48)
MR_decl_label10(transform_hlds__closure_analysis__process_goal_6_0, 28,51,52,53,56,50,60,59,63,64)
MR_decl_label10(transform_hlds__closure_analysis__process_goal_6_0, 65,66,67,71,73,74,77,62,83,80)
MR_decl_label10(transform_hlds__closure_analysis__process_goal_6_0, 85,79,94,95,96,98,89,106,110,109)
MR_decl_label10(transform_hlds__closure_analysis__process_goal_6_0, 114,115,104,103,121,122,118,130,133,156)
MR_decl_label1(transform_hlds__closure_analysis__process_goal_6_0, 101)
MR_decl_label5(transform_hlds__closure_analysis__process_module_4_0, 2,3,4,5,6)
MR_decl_label10(transform_hlds__closure_analysis__process_proc_6_0, 2,3,4,5,6,7,8,10,12,15)
MR_decl_label8(transform_hlds__closure_analysis__process_proc_6_0, 16,17,18,19,21,22,23,24)
MR_decl_label1(transform_hlds__closure_analysis__var_has_ho_type_2_0, 3)
MR_decl_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0, 2)
MR_decl_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0, 2)
MR_decl_label4(__Unify___transform_hlds__closure_analysis__closure_values_0_0, 5,19,6,1)
MR_decl_label9(__Compare___transform_hlds__closure_analysis__closure_values_0_0, 30,7,5,11,34,9,26,15,27)
MR_def_extern_entry(transform_hlds__closure_analysis__process_module_4_0)
MR_decl_static(transform_hlds__closure_analysis__process_scc_6_0)
MR_decl_static(transform_hlds__closure_analysis__var_has_ho_type_2_0)
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
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0)
MR_decl_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0)
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0)
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0)
MR_decl_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0)
MR_decl_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__464__1_1_0)
MR_decl_static(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_0 mercury_common_0[9] =
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
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
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_2;
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
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_2 mercury_common_2[12] =
{
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
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
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
MR_COMMON(2,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_TAG_COMMON(0,2,4)
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
MR_TAG_COMMON(0,0,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(2,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_TAG_COMMON(0,2,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_8;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_14;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__merge_closure_infos_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_value_5_0_1;
static const struct mercury_type_3 mercury_common_3[10] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_COMMON(2,3),
MR_COMMON(2,3)
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
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_8,
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
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_10,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_12,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_14,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_COMMON(2,3),
MR_COMMON(2,3)
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
MR_COMMON(2,3),
MR_COMMON(2,3)
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

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_11;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_values_4_0_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,3),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_11,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,3),
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
MR_COMMON(0,7),
MR_COMMON(0,4),
MR_COMMON(0,8),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[10] =
{
{
MR_COMMON(3,1),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_infos_3_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_values_3_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_infos_3_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__464__1_1_0),
0
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(transform_hlds__closure_analysis__insert_unknown_3_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(transform_hlds__closure_analysis__merge_closure_values_3_0),
0
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_5;
static const struct mercury_type_6 mercury_common_6[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(0,4),
MR_COMMON(2,8),
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(0,4),
MR_COMMON(2,8),
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_9,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(0,4),
MR_COMMON(2,8),
MR_COMMON(2,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,7),
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
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,7),
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
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_1;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_13,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,2),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__closure_analysis__process_proc_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,2),
MR_COMMON(0,4)
},
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
	15,
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
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__closure_analysis__field_types_closure_values_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
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
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__closure_analysis__field_types_closure_values_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
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
	15,
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


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_ho_value_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_497",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
497,
"8"
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
425,
"5"
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
120,
"12"
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
119,
"11"
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
466,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_4 = {
{
MR_FUNCTION,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_464",
2,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
464,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__dump_closure_info_expr_5_0_3 = {
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
468,
"50"
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
474,
"83"
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
456,
"7"
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
486,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_14 = {
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
302,
"118"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_13 = {
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
301,
"117"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_12 = {
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
"94"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_11 = {
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
"84"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_10 = {
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
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_9 = {
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
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_8 = {
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
365,
"184"
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
"79"
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
"57"
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
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_4 = {
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
334,
"154"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_3 = {
{
MR_FUNCTION,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_327",
5,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
327,
"145"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_2 = {
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
182,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__closure_analysis__process_goal_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.closure_analysis",
"transform_hlds.closure_analysis",
"lambda_closure_analysis_m_376",
3,
0
},
"transform_hlds.closure_analysis",
"closure_analysis.m",
376,
"190"
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
82,
"8"
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
71,
"12"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module0)
	MR_init_entry1(transform_hlds__closure_analysis__process_module_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__process_module_4_0);
	MR_init_label5(transform_hlds__closure_analysis__process_module_4_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__closure_analysis__process_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__closure_analysis__process_module_4_0_i2);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 72;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__closure_analysis__process_module_4_0_i3);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__closure_analysis__process_module_4_0_i4);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__closure_analysis__process_module_4_0_i5);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__closure_analysis__process_module_4_0_i6);
MR_def_label(transform_hlds__closure_analysis__process_module_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__process_scc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module1)
	MR_init_entry1(transform_hlds__closure_analysis__process_scc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__process_scc_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_scc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__process_scc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__process_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl2_6_2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__var_has_ho_type_2_0);
	MR_init_label1(transform_hlds__closure_analysis__var_has_ho_type_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_has_ho_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__var_has_ho_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__closure_analysis__var_has_ho_type_2_0_i3);
MR_def_label(transform_hlds__closure_analysis__var_has_ho_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(parse_tree__prog_type__type_is_higher_order_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module3)
	MR_init_entry1(transform_hlds__closure_analysis__partition_arguments_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__partition_arguments_8_0);
	MR_init_label10(transform_hlds__closure_analysis__partition_arguments_8_0,66,3,11,12,16,18,15,21,23,20)
	MR_init_label2(transform_hlds__closure_analysis__partition_arguments_8_0,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_arguments'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__partition_arguments_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i8);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i11);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i12);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i16);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i15);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i18);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i66);
	}
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i21);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i20);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		transform_hlds__closure_analysis__partition_arguments_8_0_i23);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i66);
	}
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i66);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__closure_analysis__partition_arguments_8_0_i66);
MR_def_label(transform_hlds__closure_analysis__partition_arguments_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.closure_analysis", 31);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.closure_analysis.partition_arguments\'/8", 65);
	MR_r3 = (MR_Word) MR_string_const("unequal length lists.", 21);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module4)
	MR_init_entry1(transform_hlds__closure_analysis__insert_unknown_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__insert_unknown_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_unknown'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__insert_unknown_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(map__det_insert_from_assoc_list_3_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(assoc_list__keys_and_values_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(parse_tree__set_of_var__fold_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_ho_values_3_0);
MR_decl_entry(map__union_4_1);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module5)
	MR_init_entry1(transform_hlds__closure_analysis__process_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__process_goal_6_0);
	MR_init_label10(transform_hlds__closure_analysis__process_goal_6_0,258,7,3,13,9,21,22,23,25,16)
	MR_init_label10(transform_hlds__closure_analysis__process_goal_6_0,29,30,31,34,32,41,42,44,45,48)
	MR_init_label10(transform_hlds__closure_analysis__process_goal_6_0,28,51,52,53,56,50,60,59,63,64)
	MR_init_label10(transform_hlds__closure_analysis__process_goal_6_0,65,66,67,71,73,74,77,62,83,80)
	MR_init_label10(transform_hlds__closure_analysis__process_goal_6_0,85,79,94,95,96,98,89,106,110,109)
	MR_init_label10(transform_hlds__closure_analysis__process_goal_6_0,114,115,104,103,121,122,118,130,133,156)
	MR_init_label1(transform_hlds__closure_analysis__process_goal_6_0,101)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__process_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_r5, 4);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i7);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_insert_from_assoc_list_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i133);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i9);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__closure_analysis__process_goal_6_0_i258);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(4) = MR_tfield(3, MR_r5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_r5, 2);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__closure_analysis__process_goal_6_0_i13);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i16);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i21);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i22);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i23);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i25);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i28);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(8) = MR_r4;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i29);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i30);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__partition_arguments_8_0,
		transform_hlds__closure_analysis__process_goal_6_0_i31);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i32);
	}
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(0, MR_sv(7), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i34);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i41);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i42);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__fold_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i44);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_ho_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i45);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__set_of_var__fold_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i48);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i50);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(8) = MR_r4;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i51);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i52);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	}
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i53);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__union_4_1,
		transform_hlds__closure_analysis__process_goal_6_0_i56);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_sv(7);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_tfield(3, MR_r2, 4) = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i59);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(8) = MR_r4;
	MR_r3 = MR_body((MR_Integer) MR_r5, (MR_Integer) 0);
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i60);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i62);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__closure_analysis__process_goal_6_0_i63);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i64);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i65);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i66);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__partition_arguments_8_0,
		transform_hlds__closure_analysis__process_goal_6_0_i67);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i71);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__fold_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i73);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_ho_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i74);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__set_of_var__fold_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i77);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i79);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_r5;
	MR_r6 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 1);
	MR_sv(4) = MR_tempr1;
	MR_tempr7 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr7, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i80);
	}
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i83);
	}
	MR_tempr2 = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr7;
	MR_tempr3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_tempr5 = MR_r6;
	MR_r2 = MR_tempr4;
	MR_decr_sp(11);
	MR_proceed();
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i80);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r3;
	MR_tempr2 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_tempr4 = MR_r6;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r6;
	MR_np_localcall_lab(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_goal_6_0_i85);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i89);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i94);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i95);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_goal_6_0_i96);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i98);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i101);
	}
	MR_r6 = MR_tfield(1, MR_r5, 3);
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i103);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__var_has_ho_type_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i106);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i104);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__closure_analysis__var_has_ho_type_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i110);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i109);
	}
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i114);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.closure_analysis", 31);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.closure_analysis.process_goal\'/6", 58);
	MR_r3 = (MR_Word) MR_string_const("not a higher-order var", 22);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__closure_analysis__process_goal_6_0_i114);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i115);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i133);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i118);
	}
	MR_r2 = MR_tfield(0, MR_r6, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i156);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r6, 0);
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		transform_hlds__closure_analysis__process_goal_6_0_i121);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		transform_hlds__closure_analysis__process_goal_6_0_i122);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r5, 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i133);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_goal_6_0_i156);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__var_has_ho_type_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_r6, 2);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__closure_analysis__process_goal_6_0_i130);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__closure_analysis__process_goal_6_0_i133);
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__process_goal_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.closure_analysis", 31);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.closure_analysis.process_goal\'/6", 58);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_ho_values_1_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(parse_tree__prog_out__write_context_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module6)
	MR_init_entry1(transform_hlds__closure_analysis__dump_ho_values_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__dump_ho_values_4_0);
	MR_init_label6(transform_hlds__closure_analysis__dump_ho_values_4_0,2,8,10,11,12,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_ho_values'/4 mode 0 */
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i8);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_ho_values_4_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i10);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i11);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__closure_analysis__dump_ho_values_4_0_i12);
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_ho_value_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
MR_def_label(transform_hlds__closure_analysis__dump_ho_values_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module7)
	MR_init_entry1(transform_hlds__closure_analysis__dump_closure_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__dump_closure_info_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_closure_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__dump_closure_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_closure_info_expr_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module8)
	MR_init_entry1(transform_hlds__closure_analysis__dump_closure_info_expr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__dump_closure_info_expr_5_0);
	MR_init_label10(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,4,7,10,12,18,20,22,26,24,103)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_closure_info_expr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__dump_closure_info_expr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i103);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i4);
	}
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
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i7);
	}
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
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_ho_values_4_0);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_closure_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_r2, 4);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(3, MR_r2, 3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_r2, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i18);
	}
	MR_r2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_closure_info_4_0);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_ho_values_4_0);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i22);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_tailcall_ent(transform_hlds__closure_analysis__dump_closure_info_4_0);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i26);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__dump_closure_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__dump_closure_info_expr_5_0_i103);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.closure_analysis", 31);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.closure_analysis.dump_closure_info_expr\'/5", 68);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,103)
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
MR_decl_entry(fn__parse_tree__set_of_var__filter_2_0);
MR_decl_entry(hlds__passes_aux__write_proc_progress_message_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module9)
	MR_init_entry1(transform_hlds__closure_analysis__process_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__process_proc_6_0);
	MR_init_label10(transform_hlds__closure_analysis__process_proc_6_0,2,3,4,5,6,7,8,10,12,15)
	MR_init_label8(transform_hlds__closure_analysis__process_proc_6_0,16,17,18,19,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__process_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__closure_analysis__process_proc_6_0_i2);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i3);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i4);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i5);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__closure_analysis__process_proc_6_0_i6);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		transform_hlds__closure_analysis__process_proc_6_0_i7);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__partition_arguments_8_0,
		transform_hlds__closure_analysis__process_proc_6_0_i8);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__closure_analysis__var_has_ho_type_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__filter_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i10);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__closure_analysis__process_proc_6_0_i12);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__fold_4_0,
		transform_hlds__closure_analysis__process_proc_6_0_i15);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Analysing closures in ", 24);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_5_0,
		transform_hlds__closure_analysis__process_proc_6_0_i16);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i17);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__process_goal_6_0,
		transform_hlds__closure_analysis__process_proc_6_0_i18);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__closure_analysis__process_proc_6_0_i19);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__process_proc_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
	}
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i22);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__dump_closure_info_expr_5_0,
		transform_hlds__closure_analysis__process_proc_6_0_i23);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		transform_hlds__closure_analysis__process_proc_6_0_i24);
MR_def_label(transform_hlds__closure_analysis__process_proc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module10)
	MR_init_entry1(transform_hlds__closure_analysis__merge_closure_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__merge_closure_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_closure_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__merge_closure_infos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__union_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module11)
	MR_init_entry1(transform_hlds__closure_analysis__merge_closure_values_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__merge_closure_values_3_0);
	MR_init_label10(transform_hlds__closure_analysis__merge_closure_values_3_0,5,6,3,84,13,12,8,20,19,22)
	MR_init_label1(transform_hlds__closure_analysis__merge_closure_values_3_0,86)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_closure_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__merge_closure_values_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(2, MR_r2, 0);
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i84);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i13);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i20);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i86);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__merge_closure_values_3_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i20);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__closure_analysis__merge_closure_values_3_0_i22);
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(transform_hlds__closure_analysis__merge_closure_values_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(set__fold_4_2);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module12)
	MR_init_entry1(transform_hlds__closure_analysis__dump_ho_value_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__dump_ho_value_5_0);
	MR_init_label3(transform_hlds__closure_analysis__dump_ho_value_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_ho_value'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__dump_ho_value_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		transform_hlds__closure_analysis__dump_ho_value_5_0_i2);
MR_def_label(transform_hlds__closure_analysis__dump_ho_value_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" =\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__closure_analysis__dump_ho_value_5_0_i3);
MR_def_label(transform_hlds__closure_analysis__dump_ho_value_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__closure_analysis__dump_ho_value_5_0_i4);
MR_def_label(transform_hlds__closure_analysis__dump_ho_value_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,9);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__fold_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module13)
	MR_init_entry1(__Unify___transform_hlds__closure_analysis__closure_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__closure_analysis__closure_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module14)
	MR_init_entry1(__Compare___transform_hlds__closure_analysis__closure_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__closure_analysis__closure_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module15)
	MR_init_entry1(__Unify___transform_hlds__closure_analysis__closure_values_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__closure_analysis__closure_values_0_0);
	MR_init_label4(__Unify___transform_hlds__closure_analysis__closure_values_0_0,5,19,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__closure_analysis__closure_values_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__closure_analysis__closure_values_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___transform_hlds__closure_analysis__closure_values_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module16)
	MR_init_entry1(__Compare___transform_hlds__closure_analysis__closure_values_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__closure_analysis__closure_values_0_0);
	MR_init_label9(__Compare___transform_hlds__closure_analysis__closure_values_0_0,30,7,5,11,34,9,26,15,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__closure_analysis__closure_values_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i7);
	}
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i26);
	}
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i15);
	}
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__closure_analysis__closure_values_0_0_i34);
	}
MR_def_label(__Compare___transform_hlds__closure_analysis__closure_values_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module17)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0);
	MR_init_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0,3,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_goal__376__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0_i3);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0_i5);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__376__1_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module18)
	MR_init_entry1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0);
	MR_init_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__process_goal__327__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__process_goal_6_0,
		fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0_i2);
MR_def_label(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__327__1_4_0,2)
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

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module19)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0);
	MR_init_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,4,13,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_goal__257__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i4);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i7);
	}
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__257__1_4_0_i13);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module20)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0);
	MR_init_label3(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,4,13,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_goal__217__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__closure_analysis, closure_values);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i4);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i7);
	}
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__closure_analysis__IntroducedFrom__pred__process_goal__217__1_4_0_i13);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module21)
	MR_init_entry1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0);
	MR_init_label1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__process_goal__270__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__closure_analysis__process_goal_6_0,
		fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0_i2);
MR_def_label(fn__transform_hlds__closure_analysis__IntroducedFrom__func__process_goal__270__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__closure_analysis_module22)
	MR_init_entry1(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__464__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__464__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__dump_closure_info_expr__464__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__464__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(transform_hlds__closure_analysis_module23)
	MR_init_entry1(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0);
	MR_init_label2(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_ho_value__497__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0_i2);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0_i3);
MR_def_label(transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__497__1_3_0,3)
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__closure_analysis__init(void);
void mercury__transform_hlds__closure_analysis__init_type_tables(void);
void mercury__transform_hlds__closure_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__closure_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__closure_analysis__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__closure_analysis__init_threadscope_string_table(void);
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
		mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_info_0,
		transform_hlds__closure_analysis__closure_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0,
		transform_hlds__closure_analysis__closure_values_0_0);
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
		&mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
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

void mercury__transform_hlds__closure_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__closure_analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__closure_analysis__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__closure_analysis__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
