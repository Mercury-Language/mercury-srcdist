/*
** Automatically generated from `implicit_parallelism.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__implicit_parallelism__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 231 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "transform_hlds.implicit_parallelism.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 32 "transform_hlds.implicit_parallelism.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.implicit_parallelism.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.implicit_parallelism.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "transform_hlds.implicit_parallelism.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "transform_hlds.implicit_parallelism.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "transform_hlds.implicit_parallelism.c"
#line 53 "transform_hlds.implicit_parallelism.c"
#include "transform_hlds.implicit_parallelism.mh"

#line 56 "transform_hlds.implicit_parallelism.c"
#line 57 "transform_hlds.implicit_parallelism.c"
#ifndef TRANSFORM_HLDS__IMPLICIT_PARALLELISM_DECL_GUARD
#define TRANSFORM_HLDS__IMPLICIT_PARALLELISM_DECL_GUARD

#line 61 "transform_hlds.implicit_parallelism.c"
#line 62 "transform_hlds.implicit_parallelism.c"

#endif
#line 65 "transform_hlds.implicit_parallelism.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0,
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0,
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0,
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_introduced_parallelism_0,
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_module_candidate_par_conjs_map_0,
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_parallelism_info_0;
MR_decl_label9(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0, 6,7,8,9,10,11,12,13,2)
MR_decl_label10(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0, 2,3,6,7,8,11,13,17,18,20)
MR_decl_label10(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0, 21,22,25,27,29,30,5,35,36,39)
MR_decl_label4(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0, 41,43,44,37)
MR_decl_label3(transform_hlds__implicit_parallelism__args_match_3_0, 4,2,1)
MR_decl_label10(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0, 68,2,3,4,7,38,5,15,16,20)
MR_decl_label5(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0, 22,23,25,24,18)
MR_decl_label10(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0, 69,5,7,8,32,10,13,12,15,11)
MR_decl_label6(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0, 17,19,21,23,25,24)
MR_decl_label6(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0, 29,5,7,8,10,11)
MR_decl_label10(transform_hlds__implicit_parallelism__call_site_convert_2_0, 3,4,5,6,7,8,9,10,11,19)
MR_decl_label10(transform_hlds__implicit_parallelism__call_site_convert_2_0, 21,22,23,24,25,26,27,28,29,13)
MR_decl_label2(transform_hlds__implicit_parallelism__call_site_convert_2_0, 15,17)
MR_decl_label2(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0, 3,1)
MR_decl_label4(transform_hlds__implicit_parallelism__find_end_of_partition_3_0, 21,4,6,8)
MR_decl_label6(transform_hlds__implicit_parallelism__find_partition_5_0, 29,6,4,9,11,12)
MR_decl_label10(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0, 25,63,40,41,27,34,31,32,29,45)
MR_decl_label10(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0, 4,5,6,7,8,9,10,11,12,15)
MR_decl_label1(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0, 24)
MR_decl_label4(transform_hlds__implicit_parallelism__get_callees_feedback_4_0, 7,3,5,2)
MR_decl_label5(transform_hlds__implicit_parallelism__get_number_args_2_0, 5,7,17,4,1)
MR_decl_label6(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0, 2,3,4,6,9,1)
MR_decl_label7(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0, 4,22,8,11,43,17,1)
MR_decl_label1(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0, 1)
MR_decl_label1(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0, 3)
MR_decl_label10(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0, 166,4,6,39,41,47,52,55,61,66)
MR_decl_label10(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0, 14,97,16,23,26,33,101,77,12,5)
MR_decl_label2(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0, 79,81)
MR_decl_label5(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0, 28,4,3,6,1)
MR_decl_label10(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0, 2,5,7,8,16,18,25,13,11,29)
MR_decl_label6(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0, 31,34,35,55,28,1)
MR_decl_label2(transform_hlds__implicit_parallelism__match_sym_module_name_2_0, 4,1)
MR_decl_label4(transform_hlds__implicit_parallelism__match_sym_name_3_0, 5,6,3,1)
MR_decl_label8(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0, 5,6,8,10,11,13,14,2)
MR_decl_label7(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0, 2,3,4,7,9,10,11)
MR_decl_label10(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0, 2,3,4,5,6,9,11,14,12,17)
MR_decl_label7(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0, 18,20,29,22,23,24,25)
MR_decl_label10(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 11,19,20,21,22,23,24,25,26,15)
MR_decl_label10(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 13,9,5,33,34,35,38,40,41,43)
MR_decl_label10(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 46,49,48,52,54,56,57,58,59,61)
MR_decl_label6(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 63,64,65,66,37,2)
MR_decl_label9(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0, 2,3,4,5,6,7,8,9,12)
MR_decl_label8(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0, 2,3,9,13,15,11,8,4)
MR_decl_label8(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0, 30,4,5,7,8,9,33,2)
MR_decl_label4(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0, 12,3,4,6)
MR_decl_label10(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0, 60,40,14,22,18,20,16,65,3,4)
MR_decl_label10(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0, 5,6,9,10,28,29,30,31,35,36)
MR_decl_label9(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0, 42,46,43,47,52,53,55,56,59)
MR_decl_label5(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0, 12,3,4,5,6)
MR_decl_label10(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0, 54,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0, 12,13,16,25,26,27,28,31,32,33)
MR_decl_label5(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0, 34,35,36,37,38)
MR_decl_label4(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0, 13,3,4,7)
MR_decl_label2(transform_hlds__implicit_parallelism__update_conj_and_index_5_0, 5,2)
MR_decl_label2(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0, 4,1)
MR_decl_label2(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0, 4,1)
MR_decl_label2(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0, 6,1)
MR_decl_label6(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0, 3,2,5,9,13,37)
MR_decl_label6(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0, 3,2,5,9,13,37)
MR_decl_label6(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0, 3,2,5,9,13,37)
MR_decl_static(transform_hlds__implicit_parallelism__get_callees_feedback_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0)
MR_decl_static(fn__transform_hlds__implicit_parallelism__this_file_0_0)
MR_decl_static(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0)
MR_decl_static(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__get_number_args_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__parallelize_calls_8_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0)
MR_decl_static(transform_hlds__implicit_parallelism__update_conj_and_index_5_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0)
MR_def_extern_entry(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0)
MR_decl_static(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0)
MR_decl_static(transform_hlds__implicit_parallelism__find_end_of_partition_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__find_partition_5_0)
MR_decl_static(transform_hlds__implicit_parallelism__match_sym_module_name_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__match_sym_name_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__args_match_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__call_site_convert_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__introduced_parallelism_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__introduced_parallelism_0_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0)
MR_decl_static(transform_hlds__implicit_parallelism__IntroducedFrom__pred__match_sym_name__559__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__parallelize_calls_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__match_sym_name_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__parallelize_calls_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__program_representation, call_site),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__match_sym_name_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_2 mercury_common_2[8] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label),
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label),
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_4;
static const struct mercury_type_3 mercury_common_3[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(2,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_parallelism_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_introduced_parallelism_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, parallelism_info),
MR_INT_CTOR_ADDR,
MR_COMMON(2,4),
MR_COMMON(2,4),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, introduced_parallelism),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, introduced_parallelism)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_string_const("Insufficient feedback information for implicit parallelism", 58)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_COMMON(1,1),
MR_ENTRY_AP(transform_hlds__implicit_parallelism__call_site_convert_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, parallelism_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(2,6),
MR_COMMON(2,6),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, introduced_parallelism),
MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, introduced_parallelism)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1)
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_COMMON(1,2),
MR_ENTRY_AP(transform_hlds__implicit_parallelism__IntroducedFrom__pred__match_sym_name__559__1_2_0),
1,
46
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_0 = {
	"csk_normal",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_1 = {
	"csk_special",
	1
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_2 = {
	"csk_higher_order",
	2
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_3 = {
	"csk_method",
	3
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_4 = {
	"csk_callback",
	4
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__enum_value_ordered_call_site_kind_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_1,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_2,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_3,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_4
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__enum_name_ordered_call_site_kind_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_4,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_2,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_3,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_1
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__functor_number_map_call_site_kind_0[] = {
	3,
	4,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0)),
	"transform_hlds.implicit_parallelism",
	"call_site_kind",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__enum_name_ordered_call_site_kind_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__enum_value_ordered_call_site_kind_0 },
	5,
	4,
	mercury_data_transform_hlds__implicit_parallelism__functor_number_map_call_site_kind_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__implicit_parallelism__field_types_candidate_call_site_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_transform_hlds__implicit_parallelism__field_names_candidate_call_site_0_0[] = {
	"caller",
	"slot_number",
	"kind",
	"callee"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_candidate_call_site_0_0 = {
	"candidate_call_site",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__implicit_parallelism__field_types_candidate_call_site_0_0,
	mercury_data_transform_hlds__implicit_parallelism__field_names_candidate_call_site_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_candidate_call_site_0_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_candidate_call_site_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_candidate_call_site_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_candidate_call_site_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_candidate_call_site_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_candidate_call_site_0_0
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__functor_number_map_candidate_call_site_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0)),
	"transform_hlds.implicit_parallelism",
	"candidate_call_site",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_candidate_call_site_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_candidate_call_site_0 },
	1,
	4,
	mercury_data_transform_hlds__implicit_parallelism__functor_number_map_candidate_call_site_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__implicit_parallelism__field_types_intra_module_proc_label_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__implicit_parallelism__field_names_intra_module_proc_label_0_0[] = {
	"im_pred_name",
	"im_arity",
	"im_pred_or_func",
	"im_mode"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_intra_module_proc_label_0_0 = {
	"intra_module_proc_label",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__implicit_parallelism__field_types_intra_module_proc_label_0_0,
	mercury_data_transform_hlds__implicit_parallelism__field_names_intra_module_proc_label_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_intra_module_proc_label_0_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_intra_module_proc_label_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_intra_module_proc_label_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_intra_module_proc_label_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_intra_module_proc_label_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_intra_module_proc_label_0_0
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__functor_number_map_intra_module_proc_label_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0)),
	"transform_hlds.implicit_parallelism",
	"intra_module_proc_label",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_intra_module_proc_label_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_intra_module_proc_label_0 },
	1,
	4,
	mercury_data_transform_hlds__implicit_parallelism__functor_number_map_intra_module_proc_label_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_introduced_parallelism_0_0 = {
	"have_not_introduced_parallelism",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_introduced_parallelism_0_1 = {
	"introduced_parallelism",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__enum_value_ordered_introduced_parallelism_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_introduced_parallelism_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_introduced_parallelism_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__enum_name_ordered_introduced_parallelism_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_introduced_parallelism_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_introduced_parallelism_0_1
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__functor_number_map_introduced_parallelism_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_introduced_parallelism_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__introduced_parallelism_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__introduced_parallelism_0_0)),
	"transform_hlds.implicit_parallelism",
	"introduced_parallelism",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__enum_name_ordered_introduced_parallelism_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__enum_value_ordered_introduced_parallelism_0 },
	2,
	4,
	mercury_data_transform_hlds__implicit_parallelism__functor_number_map_introduced_parallelism_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_module_candidate_par_conjs_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0)),
	"transform_hlds.implicit_parallelism",
	"module_candidate_par_conjs_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__implicit_parallelism__field_types_parallelism_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0mdbcomp__feedback__type_ctor_info_candidate_par_conjunction_0
};

const MR_ConstString mercury_data_transform_hlds__implicit_parallelism__field_names_parallelism_info_0_0[] = {
	"pi_desired_parallelism",
	"pi_sparking_cost",
	"pi_locking_cost",
	"pi_cpc_map"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_parallelism_info_0_0 = {
	"parallelism_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__implicit_parallelism__field_types_parallelism_info_0_0,
	mercury_data_transform_hlds__implicit_parallelism__field_names_parallelism_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_parallelism_info_0_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_parallelism_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_parallelism_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_parallelism_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_parallelism_info_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_parallelism_info_0_0
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__functor_number_map_parallelism_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_parallelism_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0)),
	"transform_hlds.implicit_parallelism",
	"parallelism_info",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_parallelism_info_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_parallelism_info_0 },
	1,
	4,
	mercury_data_transform_hlds__implicit_parallelism__functor_number_map_parallelism_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_4 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"args_match",
3,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
507,
"d2;c9;d2;c2;d1;c2;d1;c2;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"args_match",
3,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
507,
"d2;c9;d2;c2;d1;c2;d1;c2;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"args_match",
3,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
507,
"d2;c9;d2;c2;d1;c2;d1;c2;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"args_match",
3,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
507,
"d2;c9;d2;c2;d1;c2;d1;c2;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__match_sym_name_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"lambda_implicit_parallelism_m_559",
2,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
559,
"d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"maybe_parallelise_conj",
4,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
291,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"maybe_parallelise_proc",
8,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
220,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_3 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"call_site_convert",
2,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
652,
"d1;c5;t;q;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_2 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"maybe_parallelise_pred",
7,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
117,
"d1;c6;t;q;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"cpc_proc_is_in_module",
3,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
190,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__parallelize_calls_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"goal_depends_on_goal",
2,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
1204,
"d1;c9;t;e;c5;t;c3;"
};



MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module0)
	MR_init_entry1(transform_hlds__implicit_parallelism__get_callees_feedback_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__get_callees_feedback_4_0);
	MR_init_label4(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,7,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_callees_feedback'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__get_callees_feedback_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_callees_feedback_4_0_i2);
	}
MR_def_label(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_callees_feedback_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_callees_feedback_4_0_i5);
	}
MR_def_label(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
MR_def_label(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_callees_feedback_4_0_i7);
	}
MR_def_label(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module1)
	MR_init_entry1(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0);
	MR_init_label1(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'increment_index_if_in_conj'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__string__from_int_1_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module2)
	MR_init_entry1(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0);
	MR_init_label9(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,2,3,4,5,6,7,8,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_proc_id_to_raw_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i9);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("+1", 2);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("-", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module3)
	MR_init_entry1(fn__transform_hlds__implicit_parallelism__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__implicit_parallelism__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__implicit_parallelism__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module4)
	MR_init_entry1(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0);
	MR_init_label10(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,25,63,40,41,27,34,31,32,29,45)
	MR_init_label10(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,4,5,6,7,8,9,10,11,12,15)
	MR_init_label1(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_call_kind_and_callee'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i25) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i63) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i27) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i45));
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("get_call_kind_and_callee", 24);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i40);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__pred_proc_id_to_raw_id_3_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(2, MR_r4, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i34) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i31) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i32) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i29));
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("get_call_kind_and_callee: event_call", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("get_call_kind_and_callee: cast", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i25);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i12);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("+1", 2);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("-", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module5)
	MR_init_entry1(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0);
	MR_init_label5(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,28,4,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_in_css_list_to_be_parallelized'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r6 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (((MR_Integer) MR_tempr2 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((MR_tempr2 != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r3) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site);
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i28);
	}
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module6)
	MR_init_entry1(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__goal_is_conjunction_2_0);
	MR_init_label1(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_conjunction'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module7)
	MR_init_entry1(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0);
	MR_init_label7(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,4,22,8,11,43,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_call_or_negated_call'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tag(MR_r2);
	if ((MR_r1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i22);
	}
	if ((MR_r1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i4);
	}
	MR_r1 = (MR_r1 == MR_mktag((MR_Integer) 1));
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r2, 0);
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i43);
	}
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 0));
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i43) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1));
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r2, 1), 0);
	MR_r2 = MR_tag(MR_r1);
	if ((MR_r2 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i17);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i11);
	}
	MR_r1 = (MR_r2 == MR_mktag((MR_Integer) 1));
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i43);
	}
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 0));
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__index1_det_3_0);
MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module8)
	MR_init_entry1(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0);
	MR_init_label10(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,68,2,3,4,7,38,5,15,16,20)
	MR_init_label5(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,22,23,25,24,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_goals_surrounded_by_calls_to_be_parallelized'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(4) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i3);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i38) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5));
	}
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r6, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5);
	}
	}
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i16);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (((MR_Integer) 1 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i16);
	}
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i18);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(counter__allocate_3_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i68);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i68);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module9)
	MR_init_entry1(transform_hlds__implicit_parallelism__get_number_args_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__get_number_args_2_0);
	MR_init_label5(transform_hlds__implicit_parallelism__get_number_args_2_0,5,7,17,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_number_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__get_number_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i17);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_r3, 2);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(2, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i7);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(2, MR_r3, 1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(2, MR_r3, 1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_tfield(3, MR_r3, 4);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module10)
	MR_init_entry1(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0);
	MR_init_label10(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,2,5,7,8,16,18,25,13,11,29)
	MR_init_label6(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,31,34,35,55,28,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_worth_parallelizing'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i11);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (((MR_Integer) 1 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i11);
	}
	MR_tempr3 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr3;
	if (MR_PTAG_TEST(MR_tempr3,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i25);
	}
	if (MR_PTAG_TEST(MR_tempr3,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i16);
	}
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_r3, 1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_tfield(3, MR_r3, 4);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) < (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_number_args_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_number_args_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i31);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i28);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i34);
	}
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i55);
	}
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i35);
	}
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i55);
	}
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_r2);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("is_worth_parallelizing", 22);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i55);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module11)
	MR_init_entry1(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0);
	MR_init_label9(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,6,7,8,9,10,11,12,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_call_to_parallel_conjunction'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("add_call_to_parallel_conjunction", 32);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_tail_1_0);
MR_decl_entry(list__delete_all_3_1);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__is_empty_1_0);
MR_decl_entry(hlds__goal_util__create_conj_4_0);
MR_decl_entry(list__det_split_list_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module12)
	MR_init_entry1(transform_hlds__implicit_parallelism__parallelize_calls_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__parallelize_calls_8_0);
	MR_init_label10(transform_hlds__implicit_parallelism__parallelize_calls_8_0,11,19,20,21,22,23,24,25,26,15)
	MR_init_label10(transform_hlds__implicit_parallelism__parallelize_calls_8_0,13,9,5,33,34,35,38,40,41,43)
	MR_init_label10(transform_hlds__implicit_parallelism__parallelize_calls_8_0,46,49,48,52,54,56,57,58,59,61)
	MR_init_label6(transform_hlds__implicit_parallelism__parallelize_calls_8_0,63,64,65,66,37,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallelize_calls'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__parallelize_calls_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i2);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_sv(5) = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i5);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i5);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_sv(8) = MR_tempr5;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i13);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (((MR_Integer) 1 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i13);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i15);
	}
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("add_call_to_parallel_conjunction", 32);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 2) = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r6;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i33);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i34);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i35);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i38);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i37);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i40);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__is_empty_1_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i37);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__goal_is_conjunction_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i49);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i48);
	}
	if (((MR_Integer) 1 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i48);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i52);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i52);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i54);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i57);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__det_split_list_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i56);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i58);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i59);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i63);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__det_split_list_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i61);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i64);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i65);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i66);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("parallelize_calls", 17);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module13)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0);
	MR_init_label8(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,2,3,9,13,15,11,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_call_for_implicit_parallelism'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_r7;
	MR_np_call_localret_ent(counter__allocate_3_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_sv(7), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i4);
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i11);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__parallelize_calls_8_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__replace_nth_det_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module14)
	MR_init_entry1(transform_hlds__implicit_parallelism__update_conj_and_index_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__update_conj_and_index_5_0);
	MR_init_label2(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_conj_and_index'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__update_conj_and_index_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__update_conj_and_index_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__update_conj_and_index_5_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__replace_nth_det_4_0,
		transform_hlds__implicit_parallelism__update_conj_and_index_5_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module15)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0);
	MR_init_label10(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,60,40,14,22,18,20,16,65,3,4)
	MR_init_label10(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,5,6,9,10,28,29,30,31,35,36)
	MR_init_label9(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,42,46,43,47,52,53,55,56,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_goal_for_implicit_parallelism'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r8 = MR_tfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r8),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i60) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i14) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i65));
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_tfield(2, MR_r8, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r9),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i22) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i18) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i20) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i16));
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r8, 0),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i3) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i55) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i35) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i42) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i28) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i52));
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tfield(3, MR_r8, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i59);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i30);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i31);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i59);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r8, 1);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i36);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i59);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r8;
	MR_r9 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i43);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_tempr4 = MR_r4;
	MR_sv(6) = MR_tempr4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r9;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i47);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i59);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__implicit_parallelism__this_file_0_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i53);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("process_goal_for_implicit_parallelism: shorthand", 48);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r8;
	MR_sv(1) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i56);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i59);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module16)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0);
	MR_init_label8(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,30,4,5,7,8,9,33,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_conj_for_implicit_parallelism'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r4;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i30);
	}
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("process_conj_for_implicit_parallelism", 37);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i33);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i30);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("process_conj_for_implicit_parallelism", 37);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module17)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0);
	MR_init_label4(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,12,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_disj_for_implicit_parallelism'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module18)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0);
	MR_init_label4(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,13,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_switch_cases_for_implicit_parallelism'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module19)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0);
	MR_init_label10(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,54,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,12,13,16,25,26,27,28,31,32,33)
	MR_init_label5(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,34,35,36,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_procs_for_implicit_parallelism'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i13);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = (MR_Word) MR_string_const("+1", 2);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("-", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(11);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(12);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i27);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i54);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i31);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i32);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i33);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i34);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i35);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i36);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i37);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i38);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i54);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module20)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0);
	MR_init_label5(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_preds_for_implicit_parallelism'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,
		transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__get_feedback_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(mdbcomp__feedback__get_feedback_data_2_0);
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__map__from_assoc_list_1_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(hlds__pred_table__predicate_table_set_preds_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_contains_par_conj_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module21)
	MR_init_entry1(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0);
	MR_init_label10(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,2,3,6,7,8,11,13,17,18,20)
	MR_init_label10(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,21,22,25,27,29,30,5,35,36,39)
	MR_init_label4(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,41,43,44,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_implicit_parallelism_transformation'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 383;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_feedback_info_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__feedback__get_feedback_data_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i37);
	}
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i18);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, introduced_parallelism);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i27);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i30);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_contains_par_conj_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i44);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i35);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_feedback_info_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i36);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__feedback__get_feedback_data_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i39);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, call_site);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0_i44);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module22)
	MR_init_entry1(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0);
	MR_init_label2(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cpc_proc_is_in_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr1, 5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__cpc_proc_is_in_module_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module23)
	MR_init_entry1(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0);
	MR_init_label7(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,2,3,4,7,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_parallelise_pred'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, introduced_parallelism);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_i9);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_pred_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(mdbcomp__program_representation__goal_path_from_string_2_0);
MR_decl_entry(mdbcomp__program_representation__goal_path_consable_2_0);
MR_decl_entry(hlds__goal_util__maybe_transform_goal_at_goal_path_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module24)
	MR_init_entry1(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0);
	MR_init_label10(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,2,3,4,5,6,9,11,14,12,17)
	MR_init_label7(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,18,20,29,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_parallelise_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i29);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(mdbcomp__program_representation__goal_path_from_string_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i14);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i12);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__program_representation__goal_path_consable_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i18);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("Invalid goal path in CPC Feedback Information", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__program_representation__goal_path_consable_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i18);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__maybe_transform_goal_at_goal_path_4_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i22);
	}
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_proc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__goal_is_atomic_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module25)
	MR_init_entry1(transform_hlds__implicit_parallelism__find_end_of_partition_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__find_end_of_partition_3_0);
	MR_init_label4(transform_hlds__implicit_parallelism__find_end_of_partition_3_0,21,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_end_of_partition'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__find_end_of_partition_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__find_end_of_partition_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__find_end_of_partition_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__goal_is_atomic_2_0,
		transform_hlds__implicit_parallelism__find_end_of_partition_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__find_end_of_partition_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__find_end_of_partition_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__implicit_parallelism__find_end_of_partition_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__find_end_of_partition_3_0,
		transform_hlds__implicit_parallelism__find_end_of_partition_3_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__find_end_of_partition_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module26)
	MR_init_entry1(transform_hlds__implicit_parallelism__find_partition_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__find_partition_5_0);
	MR_init_label6(transform_hlds__implicit_parallelism__find_partition_5_0,29,6,4,9,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_partition'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__find_partition_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__find_partition_5_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__find_partition_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__find_partition_5_0_i4);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__find_end_of_partition_3_0,
		transform_hlds__implicit_parallelism__find_partition_5_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__find_partition_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__implicit_parallelism__find_partition_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_util__goal_is_atomic_2_0,
		transform_hlds__implicit_parallelism__find_partition_5_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__find_partition_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__find_partition_5_0_i11);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__find_partition_5_0,
		transform_hlds__implicit_parallelism__find_partition_5_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__find_partition_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__find_partition_5_0,
		transform_hlds__implicit_parallelism__find_partition_5_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__find_partition_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module27)
	MR_init_entry1(transform_hlds__implicit_parallelism__match_sym_module_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__match_sym_module_name_2_0);
	MR_init_label2(transform_hlds__implicit_parallelism__match_sym_module_name_2_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_sym_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__match_sym_module_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__match_sym_module_name_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__match_sym_module_name_2_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__match_sym_module_name_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localtailcall(transform_hlds__implicit_parallelism__match_sym_module_name_2_0);
	}
MR_def_label(transform_hlds__implicit_parallelism__match_sym_module_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__match_sym_module_name_2_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__match_sym_module_name_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__split_at_separator_2_0);
MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module28)
	MR_init_entry1(transform_hlds__implicit_parallelism__match_sym_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__match_sym_name_3_0);
	MR_init_label4(transform_hlds__implicit_parallelism__match_sym_name_3_0,5,6,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__match_sym_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__match_sym_name_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r3, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__match_sym_name_3_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	}
	MR_np_call_localret_ent(fn__string__split_at_separator_2_0,
		transform_hlds__implicit_parallelism__match_sym_name_3_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__match_sym_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__implicit_parallelism__match_sym_name_3_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__match_sym_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__implicit_parallelism__match_sym_module_name_2_0);
	}
MR_def_label(transform_hlds__implicit_parallelism__match_sym_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r3, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__match_sym_name_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(list__map_3_5);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module29)
	MR_init_entry1(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0);
	MR_init_label10(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,166,4,6,39,41,47,52,55,61,66)
	MR_init_label10(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,14,97,16,23,26,33,101,77,12,5)
	MR_init_label2(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,79,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inner_goal_match_hlds_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i166);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_sv(3), 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i39) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i14) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i77));
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_tag(MR_sv(2)) == MR_mktag((MR_Integer) 1)) || (MR_tag(MR_sv(2)) == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i55);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i41);
	}
	MR_r6 = MR_tfield(1, MR_r4, 3);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i101);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 2);
	MR_r1 = MR_tfield(1, MR_tempr3, 5);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__match_sym_name_3_0,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i47);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__args_match_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_5,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i52);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 0);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(2, MR_tempr4, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 2);
	MR_r1 = MR_tfield(1, MR_tempr3, 5);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__match_sym_name_3_0,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i61);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__args_match_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_5,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i66);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i26);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i16);
	}
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__args_match_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_r5 = MR_tfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(list__map_3_5,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__args_match_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_r5 = MR_tfield(2, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(list__map_3_5,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i33);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i97);
	}
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i6);
	}
	MR_np_call_localret_ent(fn__transform_hlds__implicit_parallelism__this_file_0_0,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Found non-atomic goal in inner_goal_match_hlds_goal", 51);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i79);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,
		transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0_i81);
MR_def_label(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module30)
	MR_init_entry1(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0);
	MR_init_label6(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,29,5,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_seq_conjuncts'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__inner_goal_match_hlds_goal_6_0,
		transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,
		transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__create_conj_from_list_3_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module31)
	MR_init_entry1(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__build_par_conjuncts_6_0);
	MR_init_label10(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,69,5,7,8,32,10,13,12,15,11)
	MR_init_label6(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,17,19,21,23,25,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_par_conjuncts'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i69);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__build_seq_conjuncts_6_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i10);
	}
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i12);
	}
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i15);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("Extra goals found during automatic parallelisation", 50);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i21);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i32);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i25);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0_i32);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__flatten_conj_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module32)
	MR_init_entry1(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0);
	MR_init_label8(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,5,6,8,10,11,13,14,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_parallelise_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__goal_util__flatten_conj_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__find_partition_5_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__build_par_conjuncts_6_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i2);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0_i14);
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__implicit_parallelism__maybe_parallelise_conj_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__search_name_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module33)
	MR_init_entry1(transform_hlds__implicit_parallelism__args_match_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__args_match_3_0);
	MR_init_label3(transform_hlds__implicit_parallelism__args_match_3_0,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'args_match'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__args_match_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__args_match_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(varset__search_name_3_0,
		transform_hlds__implicit_parallelism__args_match_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__args_match_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__args_match_3_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__implicit_parallelism__args_match_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__args_match_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module34)
	MR_init_entry1(transform_hlds__implicit_parallelism__call_site_convert_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__call_site_convert_2_0);
	MR_init_label10(transform_hlds__implicit_parallelism__call_site_convert_2_0,3,4,5,6,7,8,9,10,11,19)
	MR_init_label10(transform_hlds__implicit_parallelism__call_site_convert_2_0,21,22,23,24,25,26,27,28,29,13)
	MR_init_label2(transform_hlds__implicit_parallelism__call_site_convert_2_0,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_convert'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__call_site_convert_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__call_site_convert_2_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_tfield(0, MR_r2, 5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(4) = MR_tfield(1, MR_r2, 3);
	MR_sv(5) = MR_tfield(1, MR_r2, 4);
	MR_r1 = MR_tfield(1, MR_r2, 5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__call_site_convert_2_0_i19);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__call_site_convert_2_0_i13);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__call_site_convert_2_0_i15);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__call_site_convert_2_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__call_site_convert_2_0_i21);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_tfield(0, MR_r2, 5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(4) = MR_tfield(1, MR_r2, 3);
	MR_sv(5) = MR_tfield(1, MR_r2, 4);
	MR_r1 = MR_tfield(1, MR_r2, 5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i27);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i28);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__call_site_convert_2_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__call_site_convert_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module35)
	MR_init_entry1(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0);
	MR_init_label6(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,2,3,4,6,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_depends_on_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,1)
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


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module36)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module37)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module38)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_init_label2(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module39)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_init_label6(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i2);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i5);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i9);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i13);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module40)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0);
	MR_init_label2(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module41)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0);
	MR_init_label6(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i2);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i5);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i9);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i13);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__intra_module_proc_label_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module42)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__introduced_parallelism_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__introduced_parallelism_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__introduced_parallelism_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module43)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__introduced_parallelism_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__introduced_parallelism_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__introduced_parallelism_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module44)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
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

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module45)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module46)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0);
	MR_init_label2(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__implicit_parallelism__parallelism_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module47)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0);
	MR_init_label6(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, intra_module_proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, candidate_par_conjunction);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__parallelism_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module48)
	MR_init_entry1(transform_hlds__implicit_parallelism__IntroducedFrom__pred__match_sym_name__559__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__IntroducedFrom__pred__match_sym_name__559__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__match_sym_name__559__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__IntroducedFrom__pred__match_sym_name__559__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__implicit_parallelism_maybe_bunch_0(void)
{
	transform_hlds__implicit_parallelism_module0();
	transform_hlds__implicit_parallelism_module1();
	transform_hlds__implicit_parallelism_module2();
	transform_hlds__implicit_parallelism_module3();
	transform_hlds__implicit_parallelism_module4();
	transform_hlds__implicit_parallelism_module5();
	transform_hlds__implicit_parallelism_module6();
	transform_hlds__implicit_parallelism_module7();
	transform_hlds__implicit_parallelism_module8();
	transform_hlds__implicit_parallelism_module9();
	transform_hlds__implicit_parallelism_module10();
	transform_hlds__implicit_parallelism_module11();
	transform_hlds__implicit_parallelism_module12();
	transform_hlds__implicit_parallelism_module13();
	transform_hlds__implicit_parallelism_module14();
	transform_hlds__implicit_parallelism_module15();
	transform_hlds__implicit_parallelism_module16();
	transform_hlds__implicit_parallelism_module17();
	transform_hlds__implicit_parallelism_module18();
	transform_hlds__implicit_parallelism_module19();
	transform_hlds__implicit_parallelism_module20();
	transform_hlds__implicit_parallelism_module21();
	transform_hlds__implicit_parallelism_module22();
	transform_hlds__implicit_parallelism_module23();
	transform_hlds__implicit_parallelism_module24();
	transform_hlds__implicit_parallelism_module25();
	transform_hlds__implicit_parallelism_module26();
	transform_hlds__implicit_parallelism_module27();
	transform_hlds__implicit_parallelism_module28();
	transform_hlds__implicit_parallelism_module29();
	transform_hlds__implicit_parallelism_module30();
	transform_hlds__implicit_parallelism_module31();
	transform_hlds__implicit_parallelism_module32();
	transform_hlds__implicit_parallelism_module33();
	transform_hlds__implicit_parallelism_module34();
	transform_hlds__implicit_parallelism_module35();
	transform_hlds__implicit_parallelism_module36();
	transform_hlds__implicit_parallelism_module37();
	transform_hlds__implicit_parallelism_module38();
	transform_hlds__implicit_parallelism_module39();
}

static void mercury__transform_hlds__implicit_parallelism_maybe_bunch_1(void)
{
	transform_hlds__implicit_parallelism_module40();
	transform_hlds__implicit_parallelism_module41();
	transform_hlds__implicit_parallelism_module42();
	transform_hlds__implicit_parallelism_module43();
	transform_hlds__implicit_parallelism_module44();
	transform_hlds__implicit_parallelism_module45();
	transform_hlds__implicit_parallelism_module46();
	transform_hlds__implicit_parallelism_module47();
	transform_hlds__implicit_parallelism_module48();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__implicit_parallelism__init(void);
void mercury__transform_hlds__implicit_parallelism__init_type_tables(void);
void mercury__transform_hlds__implicit_parallelism__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__implicit_parallelism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__implicit_parallelism__init_complexity_procs(void);
#endif

void mercury__transform_hlds__implicit_parallelism__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__implicit_parallelism_maybe_bunch_0();
	mercury__transform_hlds__implicit_parallelism_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0,
		transform_hlds__implicit_parallelism__call_site_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0,
		transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0,
		transform_hlds__implicit_parallelism__intra_module_proc_label_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_introduced_parallelism_0,
		transform_hlds__implicit_parallelism__introduced_parallelism_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_module_candidate_par_conjs_map_0,
		transform_hlds__implicit_parallelism__module_candidate_par_conjs_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_parallelism_info_0,
		transform_hlds__implicit_parallelism__parallelism_info_0_0);
	mercury__transform_hlds__implicit_parallelism__init_debugger();
}

void mercury__transform_hlds__implicit_parallelism__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_intra_module_proc_label_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_introduced_parallelism_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_module_candidate_par_conjs_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_parallelism_info_0);
	}
}


void mercury__transform_hlds__implicit_parallelism__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__implicit_parallelism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__implicit_parallelism);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__implicit_parallelism__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
