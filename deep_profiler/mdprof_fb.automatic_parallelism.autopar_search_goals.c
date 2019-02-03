/*
** Automatically generated from `autopar_search_goals.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 36 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 53 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#include "mdprof_fb.automatic_parallelism.autopar_search_goals.mh"

#line 56 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 57 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#ifndef MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_SEARCH_GOALS_DECL_GUARD
#define MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_SEARCH_GOALS_DECL_GUARD

#line 61 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
#line 62 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"

#endif
#line 65 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[14];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];
MR_decl_label7(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0, 2,5,4,8,10,12,9)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0, 2,3,5,7,9)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0, 2,3,6,7,9,11)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0, 2,1)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0, 4)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0, 2,3)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0, 72,6,8,10,11,12,13,15,19,21)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0, 20,25,29,30)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0, 4)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0, 4,7,8,9,10)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0, 4)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0, 7,4,5,8,9,10,3,12,14,19)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0, 17,21)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0, 3)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0, 2,3,4,1)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0, 2,7,8,9,10,14,17,16,20,22)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0, 24,25,26,27,28,29,19,30,31,32)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0, 35,34,36,37,38,15,4,45,46,47)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0, 48,53,54,41,62,63,64,65,71,72)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0, 58,77,79,84,86,87,88,76,90,91)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0, 89,97,99,95,105)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0, 2,3,4,11,12,14,17,19,20,6)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0, 29,30,32,35,37,38,24,47,48,50)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0, 53,55,56,42,61,62,65,67,68,70)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0, 71,72,60,75,77,79,80,82,85,87)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0, 88,73,94,96,99,101,102,92,108,110)
MR_decl_label9(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0, 113,115,116,118,119,5,121,123,120)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0, 5,6,7,10,11,12,13,14,15,16)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0, 5,56,7,9,8,11)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0, 2,4,5,6,7,8,9,10,14,13)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0, 2,3,5,10,12,16,17,19,21,20)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0, 25,26,30,32,34,4)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0, 4,3,5,6,7,9)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0, 211,4,7,3,15,18,14,21,22,27)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0, 29,30,11,10,38,35,34,44,43,51)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0, 50,58,57,68,65,64,73,75,77,79)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0, 81)
MR_decl_label3(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0, 2,3,4)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0, 4,8,9,10,11)
MR_decl_label9(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0, 2,5,6,4,9,12,13,14,15)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
0,
1
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
static const struct mercury_type_1 mercury_common_1[24] =
{
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
MR_COMMON(1,6)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_COMMON(1,7)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_COMMON(1,6)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(message, message)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(message, message)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
}
},
{
{
MR_CTOR1_ADDR(lazy, lazy),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
MR_CTOR1_ADDR(lazy, lazy),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_3;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,1,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(1,20)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,1,21)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_2;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_1,
(MR_Word *) (MR_Integer) 0
},
14,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(1,5),
MR_COMMON(1,0),
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,8),
MR_COMMON(1,8),
MR_COMMON(1,9),
MR_COMMON(1,9),
MR_COMMON(1,10),
MR_COMMON(1,10),
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_2,
(MR_Word *) (MR_Integer) 0
},
14,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(1,5),
MR_COMMON(1,16),
MR_COMMON(1,16),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,8),
MR_COMMON(1,8),
MR_COMMON(1,9),
MR_COMMON(1,9),
MR_COMMON(1,10),
MR_COMMON(1,10),
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_program_representation_utils__type_ctor_info_inst_map_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_CTOR0_ADDR(program_representation_utils, inst_map),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, var_and_mode),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_goal_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_14;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_15;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_16;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_17;
static const struct mercury_type_7 mercury_common_7[15] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(1,5),
MR_COMMON(1,18),
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_4,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(1,5),
MR_COMMON(1,18),
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_5,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_6,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_7,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(1,5),
MR_COMMON(1,22),
MR_COMMON(1,16),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_8,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_9,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_12,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_13,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_14,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_15,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_16,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_17,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_10;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
static const struct mercury_type_8 mercury_common_8[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_10,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, atomic_goal_rep),
MR_COMMON(1,5),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_11,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, atomic_goal_rep),
MR_COMMON(1,5),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,18),
MR_COMMON(1,5),
MR_CTOR0_ADDR(measurements, goal_cost_csq),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
6,
MR_string_const("Recursion type unknown for var_first_use/12", 43)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0_1 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"compute_goal_var_use_lazy",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
884,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_17 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
837,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_16 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
832,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_15 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
837,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_14 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
832,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_13 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
837,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_12 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
832,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_11 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_costs",
"mdprof_fb.automatic_parallelism.autopar_costs",
"atomic_goal_build_use_map",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
854,
"91"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_10 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_costs",
"mdprof_fb.automatic_parallelism.autopar_costs",
"atomic_goal_build_use_map",
7,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
849,
"85"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_9 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
837,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_8 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
832,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_7 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"case_to_pard_goal",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
802,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_6 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
837,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_5 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
832,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_4 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"disj_to_pard_goals",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
796,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
837,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"goal_build_use_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
832,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"conj_to_pard_goals",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
790,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"compute_var_modes",
6,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
979,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"single_context_makes_goal_costly",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
335,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"switch_case_get_conjunctions_worth_parallelising",
14,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
176,
"89"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"disj_get_conjunctions_worth_parallelising",
14,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
166,
"78"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"fix_goal_counts",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
588,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"fix_goal_counts",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
566,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"fix_goal_counts",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_search_goals",
"autopar_search_goals.m",
547,
"13"
};


MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_find_best_par__find_best_parallelisation_6_0);
MR_decl_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0);
MR_decl_entry(fn__measurements__goal_cost_get_percall_1_0);
MR_decl_entry(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module0)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,2,4,5,6,7,8,9,10,14,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pardgoals_build_candidate_conjunction'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_find_best_par__find_best_parallelisation_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 10);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_tfield(0, MR_sv(9), 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(9);
	if ((MR_word_to_float(MR_sv(10)) <= MR_word_to_float(MR_sv(4)))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0_i13);
	}
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(message__append_message_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module1)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,2,3,6,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_candidate_conjunction'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_r1, 11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__goal_cost_get_calls_1_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(list__det_drop_3_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(list__det_index1_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module2)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,211,4,7,3,15,18,14,21,22,27)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,29,30,11,10,38,35,34,44,43,51)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,50,58,57,68,65,64,73,75,77,79)
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_goals_create_candidate'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tempr1, 2), 4);
	}
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r6 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i10);
	}
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i11);
	}
	MR_r8 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tempr3, 2), 4);
	}
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_tfield(0, MR_r7, 0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(8);
	MR_r2 = ((MR_Integer) MR_tfield(1, MR_tempr1, 0) - (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__det_drop_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i22);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i211);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(3), 2), 4);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("not conj", 8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r3, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__det_index1_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i38);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i211);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("not disj", 8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i44);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r6;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i211);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("not ite_else", 12);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i51);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r6;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i211);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("not ite_then", 12);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i58);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r6;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i211);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("not scope", 9);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i64);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i65);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r3, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__det_index1_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i68);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i211);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("not switch", 10);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,6)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i73);
	}
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("atomic_main", 11);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i75);
	}
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("atomic_orelse", 13);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i77);
	}
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("ite_cond", 8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,4)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i79);
	}
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("lambda", 6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,3)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0_i81);
	}
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("neg", 3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", 94);
	MR_r3 = (MR_Word) MR_string_const("try", 3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(mdbcomp__goal_path__goal_path_inside_relative_3_0);
MR_decl_entry(list__take_3_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(list__split_last_3_0);
MR_decl_entry(fn__mdbcomp__goal_path__goal_path_to_string_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module3)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,2,3,5,10,12,16,17,19,21,20)
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,25,26,30,32,34,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_and_build_candidate_conjunction'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r5, 2), 2);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_inside_relative_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (((MR_Integer) MR_tempr2 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i4);
	}
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__take_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i4);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_tfield(0, MR_sv(1), 11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__split_last_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i20);
	}
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i20);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i26);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0_i34);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_and_build_candidate_conjunction\'/7", 103);
	MR_r3 = (MR_Word) MR_string_const("bad goal path for Single", 24);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module4)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,4,3,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_and_build_candidate_conjunctions'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module5)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,5,56,7,9,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_same_level_pushes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", 90);
	MR_r3 = (MR_Word) MR_string_const("no push", 7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i9);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i8);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", 90);
	MR_r3 = (MR_Word) MR_string_const("no push", 7);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i11);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i11);
	}
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i11);
	}
	MR_tempr3 = MR_tfield(0, MR_r2, 1);
	MR_tempr4 = MR_tfield(0, MR_r1, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i11);
	}
	MR_tempr4 = MR_tfield(0, MR_r2, 2);
	MR_tempr5 = MR_tfield(0, MR_r1, 2);
	if ((MR_tempr4 != MR_tempr5)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_tfield(0, MR_r1, 3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tfield(0, MR_r1, 2) = MR_tempr4;
	MR_tfield(0, MR_r1, 3) = MR_tempr5;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_search_goals", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", 90);
	MR_r3 = (MR_Word) MR_string_const("mismatch on pushed goals", 24);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_det_2_0);
MR_decl_entry(fn__cord__from_list_1_0);
MR_decl_entry(fn__cord__snoc_2_0);
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(fn__cord__cons_2_0);
MR_decl_entry(fn__measurements__call_goal_cost_2_0);
MR_decl_entry(list__map_foldl5_13_1);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module6)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,2,7,8,9,10,14,17,16,20,22)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,24,25,26,27,28,29,19,30,31,32)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,35,34,36,37,38,15,4,45,46,47)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,48,53,54,41,62,63,64,65,71,72)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,58,77,79,84,86,87,88,76,90,91)
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,89,97,99,95,105)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_get_conjunctions_worth_parallelising'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_sv(6), 3);
	}
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i4);
	}
	MR_sv(3) = MR_tfield(0, MR_sv(3), 0);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(15), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(15), 0) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__reverse_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i16);
	}
	MR_sv(1) = MR_sv(7);
	MR_sv(2) = MR_sv(8);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(9);
	MR_sv(3) = MR_tfield(0, MR_sv(6), 4);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i19);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i22);
	}
	MR_sv(1) = MR_sv(7);
	MR_sv(2) = MR_sv(8);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i26);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_sv(6), 4);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(8);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i34);
	}
	MR_sv(1) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i35);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(4);
	MR_sv(3) = MR_tfield(0, MR_sv(6), 4);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__cord__cons_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i36);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 9);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__measurements__call_goal_cost_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i37);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i38);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(15);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i41);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(3) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i45);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i46);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i48);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(2);
	MR_r10 = (MR_Integer) 1;
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(7);
	MR_r13 = MR_sv(8);
	MR_r14 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl5_13_1,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i53);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i54);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i58);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_r2;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i62);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i63);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i64);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i65);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(2);
	MR_r10 = (MR_Integer) 1;
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(9);
	MR_r13 = MR_sv(10);
	MR_r14 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl5_13_1,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i71);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i72);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,3)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i76);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i77);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i79);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i84);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i84);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i86);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i87);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i88);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i89);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_r5 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i90);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i91);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_tfield(3, MR_r2, 3) = MR_sv(9);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i95);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_sv(3), 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i97);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i99);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_tempr5 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tfield(0, MR_tempr4, 2), 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr5, 7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(4);
	MR_r1 = MR_tempr3;
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_tempr3, 1);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0_i105);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tfield(0, MR_r1, 2), 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module7)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,5,6,7,10,11,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_get_conjunctions_worth_parallelising'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(12) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(14);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module8)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,72,6,8,10,11,12,13,15,19,21)
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,20,25,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_get_conjunctions_worth_parallelising'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i72);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tfield(1, MR_r3, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r5;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(10), 2);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(11);
	MR_r4 = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(10);
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__filter_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(11);
	MR_r6 = MR_sv(5);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(11);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i29);
	}
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i29);
	}
	MR_r5 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(6);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module9)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_parallelise_goal'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_EQ(MR_r1,5)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0_i2);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0_i1);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__atomic_goal_is_call_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
MR_decl_entry(map__lookup_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module10)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0,2,3,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_pard_goal_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(4) = MR_tfield(0, MR_sv(4), 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(program_representation_utils__atomic_goal_is_call_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, var_and_mode);
	MR_r3 = MR_r1;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__atomic_goal_cost_1_0);
MR_decl_entry(analysis_utils__cost_and_callees_is_recursive_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__measurements__call_goal_cost_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module11)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0);
	MR_init_label7(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,2,5,4,8,10,12,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_pard_goal_cost'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(program_representation_utils__atomic_goal_is_call_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__atomic_goal_cost_1_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r3 = MR_tfield(0, MR_sv(1), 4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(analysis_utils__cost_and_callees_is_recursive_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0_i9);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__call_goal_cost_1_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__measurements__call_goal_cost_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module12)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0,2,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_cost_above_par_threshold'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 2), 9);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_sv(1)) > MR_word_to_float(MR_r1));
	MR_decr_sp_and_return(3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0;
MR_decl_entry(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
MR_decl_entry(list__map_foldl2_7_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module13)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,2,3,4,11,12,14,17,19,20,6)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,29,30,32,35,37,38,24,47,48,50)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,53,55,56,42,61,62,65,67,68,70)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,71,72,60,75,77,79,80,82,85,87)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,88,73,94,96,99,101,102,92,108,110)
	MR_init_label9(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,113,115,116,118,119,5,121,123,120)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_to_pard_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	MR_r2 = MR_tfield(0, MR_sv(1), 8);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_sv(1), 7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__get_goal_attribute_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(coverage__get_coverage_before_det_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r6 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(8), 0) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_sv(3) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i118);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r6 = MR_tfield(1, MR_tempr2, 0);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_sv(3) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i35);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i37);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i38);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i118);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,23);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r6 = MR_tfield(2, MR_tempr2, 2);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i48);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i50);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_sv(3) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i53);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i55);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i56);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i118);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,3)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i60);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(8) = MR_tempr1;
	MR_sv(11) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(14) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i61);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i62);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_sv(7) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i65);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i67);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i68);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_sv(11) = MR_tempr1;
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i70);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i71);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i72);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(11) = MR_r1;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i73);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_sv(13);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i75);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i77);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i79);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i80);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(8);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i82);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_sv(3) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i85);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i87);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i88);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i118);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i92);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_sv(3), 1);
	MR_r4 = MR_sv(13);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i94);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_tfield(0, MR_r1, 2), 4);
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i96);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_sv(3) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i99);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i101);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i102);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i118);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tempr2 = MR_tempr3;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	MR_r4 = MR_sv(13);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i108);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_sv(7) = MR_tfield(0, MR_tfield(0, MR_r1, 2), 4);
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i110);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_sv(3) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i113);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i115);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i116);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i118);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i119);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i121);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i120);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i123);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0_i120);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(8);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(17);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(8);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module14)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0,4,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_get_conjunctions_worth_parallelising'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_sv(5) = MR_tempr3;
	MR_sv(1) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module15)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0,4,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_case_get_conjunctions_worth_parallelising'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr3 = MR_r4;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tempr3;
	MR_sv(3) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(0, MR_r3, 2);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r5;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__measurements__goal_cost_get_total_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module16)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,7,4,5,8,9,10,3,12,14,19)
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,17,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_goal_counts'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tfield(0, MR_tempr2, 2), 4);
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i4);
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_tempr2, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 1), 2);
	}
	MR_np_call_localret_ent(set__member_2_1,
		mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 3);
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if ((MR_r2 != MR_r3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_total_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__call_goal_cost_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr4 = MR_sv(4);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0_i21);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_r4, 1);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module17)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'single_context_makes_goal_costly'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r3, 2), 4);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__lazy__delay_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module18)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_build_use_map'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_tfield(0, MR_tempr1, 8) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__lazy__delay_1_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0);
MR_decl_entry(var_use_analysis__var_first_use_13_0);
MR_decl_entry(var_use_analysis__pessimistic_var_use_info_3_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(message__write_out_messages_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module19)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0);
	MR_init_label9(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,2,5,6,4,9,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_goal_var_use_lazy'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 9);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i2);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(12) == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_sv(12)) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i4);
	}
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i5);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i6);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r12 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(var_use_analysis__var_first_use_13_0);
	}
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__pessimistic_var_use_info_3_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i9);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(2), 0) = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i12);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(message__append_message_4_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i13);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i14);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(message__write_out_messages_4_0,
		fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0_i15);
MR_def_label(fn__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module20)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_to_pard_goals'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module21)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_to_pard_goals'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module22)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_to_pard_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr3 = MR_r4;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(0, MR_r3, 2);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__inst_map_get_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_search_goals_module23)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_var_modes'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(program_representation_utils__inst_map_get_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(program_representation_utils__inst_map_get_4_0,
		mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals_maybe_bunch_0(void)
{
	mdprof_fb__automatic_parallelism__autopar_search_goals_module0();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module1();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module2();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module3();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module4();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module5();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module6();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module7();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module8();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module9();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module10();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module11();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module12();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module13();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module14();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module15();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module16();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module17();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module18();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module19();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module20();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module21();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module22();
	mdprof_fb__automatic_parallelism__autopar_search_goals_module23();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_type_tables(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_threadscope_string_table(void);
#endif

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__automatic_parallelism__autopar_search_goals_maybe_bunch_0();
	mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_debugger();
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb__automatic_parallelism__autopar_search_goals);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
