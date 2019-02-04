/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__cse_detection__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.cse_detection.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "check_hlds.cse_detection.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.cse_detection.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.cse_detection.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.cse_detection.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.cse_detection.c"
#line 49 "check_hlds.cse_detection.c"
#include "check_hlds.cse_detection.mh"

#line 52 "check_hlds.cse_detection.c"
#line 53 "check_hlds.cse_detection.c"
#ifndef CHECK_HLDS__CSE_DETECTION_DECL_GUARD
#define CHECK_HLDS__CSE_DETECTION_DECL_GUARD

#line 57 "check_hlds.cse_detection.c"
#line 58 "check_hlds.cse_detection.c"

#endif
#line 61 "check_hlds.cse_detection.c"

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
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0,
	mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0;
MR_decl_label4(check_hlds__cse_detection__common_deconstruct_2_7_0, 39,5,7,1)
MR_decl_label4(check_hlds__cse_detection__common_deconstruct_cases_2_7_0, 40,5,8,1)
MR_decl_label6(check_hlds__cse_detection__create_parallel_subterms_7_0, 25,4,5,7,8,12)
MR_decl_label9(check_hlds__cse_detection__detect_cse_in_cases_10_0, 63,4,3,9,11,12,14,18,6)
MR_decl_label4(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0, 19,4,6,8)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_conj_7_0, 37,4,6,7,8,11,9,14)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_disj_8_0, 85,4,3,7,8,10,19,20,22,14)
MR_decl_label2(check_hlds__cse_detection__detect_cse_in_disj_8_0, 15,6)
MR_decl_label1(check_hlds__cse_detection__detect_cse_in_goal_6_0, 2)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0, 4,3,8,9,5,13,12,147,19,21)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0, 15,24,26,23,62,29,32,28,38,39)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0, 41,37,44,43,151,49,51,52)
MR_decl_label3(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0, 2,4,5)
MR_decl_label4(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0, 18,4,5,7)
MR_decl_label9(check_hlds__cse_detection__detect_cse_in_ite_11_0, 76,4,3,7,8,12,15,19,6)
MR_decl_label7(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0, 2,4,5,6,7,8,9)
MR_decl_label1(check_hlds__cse_detection__detect_cse_in_module_2_0, 2)
MR_decl_label6(check_hlds__cse_detection__detect_cse_in_preds_3_0, 13,3,4,5,6,7)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0, 83,2,3,5,6,7,8,4,9,10)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0, 11,12,13,14,15,16,17,18,19,21)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0, 24,25,26,62,28,23,30,31,32,33)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0, 34,35,36,39,40,22,42,43,44,45)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0, 46,47,48,49,50,51,52,69,54,55)
MR_decl_label1(check_hlds__cse_detection__detect_cse_in_proc_4_0, 56)
MR_decl_label10(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0, 2,3,4,5,6,8,10,11,12,13)
MR_decl_label3(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0, 14,15,16)
MR_decl_label3(check_hlds__cse_detection__detect_cse_in_procs_4_0, 10,3,4)
MR_decl_label10(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0, 9,8,12,13,15,17,4,3,77,23)
MR_decl_label2(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0, 26,25)
MR_decl_label8(check_hlds__cse_detection__find_merged_tvars_6_0, 2,3,6,8,10,12,18,11)
MR_decl_label8(check_hlds__cse_detection__find_similar_deconstruct_5_0, 7,10,11,12,13,2,15,1)
MR_decl_label5(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0, 2,3,6,8,4)
MR_decl_label4(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0, 7,8,2,3)
MR_decl_label5(check_hlds__cse_detection__pair_subterms_4_0, 29,4,6,5,9)
MR_decl_label10(check_hlds__cse_detection__update_existential_data_structures_4_0, 4,5,6,7,10,12,14,16,17,18)
MR_decl_label3(check_hlds__cse_detection__update_existential_data_structures_4_0, 19,20,22)
MR_decl_label5(__Unify___check_hlds__cse_detection__cse_info_0_0, 4,7,9,13,1)
MR_decl_label6(__Unify___check_hlds__cse_detection__cse_state_0_0, 5,22,6,8,13,1)
MR_decl_label6(__Compare___check_hlds__cse_detection__cse_info_0_0, 3,2,5,10,14,50)
MR_decl_label10(__Compare___check_hlds__cse_detection__cse_state_0_0, 7,5,11,50,9,40,14,41,15,17)
MR_decl_label2(__Compare___check_hlds__cse_detection__cse_state_0_0, 23,32)
MR_decl_static(check_hlds__cse_detection__common_deconstruct_2_7_0)
MR_decl_static(check_hlds__cse_detection__update_existential_data_structures_4_0)
MR_decl_static(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0)
MR_decl_static(check_hlds__cse_detection__common_deconstruct_cases_2_7_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_goal_6_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_conj_7_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_disj_8_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_cases_10_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_ite_11_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0)
MR_def_extern_entry(check_hlds__cse_detection__detect_cse_in_proc_4_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_procs_4_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_preds_3_0)
MR_def_extern_entry(check_hlds__cse_detection__detect_cse_in_module_2_0)
MR_decl_static(check_hlds__cse_detection__create_parallel_subterms_7_0)
MR_decl_static(check_hlds__cse_detection__pair_subterms_4_0)
MR_decl_static(check_hlds__cse_detection__find_similar_deconstruct_5_0)
MR_decl_static(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0)
MR_decl_static(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0)
MR_decl_static(check_hlds__cse_detection__find_merged_tvars_6_0)
MR_decl_static(__Unify___check_hlds__cse_detection__cse_info_0_0)
MR_decl_static(__Compare___check_hlds__cse_detection__cse_info_0_0)
MR_decl_static(__Unify___check_hlds__cse_detection__cse_state_0_0)
MR_decl_static(__Compare___check_hlds__cse_detection__cse_state_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__common_deconstruct_2_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__common_deconstruct_cases_2_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__detect_cse_in_ite_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__detect_cse_in_ite_11_0_2;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__cse_detection__common_deconstruct_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__cse_detection__common_deconstruct_cases_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__cse_detection__detect_cse_in_ite_11_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__cse_detection__detect_cse_in_ite_11_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info),
MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info)
}
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,2),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn),
MR_TAG_COMMON(0,0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,6),
MR_TAG_COMMON(0,0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(3,1),
MR_COMMON(0,4),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_2;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(3,1),
MR_COMMON(3,2),
MR_COMMON(0,4),
MR_COMMON(3,4),
MR_COMMON(3,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__cse_detection__field_types_cse_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
};

const MR_ConstString mercury_data_check_hlds__cse_detection__field_names_cse_info_0_0[] = {
	"csei_varset",
	"csei_vartypes",
	"csei_rtti_varmaps",
	"csei_module_info"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__cse_detection__du_functor_desc_cse_info_0_0 = {
	"cse_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__cse_detection__field_types_cse_info_0_0,
	mercury_data_check_hlds__cse_detection__field_names_cse_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[] = {
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__cse_detection__du_ptag_ordered_cse_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__cse_detection__du_stag_ordered_cse_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__cse_detection__du_name_ordered_cse_info_0[] = {
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

const MR_Integer mercury_data_check_hlds__cse_detection__functor_number_map_cse_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__cse_detection__cse_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__cse_detection__cse_info_0_0)),
	"check_hlds.cse_detection",
	"cse_info",
	{ (void *)mercury_data_check_hlds__cse_detection__du_name_ordered_cse_info_0 },
	{ (void *)mercury_data_check_hlds__cse_detection__du_ptag_ordered_cse_info_0 },
	1,
	4,
	mercury_data_check_hlds__cse_detection__functor_number_map_cse_info_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_0 = {
	"before_candidate",
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

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__cse_detection__field_types_cse_state_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__cse_detection__field_names_cse_state_0_1[] = {
	"goal",
	"first_old_new",
	"later_old_new"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_1 = {
	"have_candidate",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__cse_detection__field_types_cse_state_0_1,
	mercury_data_check_hlds__cse_detection__field_names_cse_state_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_2 = {
	"multiple_candidates",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[] = {
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[] = {
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__cse_detection__du_ptag_ordered_cse_state_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__cse_detection__du_stag_ordered_cse_state_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__cse_detection__du_stag_ordered_cse_state_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__cse_detection__du_name_ordered_cse_state_0[] = {
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_1,
	&mercury_data_check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

const MR_Integer mercury_data_check_hlds__cse_detection__functor_number_map_cse_state_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__cse_detection__cse_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__cse_detection__cse_state_0_0)),
	"check_hlds.cse_detection",
	"cse_state",
	{ (void *)mercury_data_check_hlds__cse_detection__du_name_ordered_cse_state_0 },
	{ (void *)mercury_data_check_hlds__cse_detection__du_ptag_ordered_cse_state_0 },
	3,
	4,
	mercury_data_check_hlds__cse_detection__functor_number_map_cse_state_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__detect_cse_in_ite_11_0_2 = {
{
MR_PREDICATE,
"check_hlds.cse_detection",
"check_hlds.cse_detection",
"find_bind_var_for_cse_in_deconstruct",
7,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
565,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__detect_cse_in_ite_11_0_1 = {
{
MR_PREDICATE,
"check_hlds.cse_detection",
"check_hlds.cse_detection",
"find_bind_var_for_cse_in_deconstruct",
7,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
565,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__common_deconstruct_cases_2_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.cse_detection",
"check_hlds.cse_detection",
"find_bind_var_for_cse_in_deconstruct",
7,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
590,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_type",
3,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
887,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.cse_detection",
"check_hlds.cse_detection",
"find_merged_tvars",
6,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
878,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.cse_detection",
"check_hlds.cse_detection",
"find_type_info_locn_tvar_map",
5,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
871,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__common_deconstruct_2_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.cse_detection",
"check_hlds.cse_detection",
"find_bind_var_for_cse_in_deconstruct",
7,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
565,
"19"
};


MR_decl_entry(check_hlds__switch_detection__find_bind_var_9_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module0)
	MR_init_entry1(check_hlds__cse_detection__common_deconstruct_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__common_deconstruct_2_7_0);
	MR_init_label4(check_hlds__cse_detection__common_deconstruct_2_7_0,39,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_deconstruct_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__common_deconstruct_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_2_7_0_i39);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__common_deconstruct_2_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__find_bind_var_9_0,
		check_hlds__cse_detection__common_deconstruct_2_7_0_i5);
MR_def_label(check_hlds__cse_detection__common_deconstruct_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_2_7_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_2_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__cse_detection__common_deconstruct_2_7_0,
		check_hlds__cse_detection__common_deconstruct_2_7_0_i7);
MR_def_label(check_hlds__cse_detection__common_deconstruct_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_2_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__cse_detection__common_deconstruct_2_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);
MR_decl_entry(map__from_assoc_list_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_tvars_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
MR_decl_entry(map__map_values_only_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module1)
	MR_init_entry1(check_hlds__cse_detection__update_existential_data_structures_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__update_existential_data_structures_4_0);
	MR_init_label10(check_hlds__cse_detection__update_existential_data_structures_4_0,4,5,6,7,10,12,14,16,17,18)
	MR_init_label3(check_hlds__cse_detection__update_existential_data_structures_4_0,19,20,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_existential_data_structures'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__update_existential_data_structures_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(10) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(list__condense_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i4);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i5);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i6);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_tvars_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i7);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i10);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i12);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__cse_detection__find_merged_tvars_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i14);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i16);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i17);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i18);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i19);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i20);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__map_values_only_3_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i22);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__is_existq_cons_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module2)
	MR_init_entry1(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__maybe_update_existential_data_structures_5_0);
	MR_init_label4(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,7,8,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_update_existential_data_structures'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_r4, 1);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__cse_detection__maybe_update_existential_data_structures_5_0_i7);
MR_def_label(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_existq_cons_3_0,
		check_hlds__cse_detection__maybe_update_existential_data_structures_5_0_i8);
MR_def_label(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__cse_detection__update_existential_data_structures_4_0);
MR_def_label(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
MR_def_label(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module3)
	MR_init_entry1(check_hlds__cse_detection__common_deconstruct_cases_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__common_deconstruct_cases_2_7_0);
	MR_init_label4(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,40,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_deconstruct_cases_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__common_deconstruct_cases_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_cases_2_7_0_i40);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__find_bind_var_9_0,
		check_hlds__cse_detection__common_deconstruct_cases_2_7_0_i5);
MR_def_label(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_cases_2_7_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_cases_2_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_np_localcall_lab(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,
		check_hlds__cse_detection__common_deconstruct_cases_2_7_0_i8);
MR_def_label(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_cases_2_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module4)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_goal_6_0);
	MR_init_label1(check_hlds__cse_detection__detect_cse_in_goal_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_goal_6_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module5)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0);
	MR_init_label3(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_goal_update_instmap'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,
		check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__pre_lambda_update_5_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(bool__or_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module6)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_goal_expr_7_0);
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,4,3,8,9,5,13,12,147,19,21)
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,15,24,26,23,62,29,32,28,38,39)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,41,37,44,43,151,49,51,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_goal_expr'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i5);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i62);
	}
	MR_sv(12) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 2);
	MR_sv(2) = MR_tfield(1, MR_r1, 3);
	MR_sv(3) = MR_tfield(1, MR_r1, 4);
	MR_sv(4) = ((MR_Integer) MR_tfield(2, MR_tempr1, 0) & (MR_Integer) 3);
	MR_sv(5) = (((MR_Integer) MR_tfield(2, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(2, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(10) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(11) = MR_tfield(2, MR_tempr1, 6);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i9);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_sv(4) | (((MR_Integer) MR_sv(5) << (MR_Integer) 2) | ((MR_Integer) MR_sv(6) << (MR_Integer) 3)));
	MR_tfield(2, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 6) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_r1, 0) = MR_sv(12);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_sv(1);
	MR_tfield(1, MR_r1, 3) = MR_sv(2);
	MR_tfield(1, MR_r1, 4) = MR_sv(3);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i12);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(12) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_conj_7_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i13);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i15);
	}
	MR_r5 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i147);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(13) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i19);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i21);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_disj_8_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i52);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i23);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	MR_sv(4) = MR_tfield(3, MR_r1, 4);
	MR_sv(13) = MR_r2;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i24);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i26);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_ite_11_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i52);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i28);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(12) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i29);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i29);
	}
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i32);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i151);
	}
	MR_r5 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i37);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(12) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 6);
	MR_r1 = MR_tfield(1, MR_tempr2, 4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i38);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i39);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(6);
	MR_sv(12) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i41);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i43);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(12) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i44);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.cse_detection", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.cse_detection.detect_cse_in_goal_expr\'/7", 62);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i62);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i49);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i51);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_cases_10_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i52);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module7)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_conj_7_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_conj_7_0,37,4,6,7,8,11,9,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_conj_7_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__cse_detection__detect_cse_in_conj_7_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_conj_7_0_i9);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_sv(4) != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_conj_7_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i11);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_or_any_2_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module8)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_disj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_disj_8_0);
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_disj_8_0,85,4,3,7,8,10,19,20,22,14)
	MR_init_label2(check_hlds__cse_detection__detect_cse_in_disj_8_0,15,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_disj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__cse_detection__common_deconstruct_2_7_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i10);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i6);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i6);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i15);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 3);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i15);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_tempr4 = MR_r3;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_sv(6), 1);
	MR_r5 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i19);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_existq_cons_3_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i20);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__cse_detection__update_existential_data_structures_4_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i22);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i85);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module9)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_independent_goals_6_0);
	MR_init_label4(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,18,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_independent_goals'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_independent_goals_6_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,
		check_hlds__cse_detection__detect_cse_in_independent_goals_6_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_independent_goals_6_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module10)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_cases_10_0);
	MR_init_label9(check_hlds__cse_detection__detect_cse_in_cases_10_0,63,4,3,9,11,12,14,18,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i9);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i11);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i12);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i6);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i6);
	}
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i18);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i63);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module11)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_cases_arms_6_0);
	MR_init_label4(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,19,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_cases_arms'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_cases_arms_6_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,
		check_hlds__cse_detection__detect_cse_in_cases_arms_6_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_cases_arms_6_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module12)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_ite_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_ite_11_0);
	MR_init_label9(check_hlds__cse_detection__detect_cse_in_ite_11_0,76,4,3,7,8,12,15,19,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_ite'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_ite_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r8;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,
		check_hlds__cse_detection__detect_cse_in_ite_11_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(5) = MR_tempr2;
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_11_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__cse_detection__detect_cse_in_ite_11_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r5 = MR_sv(8);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__find_bind_var_9_0,
		check_hlds__cse_detection__detect_cse_in_ite_11_0_i12);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_tfield(1, MR_sv(7), 0);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__find_bind_var_9_0,
		check_hlds__cse_detection__detect_cse_in_ite_11_0_i15);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_tbmkword(0, 0),0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,
		check_hlds__cse_detection__detect_cse_in_ite_11_0_i19);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i76);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module13)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_ite_arms_10_0);
	MR_init_label7(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,2,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_ite_arms'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i9);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_general_11_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module14)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_proc_pass_4_0);
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,2,3,4,5,6,8,10,11,12,13)
	MR_init_label3(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_proc_pass'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i3);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i10);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i11);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_general_11_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i12);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i13);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i15);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_4_0_i16);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);
MR_decl_entry(check_hlds__modes__modecheck_proc_6_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(fn__check_hlds__switch_detection__init_switch_detect_info_1_0);
MR_decl_entry(check_hlds__switch_detection__detect_switches_in_proc_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module15)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_proc_4_0);
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0,83,2,3,5,6,7,8,4,9,10)
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0,11,12,13,14,15,16,17,18,19,21)
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0,24,25,26,62,28,23,30,31,32,33)
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0,34,35,36,39,40,22,42,43,44,45)
	MR_init_label10(check_hlds__cse_detection__detect_cse_in_proc_4_0,46,47,48,49,50,51,52,69,54,55)
	MR_init_label1(check_hlds__cse_detection__detect_cse_in_proc_4_0,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__cse_detection__detect_cse_in_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i3);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Detecting common deconstructions for ", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i9);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i10);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i11);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i12);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_proc_pass_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i13);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i15);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i16);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i17);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 52;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i18);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i19);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i21);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_6_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i24);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i25);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i26);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i28);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i22);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.cse_detection", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", 57);
	MR_r3 = (MR_Word) MR_string_const("mode check fails when repeated", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i22);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Repeating mode check for ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i30);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i31);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i32);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_6_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i33);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i34);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i35);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.cse_detection", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", 57);
	MR_r3 = (MR_Word) MR_string_const("mode check fails when repeated", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i36);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Repeating switch detection for ", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i39);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i40);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i62);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i42);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i43);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i44);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i45);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__check_hlds__switch_detection__init_switch_detect_info_1_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i46);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_proc_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i47);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i48);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i49);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i50);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i51);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i52);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i54);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_4_0_i83);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Repeating common deconstruction detection for ", 48);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i55);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i56);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_4_0_i69);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module16)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_procs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_procs_4_0);
	MR_init_label3(check_hlds__cse_detection__detect_cse_in_procs_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_procs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_procs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_procs_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_procs_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__cse_detection__detect_cse_in_procs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_proc_4_0,
		check_hlds__cse_detection__detect_cse_in_procs_4_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_procs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_procs_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module17)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_preds_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_preds_3_0);
	MR_init_label6(check_hlds__cse_detection__detect_cse_in_preds_3_0,13,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_preds'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_preds_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_preds_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__cse_detection__detect_cse_in_preds_3_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__detect_cse_in_preds_3_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		check_hlds__cse_detection__detect_cse_in_preds_3_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_procs_4_0,
		check_hlds__cse_detection__detect_cse_in_preds_3_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_preds_3_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module18)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__detect_cse_in_module_2_0);
	MR_init_label1(check_hlds__cse_detection__detect_cse_in_module_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_cse_in_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__cse_detection__detect_cse_in_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		check_hlds__cse_detection__detect_cse_in_module_2_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_module_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(check_hlds__cse_detection__detect_cse_in_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module19)
	MR_init_entry1(check_hlds__cse_detection__create_parallel_subterms_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__create_parallel_subterms_7_0);
	MR_init_label6(check_hlds__cse_detection__create_parallel_subterms_7_0,25,4,5,7,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_parallel_subterms'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__create_parallel_subterms_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__create_parallel_subterms_7_0_i25);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(check_hlds__cse_detection__create_parallel_subterms_7_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i4);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(0, MR_sv(5), 0);
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i5);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i7);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i8);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tempr6 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr6;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i12);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module20)
	MR_init_entry1(check_hlds__cse_detection__pair_subterms_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__pair_subterms_4_0);
	MR_init_label5(check_hlds__cse_detection__pair_subterms_4_0,29,4,6,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pair_subterms'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__pair_subterms_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__pair_subterms_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__cse_detection__pair_subterms_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(check_hlds__cse_detection__pair_subterms_4_0,
		check_hlds__cse_detection__pair_subterms_4_0_i4);
MR_def_label(check_hlds__cse_detection__pair_subterms_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__cse_detection__pair_subterms_4_0_i6);
MR_def_label(check_hlds__cse_detection__pair_subterms_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__pair_subterms_4_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__cse_detection__pair_subterms_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__cse_detection__pair_subterms_4_0_i9);
MR_def_label(check_hlds__cse_detection__pair_subterms_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module21)
	MR_init_entry1(check_hlds__cse_detection__find_similar_deconstruct_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__find_similar_deconstruct_5_0);
	MR_init_label8(check_hlds__cse_detection__find_similar_deconstruct_5_0,7,10,11,12,13,2,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_similar_deconstruct'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__find_similar_deconstruct_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_tempr3 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 3);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__cse_detection__find_similar_deconstruct_5_0_i7);
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i1);
	}
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__cse_detection__find_similar_deconstruct_5_0_i10);
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__cse_detection__find_similar_deconstruct_5_0_i11);
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		check_hlds__cse_detection__find_similar_deconstruct_5_0_i12);
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__pair_subterms_4_0,
		check_hlds__cse_detection__find_similar_deconstruct_5_0_i13);
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.cse_detection", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", 63);
	MR_r3 = (MR_Word) MR_string_const("non-deconstruct unify", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__cse_detection__find_similar_deconstruct_5_0_i15);
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__find_similar_deconstruct_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module22)
	MR_init_entry1(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0);
	MR_init_label10(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,9,8,12,13,15,17,4,3,77,23)
	MR_init_label2(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,26,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_bind_var_for_cse_in_deconstruct'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i4);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i4);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tempr5 = MR_r5;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_tempr5, 1);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_tempr5, 2);
	MR_tfield(1, MR_tempr2, 3) = MR_tfield(1, MR_tempr5, 3);
	MR_tfield(1, MR_tempr2, 4) = MR_tfield(1, MR_tempr5, 4);
	MR_tfield(1, MR_tempr2, 5) = MR_tfield(1, MR_tempr5, 5);
	MR_tempr6 = MR_r3;
	MR_tempr3 = MR_tfield(1, MR_tempr6, 1);
	MR_r5 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 5);
	MR_sv(6) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_r1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 2) = MR_tfield(1, MR_tempr6, 2);
	MR_tfield(1, MR_tempr4, 3) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(1) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 4);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i8);
	}
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.cse_detection", 24);
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.cse_detection.construct_common_unify\'/7", 61);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("non-functor unify", 17);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i8);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i12);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__create_parallel_subterms_7_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i13);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i15);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i17);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.cse_detection", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.cse_detection.construct_common_unify\'/7", 61);
	MR_r3 = (MR_Word) MR_string_const("non-unify goal", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i77);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i23);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__find_similar_deconstruct_5_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i26);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
MR_decl_entry(hlds__hlds_rtti__type_info_locn_var_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_rtti__type_info_locn_set_var_3_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module23)
	MR_init_entry1(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0);
	MR_init_label5(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0,2,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_type_info_locn_tvar_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0_i2);
MR_def_label(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__type_info_locn_var_2_0,
		check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0_i3);
MR_def_label(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0_i6);
MR_def_label(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__type_info_locn_set_var_3_0,
		check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0_i8);
MR_def_label(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module24)
	MR_init_entry1(check_hlds__cse_detection__find_merged_tvars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__cse_detection__find_merged_tvars_6_0);
	MR_init_label8(check_hlds__cse_detection__find_merged_tvars_6_0,2,3,6,8,10,12,18,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_merged_tvars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__find_merged_tvars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i2);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__type_info_locn_var_2_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i3);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i6);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_merged_tvars_6_0_i18);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_rtti__type_info_locn_set_var_3_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i8);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i10);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i12);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_merged_tvars_6_0_i11);
	}
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module25)
	MR_init_entry1(__Unify___check_hlds__cse_detection__cse_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__cse_detection__cse_info_0_0);
	MR_init_label5(__Unify___check_hlds__cse_detection__cse_info_0_0,4,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__cse_detection__cse_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_info_0_0_i13);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__cse_detection__cse_info_0_0_i4);
MR_def_label(__Unify___check_hlds__cse_detection__cse_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__cse_detection__cse_info_0_0_i7);
MR_def_label(__Unify___check_hlds__cse_detection__cse_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___check_hlds__cse_detection__cse_info_0_0_i9);
MR_def_label(__Unify___check_hlds__cse_detection__cse_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___hlds__hlds_module__module_info_0_0);
MR_def_label(__Unify___check_hlds__cse_detection__cse_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__cse_detection__cse_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module26)
	MR_init_entry1(__Compare___check_hlds__cse_detection__cse_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__cse_detection__cse_info_0_0);
	MR_init_label6(__Compare___check_hlds__cse_detection__cse_info_0_0,3,2,5,10,14,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__cse_detection__cse_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i2);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__cse_detection__cse_info_0_0_i5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i50);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__cse_detection__cse_info_0_0_i10);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i50);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___check_hlds__cse_detection__cse_info_0_0_i14);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i50);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_module__module_info_0_0);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module27)
	MR_init_entry1(__Unify___check_hlds__cse_detection__cse_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__cse_detection__cse_state_0_0);
	MR_init_label6(__Unify___check_hlds__cse_detection__cse_state_0_0,5,22,6,8,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__cse_detection__cse_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i22);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i5);
	}
	MR_r1 = (MR_sv(1) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i6);
	}
	MR_r1 = (MR_sv(1) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___check_hlds__cse_detection__cse_state_0_0_i8);
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__cse_detection__cse_state_0_0_i13);
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module28)
	MR_init_entry1(__Compare___check_hlds__cse_detection__cse_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__cse_detection__cse_state_0_0);
	MR_init_label10(__Compare___check_hlds__cse_detection__cse_state_0_0,7,5,11,50,9,40,14,41,15,17)
	MR_init_label2(__Compare___check_hlds__cse_detection__cse_state_0_0,23,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__cse_detection__cse_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(5);
	MR_proceed();
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i40);
	}
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i14);
	}
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i15);
	}
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___check_hlds__cse_detection__cse_state_0_0_i17);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i32);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__cse_detection__cse_state_0_0_i23);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i32);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__cse_detection_maybe_bunch_0(void)
{
	check_hlds__cse_detection_module0();
	check_hlds__cse_detection_module1();
	check_hlds__cse_detection_module2();
	check_hlds__cse_detection_module3();
	check_hlds__cse_detection_module4();
	check_hlds__cse_detection_module5();
	check_hlds__cse_detection_module6();
	check_hlds__cse_detection_module7();
	check_hlds__cse_detection_module8();
	check_hlds__cse_detection_module9();
	check_hlds__cse_detection_module10();
	check_hlds__cse_detection_module11();
	check_hlds__cse_detection_module12();
	check_hlds__cse_detection_module13();
	check_hlds__cse_detection_module14();
	check_hlds__cse_detection_module15();
	check_hlds__cse_detection_module16();
	check_hlds__cse_detection_module17();
	check_hlds__cse_detection_module18();
	check_hlds__cse_detection_module19();
	check_hlds__cse_detection_module20();
	check_hlds__cse_detection_module21();
	check_hlds__cse_detection_module22();
	check_hlds__cse_detection_module23();
	check_hlds__cse_detection_module24();
	check_hlds__cse_detection_module25();
	check_hlds__cse_detection_module26();
	check_hlds__cse_detection_module27();
	check_hlds__cse_detection_module28();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__cse_detection__init(void);
void mercury__check_hlds__cse_detection__init_type_tables(void);
void mercury__check_hlds__cse_detection__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__cse_detection__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__cse_detection__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__cse_detection__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__cse_detection__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__cse_detection_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0,
		check_hlds__cse_detection__cse_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0,
		check_hlds__cse_detection__cse_state_0_0);
	mercury__check_hlds__cse_detection__init_debugger();
}

void mercury__check_hlds__cse_detection__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0);
	}
}


void mercury__check_hlds__cse_detection__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__cse_detection__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__cse_detection);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__cse_detection__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__cse_detection__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
