/*
** Automatically generated from `cse_detection.m'
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
INIT mercury__check_hlds__cse_detection__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.cse_detection.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.cse_detection.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.cse_detection.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.cse_detection.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "check_hlds.cse_detection.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "check_hlds.cse_detection.c"
#line 48 "check_hlds.cse_detection.c"
#include "check_hlds.cse_detection.mh"

#line 51 "check_hlds.cse_detection.c"
#line 52 "check_hlds.cse_detection.c"
#ifndef CHECK_HLDS__CSE_DETECTION_DECL_GUARD
#define CHECK_HLDS__CSE_DETECTION_DECL_GUARD

#line 56 "check_hlds.cse_detection.c"
#line 57 "check_hlds.cse_detection.c"

#endif
#line 60 "check_hlds.cse_detection.c"

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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0,
	mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0;
MR_decl_label4(check_hlds__cse_detection__common_deconstruct_2_7_0, 27,5,7,1)
MR_decl_label4(check_hlds__cse_detection__common_deconstruct_cases_2_7_0, 28,5,8,1)
MR_decl_label6(check_hlds__cse_detection__create_parallel_subterms_7_0, 22,4,5,7,8,12)
MR_decl_label1(check_hlds__cse_detection__detect_cse_4_0, 2)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_cases_10_0, 45,4,3,9,11,12,14,18)
MR_decl_label1(check_hlds__cse_detection__detect_cse_in_cases_10_0, 6)
MR_decl_label4(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0, 16,4,6,8)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_conj_7_0, 28,4,6,7,8,11,9,14)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_disj_8_0, 38,4,3,7,8,10,14,6)
MR_decl_label1(check_hlds__cse_detection__detect_cse_in_goal_6_0, 2)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0, 102,55,56,62,104,5,7,110)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0, 11,13,108,16,18,106,21,107)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0, 103,72,24,27,109,39,41,42)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0, 32,33,34,36,105,48,50,51)
MR_decl_label3(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0, 2,4,5)
MR_decl_label4(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0, 15,4,5,7)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_ite_11_0, 52,4,3,7,8,12,15,19)
MR_decl_label1(check_hlds__cse_detection__detect_cse_in_ite_11_0, 6)
MR_decl_label7(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0, 2,4,5,6,7,8,9)
MR_decl_label6(check_hlds__cse_detection__detect_cse_in_preds_5_0, 13,3,4,5,6,7)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0, 59,2,4,5,6,7,3,8)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0, 9,10,12,15,16,17,18,19)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0, 20,14,22,23,24,25,26,27)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0, 28,29,30,31,32,33,34,35)
MR_decl_label4(check_hlds__cse_detection__detect_cse_in_proc_6_0, 36,13,38,61)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0, 10,12,14,15,16,17,18,19)
MR_decl_label5(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0, 20,21,22,23,24)
MR_decl_label3(check_hlds__cse_detection__detect_cse_in_procs_6_0, 10,3,4)
MR_decl_label8(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0, 9,8,12,13,15,17,4,31)
MR_decl_label4(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0, 66,22,25,24)
MR_decl_label8(check_hlds__cse_detection__find_merged_tvars_6_0, 2,3,6,8,10,12,18,11)
MR_decl_label8(check_hlds__cse_detection__find_similar_deconstruct_5_0, 7,10,11,12,13,2,15,1)
MR_decl_label5(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0, 2,3,6,8,4)
MR_decl_label4(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0, 7,8,2,3)
MR_decl_label5(check_hlds__cse_detection__pair_subterms_4_0, 23,4,6,5,9)
MR_decl_label8(check_hlds__cse_detection__update_existential_data_structures_4_0, 4,5,6,7,10,12,14,16)
MR_decl_label5(check_hlds__cse_detection__update_existential_data_structures_4_0, 17,18,19,20,22)
MR_decl_label5(__Unify___check_hlds__cse_detection__cse_info_0_0, 4,7,9,13,1)
MR_decl_label5(__Unify___check_hlds__cse_detection__cse_state_0_0, 6,8,13,20,1)
MR_decl_label6(__Compare___check_hlds__cse_detection__cse_info_0_0, 3,2,5,10,14,38)
MR_decl_label8(__Compare___check_hlds__cse_detection__cse_state_0_0, 49,35,12,63,32,15,17,23)
MR_decl_label1(__Compare___check_hlds__cse_detection__cse_state_0_0, 44)
MR_decl_static(check_hlds__cse_detection__common_deconstruct_2_7_0)
MR_decl_static(check_hlds__cse_detection__update_existential_data_structures_4_0)
MR_decl_static(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0)
MR_decl_static(check_hlds__cse_detection__common_deconstruct_cases_2_7_0)
MR_decl_static(fn__check_hlds__cse_detection__this_file_0_0)
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
MR_decl_static(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0)
MR_def_extern_entry(check_hlds__cse_detection__detect_cse_in_proc_6_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_procs_6_0)
MR_decl_static(check_hlds__cse_detection__detect_cse_in_preds_5_0)
MR_def_extern_entry(check_hlds__cse_detection__detect_cse_4_0)
MR_decl_static(check_hlds__cse_detection__create_parallel_subterms_7_0)
MR_decl_static(check_hlds__cse_detection__pair_subterms_4_0)
MR_decl_static(check_hlds__cse_detection__find_similar_deconstruct_5_0)
MR_decl_static(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0)
MR_decl_static(check_hlds__cse_detection__apply_tvar_rename_4_0)
MR_decl_static(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0)
MR_decl_static(check_hlds__cse_detection__find_merged_tvars_6_0)
MR_decl_static(__Unify___check_hlds__cse_detection__cse_info_0_0)
MR_decl_static(__Compare___check_hlds__cse_detection__cse_info_0_0)
MR_decl_static(__Unify___check_hlds__cse_detection__cse_state_0_0)
MR_decl_static(__Compare___check_hlds__cse_detection__cse_state_0_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_99_115_101_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_116_118_97_114_95_114_101_110_97_109_101_95_95_91_50_93_95_48_4_0)

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
4,
{
MR_COMMON(3,4),
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
2,
MR_tbmkword(0, 0)
},
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
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

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
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
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
	13,
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
534,
"d2;c8;"
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
842,
"d1;c11;"
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
849,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__cse_detection__update_existential_data_structures_4_0_3 = {
{
MR_PREDICATE,
"check_hlds.cse_detection",
"check_hlds.cse_detection",
"apply_tvar_rename",
4,
0
},
"check_hlds.cse_detection",
"cse_detection.m",
858,
"d1;c21;"
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
559,
"d2;c9;"
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
534,
"d2;c8;"
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
534,
"d2;c8;"
};

MR_decl_entry(check_hlds__switch_detection__find_bind_var_9_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module0)
	MR_init_entry1(check_hlds__cse_detection__common_deconstruct_2_7_0);
	MR_init_label4(check_hlds__cse_detection__common_deconstruct_2_7_0,27,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__common_deconstruct_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_2_7_0_i27);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__common_deconstruct_2_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
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
MR_decl_entry(map__map_values_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module1)
	MR_init_entry1(check_hlds__cse_detection__update_existential_data_structures_4_0);
	MR_init_label8(check_hlds__cse_detection__update_existential_data_structures_4_0,4,5,6,7,10,12,14,16)
	MR_init_label5(check_hlds__cse_detection__update_existential_data_structures_4_0,17,18,19,20,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__update_existential_data_structures_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(list__condense_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i4);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i5);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i6);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_tvars_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i7);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i10);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
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
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i14);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i16);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i17);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i18);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i19);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
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
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__cse_detection__apply_tvar_rename_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		check_hlds__cse_detection__update_existential_data_structures_4_0_i22);
MR_def_label(check_hlds__cse_detection__update_existential_data_structures_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
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
	MR_init_label4(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,7,8,2,3)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
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
	MR_init_label4(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,28,5,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__common_deconstruct_cases_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__common_deconstruct_cases_2_7_0_i28);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__common_deconstruct_cases_2_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
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
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
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
	MR_init_entry1(fn__check_hlds__cse_detection__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__cse_detection__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cse_detection.m", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module5)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_goal_6_0);
	MR_init_label1(check_hlds__cse_detection__detect_cse_in_goal_6_0,2)
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(check_hlds__cse_detection_module6)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0);
	MR_init_label3(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,2,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,
		check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
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
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module7)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,102,55,56,62,104,5,7,110)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,11,13,108,16,18,106,21,107)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,103,72,24,27,109,39,41,42)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,32,33,34,36,105,48,50,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i102) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i103) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i103) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i62));
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i72);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(2, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(2, MR_tempr1, 6);
	MR_sv(11) = MR_ctfield(2, MR_tempr1, 7);
	MR_sv(12) = MR_ctfield(2, MR_tempr1, 8);
	MR_tempr3 = MR_r2;
	MR_sv(13) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i55);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i56);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 9);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 8) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(4);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i103) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i104) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i105) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i106) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i107) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i108) MR_AND
		MR_LABEL_AP(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i109));
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_conj_7_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i110);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(13) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i11);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i13);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_disj_8_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i51);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(13) = MR_r2;
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i16);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i18);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_ite_11_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i51);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i21);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i24);
	}
	MR_r6 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i24);
	}
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i72);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i27);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i32);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i41);
	}
	}
	MR_np_call_localret_ent(fn__check_hlds__cse_detection__this_file_0_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i39);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("detect_cse_in_goal_expr: bi_implication", 39);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i42);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 5);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 6);
	MR_r1 = MR_ctfield(1, MR_tempr2, 4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i33);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i34);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i36);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i48);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i50);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_cases_10_0,
		check_hlds__cse_detection__detect_cse_in_goal_expr_7_0_i51);
MR_def_label(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,51)
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

MR_BEGIN_MODULE(check_hlds__cse_detection_module8)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_conj_7_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_conj_7_0,28,4,6,7,8,11,9,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_conj_7_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_expr_7_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__cse_detection__detect_cse_in_conj_7_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_conj_7_0_i9);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_sv(1) != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_conj_7_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i11);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_conj_7_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_conj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
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

MR_BEGIN_MODULE(check_hlds__cse_detection_module9)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_disj_8_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_disj_8_0,38,4,3,7,8,10,14,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,38)
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
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i6);
	}
	MR_r1 = MR_sv(1);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i6);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__maybe_update_existential_data_structures_5_0,
		check_hlds__cse_detection__detect_cse_in_disj_8_0_i14);
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_disj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_disj_8_0_i38);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module10)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0);
	MR_init_label4(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,15,4,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_independent_goals_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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

MR_BEGIN_MODULE(check_hlds__cse_detection_module11)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_cases_10_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_cases_10_0,45,4,3,9,11,12,14,18)
	MR_init_label1(check_hlds__cse_detection__detect_cse_in_cases_10_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,45)
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
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tempr1;
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
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i11);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__cse_detection__detect_cse_in_cases_10_0_i12);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i6);
	}
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
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
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_10_0_i45);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module12)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0);
	MR_init_label4(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,16,4,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_cases_arms_6_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_cases_arms_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r4;
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
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
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
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module13)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_ite_11_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_ite_11_0,52,4,3,7,8,12,15,19)
	MR_init_label1(check_hlds__cse_detection__detect_cse_in_ite_11_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_ite_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,52)
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(6) = MR_tempr2;
	MR_tempr3 = MR_r8;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 3);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_11_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
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
	MR_sv(10) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(7);
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
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_state);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__cse_detection, cse_info);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_ctfield(1, MR_sv(10), 0);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_tbmkword(0, 0),0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i6);
	}
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
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
	MR_tfield(3, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_ite_11_0_i52);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module14)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0);
	MR_init_label7(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,2,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(1);
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
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__cse_detection__detect_cse_in_ite_arms_10_0_i9);
MR_def_label(check_hlds__cse_detection__detect_cse_in_ite_arms_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(7);
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
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_10_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module15)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,10,12,14,15,16,17,18,19)
	MR_init_label5(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i3);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i9);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i10);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i12);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i14);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i15);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_10_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i16);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i17);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i18);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i19);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i20);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i21);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i22);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i23);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_pass_5_0_i24);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__write_pred_id_4_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);
MR_decl_entry(check_hlds__modes__modecheck_proc_8_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_num_errors_3_0);
MR_decl_entry(check_hlds__switch_detection__detect_switches_in_proc_4_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module16)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_proc_6_0);
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0,59,2,4,5,6,7,3,8)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0,9,10,12,15,16,17,18,19)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0,20,14,22,23,24,25,26,27)
	MR_init_label8(check_hlds__cse_detection__detect_cse_in_proc_6_0,28,29,30,31,32,33,34,35)
	MR_init_label4(check_hlds__cse_detection__detect_cse_in_proc_6_0,36,13,38,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__cse_detection__detect_cse_in_proc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Integer) 37;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_6_0_i4);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_6_0_i3);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Detecting common deconstructions for ", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_proc_pass_5_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i8);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i9);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i10);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_6_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_6_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_8_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i15);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i16);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i17);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i18);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i19);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_proc_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i20);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i13);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Repeating mode check for ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i22);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i23);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i24);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_8_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i25);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i26);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i27);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i28);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i29);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Repeating switch detection for ", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i30);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i31);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i32);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_proc_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i33);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i34);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Repeating common deconstruction detection for ", 48);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i35);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i36);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i13);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_6_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("cse_detection.m", 15);
	MR_r2 = (MR_Word) MR_string_const("mode check fails when repeated", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__cse_detection__detect_cse_in_proc_6_0_i61);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_proc_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_proc_6_0_i59);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module17)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_procs_6_0);
	MR_init_label3(check_hlds__cse_detection__detect_cse_in_procs_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_procs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_procs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_procs_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__cse_detection__detect_cse_in_procs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_proc_6_0,
		check_hlds__cse_detection__detect_cse_in_procs_6_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_procs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_procs_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module18)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_in_preds_5_0);
	MR_init_label6(check_hlds__cse_detection__detect_cse_in_preds_5_0,13,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__detect_cse_in_preds_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_preds_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__cse_detection__detect_cse_in_preds_5_0_i4);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_5_0,4)
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
		check_hlds__cse_detection__detect_cse_in_preds_5_0_i5);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		check_hlds__cse_detection__detect_cse_in_preds_5_0_i6);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_procs_6_0,
		check_hlds__cse_detection__detect_cse_in_preds_5_0_i7);
MR_def_label(check_hlds__cse_detection__detect_cse_in_preds_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__cse_detection__detect_cse_in_preds_5_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module19)
	MR_init_entry1(check_hlds__cse_detection__detect_cse_4_0);
	MR_init_label1(check_hlds__cse_detection__detect_cse_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__cse_detection__detect_cse_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__cse_detection__detect_cse_4_0_i2);
MR_def_label(check_hlds__cse_detection__detect_cse_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(check_hlds__cse_detection__detect_cse_in_preds_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module20)
	MR_init_entry1(check_hlds__cse_detection__create_parallel_subterms_7_0);
	MR_init_label6(check_hlds__cse_detection__create_parallel_subterms_7_0,22,4,5,7,8,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__create_parallel_subterms_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__create_parallel_subterms_7_0_i22);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(check_hlds__cse_detection__create_parallel_subterms_7_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i4);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(6), 0);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i5);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i7);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i8);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tempr6 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr6;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	MR_r5 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__cse_detection__create_parallel_subterms_7_0_i12);
MR_def_label(check_hlds__cse_detection__create_parallel_subterms_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module21)
	MR_init_entry1(check_hlds__cse_detection__pair_subterms_4_0);
	MR_init_label5(check_hlds__cse_detection__pair_subterms_4_0,23,4,6,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__pair_subterms_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__pair_subterms_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__cse_detection__pair_subterms_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
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
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__cse_detection__pair_subterms_4_0_i9);
MR_def_label(check_hlds__cse_detection__pair_subterms_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module22)
	MR_init_entry1(check_hlds__cse_detection__find_similar_deconstruct_5_0);
	MR_init_label8(check_hlds__cse_detection__find_similar_deconstruct_5_0,7,10,11,12,13,2,15,1)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_tempr3 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 3);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_similar_deconstruct_5_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 2);
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(1, MR_tempr4, 1);
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
	MR_r1 = (MR_Word) MR_string_const("cse_detection.m", 15);
	MR_r2 = (MR_Word) MR_string_const("find_similar_deconstruct: non-deconstruct unify", 47);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
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

MR_BEGIN_MODULE(check_hlds__cse_detection_module23)
	MR_init_entry1(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0);
	MR_init_label8(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,9,8,12,13,15,17,4,31)
	MR_init_label4(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,66,22,25,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr5 = MR_r3;
	MR_r5 = MR_tag(MR_tempr5);
	if ((MR_r5 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i66);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr5),0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i31);
	}
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i4);
	}
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i4);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_r6 = MR_tempr2;
	MR_tempr6 = MR_r1;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr6;
	MR_tempr7 = MR_r5;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr7, 1);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(1, MR_tempr7, 2);
	MR_tfield(1, MR_tempr2, 3) = MR_ctfield(1, MR_tempr7, 3);
	MR_tfield(1, MR_tempr2, 4) = MR_ctfield(1, MR_tempr7, 4);
	MR_tfield(1, MR_tempr2, 5) = MR_ctfield(1, MR_tempr7, 5);
	MR_tempr8 = MR_r3;
	MR_tempr3 = MR_ctfield(0, MR_tempr8, 1);
	MR_r5 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_sv(6) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_ctfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_tempr4, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 4) = MR_ctfield(0, MR_tempr8, 4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i8);
	}
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cse_detection.m", 15);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("non-functor unify in construct_common_unify", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i8);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i12);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__create_parallel_subterms_7_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i13);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i15);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i17);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cse_detection.m", 15);
	MR_r2 = (MR_Word) MR_string_const("non-unify goal in construct_common_unify", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_r4;
	MR_proceed();
	}
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i22);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__find_similar_deconstruct_5_0,
		check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i25);
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__cse_detection_module24)
	MR_init_entry1(check_hlds__cse_detection__apply_tvar_rename_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__apply_tvar_rename_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_99_115_101_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_116_118_97_114_95_114_101_110_97_109_101_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
MR_decl_entry(hlds__hlds_rtti__type_info_locn_var_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_rtti__type_info_locn_set_var_3_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module25)
	MR_init_entry1(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0);
	MR_init_label5(check_hlds__cse_detection__find_type_info_locn_tvar_map_5_0,2,3,6,8,4)
MR_BEGIN_CODE

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
	MR_np_tailcall_ent(svmap__det_insert_4_0);
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

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module26)
	MR_init_entry1(check_hlds__cse_detection__find_merged_tvars_6_0);
	MR_init_label8(check_hlds__cse_detection__find_merged_tvars_6_0,2,3,6,8,10,12,18,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__cse_detection__find_merged_tvars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i2);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
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
	MR_r4 = MR_sv(1);
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
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_rtti__type_info_locn_set_var_3_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i8);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i10);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__cse_detection__find_merged_tvars_6_0_i12);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__cse_detection__find_merged_tvars_6_0_i11);
	}
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__cse_detection__find_merged_tvars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module27)
	MR_init_entry1(__Unify___check_hlds__cse_detection__cse_info_0_0);
	MR_init_label5(__Unify___check_hlds__cse_detection__cse_info_0_0,4,7,9,13,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
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

MR_BEGIN_MODULE(check_hlds__cse_detection_module28)
	MR_init_entry1(__Compare___check_hlds__cse_detection__cse_info_0_0);
	MR_init_label6(__Compare___check_hlds__cse_detection__cse_info_0_0,3,2,5,10,14,38)
MR_BEGIN_CODE

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
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__cse_detection__cse_info_0_0_i5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i38);
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
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i38);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___check_hlds__cse_detection__cse_info_0_0_i14);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_info_0_0_i38);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_module__module_info_0_0);
MR_def_label(__Compare___check_hlds__cse_detection__cse_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module29)
	MR_init_entry1(__Unify___check_hlds__cse_detection__cse_state_0_0);
	MR_init_label5(__Unify___check_hlds__cse_detection__cse_state_0_0,6,8,13,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__cse_detection__cse_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i20);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__cse_detection__cse_state_0_0_i13);
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__cse_detection__cse_state_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__cse_detection__cse_state_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
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

MR_BEGIN_MODULE(check_hlds__cse_detection_module30)
	MR_init_entry1(__Compare___check_hlds__cse_detection__cse_state_0_0);
	MR_init_label8(__Compare___check_hlds__cse_detection__cse_state_0_0,49,35,12,63,32,15,17,23)
	MR_init_label1(__Compare___check_hlds__cse_detection__cse_state_0_0,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__cse_detection__cse_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i12);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i35);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i32);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i32);
	}
	}
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i63);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i15);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i32);
	}
	}
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___check_hlds__cse_detection__cse_state_0_0_i17);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i44);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__cse_detection__cse_state_0_0_i23);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__cse_detection__cse_state_0_0_i44);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__cse_detection__cse_state_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);

MR_BEGIN_MODULE(check_hlds__cse_detection_module31)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_99_115_101_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_116_118_97_114_95_114_101_110_97_109_101_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_99_115_101_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_116_118_97_114_95_114_101_110_97_109_101_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
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
	check_hlds__cse_detection_module29();
	check_hlds__cse_detection_module30();
	check_hlds__cse_detection_module31();
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

void mercury__check_hlds__cse_detection__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__cse_detection_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0,
		check_hlds__cse_detection__cse_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0,
		check_hlds__cse_detection__cse_info_0_0);
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
		&mercury_data_check_hlds__cse_detection__type_ctor_info_cse_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__cse_detection__type_ctor_info_cse_info_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
