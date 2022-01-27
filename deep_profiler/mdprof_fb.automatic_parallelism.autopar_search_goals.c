/*
** Automatically generated from `autopar_search_goals.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module mdprof_fb.automatic_parallelism.autopar_search_goals. */
/* :- implementation. */

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_search_goals.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "coverage.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "exclude.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "random.mih"
#include "report.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"
#include "mdprof_fb.automatic_parallelism.autopar_find_best_par.mih"
#include "mdprof_fb.automatic_parallelism.autopar_reports.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"




#line 97 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

#line 100 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

#line 103 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

#line 106 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

#line 109 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;

#line 112 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

#line 115 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0;

#line 118 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

#line 121 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 124 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0;

#line 127 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0;

#line 130 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 1027 "autopar_search_goals.m"
static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_p_0(
#line 1027 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3,
#line 1027 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_4);

#line 1001 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_p_0(
#line 1001 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapBefore_7,
#line 1001 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapAfter_8,
#line 1001 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Arg_9,
#line 1001 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__VarAndMode_10,
#line 1001 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ArgNum_0_13,
#line 1001 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ArgNum_14);

#line 977 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_p_0(
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6,
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_7,
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_8,
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_9,
#line 977 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10);

#line 972 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0_1(
#line 972 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 972 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 972 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 972 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 972 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4);

#line 955 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0(
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7,
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8,
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_9,
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_10,
#line 955 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__GoalType_11,
#line 955 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20);

#line 940 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_p_0(
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_19,
#line 940 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_20,
#line 940 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_21,
#line 940 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_22,
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_23,
#line 940 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_24);

#line 931 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_p_0(
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_15,
#line 931 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_16,
#line 931 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_17,
#line 931 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_18,
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_19,
#line 931 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20);

#line 922 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_p_0(
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_15,
#line 922 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_16,
#line 922 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ConjNum_0_17,
#line 922 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ConjNum_18,
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_19,
#line 922 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20);

#line 882 "autopar_search_goals.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_f_0(
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_8,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseType_12,
#line 882 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Var_13);

#line 878 "autopar_search_goals.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0_1(
#line 878 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg);

#line 871 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_11,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_12,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseType_13,
#line 871 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Var_14,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Map_0_17,
#line 871 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Map_18);

#line 691 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Location_10,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_11,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybePushGoal_12,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_13,
#line 691 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_43,
#line 691 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_44);

#line 676 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(
#line 676 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5,
#line 676 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Count_6,
#line 676 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12,
#line 676 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_13);

#line 588 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_3(
#line 588 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 588 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 588 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2);

#line 564 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_2(
#line 564 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 564 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 564 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2);

#line 545 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_1(
#line 545 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 545 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 545 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2);

#line 530 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0(
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush0_12,
#line 530 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_13,
#line 530 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_14);

#line 498 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(
#line 498 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1,
#line 498 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2,
#line 498 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3);

#line 435 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_p_0(
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8,
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9,
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_10,
#line 435 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndex_11,
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Single_12,
#line 435 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_35,
#line 435 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14);

#line 413 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1,
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2,
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3,
#line 413 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4,
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5,
#line 413 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6,
#line 413 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7);

#line 381 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_p_0(
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7,
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8,
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_9,
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyGoalsIndexes_10,
#line 381 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_17,
#line 381 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_12);

#line 368 "autopar_search_goals.m"
static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_p_0(
#line 368 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_4,
#line 368 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_5,
#line 368 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Single_6);

#line 334 "autopar_search_goals.m"
static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0_1(
#line 334 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 334 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1);

#line 301 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4,
#line 301 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_0_8,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_9,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_0_10,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_11,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_12,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_13,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_0_14,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_15);

#line 274 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_p_0(
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_13,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_14,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Cond_0_37,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Cond_38,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Then_0_39,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Then_40,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Else_0_41,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Else_42,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_18,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_19,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_20,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_21);

#line 249 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_p_0(
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_15,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_16,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_28,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_29,
#line 249 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_30,
#line 249 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_31,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_0_32,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_33,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_34,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_35,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_0_36,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_37,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_38,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_39);

#line 228 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_p_0(
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_15,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_16,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Disj_0_24,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Disj_25,
#line 228 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_26,
#line 228 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_27,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_0_28,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_29,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_30,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_31,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_0_32,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_33,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_34,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_35);

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_17(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_16(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_15(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_14(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_13(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_12(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 849 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_11(
#line 849 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 849 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 849 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 849 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 844 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_10(
#line 844 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 844 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 844 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 844 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_9(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_8(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 793 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_7(
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 793 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 793 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 793 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6);

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_6(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_5(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 787 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_4(
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 787 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 787 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 787 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6);

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_3(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_2(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3);

#line 781 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_1(
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 781 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 781 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 781 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6);

#line 174 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_2(
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_7,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_8,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_9,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_10,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_11,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_12);

#line 165 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_1(
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_7,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_8,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_9,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_10,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_11,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_12);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[14][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[2][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[2][17];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[3][11];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[2][10];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_6[1][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[1][7];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1][9];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&message__message__type_ctor_info_message_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_1)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "Recursion type unknown for var_first_use/12"))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10]))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[2][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[3][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_goal_cost_csq_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_goal_cost_csq_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1155 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

#line 1163 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

#line 1171 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

#line 1179 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

#line 1187 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0
  }
};

#line 1195 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

#line 1203 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_0
  }
};

#line 1211 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

#line 1219 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1227 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0 = {
  &mercury__lazy__lazy__type_ctor_info_lazy_1,
  {
    (MR_TypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0
  }
};

#line 1235 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0
  }
};

#line 1244 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1027 "autopar_search_goals.m"
static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_p_0(
#line 1027 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3,
#line 1027 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_4)
#line 1027 "autopar_search_goals.m"
{
#line 1030 "autopar_search_goals.m"
  {
#line 1030 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 1030 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__PercallCost_5;
#line 1030 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_6_6;
#line 1030 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_8_8;
#line 1030 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_9_9;
#line 1030 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_11_11;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_12_12;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_13_13;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_14_14;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_17_17;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21;
#line 1033 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_28_28;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30;
#line 1033 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33;

#line 1031 "autopar_search_goals.m"
    {
#line 1031 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_6_6 = measurements__goal_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_4);
    }
#line 1031 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__V_6_6 > (MR_Integer) 0);
#line 1030 "autopar_search_goals.m"
    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 1030 "autopar_search_goals.m"
      {
#line 1032 "autopar_search_goals.m"
        {
#line 1032 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__PercallCost_5 = measurements__goal_cost_get_percall_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_4);
        }
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 0)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 1)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 2)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 3)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 4)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 5)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 6)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 7)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 8)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 9)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 10)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_3, (MR_Integer) 11)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 0)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 1)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 2)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 3)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 4)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 5)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 6)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 7)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 8)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 9)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 10)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 11)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 12)));
#line 1033 "autopar_search_goals.m"
        {
#line 1033 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_8_8 = mercury__float__float_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_9_9);
        }
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__PercallCost_5 > mdprof_fb__automatic_parallelism__autopar_search_goals__V_8_8);
#line 1030 "autopar_search_goals.m"
      }
#line 1030 "autopar_search_goals.m"
    return mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 1030 "autopar_search_goals.m"
  }
#line 1027 "autopar_search_goals.m"
}

#line 1001 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_p_0(
#line 1001 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapBefore_7,
#line 1001 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapAfter_8,
#line 1001 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Arg_9,
#line 1001 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__VarAndMode_10,
#line 1001 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ArgNum_0_13,
#line 1001 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ArgNum_14)
#line 1001 "autopar_search_goals.m"
{
#line 1004 "autopar_search_goals.m"
  {
#line 1004 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 1004 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Mode_12;
#line 1004 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstBefore_21;
#line 1004 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstAfter_23;
#line 1013 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22;
#line 1014 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24;

#line 1013 "autopar_search_goals.m"
    {
#line 1013 "autopar_search_goals.m"
      program_representation_utils__inst_map_get_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapBefore_7, mdprof_fb__automatic_parallelism__autopar_search_goals__Arg_9, &mdprof_fb__automatic_parallelism__autopar_search_goals__InstBefore_21, &mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22);
    }
#line 1014 "autopar_search_goals.m"
    {
#line 1014 "autopar_search_goals.m"
      program_representation_utils__inst_map_get_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapAfter_8, mdprof_fb__automatic_parallelism__autopar_search_goals__Arg_9, &mdprof_fb__automatic_parallelism__autopar_search_goals__InstAfter_23, &mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24);
    }
#line 1015 "autopar_search_goals.m"
    {
#line 1015 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__Mode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Mode_12, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__InstBefore_21));
#line 1015 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Mode_12, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__InstAfter_23));
#line 1015 "autopar_search_goals.m"
    }
#line 1006 "autopar_search_goals.m"
    {
#line 1006 "autopar_search_goals.m"
      MR_Word base;
#line 1006 "autopar_search_goals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__VarAndMode_10 = base;
#line 1006 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Arg_9));
#line 1006 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Mode_12));
#line 1006 "autopar_search_goals.m"
    }
#line 1007 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ArgNum_14 = (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ArgNum_0_13 + (MR_Integer) 1);
#line 1004 "autopar_search_goals.m"
  }
#line 1001 "autopar_search_goals.m"
}

#line 977 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_p_0(
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6,
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_7,
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_8,
#line 977 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_9,
#line 977 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10)
#line 977 "autopar_search_goals.m"
{
#line 981 "autopar_search_goals.m"
  {
#line 981 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 981 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__IsCall_11;

#line 982 "autopar_search_goals.m"
    {
#line 982 "autopar_search_goals.m"
      program_representation_utils__atomic_goal_is_call_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_9, &mdprof_fb__automatic_parallelism__autopar_search_goals__IsCall_11);
    }
#line 987 "autopar_search_goals.m"
    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__IsCall_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 984 "autopar_search_goals.m"
      {
#line 984 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_12;

#line 985 "autopar_search_goals.m"
        {
#line 985 "autopar_search_goals.m"
          coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_8, &mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_12);
        }
#line 986 "autopar_search_goals.m"
        {
#line 986 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_12);
        }
#line 984 "autopar_search_goals.m"
      }
#line 987 "autopar_search_goals.m"
    else
#line 988 "autopar_search_goals.m"
      {
#line 988 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 988 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_14;
#line 988 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CSCost_16;
#line 988 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 4)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 0)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 1)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 2)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 3)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 5)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 6)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 7)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 8)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 9)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 10)));
#line 989 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 11)));
#line 989 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_CallSite_14;
#line 995 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RecCost_15;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_58_58;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40;
#line 991 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_41_41;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_42_42;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51;
#line 992 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_52_52;
#line 992 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_RecCost_15;

#line 989 "autopar_search_goals.m"
        {
#line 989 "autopar_search_goals.m"
          mercury__map__lookup_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_56_56, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[11], mdprof_fb__automatic_parallelism__autopar_search_goals__V_17_17, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_7)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_CallSite_14);
        }
#line 989 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_14 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_CallSite_14);
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 0)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 1)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 2)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 3)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 4)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 5)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 6)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 7)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 8)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 9)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 10)));
#line 991 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 11)));
#line 991 "autopar_search_goals.m"
        {
#line 991 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_14);
        }
#line 991 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 991 "autopar_search_goals.m"
          {
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 0)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 1)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 2)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 3)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 4)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 5)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 6)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 7)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 8)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 9)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 10)));
#line 992 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_6, (MR_Integer) 11)));
#line 1678 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
            mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_58_58 = (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0;
#line 992 "autopar_search_goals.m"
            {
#line 992 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mercury__map__search_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_56_56, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_58_58, mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_7)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_RecCost_15);
            }
#line 992 "autopar_search_goals.m"
            if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 992 "autopar_search_goals.m"
              {
#line 992 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__RecCost_15 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_RecCost_15);
#line 992 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = MR_TRUE;
#line 992 "autopar_search_goals.m"
              }
#line 991 "autopar_search_goals.m"
          }
#line 995 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 994 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__CSCost_16 = mdprof_fb__automatic_parallelism__autopar_search_goals__RecCost_15;
#line 995 "autopar_search_goals.m"
        else
#line 996 "autopar_search_goals.m"
          {
#line 996 "autopar_search_goals.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_53_53;
#line 996 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_54_54;
#line 996 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_55_55;

#line 996 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__CSCost_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_14, (MR_Integer) 0)));
#line 996 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_14, (MR_Integer) 1)));
#line 996 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_14, (MR_Integer) 2)));
#line 996 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_14, (MR_Integer) 3)));
#line 996 "autopar_search_goals.m"
          }
#line 998 "autopar_search_goals.m"
        {
#line 998 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10 = measurements__call_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__CSCost_16);
        }
#line 988 "autopar_search_goals.m"
      }
#line 981 "autopar_search_goals.m"
  }
#line 977 "autopar_search_goals.m"
}

#line 972 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0_1(
#line 972 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 972 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 972 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 972 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 972 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4)
#line 972 "autopar_search_goals.m"
{
#line 972 "autopar_search_goals.m"
  {
#line 972 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 972 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_VarAndMode_10;
#line 972 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_ArgNum_14;

#line 972 "autopar_search_goals.m"
    {
#line 972 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_VarAndMode_10, ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_ArgNum_14);
    }
#line 972 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_VarAndMode_10));
#line 972 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_ArgNum_14));
#line 972 "autopar_search_goals.m"
  }
#line 972 "autopar_search_goals.m"
}

#line 955 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0(
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7,
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8,
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_9,
#line 955 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_10,
#line 955 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__GoalType_11,
#line 955 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20)
#line 955 "autopar_search_goals.m"
{
#line 960 "autopar_search_goals.m"
  {
#line 960 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 960 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapBefore_13;
#line 960 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapAfter_14;
#line 960 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__IsCall_15;
#line 962 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26;
#line 962 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27;

#line 961 "autopar_search_goals.m"
    {
#line 961 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
    }
#line 962 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapBefore_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_10, (MR_Integer) 0)));
#line 962 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_10, (MR_Integer) 1)));
#line 962 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_10, (MR_Integer) 2)));
#line 962 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_10, (MR_Integer) 3)));
#line 964 "autopar_search_goals.m"
    {
#line 964 "autopar_search_goals.m"
      program_representation_utils__atomic_goal_is_call_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_9, &mdprof_fb__automatic_parallelism__autopar_search_goals__IsCall_15);
    }
#line 968 "autopar_search_goals.m"
    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__IsCall_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__GoalType_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 968 "autopar_search_goals.m"
    else
#line 969 "autopar_search_goals.m"
      {
#line 969 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_49_49;
#line 969 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__IsCall_15, (MR_Integer) 0)));
#line 969 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_17;
#line 969 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__VarsAndModes_18;
#line 969 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 4)));
#line 969 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23;
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 0)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 1)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 2)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 3)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 5)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 6)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 7)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 8)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 9)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 10)));
#line 971 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 11)));
#line 971 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_CallSite_17;
#line 972 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19;
#line 972 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_V_19_19;

#line 971 "autopar_search_goals.m"
        {
#line 971 "autopar_search_goals.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[11], mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_CallSite_17);
        }
#line 971 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_17 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_CallSite_17);
#line 972 "autopar_search_goals.m"
        {
#line 972 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 972 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[0]));
#line 972 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0_1));
#line 972 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 972 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapBefore_13));
#line 972 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapAfter_14));
#line 972 "autopar_search_goals.m"
        }
#line 1894 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
        mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 972 "autopar_search_goals.m"
        {
#line 972 "autopar_search_goals.m"
          mercury__list__map_foldl_5_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_49_49, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_49_49, mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23, mdprof_fb__automatic_parallelism__autopar_search_goals__Args_16, &mdprof_fb__automatic_parallelism__autopar_search_goals__VarsAndModes_18, ((MR_Box) ((MR_Integer) 0)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_V_19_19);
        }
#line 972 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_V_19_19);
#line 974 "autopar_search_goals.m"
        {
#line 974 "autopar_search_goals.m"
          MR_Word base;
#line 974 "autopar_search_goals.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__GoalType_11 = base;
#line 974 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__VarsAndModes_18));
#line 974 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__CallSite_17));
#line 974 "autopar_search_goals.m"
        }
#line 969 "autopar_search_goals.m"
      }
#line 960 "autopar_search_goals.m"
  }
#line 955 "autopar_search_goals.m"
}

#line 940 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_p_0(
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_19,
#line 940 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_20,
#line 940 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_21,
#line 940 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_22,
#line 940 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_23,
#line 940 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_24)
#line 940 "autopar_search_goals.m"
{
#line 945 "autopar_search_goals.m"
  {
#line 945 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 945 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_19, (MR_Integer) 0)));
#line 945 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__OtherConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_19, (MR_Integer) 1)));
#line 945 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_19, (MR_Integer) 2)));
#line 945 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_17;
#line 945 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_18;
#line 945 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25;

#line 947 "autopar_search_goals.m"
    {
#line 947 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 947 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 947 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_21));
#line 947 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "autopar_search_goals.m"
    }
#line 947 "autopar_search_goals.m"
    {
#line 947 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_17, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 947 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_17, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25));
#line 947 "autopar_search_goals.m"
    }
#line 949 "autopar_search_goals.m"
    {
#line 949 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_17, mdprof_fb__automatic_parallelism__autopar_search_goals__Goal0_16, &mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_18, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_23, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_24);
    }
#line 950 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_22 = (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_21 + (MR_Integer) 1);
#line 951 "autopar_search_goals.m"
    {
#line 951 "autopar_search_goals.m"
      MR_Word base;
#line 951 "autopar_search_goals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 951 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_20 = base;
#line 951 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__ConsId_14));
#line 951 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__OtherConsId_15));
#line 951 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_18));
#line 951 "autopar_search_goals.m"
    }
#line 945 "autopar_search_goals.m"
  }
#line 940 "autopar_search_goals.m"
}

#line 931 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_p_0(
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_15,
#line 931 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_16,
#line 931 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_17,
#line 931 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_18,
#line 931 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_19,
#line 931 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20)
#line 931 "autopar_search_goals.m"
{
#line 935 "autopar_search_goals.m"
  {
#line 935 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 935 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DisjRevGoalPath_14;
#line 935 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21;

#line 936 "autopar_search_goals.m"
    {
#line 936 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_17));
#line 936 "autopar_search_goals.m"
    }
#line 936 "autopar_search_goals.m"
    {
#line 936 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__DisjRevGoalPath_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__DisjRevGoalPath_14, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 936 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__DisjRevGoalPath_14, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21));
#line 936 "autopar_search_goals.m"
    }
#line 937 "autopar_search_goals.m"
    {
#line 937 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__DisjRevGoalPath_14, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_15, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_16, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_19, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20);
    }
#line 938 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_18 = (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_17 + (MR_Integer) 1);
#line 935 "autopar_search_goals.m"
  }
#line 931 "autopar_search_goals.m"
}

#line 922 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_p_0(
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_15,
#line 922 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_16,
#line 922 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ConjNum_0_17,
#line 922 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ConjNum_18,
#line 922 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_19,
#line 922 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20)
#line 922 "autopar_search_goals.m"
{
#line 926 "autopar_search_goals.m"
  {
#line 926 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 926 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConjRevGoalPath_14;
#line 926 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21;

#line 927 "autopar_search_goals.m"
    {
#line 927 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ConjNum_0_17));
#line 927 "autopar_search_goals.m"
    }
#line 927 "autopar_search_goals.m"
    {
#line 927 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__ConjRevGoalPath_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ConjRevGoalPath_14, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 927 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ConjRevGoalPath_14, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21));
#line 927 "autopar_search_goals.m"
    }
#line 928 "autopar_search_goals.m"
    {
#line 928 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__ConjRevGoalPath_14, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_15, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_16, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_19, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20);
    }
#line 929 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ConjNum_18 = (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_ConjNum_0_17 + (MR_Integer) 1);
#line 926 "autopar_search_goals.m"
  }
#line 922 "autopar_search_goals.m"
}

#line 882 "autopar_search_goals.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_f_0(
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_8,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11,
#line 882 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseType_12,
#line 882 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Var_13)
#line 882 "autopar_search_goals.m"
{
#line 887 "autopar_search_goals.m"
  {
#line 887 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Use_14;
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Deep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 0)));
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CliquePtr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 3)));
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CallSiteMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 4)));
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RecursiveCallSiteMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 5)));
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ContainingGoalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 6)));
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CoverageArray_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 7)));
#line 887 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RecursionType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 9)));
#line 887 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__CostPercall_27;
#line 888 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals___ProgRep_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 1)));
#line 888 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals___Params_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 2)));
#line 888 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals___InstMapArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 8)));
#line 888 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals___VarTable_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 10)));
#line 888 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals___ProcLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, (MR_Integer) 11)));

#line 891 "autopar_search_goals.m"
    {
#line 891 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__CostPercall_27 = measurements__goal_cost_get_percall_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10);
    }
#line 904 "autopar_search_goals.m"
    if ((((mdprof_fb__automatic_parallelism__autopar_search_goals__RecursionType_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__RecursionType_24)) == (MR_mktag((MR_Integer) 1))))))
#line 895 "autopar_search_goals.m"
      {
#line 895 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RecDepth_33;
#line 895 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__FollowCallsAcrossModules_34;
#line 895 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseOptions_35;
#line 895 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51;

#line 896 "autopar_search_goals.m"
        {
#line 896 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__RecursionType_24, &mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51);
        }
#line 896 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__RecDepth_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51, (MR_Integer) 0)));
#line 898 "autopar_search_goals.m"
        {
#line 898 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_11, &mdprof_fb__automatic_parallelism__autopar_search_goals__FollowCallsAcrossModules_34);
        }
#line 899 "autopar_search_goals.m"
        {
#line 899 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseOptions_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 899 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseOptions_35, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Deep_15));
#line 899 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseOptions_35, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__FollowCallsAcrossModules_34));
#line 899 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseOptions_35, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseType_12));
#line 899 "autopar_search_goals.m"
        }
#line 901 "autopar_search_goals.m"
        {
#line 901 "autopar_search_goals.m"
          var_use_analysis__var_first_use_13_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__CliquePtr_18, mdprof_fb__automatic_parallelism__autopar_search_goals__CallSiteMap_19, mdprof_fb__automatic_parallelism__autopar_search_goals__RecursiveCallSiteMap_20, mdprof_fb__automatic_parallelism__autopar_search_goals__ContainingGoalMap_21, mdprof_fb__automatic_parallelism__autopar_search_goals__CoverageArray_22, mdprof_fb__automatic_parallelism__autopar_search_goals__RecursionType_24, mdprof_fb__automatic_parallelism__autopar_search_goals__RecDepth_33, mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_8, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9, mdprof_fb__automatic_parallelism__autopar_search_goals__CostPercall_27, mdprof_fb__automatic_parallelism__autopar_search_goals__Var_13, mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseOptions_35, &mdprof_fb__automatic_parallelism__autopar_search_goals__Use_14);
        }
#line 895 "autopar_search_goals.m"
      }
#line 904 "autopar_search_goals.m"
    else
#line 909 "autopar_search_goals.m"
      {
#line 909 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_41;
#line 909 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44;
#line 909 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46;
#line 916 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Stderr_43;

#line 911 "autopar_search_goals.m"
        {
#line 911 "autopar_search_goals.m"
          var_use_analysis__pessimistic_var_use_info_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseType_12, mdprof_fb__automatic_parallelism__autopar_search_goals__CostPercall_27, &mdprof_fb__automatic_parallelism__autopar_search_goals__Use_14);
        }
#line 912 "autopar_search_goals.m"
        {
#line 912 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__CliquePtr_18));
#line 912 "autopar_search_goals.m"
        }
#line 912 "autopar_search_goals.m"
        {
#line 912 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
        }
#line 912 "autopar_search_goals.m"
        {
#line 912 "autopar_search_goals.m"
          message__append_message_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44, (MR_Word) MR_mkword(MR_mktag(3), &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[13]), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, &mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_41);
        }
#line 917 "autopar_search_goals.m"
        {
#line 917 "autopar_search_goals.m"
          mercury__io__stderr_stream_3_p_0(&mdprof_fb__automatic_parallelism__autopar_search_goals__Stderr_43);
        }
#line 918 "autopar_search_goals.m"
        {
#line 918 "autopar_search_goals.m"
          message__write_out_messages_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Stderr_43, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_41);
        }
#line 909 "autopar_search_goals.m"
      }
#line 887 "autopar_search_goals.m"
    return mdprof_fb__automatic_parallelism__autopar_search_goals__Use_14;
#line 887 "autopar_search_goals.m"
  }
#line 882 "autopar_search_goals.m"
}

#line 878 "autopar_search_goals.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0_1(
#line 878 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg)
#line 878 "autopar_search_goals.m"
{
#line 878 "autopar_search_goals.m"
  {
#line 878 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1;
#line 878 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 878 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_Use_14;

#line 878 "autopar_search_goals.m"
    {
#line 878 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_Use_14 = mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 8))));
    }
#line 878 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_Use_14));
#line 878 "autopar_search_goals.m"
    return mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1;
#line 878 "autopar_search_goals.m"
  }
#line 878 "autopar_search_goals.m"
}

#line 871 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_11,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_12,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseType_13,
#line 871 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Var_14,
#line 871 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Map_0_17,
#line 871 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Map_18)
#line 871 "autopar_search_goals.m"
{
#line 877 "autopar_search_goals.m"
  {
#line 877 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 877 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__LazyUse_16;
#line 877 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19;

#line 878 "autopar_search_goals.m"
    {
#line 878 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[1]));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0_1));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_11));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_12));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__VarUseType_13));
#line 878 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 8) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Var_14));
#line 878 "autopar_search_goals.m"
    }
#line 878 "autopar_search_goals.m"
    {
#line 878 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__LazyUse_16 = mercury__lazy__delay_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19);
    }
#line 880 "autopar_search_goals.m"
    {
#line 880 "autopar_search_goals.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10], mdprof_fb__automatic_parallelism__autopar_search_goals__Var_14, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__LazyUse_16)), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Map_0_17, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Map_18);
#line 880 "autopar_search_goals.m"
      return;
    }
#line 877 "autopar_search_goals.m"
  }
#line 871 "autopar_search_goals.m"
}

#line 691 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Location_10,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_11,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybePushGoal_12,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_13,
#line 691 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14,
#line 691 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_43,
#line 691 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_44)
#line 691 "autopar_search_goals.m"
{
#line 698 "autopar_search_goals.m"
  {
#line 698 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 698 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeBestParallelisation_16;

#line 706 "autopar_search_goals.m"
    {
#line 706 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_find_best_par__find_best_parallelisation_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__Location_10, mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_13, &mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeBestParallelisation_16, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_43, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_44);
    }
#line 766 "autopar_search_goals.m"
    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeBestParallelisation_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 766 "autopar_search_goals.m"
    else
#line 709 "autopar_search_goals.m"
      {
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BestParallelisation_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeBestParallelisation_16, (MR_Integer) 0)));
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ParalleliseDepConjs_19;
#line 709 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__SpeedupThreshold_20;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBefore_21;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ParConjs_22;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfter_23;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__IsDependent_24;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25;
#line 709 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__Speedup_26;
#line 709 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_27;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBeforeCost0_28;
#line 709 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBeforeCost_29;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfterCost0_30;
#line 709 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfterCost_31;
#line 709 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPathString_32;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33;
#line 709 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 2)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 0)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 1)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 3)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 4)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 5)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 6)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 7)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 8)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 9)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 10)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, (MR_Integer) 11)));
#line 711 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 0)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 1)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 2)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 3)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 4)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 5)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 6)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 7)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 8)));
#line 711 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 9)));
#line 711 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_113_113;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_114_114;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_115_115;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_116_116;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_117_117;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_118_118;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_119_119;
#line 716 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_120_120;

#line 711 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__SpeedupThreshold_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 10)));
#line 711 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__ParalleliseDepConjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 11)));
#line 711 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46, (MR_Integer) 12)));
#line 713 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBefore_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__BestParallelisation_17, (MR_Integer) 0)));
#line 713 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__ParConjs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__BestParallelisation_17, (MR_Integer) 1)));
#line 713 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfter_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__BestParallelisation_17, (MR_Integer) 2)));
#line 713 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__IsDependent_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__BestParallelisation_17, (MR_Integer) 3)));
#line 713 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__BestParallelisation_17, (MR_Integer) 4)));
#line 715 "autopar_search_goals.m"
        {
#line 715 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__Speedup_26 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25);
        }
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 0)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_113_113 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 1)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_114_114 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 2)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_115_115 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 3)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_116_116 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 4)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_117_117 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 5)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_118_118 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 6)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_119_119 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 7)));
#line 716 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_120_120 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25, (MR_Integer) 8)));
#line 717 "autopar_search_goals.m"
        {
#line 717 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBefore_21, mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_27, &mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBeforeCost0_28);
        }
#line 718 "autopar_search_goals.m"
        {
#line 718 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBeforeCost_29 = measurements__goal_cost_get_percall_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBeforeCost0_28);
        }
#line 719 "autopar_search_goals.m"
        {
#line 719 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfter_23, mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_27, &mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfterCost0_30);
        }
#line 720 "autopar_search_goals.m"
        {
#line 720 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfterCost_31 = measurements__goal_cost_get_percall_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfterCost0_30);
        }
#line 721 "autopar_search_goals.m"
        {
#line 721 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPathString_32 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_11);
        }
#line 722 "autopar_search_goals.m"
        {
#line 722 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPathString_32));
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__MaybePushGoal_12));
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 2) = ((MR_Box) ((MR_Integer) 1));
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__IsDependent_24));
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBefore_21));
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 5) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsBeforeCost_29);
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__ParConjs_22));
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfter_23));
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 8) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsAfterCost_31);
#line 722 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33, 9) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Metrics_25));
#line 722 "autopar_search_goals.m"
        }
#line 726 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__Speedup_26 > mdprof_fb__automatic_parallelism__autopar_search_goals__SpeedupThreshold_20);
#line 726 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 726 "autopar_search_goals.m"
          {
#line 728 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__ParalleliseDepConjs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "autopar_search_goals.m"
            if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 729 "autopar_search_goals.m"
              {
#line 730 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__IsDependent_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = !(mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded);
#line 729 "autopar_search_goals.m"
              }
#line 729 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = !(mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded);
#line 726 "autopar_search_goals.m"
          }
#line 734 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 733 "autopar_search_goals.m"
          {
#line 733 "autopar_search_goals.m"
            MR_Word base;
#line 733 "autopar_search_goals.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 733 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14 = base;
#line 733 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_33));
#line 733 "autopar_search_goals.m"
          }
#line 734 "autopar_search_goals.m"
        else
#line 735 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "autopar_search_goals.m"
      }
#line 698 "autopar_search_goals.m"
  }
#line 691 "autopar_search_goals.m"
}

#line 676 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(
#line 676 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5,
#line 676 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Count_6,
#line 676 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12,
#line 676 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_13)
#line 676 "autopar_search_goals.m"
{
#line 679 "autopar_search_goals.m"
  {
#line 679 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12, (MR_Integer) 2)));
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 4)));
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__AboveThreshold_11;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_42_42;
#line 679 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43;
#line 680 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12, (MR_Integer) 0)));
#line 680 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12, (MR_Integer) 1)));
#line 681 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 0)));
#line 681 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 1)));
#line 681 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 2)));
#line 681 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 3)));
#line 681 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 5)));
#line 681 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 6)));
#line 681 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_8, (MR_Integer) 7)));
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31;
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32;
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33;
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34;
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36;
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37;
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38;
#line 683 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35;
#line 1030 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__PercallCost_57;
#line 1030 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58;
#line 1030 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_60_60;
#line 1030 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_61_61;
#line 1030 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_63_63;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_64_64;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_65_65;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_69_69;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_70_70;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_72_72;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73;
#line 1033 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81;
#line 1033 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82;
#line 1033 "autopar_search_goals.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84;
#line 1033 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51;
#line 689 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49;

#line 682 "autopar_search_goals.m"
    {
#line 682 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10 = measurements__goal_cost_change_calls_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost0_9, mdprof_fb__automatic_parallelism__autopar_search_goals__Count_6);
    }
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12, (MR_Integer) 0)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12, (MR_Integer) 1)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_12, (MR_Integer) 2)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 0)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 1)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 2)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 3)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 4)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 5)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 6)));
#line 683 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15, (MR_Integer) 7)));
#line 683 "autopar_search_goals.m"
    {
#line 683 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38));
#line 683 "autopar_search_goals.m"
    }
#line 683 "autopar_search_goals.m"
    {
#line 683 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30));
#line 683 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16));
#line 683 "autopar_search_goals.m"
    }
#line 1031 "autopar_search_goals.m"
    {
#line 1031 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58 = measurements__goal_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10);
    }
#line 1031 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58 > (MR_Integer) 0);
#line 1030 "autopar_search_goals.m"
    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 1030 "autopar_search_goals.m"
      {
#line 1032 "autopar_search_goals.m"
        {
#line 1032 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__PercallCost_57 = measurements__goal_cost_get_percall_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_10);
        }
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 0)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 1)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 2)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 3)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 4)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 5)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 6)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 7)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 8)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 9)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 10)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_5, (MR_Integer) 11)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 0)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 1)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 2)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 3)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 4)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 5)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 6)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 7)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 8)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 9)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 10)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 11)));
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, (MR_Integer) 12)));
#line 1033 "autopar_search_goals.m"
        {
#line 1033 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_60_60 = mercury__float__float_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_61_61);
        }
#line 1033 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__PercallCost_57 > mdprof_fb__automatic_parallelism__autopar_search_goals__V_60_60);
#line 1030 "autopar_search_goals.m"
      }
#line 686 "autopar_search_goals.m"
    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 685 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__AboveThreshold_11 = (MR_Integer) 0;
#line 686 "autopar_search_goals.m"
    else
#line 687 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__AboveThreshold_11 = (MR_Integer) 1;
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14, (MR_Integer) 0)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14, (MR_Integer) 1)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_14_14, (MR_Integer) 2)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 0)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 1)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 2)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 3)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 4)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 5)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 6)));
#line 689 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18, (MR_Integer) 7)));
#line 689 "autopar_search_goals.m"
    {
#line 689 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__AboveThreshold_11));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51));
#line 689 "autopar_search_goals.m"
    }
#line 689 "autopar_search_goals.m"
    {
#line 689 "autopar_search_goals.m"
      MR_Word base;
#line 689 "autopar_search_goals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 689 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_13 = base;
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_42_42));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43));
#line 689 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19));
#line 689 "autopar_search_goals.m"
    }
#line 679 "autopar_search_goals.m"
  }
#line 676 "autopar_search_goals.m"
}

#line 588 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_3(
#line 588 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 588 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 588 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2)
#line 588 "autopar_search_goals.m"
{
#line 588 "autopar_search_goals.m"
  {
#line 588 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 588 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Goal_13;

#line 588 "autopar_search_goals.m"
    {
#line 588 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Goal_13);
    }
#line 588 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Goal_13));
#line 588 "autopar_search_goals.m"
  }
#line 588 "autopar_search_goals.m"
}

#line 564 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_2(
#line 564 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 564 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 564 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2)
#line 564 "autopar_search_goals.m"
{
#line 564 "autopar_search_goals.m"
  {
#line 564 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 564 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_Goal_13;

#line 564 "autopar_search_goals.m"
    {
#line 564 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_Goal_13);
    }
#line 564 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_Goal_13));
#line 564 "autopar_search_goals.m"
  }
#line 564 "autopar_search_goals.m"
}

#line 545 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_1(
#line 545 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 545 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 545 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2)
#line 545 "autopar_search_goals.m"
{
#line 545 "autopar_search_goals.m"
  {
#line 545 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 545 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_STATE_VARIABLE_Goal_13;

#line 545 "autopar_search_goals.m"
    {
#line 545 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_STATE_VARIABLE_Goal_13);
    }
#line 545 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_STATE_VARIABLE_Goal_13));
#line 545 "autopar_search_goals.m"
  }
#line 545 "autopar_search_goals.m"
}

#line 530 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0(
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11,
#line 530 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush0_12,
#line 530 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_13,
#line 530 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_14)
#line 530 "autopar_search_goals.m"
{
#line 538 "autopar_search_goals.m"
  while (MR_TRUE)
#line 538 "autopar_search_goals.m"
    {
#line 538 "autopar_search_goals.m"
      /* tailcall optimized into a loop */
#line 538 "autopar_search_goals.m"
      {
#line 538 "autopar_search_goals.m"
        MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 538 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 2)));
#line 538 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 0)));
#line 549 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 1)));

#line 538 "autopar_search_goals.m"
        if ((mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "autopar_search_goals.m"
          {
#line 538 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_159_159;
#line 538 "autopar_search_goals.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_15;
#line 538 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_16;
#line 538 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_94_94;
#line 538 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96;
#line 543 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_132_132;
#line 543 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_133_133;
#line 543 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_134_134;
#line 543 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_135_135;
#line 543 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_136_136;
#line 543 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_137_137;
#line 543 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_138_138;

#line 539 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_13 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9;
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 0)));
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 1)));
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 2)));
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 3)));
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 4)));
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 5)));
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 6)));
#line 543 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168, (MR_Integer) 7)));
#line 543 "autopar_search_goals.m"
            {
#line 543 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_15 = measurements__goal_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_94_94);
            }
#line 545 "autopar_search_goals.m"
            {
#line 545 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 545 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[0]));
#line 545 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_1));
#line 545 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 545 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8));
#line 545 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_15));
#line 545 "autopar_search_goals.m"
            }
#line 3213 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
            mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_159_159 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
#line 545 "autopar_search_goals.m"
            {
#line 545 "autopar_search_goals.m"
              mercury__list__map_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_159_159, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_159_159, mdprof_fb__automatic_parallelism__autopar_search_goals__V_96_96, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush0_12, &mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_16);
            }
#line 546 "autopar_search_goals.m"
            {
#line 546 "autopar_search_goals.m"
              MR_Word base;
#line 546 "autopar_search_goals.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "autopar_search_goals.m"
              *mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_14 = base;
#line 546 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11));
#line 546 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_16));
#line 546 "autopar_search_goals.m"
            }
#line 538 "autopar_search_goals.m"
          }
#line 538 "autopar_search_goals.m"
        else
#line 548 "autopar_search_goals.m"
          {
#line 548 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10, (MR_Integer) 0)));
#line 548 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10, (MR_Integer) 1)));

#line 596 "autopar_search_goals.m"
            if ((mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 666 "autopar_search_goals.m"
              {
#line 668 "autopar_search_goals.m"
                {
#line 668 "autopar_search_goals.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "atomic_main");
#line 668 "autopar_search_goals.m"
                  return;
                }
#line 666 "autopar_search_goals.m"
              }
#line 596 "autopar_search_goals.m"
            else
#line 596 "autopar_search_goals.m"
              if ((mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "autopar_search_goals.m"
                {
#line 642 "autopar_search_goals.m"
                  {
#line 642 "autopar_search_goals.m"
                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "ite_cond");
#line 642 "autopar_search_goals.m"
                    return;
                  }
#line 640 "autopar_search_goals.m"
                }
#line 596 "autopar_search_goals.m"
              else
#line 596 "autopar_search_goals.m"
                if ((mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 630 "autopar_search_goals.m"
                  {
#line 630 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Else_41;
#line 631 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39;
#line 631 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40;

#line 631 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 631 "autopar_search_goals.m"
                    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 631 "autopar_search_goals.m"
                      {
#line 631 "autopar_search_goals.m"
                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 1)));
#line 631 "autopar_search_goals.m"
                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 2)));
#line 631 "autopar_search_goals.m"
                        mdprof_fb__automatic_parallelism__autopar_search_goals__Else_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 3)));
#line 632 "autopar_search_goals.m"
                        {
#line 632 "autopar_search_goals.m"
                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67;

#line 632 "autopar_search_goals.m"
                          {
#line 632 "autopar_search_goals.m"
                            mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "autopar_search_goals.m"
                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9));
#line 632 "autopar_search_goals.m"
                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17));
#line 632 "autopar_search_goals.m"
                          }
#line 632 "autopar_search_goals.m"
                          /* direct tailcall eliminated */
#line 632 "autopar_search_goals.m"
                          {
#line 632 "autopar_search_goals.m"
                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67;
#line 632 "autopar_search_goals.m"
                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18;
#line 632 "autopar_search_goals.m"
                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__Else_41;

#line 632 "autopar_search_goals.m"
                            mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11;
#line 632 "autopar_search_goals.m"
                            mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10;
#line 632 "autopar_search_goals.m"
                            mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9;
#line 632 "autopar_search_goals.m"
                          }
#line 632 "autopar_search_goals.m"
                          continue;
#line 632 "autopar_search_goals.m"
                        }
#line 631 "autopar_search_goals.m"
                      }
#line 631 "autopar_search_goals.m"
                    else
#line 637 "autopar_search_goals.m"
                      {
#line 637 "autopar_search_goals.m"
                        {
#line 637 "autopar_search_goals.m"
                          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not ite_else");
#line 637 "autopar_search_goals.m"
                          return;
                        }
#line 637 "autopar_search_goals.m"
                      }
#line 630 "autopar_search_goals.m"
                  }
#line 596 "autopar_search_goals.m"
                else
#line 596 "autopar_search_goals.m"
                  if ((mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 620 "autopar_search_goals.m"
                    {
#line 620 "autopar_search_goals.m"
                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Then_37;
#line 621 "autopar_search_goals.m"
                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36;
#line 621 "autopar_search_goals.m"
                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38;

#line 621 "autopar_search_goals.m"
                      mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 621 "autopar_search_goals.m"
                      if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 621 "autopar_search_goals.m"
                        {
#line 621 "autopar_search_goals.m"
                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 1)));
#line 621 "autopar_search_goals.m"
                          mdprof_fb__automatic_parallelism__autopar_search_goals__Then_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 2)));
#line 621 "autopar_search_goals.m"
                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 3)));
#line 622 "autopar_search_goals.m"
                          {
#line 622 "autopar_search_goals.m"
                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71;

#line 622 "autopar_search_goals.m"
                            {
#line 622 "autopar_search_goals.m"
                              mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "autopar_search_goals.m"
                              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9));
#line 622 "autopar_search_goals.m"
                              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17));
#line 622 "autopar_search_goals.m"
                            }
#line 622 "autopar_search_goals.m"
                            /* direct tailcall eliminated */
#line 622 "autopar_search_goals.m"
                            {
#line 622 "autopar_search_goals.m"
                              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71;
#line 622 "autopar_search_goals.m"
                              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18;
#line 622 "autopar_search_goals.m"
                              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__Then_37;

#line 622 "autopar_search_goals.m"
                              mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11;
#line 622 "autopar_search_goals.m"
                              mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10;
#line 622 "autopar_search_goals.m"
                              mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9;
#line 622 "autopar_search_goals.m"
                            }
#line 622 "autopar_search_goals.m"
                            continue;
#line 622 "autopar_search_goals.m"
                          }
#line 621 "autopar_search_goals.m"
                        }
#line 621 "autopar_search_goals.m"
                      else
#line 627 "autopar_search_goals.m"
                        {
#line 627 "autopar_search_goals.m"
                          {
#line 627 "autopar_search_goals.m"
                            mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not ite_then");
#line 627 "autopar_search_goals.m"
                            return;
                          }
#line 627 "autopar_search_goals.m"
                        }
#line 620 "autopar_search_goals.m"
                    }
#line 596 "autopar_search_goals.m"
                  else
#line 596 "autopar_search_goals.m"
                    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 658 "autopar_search_goals.m"
                      {
#line 660 "autopar_search_goals.m"
                        {
#line 660 "autopar_search_goals.m"
                          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "lambda");
#line 660 "autopar_search_goals.m"
                          return;
                        }
#line 658 "autopar_search_goals.m"
                      }
#line 596 "autopar_search_goals.m"
                    else
#line 596 "autopar_search_goals.m"
                      if ((mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 644 "autopar_search_goals.m"
                        {
#line 646 "autopar_search_goals.m"
                          {
#line 646 "autopar_search_goals.m"
                            mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "neg");
#line 646 "autopar_search_goals.m"
                            return;
                          }
#line 644 "autopar_search_goals.m"
                        }
#line 596 "autopar_search_goals.m"
                      else
#line 596 "autopar_search_goals.m"
                        if ((mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 662 "autopar_search_goals.m"
                          {
#line 664 "autopar_search_goals.m"
                            {
#line 664 "autopar_search_goals.m"
                              mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "try");
#line 664 "autopar_search_goals.m"
                              return;
                            }
#line 662 "autopar_search_goals.m"
                          }
#line 596 "autopar_search_goals.m"
                        else
#line 596 "autopar_search_goals.m"
                          if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17)) == (MR_mktag((MR_Integer) 1))))
#line 551 "autopar_search_goals.m"
                            {
#line 551 "autopar_search_goals.m"
                              MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17, (MR_Integer) 0)));
#line 593 "autopar_search_goals.m"
                              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_23;

#line 552 "autopar_search_goals.m"
                              mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170)) == (MR_mktag((MR_Integer) 0)));
#line 552 "autopar_search_goals.m"
                              if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 552 "autopar_search_goals.m"
                                {
#line 552 "autopar_search_goals.m"
                                  mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 0)));
#line 567 "autopar_search_goals.m"
                                  if ((mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "autopar_search_goals.m"
                                    {
#line 554 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_162_162;
#line 554 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_24;
#line 554 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89;
#line 554 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90;
#line 554 "autopar_search_goals.m"
                                      MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_97;
#line 554 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_98;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_139_139;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_140_140;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_141_141;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_142_142;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_143_143;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_144_144;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_145_145;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_146_146;
#line 562 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_147_147;

#line 557 "autopar_search_goals.m"
                                      *mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_13 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9;
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 0)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 1)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 2)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 0)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 1)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 2)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 3)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 4)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 5)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 6)));
#line 562 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89, (MR_Integer) 7)));
#line 563 "autopar_search_goals.m"
                                      {
#line 563 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_97 = measurements__goal_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_24);
                                      }
#line 564 "autopar_search_goals.m"
                                      {
#line 564 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 564 "autopar_search_goals.m"
                                        MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[0]));
#line 564 "autopar_search_goals.m"
                                        MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_2));
#line 564 "autopar_search_goals.m"
                                        MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 564 "autopar_search_goals.m"
                                        MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8));
#line 564 "autopar_search_goals.m"
                                        MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_97));
#line 564 "autopar_search_goals.m"
                                      }
#line 3577 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_162_162 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
#line 564 "autopar_search_goals.m"
                                      {
#line 564 "autopar_search_goals.m"
                                        mercury__list__map_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_162_162, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_162_162, mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush0_12, &mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_98);
                                      }
#line 566 "autopar_search_goals.m"
                                      {
#line 566 "autopar_search_goals.m"
                                        *mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_14 = mercury__list__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_162_162, mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_23, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_98);
                                      }
#line 554 "autopar_search_goals.m"
                                    }
#line 567 "autopar_search_goals.m"
                                  else
#line 568 "autopar_search_goals.m"
                                    {
#line 568 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_163_163 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
#line 568 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Tail_27;
#line 568 "autopar_search_goals.m"
                                      MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83 = (mdprof_fb__automatic_parallelism__autopar_search_goals__N_22 - (MR_Integer) 1);
#line 575 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_28;
#line 570 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85;

#line 569 "autopar_search_goals.m"
                                      {
#line 569 "autopar_search_goals.m"
                                        mercury__list__det_drop_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_163_163, mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83, mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_23, &mdprof_fb__automatic_parallelism__autopar_search_goals__Tail_27);
                                      }
#line 570 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__Tail_27)) == (MR_mktag((MR_Integer) 1)));
#line 570 "autopar_search_goals.m"
                                      if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 570 "autopar_search_goals.m"
                                        {
#line 570 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__Tail_27, (MR_Integer) 0)));
#line 570 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__Tail_27, (MR_Integer) 1)));
#line 570 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "autopar_search_goals.m"
                                        }
#line 575 "autopar_search_goals.m"
                                      if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 571 "autopar_search_goals.m"
                                        {
#line 571 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86;

#line 571 "autopar_search_goals.m"
                                          {
#line 571 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9));
#line 571 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17));
#line 571 "autopar_search_goals.m"
                                          }
#line 571 "autopar_search_goals.m"
                                          /* direct tailcall eliminated */
#line 571 "autopar_search_goals.m"
                                          {
#line 571 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86;
#line 571 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18;
#line 571 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_28;

#line 571 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11;
#line 571 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10;
#line 571 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9;
#line 571 "autopar_search_goals.m"
                                          }
#line 571 "autopar_search_goals.m"
                                          continue;
#line 571 "autopar_search_goals.m"
                                        }
#line 575 "autopar_search_goals.m"
                                      else
#line 585 "autopar_search_goals.m"
                                        {
#line 585 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87;
#line 585 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88;
#line 585 "autopar_search_goals.m"
                                          MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_99;
#line 585 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_100;
#line 585 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_101;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_148_148;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_149_149;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_150_150;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_151_151;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_152_152;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_153_153;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_154_154;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_155_155;
#line 586 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_156_156;

#line 585 "autopar_search_goals.m"
                                          *mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_13 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9;
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 0)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 1)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11, (MR_Integer) 2)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 0)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 1)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 2)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 3)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 4)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 5)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 6)));
#line 586 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87, (MR_Integer) 7)));
#line 587 "autopar_search_goals.m"
                                          {
#line 587 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_99 = measurements__goal_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_101);
                                          }
#line 588 "autopar_search_goals.m"
                                          {
#line 588 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 588 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[0]));
#line 588 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_3));
#line 588 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 588 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8));
#line 588 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_99));
#line 588 "autopar_search_goals.m"
                                          }
#line 588 "autopar_search_goals.m"
                                          {
#line 588 "autopar_search_goals.m"
                                            mercury__list__map_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_163_163, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_163_163, mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush0_12, &mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_100);
                                          }
#line 590 "autopar_search_goals.m"
                                          {
#line 590 "autopar_search_goals.m"
                                            *mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_14 = mercury__list__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_163_163, mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_23, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_100);
                                          }
#line 585 "autopar_search_goals.m"
                                        }
#line 568 "autopar_search_goals.m"
                                    }
#line 552 "autopar_search_goals.m"
                                }
#line 552 "autopar_search_goals.m"
                              else
#line 594 "autopar_search_goals.m"
                                {
#line 594 "autopar_search_goals.m"
                                  {
#line 594 "autopar_search_goals.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not conj");
#line 594 "autopar_search_goals.m"
                                    return;
                                  }
#line 594 "autopar_search_goals.m"
                                }
#line 551 "autopar_search_goals.m"
                            }
#line 596 "autopar_search_goals.m"
                          else
#line 596 "autopar_search_goals.m"
                            if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17)) == (MR_mktag((MR_Integer) 2))))
#line 597 "autopar_search_goals.m"
                              {
#line 597 "autopar_search_goals.m"
                                MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__N_117 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17, (MR_Integer) 0)));
#line 604 "autopar_search_goals.m"
                                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_115;

#line 598 "autopar_search_goals.m"
                                mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170)) == (MR_mktag((MR_Integer) 1)));
#line 598 "autopar_search_goals.m"
                                if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 598 "autopar_search_goals.m"
                                  {
#line 598 "autopar_search_goals.m"
                                    mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 0)));
#line 599 "autopar_search_goals.m"
                                    {
#line 599 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79;
#line 599 "autopar_search_goals.m"
                                      MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_114;
#line 599 "autopar_search_goals.m"
                                      MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_SubGoal_114;

#line 599 "autopar_search_goals.m"
                                      {
#line 599 "autopar_search_goals.m"
                                        mercury__list__det_index1_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_search_goals__Goals_115, mdprof_fb__automatic_parallelism__autopar_search_goals__N_117, &mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_SubGoal_114);
                                      }
#line 599 "autopar_search_goals.m"
                                      mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_114 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_SubGoal_114);
#line 600 "autopar_search_goals.m"
                                      {
#line 600 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "autopar_search_goals.m"
                                        MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9));
#line 600 "autopar_search_goals.m"
                                        MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17));
#line 600 "autopar_search_goals.m"
                                      }
#line 600 "autopar_search_goals.m"
                                      /* direct tailcall eliminated */
#line 600 "autopar_search_goals.m"
                                      {
#line 600 "autopar_search_goals.m"
                                        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79;
#line 600 "autopar_search_goals.m"
                                        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18;
#line 600 "autopar_search_goals.m"
                                        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_114;

#line 600 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11;
#line 600 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10;
#line 600 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9;
#line 600 "autopar_search_goals.m"
                                      }
#line 600 "autopar_search_goals.m"
                                      continue;
#line 599 "autopar_search_goals.m"
                                    }
#line 598 "autopar_search_goals.m"
                                  }
#line 598 "autopar_search_goals.m"
                                else
#line 605 "autopar_search_goals.m"
                                  {
#line 605 "autopar_search_goals.m"
                                    {
#line 605 "autopar_search_goals.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not disj");
#line 605 "autopar_search_goals.m"
                                      return;
                                    }
#line 605 "autopar_search_goals.m"
                                  }
#line 597 "autopar_search_goals.m"
                              }
#line 596 "autopar_search_goals.m"
                            else
#line 596 "autopar_search_goals.m"
                              if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 670 "autopar_search_goals.m"
                                {
#line 672 "autopar_search_goals.m"
                                  {
#line 672 "autopar_search_goals.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "atomic_orelse");
#line 672 "autopar_search_goals.m"
                                    return;
                                  }
#line 670 "autopar_search_goals.m"
                                }
#line 596 "autopar_search_goals.m"
                              else
#line 596 "autopar_search_goals.m"
                                if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 654 "autopar_search_goals.m"
                                  {
#line 654 "autopar_search_goals.m"
                                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_124;
#line 649 "autopar_search_goals.m"
                                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43;

#line 649 "autopar_search_goals.m"
                                    mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 649 "autopar_search_goals.m"
                                    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 649 "autopar_search_goals.m"
                                      {
#line 649 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 1)));
#line 649 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 2)));
#line 650 "autopar_search_goals.m"
                                        {
#line 650 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57;

#line 650 "autopar_search_goals.m"
                                          {
#line 650 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9));
#line 650 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17));
#line 650 "autopar_search_goals.m"
                                          }
#line 650 "autopar_search_goals.m"
                                          /* direct tailcall eliminated */
#line 650 "autopar_search_goals.m"
                                          {
#line 650 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57;
#line 650 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18;
#line 650 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_124;

#line 650 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11;
#line 650 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10;
#line 650 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9;
#line 650 "autopar_search_goals.m"
                                          }
#line 650 "autopar_search_goals.m"
                                          continue;
#line 650 "autopar_search_goals.m"
                                        }
#line 649 "autopar_search_goals.m"
                                      }
#line 649 "autopar_search_goals.m"
                                    else
#line 655 "autopar_search_goals.m"
                                      {
#line 655 "autopar_search_goals.m"
                                        {
#line 655 "autopar_search_goals.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not scope");
#line 655 "autopar_search_goals.m"
                                          return;
                                        }
#line 655 "autopar_search_goals.m"
                                      }
#line 654 "autopar_search_goals.m"
                                  }
#line 596 "autopar_search_goals.m"
                                else
#line 608 "autopar_search_goals.m"
                                  {
#line 608 "autopar_search_goals.m"
                                    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__N_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17, (MR_Integer) 1)));
#line 608 "autopar_search_goals.m"
                                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17, (MR_Integer) 2)));
#line 616 "autopar_search_goals.m"
                                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_32;
#line 609 "autopar_search_goals.m"
                                    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30;
#line 609 "autopar_search_goals.m"
                                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31;

#line 609 "autopar_search_goals.m"
                                    mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170)) == (MR_mktag((MR_Integer) 2)));
#line 609 "autopar_search_goals.m"
                                    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 609 "autopar_search_goals.m"
                                      {
#line 609 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 0)));
#line 609 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 1)));
#line 609 "autopar_search_goals.m"
                                        mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170, (MR_Integer) 2)));
#line 610 "autopar_search_goals.m"
                                        {
#line 610 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Case_33;
#line 610 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75;
#line 610 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_120;
#line 610 "autopar_search_goals.m"
                                          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_Case_33;
#line 611 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34;
#line 611 "autopar_search_goals.m"
                                          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35;

#line 610 "autopar_search_goals.m"
                                          {
#line 610 "autopar_search_goals.m"
                                            mercury__list__det_index1_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[7], mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_32, mdprof_fb__automatic_parallelism__autopar_search_goals__N_122, &mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_Case_33);
                                          }
#line 610 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__Case_33 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_Case_33);
#line 611 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Case_33, (MR_Integer) 0)));
#line 611 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Case_33, (MR_Integer) 1)));
#line 611 "autopar_search_goals.m"
                                          mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Case_33, (MR_Integer) 2)));
#line 612 "autopar_search_goals.m"
                                          {
#line 612 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9));
#line 612 "autopar_search_goals.m"
                                            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__FirstRelStep_17));
#line 612 "autopar_search_goals.m"
                                          }
#line 612 "autopar_search_goals.m"
                                          /* direct tailcall eliminated */
#line 612 "autopar_search_goals.m"
                                          {
#line 612 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75;
#line 612 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelPath_18;
#line 612 "autopar_search_goals.m"
                                            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_120;

#line 612 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto__tmp_copy_11;
#line 612 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath_10 = mdprof_fb__automatic_parallelism__autopar_search_goals__ForwardGoalPath__tmp_copy_10;
#line 612 "autopar_search_goals.m"
                                            mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__RevCurPath__tmp_copy_9;
#line 612 "autopar_search_goals.m"
                                          }
#line 612 "autopar_search_goals.m"
                                          continue;
#line 610 "autopar_search_goals.m"
                                        }
#line 609 "autopar_search_goals.m"
                                      }
#line 609 "autopar_search_goals.m"
                                    else
#line 617 "autopar_search_goals.m"
                                      {
#line 617 "autopar_search_goals.m"
                                        {
#line 617 "autopar_search_goals.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not switch");
#line 617 "autopar_search_goals.m"
                                          return;
                                        }
#line 617 "autopar_search_goals.m"
                                      }
#line 608 "autopar_search_goals.m"
                                  }
#line 548 "autopar_search_goals.m"
          }
#line 538 "autopar_search_goals.m"
      }
#line 538 "autopar_search_goals.m"
      break;
#line 538 "autopar_search_goals.m"
    }
#line 530 "autopar_search_goals.m"
}

#line 498 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(
#line 498 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1,
#line 498 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2,
#line 498 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3)
#line 498 "autopar_search_goals.m"
{
#line 503 "autopar_search_goals.m"
  {
#line 503 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;

#line 503 "autopar_search_goals.m"
    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "autopar_search_goals.m"
      {
#line 503 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeMainPush_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 1)));
#line 504 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 0)));
#line 504 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 2)));
#line 504 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 3)));
#line 504 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 4)));
#line 504 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 5)));
#line 504 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 6)));
#line 504 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 7)));
#line 504 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 8)));
#line 504 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 9)));

#line 507 "autopar_search_goals.m"
        if ((mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeMainPush_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "autopar_search_goals.m"
          {
#line 509 "autopar_search_goals.m"
            {
#line 509 "autopar_search_goals.m"
              mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", (MR_String) "no push");
#line 509 "autopar_search_goals.m"
              return;
            }
#line 508 "autopar_search_goals.m"
          }
#line 507 "autopar_search_goals.m"
        else
#line 506 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeMainPush_6, (MR_Integer) 0)));
#line 503 "autopar_search_goals.m"
      }
#line 503 "autopar_search_goals.m"
    else
#line 512 "autopar_search_goals.m"
      {
#line 512 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadCandidate_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2, (MR_Integer) 0)));
#line 512 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TailCandidates_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2, (MR_Integer) 1)));
#line 512 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RestPush_14;
#line 512 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeMainPush_15;
#line 512 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MainPush_16;
#line 514 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40;
#line 514 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_41_41;
#line 514 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_42_42;
#line 514 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43;
#line 514 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44;
#line 514 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45;
#line 514 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46;
#line 514 "autopar_search_goals.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47;
#line 514 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48;
#line 526 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__GoalPathStr_17;
#line 526 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Lo_18;
#line 526 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Hi_19;
#line 526 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__MainPushInto_20;
#line 526 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RestPushInto_21;
#line 522 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25;
#line 522 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26;
#line 522 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49;
#line 522 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50;
#line 522 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51;

#line 513 "autopar_search_goals.m"
        {
#line 513 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__HeadCandidate_11, mdprof_fb__automatic_parallelism__autopar_search_goals__TailCandidates_12, &mdprof_fb__automatic_parallelism__autopar_search_goals__RestPush_14);
        }
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 0)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeMainPush_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 1)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 2)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 3)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 4)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_44_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 5)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 6)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 7)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 8)));
#line 514 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainCandidate_1, (MR_Integer) 9)));
#line 517 "autopar_search_goals.m"
        if ((mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeMainPush_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "autopar_search_goals.m"
          {
#line 519 "autopar_search_goals.m"
            {
#line 519 "autopar_search_goals.m"
              mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", (MR_String) "no push");
#line 519 "autopar_search_goals.m"
              return;
            }
#line 518 "autopar_search_goals.m"
          }
#line 517 "autopar_search_goals.m"
        else
#line 516 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__MainPush_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeMainPush_15, (MR_Integer) 0)));
#line 522 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__GoalPathStr_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainPush_16, (MR_Integer) 0)));
#line 522 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__Lo_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainPush_16, (MR_Integer) 1)));
#line 522 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__Hi_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainPush_16, (MR_Integer) 2)));
#line 522 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__MainPush_16, (MR_Integer) 3)));
#line 522 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 522 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 522 "autopar_search_goals.m"
          {
#line 522 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__MainPushInto_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25, (MR_Integer) 0)));
#line 522 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25, (MR_Integer) 1)));
#line 522 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "autopar_search_goals.m"
            if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 522 "autopar_search_goals.m"
              {
#line 523 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__RestPush_14, (MR_Integer) 0)));
#line 523 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__RestPush_14, (MR_Integer) 1)));
#line 523 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__RestPush_14, (MR_Integer) 2)));
#line 523 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__RestPushInto_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__RestPush_14, (MR_Integer) 3)));
#line 523 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (strcmp(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalPathStr_17, mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49) == 0);
#line 522 "autopar_search_goals.m"
                if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 522 "autopar_search_goals.m"
                  {
#line 523 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__Lo_18 == mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50);
#line 522 "autopar_search_goals.m"
                    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 523 "autopar_search_goals.m"
                      mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__Hi_19 == mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51);
#line 522 "autopar_search_goals.m"
                  }
#line 522 "autopar_search_goals.m"
              }
#line 522 "autopar_search_goals.m"
          }
#line 526 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 525 "autopar_search_goals.m"
          {
#line 525 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27;

#line 525 "autopar_search_goals.m"
            {
#line 525 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__MainPushInto_20));
#line 525 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RestPushInto_21));
#line 525 "autopar_search_goals.m"
            }
#line 525 "autopar_search_goals.m"
            {
#line 525 "autopar_search_goals.m"
              MR_Word base;
#line 525 "autopar_search_goals.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "autopar_search_goals.m"
              *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3 = base;
#line 525 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__GoalPathStr_17));
#line 525 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Lo_18));
#line 525 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Hi_19));
#line 525 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27));
#line 525 "autopar_search_goals.m"
            }
#line 525 "autopar_search_goals.m"
          }
#line 526 "autopar_search_goals.m"
        else
#line 527 "autopar_search_goals.m"
          {
#line 527 "autopar_search_goals.m"
            {
#line 527 "autopar_search_goals.m"
              mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", (MR_String) "mismatch on pushed goals");
#line 527 "autopar_search_goals.m"
              return;
            }
#line 527 "autopar_search_goals.m"
          }
#line 512 "autopar_search_goals.m"
      }
#line 503 "autopar_search_goals.m"
  }
#line 498 "autopar_search_goals.m"
}

#line 435 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_p_0(
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8,
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9,
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_10,
#line 435 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndex_11,
#line 435 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Single_12,
#line 435 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_35,
#line 435 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14)
#line 435 "autopar_search_goals.m"
{
#line 441 "autopar_search_goals.m"
  {
#line 441 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 441 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SingleRevPath_15;
#line 441 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SinglePath_16;
#line 441 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalPath_17;
#line 441 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Single_12, (MR_Integer) 2)));
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Single_12, (MR_Integer) 0)));
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Single_12, (MR_Integer) 1)));
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 0)));
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 1)));
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_63_63;
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_64_64;
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_65_65;
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66;
#line 442 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67;
#line 494 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RelativePath_18;
#line 494 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__RelConjStep_19;
#line 494 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelativePath_20;
#line 494 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_22;
#line 494 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_23;
#line 494 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37;
#line 446 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_79_79;
#line 446 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConjsUptoCostly_21;
#line 446 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38;
#line 446 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39;
#line 446 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40;

#line 442 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__SingleRevPath_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 2)));
#line 442 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 3)));
#line 442 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 4)));
#line 442 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 5)));
#line 442 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 6)));
#line 442 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, (MR_Integer) 7)));
#line 443 "autopar_search_goals.m"
    {
#line 443 "autopar_search_goals.m"
      mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__SingleRevPath_15, &mdprof_fb__automatic_parallelism__autopar_search_goals__SinglePath_16);
    }
#line 444 "autopar_search_goals.m"
    {
#line 444 "autopar_search_goals.m"
      mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9, &mdprof_fb__automatic_parallelism__autopar_search_goals__GoalPath_17);
    }
#line 446 "autopar_search_goals.m"
    {
#line 446 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__GoalPath_17, mdprof_fb__automatic_parallelism__autopar_search_goals__SinglePath_16, &mdprof_fb__automatic_parallelism__autopar_search_goals__RelativePath_18);
    }
#line 446 "autopar_search_goals.m"
    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 446 "autopar_search_goals.m"
      {
#line 447 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__RelativePath_18)) == (MR_mktag((MR_Integer) 1)));
#line 447 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 447 "autopar_search_goals.m"
          {
#line 447 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RelativePath_18, (MR_Integer) 0)));
#line 447 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelativePath_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RelativePath_18, (MR_Integer) 1)));
#line 447 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 447 "autopar_search_goals.m"
            if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 447 "autopar_search_goals.m"
              {
#line 447 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__RelConjStep_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37, (MR_Integer) 0)));
#line 448 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = (mdprof_fb__automatic_parallelism__autopar_search_goals__RelConjStep_19 < mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndex_11);
#line 446 "autopar_search_goals.m"
                if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 446 "autopar_search_goals.m"
                  {
#line 4455 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_79_79 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
#line 449 "autopar_search_goals.m"
                    {
#line 449 "autopar_search_goals.m"
                      mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mercury__list__take_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_79_79, mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndex_11, mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_10, &mdprof_fb__automatic_parallelism__autopar_search_goals__ConjsUptoCostly_21);
                    }
#line 446 "autopar_search_goals.m"
                    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 446 "autopar_search_goals.m"
                      {
#line 450 "autopar_search_goals.m"
                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40 = (MR_Integer) 1;
#line 450 "autopar_search_goals.m"
                        mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38 = (mdprof_fb__automatic_parallelism__autopar_search_goals__RelConjStep_19 - mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40);
#line 450 "autopar_search_goals.m"
                        {
#line 450 "autopar_search_goals.m"
                          mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mercury__list__drop_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_79_79, mdprof_fb__automatic_parallelism__autopar_search_goals__V_38_38, mdprof_fb__automatic_parallelism__autopar_search_goals__ConjsUptoCostly_21, &mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39);
                        }
#line 446 "autopar_search_goals.m"
                        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 446 "autopar_search_goals.m"
                          {
#line 450 "autopar_search_goals.m"
                            mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 450 "autopar_search_goals.m"
                            if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 450 "autopar_search_goals.m"
                              {
#line 450 "autopar_search_goals.m"
                                mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39, (MR_Integer) 0)));
#line 450 "autopar_search_goals.m"
                                mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_39_39, (MR_Integer) 1)));
#line 450 "autopar_search_goals.m"
                              }
#line 446 "autopar_search_goals.m"
                          }
#line 446 "autopar_search_goals.m"
                      }
#line 446 "autopar_search_goals.m"
                  }
#line 447 "autopar_search_goals.m"
              }
#line 447 "autopar_search_goals.m"
          }
#line 446 "autopar_search_goals.m"
      }
#line 494 "autopar_search_goals.m"
    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 453 "autopar_search_goals.m"
      {
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevPushGoalPath_24;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_25;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_26;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ProcLabel_27;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Location_28;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoalPath_32;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoal_33;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_42_42;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_44_44;
#line 453 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45;
#line 453 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48;
#line 453 "autopar_search_goals.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51;
#line 453 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_52_52;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_69_69;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_70_70;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_72_72;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77;
#line 458 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78;
#line 474 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MostRelativePath_29;
#line 468 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__LastRelativeStep_30;
#line 469 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31;

#line 453 "autopar_search_goals.m"
        {
#line 453 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__RevPushGoalPath_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevPushGoalPath_24, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9));
#line 453 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevPushGoalPath_24, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_37_37));
#line 453 "autopar_search_goals.m"
        }
#line 454 "autopar_search_goals.m"
        {
#line 454 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, mdprof_fb__automatic_parallelism__autopar_search_goals__RevPushGoalPath_24, mdprof_fb__automatic_parallelism__autopar_search_goals__TailRelativePath_20, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalToPushInto_22, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalsToPush_23, &mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_25, &mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_26);
        }
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 0)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 1)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 2)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 3)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 4)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 5)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 6)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 7)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 8)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 9)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 10)));
#line 458 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__ProcLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, (MR_Integer) 11)));
#line 459 "autopar_search_goals.m"
        {
#line 459 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_42_42 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
        }
#line 461 "autopar_search_goals.m"
        {
#line 461 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__Location_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__Location_28, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__ProcLabel_27));
#line 461 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__Location_28, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9));
#line 461 "autopar_search_goals.m"
        }
#line 462 "autopar_search_goals.m"
        {
#line 462 "autopar_search_goals.m"
          message__append_message_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Location_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_42_42, &mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_44_44);
        }
#line 467 "autopar_search_goals.m"
        {
#line 467 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mdbcomp__goal_path__goal_path_remove_last_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__RelativePath_18, &mdprof_fb__automatic_parallelism__autopar_search_goals__MostRelativePath_29, &mdprof_fb__automatic_parallelism__autopar_search_goals__LastRelativeStep_30);
        }
#line 468 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 468 "autopar_search_goals.m"
          {
#line 469 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__LastRelativeStep_30)) == (MR_mktag((MR_Integer) 1)));
#line 469 "autopar_search_goals.m"
            if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 469 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__LastRelativeStep_30, (MR_Integer) 0)));
#line 468 "autopar_search_goals.m"
          }
#line 474 "autopar_search_goals.m"
        if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 473 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoalPath_32 = mdprof_fb__automatic_parallelism__autopar_search_goals__MostRelativePath_29;
#line 474 "autopar_search_goals.m"
        else
#line 477 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoalPath_32 = mdprof_fb__automatic_parallelism__autopar_search_goals__RelativePath_18;
#line 480 "autopar_search_goals.m"
        {
#line 480 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_9);
        }
#line 480 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46 = (mdprof_fb__automatic_parallelism__autopar_search_goals__RelConjStep_19 + (MR_Integer) 1);
#line 482 "autopar_search_goals.m"
        {
#line 482 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49 = mdbcomp__goal_path__goal_path_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoalPath_32);
        }
#line 480 "autopar_search_goals.m"
        {
#line 480 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49));
#line 480 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "autopar_search_goals.m"
        }
#line 480 "autopar_search_goals.m"
        {
#line 480 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoal_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 480 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoal_33, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_45_45));
#line 480 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoal_33, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_46_46));
#line 480 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoal_33, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndex_11));
#line 480 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoal_33, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_48_48));
#line 480 "autopar_search_goals.m"
        }
#line 483 "autopar_search_goals.m"
        {
#line 483 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__PushGoal_33));
#line 483 "autopar_search_goals.m"
        }
#line 483 "autopar_search_goals.m"
        {
#line 483 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_8, mdprof_fb__automatic_parallelism__autopar_search_goals__Location_28, mdprof_fb__automatic_parallelism__autopar_search_goals__RevCandidateGoalPath_25, mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51, mdprof_fb__automatic_parallelism__autopar_search_goals__CandidateConjs_26, mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_44_44, &mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_52_52);
        }
#line 491 "autopar_search_goals.m"
        if ((*mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_35 = mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_52_52;
#line 491 "autopar_search_goals.m"
        else
#line 487 "autopar_search_goals.m"
          {
#line 488 "autopar_search_goals.m"
            {
#line 488 "autopar_search_goals.m"
              message__append_message_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Location_28, (MR_Word) MR_mkword(MR_mktag(3), &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[12]), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_52_52, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_35);
#line 488 "autopar_search_goals.m"
              return;
            }
#line 487 "autopar_search_goals.m"
          }
#line 453 "autopar_search_goals.m"
      }
#line 494 "autopar_search_goals.m"
    else
#line 495 "autopar_search_goals.m"
      {
#line 495 "autopar_search_goals.m"
        {
#line 495 "autopar_search_goals.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_and_build_candidate_conjunction\'/7", (MR_String) "bad goal path for Single");
#line 495 "autopar_search_goals.m"
          return;
        }
#line 495 "autopar_search_goals.m"
      }
#line 441 "autopar_search_goals.m"
  }
#line 435 "autopar_search_goals.m"
}

#line 413 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1,
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2,
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3,
#line 413 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4,
#line 413 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5,
#line 413 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6,
#line 413 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7)
#line 413 "autopar_search_goals.m"
{
#line 418 "autopar_search_goals.m"
  {
#line 418 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;

#line 418 "autopar_search_goals.m"
    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "autopar_search_goals.m"
      {
#line 418 "autopar_search_goals.m"
        {
#line 418 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
        }
#line 418 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "autopar_search_goals.m"
      }
#line 418 "autopar_search_goals.m"
    else
#line 421 "autopar_search_goals.m"
      {
#line 421 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Single_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5, (MR_Integer) 0)));
#line 421 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5, (MR_Integer) 1)));
#line 421 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadMessages_20;
#line 421 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeHeadCandidate_21;
#line 421 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TailMessages_22;
#line 421 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TailCandidates_23;

#line 422 "autopar_search_goals.m"
        {
#line 422 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4, mdprof_fb__automatic_parallelism__autopar_search_goals__Single_16, &mdprof_fb__automatic_parallelism__autopar_search_goals__HeadMessages_20, &mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeHeadCandidate_21);
        }
#line 424 "autopar_search_goals.m"
        {
#line 424 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4, mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_17, &mdprof_fb__automatic_parallelism__autopar_search_goals__TailMessages_22, &mdprof_fb__automatic_parallelism__autopar_search_goals__TailCandidates_23);
        }
#line 426 "autopar_search_goals.m"
        {
#line 426 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadMessages_20, mdprof_fb__automatic_parallelism__autopar_search_goals__TailMessages_22);
        }
#line 430 "autopar_search_goals.m"
        if ((mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeHeadCandidate_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7 = mdprof_fb__automatic_parallelism__autopar_search_goals__TailCandidates_23;
#line 430 "autopar_search_goals.m"
        else
#line 428 "autopar_search_goals.m"
          {
#line 428 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadCandidate_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeHeadCandidate_21, (MR_Integer) 0)));

#line 429 "autopar_search_goals.m"
            {
#line 429 "autopar_search_goals.m"
              MR_Word base;
#line 429 "autopar_search_goals.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "autopar_search_goals.m"
              *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7 = base;
#line 429 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadCandidate_24));
#line 429 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__TailCandidates_23));
#line 429 "autopar_search_goals.m"
            }
#line 428 "autopar_search_goals.m"
          }
#line 421 "autopar_search_goals.m"
      }
#line 418 "autopar_search_goals.m"
  }
#line 413 "autopar_search_goals.m"
}

#line 381 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_p_0(
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7,
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8,
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_9,
#line 381 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyGoalsIndexes_10,
#line 381 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_17,
#line 381 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_12)
#line 381 "autopar_search_goals.m"
{
#line 387 "autopar_search_goals.m"
  {
#line 387 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 387 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ProcLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 11)));
#line 387 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__NumCostlyGoals_14;
#line 387 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Location_15;
#line 387 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_18_18;
#line 387 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19;
#line 387 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20_20;
#line 387 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_22_22;
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 0)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 1)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 2)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 3)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 4)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 5)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 6)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 7)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 8)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 9)));
#line 388 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 10)));

#line 389 "autopar_search_goals.m"
    {
#line 389 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_18_18 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
    }
#line 390 "autopar_search_goals.m"
    {
#line 390 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__NumCostlyGoals_14 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyGoalsIndexes_10);
    }
#line 391 "autopar_search_goals.m"
    {
#line 391 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__Location_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__Location_15, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__ProcLabel_13));
#line 391 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__Location_15, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 391 "autopar_search_goals.m"
    }
#line 392 "autopar_search_goals.m"
    {
#line 392 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 392 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__NumCostlyGoals_14));
#line 392 "autopar_search_goals.m"
    }
#line 392 "autopar_search_goals.m"
    {
#line 392 "autopar_search_goals.m"
      message__append_message_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Location_15, mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_18_18, &mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20_20);
    }
#line 396 "autopar_search_goals.m"
    {
#line 396 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__Location_15, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_9, mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_12, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_20_20, &mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_22_22);
    }
#line 403 "autopar_search_goals.m"
    if ((*mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_17 = mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_22_22;
#line 403 "autopar_search_goals.m"
    else
#line 399 "autopar_search_goals.m"
      {
#line 400 "autopar_search_goals.m"
        {
#line 400 "autopar_search_goals.m"
          message__append_message_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Location_15, (MR_Word) MR_mkword(MR_mktag(3), &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[12]), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_22_22, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_17);
#line 400 "autopar_search_goals.m"
          return;
        }
#line 399 "autopar_search_goals.m"
      }
#line 387 "autopar_search_goals.m"
  }
#line 381 "autopar_search_goals.m"
}

#line 368 "autopar_search_goals.m"
static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_p_0(
#line 368 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_4,
#line 368 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_5,
#line 368 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Single_6)
#line 368 "autopar_search_goals.m"
{
#line 371 "autopar_search_goals.m"
  {
#line 371 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 371 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCost_7;
#line 371 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCount_8;
#line 371 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConjNewCounts_9;
#line 371 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Single_6, (MR_Integer) 2)));
#line 371 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_11_11;
#line 371 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24;
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Single_6, (MR_Integer) 0)));
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Single_6, (MR_Integer) 1)));
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 0)));
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 1)));
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 2)));
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 3)));
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19;
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20;
#line 372 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21;
#line 375 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22;
#line 375 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23;

#line 372 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCost_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 4)));
#line 372 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 5)));
#line 372 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 6)));
#line 372 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_10_10, (MR_Integer) 7)));
#line 373 "autopar_search_goals.m"
    {
#line 373 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCount_8 = measurements__goal_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCost_7);
    }
#line 374 "autopar_search_goals.m"
    {
#line 374 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_4, mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCount_8, mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_5, &mdprof_fb__automatic_parallelism__autopar_search_goals__ConjNewCounts_9);
    }
#line 375 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ConjNewCounts_9, (MR_Integer) 0)));
#line 375 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ConjNewCounts_9, (MR_Integer) 1)));
#line 375 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ConjNewCounts_9, (MR_Integer) 2)));
#line 375 "autopar_search_goals.m"
    {
#line 375 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_11_11, &mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24);
    }
#line 375 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = ((MR_Integer) 1 == mdprof_fb__automatic_parallelism__autopar_search_goals__V_24_24);
#line 371 "autopar_search_goals.m"
    return mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 371 "autopar_search_goals.m"
  }
#line 368 "autopar_search_goals.m"
}

#line 334 "autopar_search_goals.m"
static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0_1(
#line 334 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 334 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1)
#line 334 "autopar_search_goals.m"
{
#line 334 "autopar_search_goals.m"
  {
#line 334 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 334 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;

#line 334 "autopar_search_goals.m"
    {
#line 334 "autopar_search_goals.m"
      return mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1));
    }
#line 334 "autopar_search_goals.m"
    return mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 334 "autopar_search_goals.m"
  }
#line 334 "autopar_search_goals.m"
}

#line 301 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4,
#line 301 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_0_8,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_9,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_0_10,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_11,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_12,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_13,
#line 301 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_0_14,
#line 301 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_15)
#line 301 "autopar_search_goals.m"
{
#line 312 "autopar_search_goals.m"
  {
#line 312 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;

#line 312 "autopar_search_goals.m"
    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "autopar_search_goals.m"
      {
#line 312 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_15 = mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_0_14;
#line 312 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_13 = mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_12;
#line 312 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_11 = mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_0_10;
#line 312 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_9 = mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_0_8;
#line 312 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7 = mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6;
#line 312 "autopar_search_goals.m"
      }
#line 312 "autopar_search_goals.m"
    else
#line 317 "autopar_search_goals.m"
      {
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_91_91;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conj0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3, (MR_Integer) 0)));
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__3_3, (MR_Integer) 1)));
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conj_38;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_39;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_45;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevConjGoalPath_47;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_48;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesCord_49;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_50;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_51;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Costly_52;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar1_53;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_74_74;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_75_75;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_76_76;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77;
#line 317 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81;
#line 317 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83;
#line 325 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89;
#line 325 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90;

#line 318 "autopar_search_goals.m"
        {
#line 318 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5));
#line 318 "autopar_search_goals.m"
        }
#line 318 "autopar_search_goals.m"
        {
#line 318 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__RevConjGoalPath_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevConjGoalPath_47, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2));
#line 318 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevConjGoalPath_47, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73));
#line 318 "autopar_search_goals.m"
        }
#line 319 "autopar_search_goals.m"
        {
#line 319 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1, mdprof_fb__automatic_parallelism__autopar_search_goals__RevConjGoalPath_47, mdprof_fb__automatic_parallelism__autopar_search_goals__Conj0_36, &mdprof_fb__automatic_parallelism__autopar_search_goals__Conj_38, &mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_48, &mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_45, &mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesCord_49, &mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_50);
        }
#line 5203 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
        mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_91_91 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
#line 321 "autopar_search_goals.m"
        {
#line 321 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_51 = mercury__cord__list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_91_91, mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesCord_49);
        }
#line 322 "autopar_search_goals.m"
        {
#line 322 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_74_74 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1], mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_0_10, mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_48);
        }
#line 323 "autopar_search_goals.m"
        {
#line 323 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_75_75 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_12, mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_45);
        }
#line 324 "autopar_search_goals.m"
        {
#line 324 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_76_76 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_0_14, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_50);
        }
#line 325 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Conj_38, (MR_Integer) 0)));
#line 325 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Conj_38, (MR_Integer) 1)));
#line 325 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Conj_38, (MR_Integer) 2)));
#line 325 "autopar_search_goals.m"
        {
#line 325 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_77_77, &mdprof_fb__automatic_parallelism__autopar_search_goals__Costly_52);
        }
#line 330 "autopar_search_goals.m"
        if ((mdprof_fb__automatic_parallelism__autopar_search_goals__Costly_52 == (MR_Integer) 1))
#line 327 "autopar_search_goals.m"
          {
#line 327 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82;

#line 328 "autopar_search_goals.m"
            {
#line 328 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5));
#line 328 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6));
#line 328 "autopar_search_goals.m"
            }
#line 328 "autopar_search_goals.m"
            {
#line 328 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82));
#line 328 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_0_8));
#line 328 "autopar_search_goals.m"
            }
#line 329 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar1_53 = mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_51;
#line 327 "autopar_search_goals.m"
          }
#line 330 "autopar_search_goals.m"
        else
#line 331 "autopar_search_goals.m"
          {
#line 331 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFarMakeConjCostly_54;
#line 331 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78;

#line 334 "autopar_search_goals.m"
            {
#line 334 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 334 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_6[0]));
#line 334 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0_1));
#line 334 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1));
#line 334 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Conj_38));
#line 334 "autopar_search_goals.m"
            }
#line 334 "autopar_search_goals.m"
            {
#line 334 "autopar_search_goals.m"
              mercury__list__filter_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_91_91, mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6, &mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFarMakeConjCostly_54);
            }
#line 338 "autopar_search_goals.m"
            if ((mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFarMakeConjCostly_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81 = mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_0_8;
#line 338 "autopar_search_goals.m"
            else
#line 339 "autopar_search_goals.m"
              {
#line 339 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80;

#line 340 "autopar_search_goals.m"
                {
#line 340 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5));
#line 340 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFarMakeConjCostly_54));
#line 340 "autopar_search_goals.m"
                }
#line 340 "autopar_search_goals.m"
                {
#line 340 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80));
#line 340 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_0_8));
#line 340 "autopar_search_goals.m"
                }
#line 339 "autopar_search_goals.m"
              }
#line 348 "autopar_search_goals.m"
            if ((mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "autopar_search_goals.m"
              if ((mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar1_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "autopar_search_goals.m"
              else
#line 355 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar1_53 = mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_51;
#line 348 "autopar_search_goals.m"
            else
#line 348 "autopar_search_goals.m"
              if ((mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar1_53 = mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__6_6;
#line 348 "autopar_search_goals.m"
              else
#line 361 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar1_53 = mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_51;
#line 331 "autopar_search_goals.m"
          }
#line 364 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83 = (mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__5_5 + (MR_Integer) 1);
#line 364 "autopar_search_goals.m"
        {
#line 364 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__1_1, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__2_2, mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs0_37, &mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_39, mdprof_fb__automatic_parallelism__autopar_search_goals__V_83_83, mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar1_53, mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__7_7, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_81_81, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_RevSingleCands_9, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_74_74, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CandidatesBelow_11, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_75_75, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_13, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_76_76, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_MessagesBelow_15);
        }
#line 317 "autopar_search_goals.m"
        {
#line 317 "autopar_search_goals.m"
          MR_Word base;
#line 317 "autopar_search_goals.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__HeadVar__4_4 = base;
#line 317 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Conj_38));
#line 317 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_39));
#line 317 "autopar_search_goals.m"
        }
#line 317 "autopar_search_goals.m"
      }
#line 312 "autopar_search_goals.m"
  }
#line 301 "autopar_search_goals.m"
}

#line 274 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_p_0(
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_13,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_14,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Cond_0_37,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Cond_38,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Then_0_39,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Then_40,
#line 274 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Else_0_41,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Else_42,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_18,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_19,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_20,
#line 274 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_21)
#line 274 "autopar_search_goals.m"
{
#line 284 "autopar_search_goals.m"
  {
#line 284 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_52_52;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_53_53;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_55_55;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevCondGoalPath_22;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevThenGoalPath_23;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevElseGoalPath_24;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CondCandidates_25;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CondPushes_26;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CondMessages_28;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ThenCandidates_29;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ThenPushes_30;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ThenSingles_31;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ThenMessages_32;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ElseCandidates_33;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ElsePushes_34;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ElseSingles_35;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ElseMessages_36;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50;
#line 284 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51;
#line 290 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals___CondSingles_27;

#line 285 "autopar_search_goals.m"
    {
#line 285 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__RevCondGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevCondGoalPath_22, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_14));
#line 285 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevCondGoalPath_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "autopar_search_goals.m"
    }
#line 286 "autopar_search_goals.m"
    {
#line 286 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__RevThenGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevThenGoalPath_23, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_14));
#line 286 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevThenGoalPath_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 286 "autopar_search_goals.m"
    }
#line 287 "autopar_search_goals.m"
    {
#line 287 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__RevElseGoalPath_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevElseGoalPath_24, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_14));
#line 287 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevElseGoalPath_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 287 "autopar_search_goals.m"
    }
#line 290 "autopar_search_goals.m"
    {
#line 290 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_13, mdprof_fb__automatic_parallelism__autopar_search_goals__RevCondGoalPath_22, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Cond_0_37, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Cond_38, &mdprof_fb__automatic_parallelism__autopar_search_goals__CondCandidates_25, &mdprof_fb__automatic_parallelism__autopar_search_goals__CondPushes_26, &mdprof_fb__automatic_parallelism__autopar_search_goals___CondSingles_27, &mdprof_fb__automatic_parallelism__autopar_search_goals__CondMessages_28);
    }
#line 292 "autopar_search_goals.m"
    {
#line 292 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_13, mdprof_fb__automatic_parallelism__autopar_search_goals__RevThenGoalPath_23, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Then_0_39, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Then_40, &mdprof_fb__automatic_parallelism__autopar_search_goals__ThenCandidates_29, &mdprof_fb__automatic_parallelism__autopar_search_goals__ThenPushes_30, &mdprof_fb__automatic_parallelism__autopar_search_goals__ThenSingles_31, &mdprof_fb__automatic_parallelism__autopar_search_goals__ThenMessages_32);
    }
#line 294 "autopar_search_goals.m"
    {
#line 294 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_13, mdprof_fb__automatic_parallelism__autopar_search_goals__RevElseGoalPath_24, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Else_0_41, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Else_42, &mdprof_fb__automatic_parallelism__autopar_search_goals__ElseCandidates_33, &mdprof_fb__automatic_parallelism__autopar_search_goals__ElsePushes_34, &mdprof_fb__automatic_parallelism__autopar_search_goals__ElseSingles_35, &mdprof_fb__automatic_parallelism__autopar_search_goals__ElseMessages_36);
    }
#line 5501 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
    mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_52_52 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1];
#line 296 "autopar_search_goals.m"
    {
#line 296 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_52_52, mdprof_fb__automatic_parallelism__autopar_search_goals__ThenCandidates_29, mdprof_fb__automatic_parallelism__autopar_search_goals__ElseCandidates_33);
    }
#line 296 "autopar_search_goals.m"
    {
#line 296 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_18 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_52_52, mdprof_fb__automatic_parallelism__autopar_search_goals__CondCandidates_25, mdprof_fb__automatic_parallelism__autopar_search_goals__V_49_49);
    }
#line 5513 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
    mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_53_53 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
#line 297 "autopar_search_goals.m"
    {
#line 297 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_53_53, mdprof_fb__automatic_parallelism__autopar_search_goals__ThenPushes_30, mdprof_fb__automatic_parallelism__autopar_search_goals__ElsePushes_34);
    }
#line 297 "autopar_search_goals.m"
    {
#line 297 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_19 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_53_53, mdprof_fb__automatic_parallelism__autopar_search_goals__CondPushes_26, mdprof_fb__automatic_parallelism__autopar_search_goals__V_50_50);
    }
#line 298 "autopar_search_goals.m"
    {
#line 298 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_20 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_search_goals__ThenSingles_31, mdprof_fb__automatic_parallelism__autopar_search_goals__ElseSingles_35);
    }
#line 5530 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
    mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_55_55 = (MR_Word) &message__message__type_ctor_info_message_0;
#line 299 "autopar_search_goals.m"
    {
#line 299 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_55_55, mdprof_fb__automatic_parallelism__autopar_search_goals__ThenMessages_32, mdprof_fb__automatic_parallelism__autopar_search_goals__ElseMessages_36);
    }
#line 299 "autopar_search_goals.m"
    {
#line 299 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_21 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_55_55, mdprof_fb__automatic_parallelism__autopar_search_goals__CondMessages_28, mdprof_fb__automatic_parallelism__autopar_search_goals__V_51_51);
    }
#line 284 "autopar_search_goals.m"
  }
#line 274 "autopar_search_goals.m"
}

#line 249 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_p_0(
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_15,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_16,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_28,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_29,
#line 249 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_30,
#line 249 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_31,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_0_32,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_33,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_34,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_35,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_0_36,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_37,
#line 249 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_38,
#line 249 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_39)
#line 249 "autopar_search_goals.m"
{
#line 261 "autopar_search_goals.m"
  {
#line 261 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_19;
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_20;
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_21;
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_22;
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MainConsIdRep_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_28, (MR_Integer) 0)));
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__OtherConsIdReps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_28, (MR_Integer) 1)));
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_0_28, (MR_Integer) 2)));
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_26;
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_27;
#line 261 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40;

#line 263 "autopar_search_goals.m"
    {
#line 263 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 263 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 263 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_30));
#line 263 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "autopar_search_goals.m"
    }
#line 263 "autopar_search_goals.m"
    {
#line 263 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_26, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_16));
#line 263 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_26, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_40_40));
#line 263 "autopar_search_goals.m"
    }
#line 265 "autopar_search_goals.m"
    {
#line 265 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_15, mdprof_fb__automatic_parallelism__autopar_search_goals__RevArmPath_26, mdprof_fb__automatic_parallelism__autopar_search_goals__Goal0_25, &mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_27, &mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_19, &mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_20, &mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_21, &mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_22);
    }
#line 267 "autopar_search_goals.m"
    {
#line 267 "autopar_search_goals.m"
      MR_Word base;
#line 267 "autopar_search_goals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 267 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Case_29 = base;
#line 267 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__MainConsIdRep_23));
#line 267 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__OtherConsIdReps_24));
#line 267 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_27));
#line 267 "autopar_search_goals.m"
    }
#line 268 "autopar_search_goals.m"
    {
#line 268 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_33 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1], mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_0_32, mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_19);
    }
#line 269 "autopar_search_goals.m"
    {
#line 269 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_35 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_34, mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_20);
    }
#line 270 "autopar_search_goals.m"
    {
#line 270 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_37 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_0_36, mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_21);
    }
#line 271 "autopar_search_goals.m"
    {
#line 271 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_39 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_38, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_22);
    }
#line 272 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_31 = (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_CaseNum_0_30 + (MR_Integer) 1);
#line 261 "autopar_search_goals.m"
  }
#line 249 "autopar_search_goals.m"
}

#line 228 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_p_0(
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_15,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_16,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Disj_0_24,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Disj_25,
#line 228 "autopar_search_goals.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_26,
#line 228 "autopar_search_goals.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_27,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_0_28,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_29,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_30,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_31,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_0_32,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_33,
#line 228 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_34,
#line 228 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_35)
#line 228 "autopar_search_goals.m"
{
#line 239 "autopar_search_goals.m"
  {
#line 239 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 239 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_19;
#line 239 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_20;
#line 239 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_21;
#line 239 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_22;
#line 239 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevDisjGoalPath_23;
#line 239 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36;

#line 240 "autopar_search_goals.m"
    {
#line 240 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_26));
#line 240 "autopar_search_goals.m"
    }
#line 240 "autopar_search_goals.m"
    {
#line 240 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__RevDisjGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevDisjGoalPath_23, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_16));
#line 240 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevDisjGoalPath_23, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_36_36));
#line 240 "autopar_search_goals.m"
    }
#line 241 "autopar_search_goals.m"
    {
#line 241 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_15, mdprof_fb__automatic_parallelism__autopar_search_goals__RevDisjGoalPath_23, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Disj_0_24, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Disj_25, &mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_19, &mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_20, &mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_21, &mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_22);
    }
#line 243 "autopar_search_goals.m"
    {
#line 243 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_29 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1], mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Candidates_0_28, mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_19);
    }
#line 244 "autopar_search_goals.m"
    {
#line 244 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Pushes_0_30, mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_20);
    }
#line 245 "autopar_search_goals.m"
    {
#line 245 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_33 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Singles_0_32, mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_21);
    }
#line 246 "autopar_search_goals.m"
    {
#line 246 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_35 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_34, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_22);
    }
#line 247 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_27 = (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_DisjNum_0_26 + (MR_Integer) 1);
#line 239 "autopar_search_goals.m"
  }
#line 228 "autopar_search_goals.m"
}

#line 49 "autopar_search_goals.m"
MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_p_0(
#line 49 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_for_T_6,
#line 49 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_2)
#line 49 "autopar_search_goals.m"
{
#line 1019 "autopar_search_goals.m"
  {
#line 1019 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 1019 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Detism_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_2, (MR_Integer) 1)));
#line 1020 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_2, (MR_Integer) 0)));
#line 1020 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__V_5_5 = (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_2, (MR_Integer) 2));

#line 1022 "autopar_search_goals.m"
    if ((mdprof_fb__automatic_parallelism__autopar_search_goals__Detism_3 == (MR_Integer) 5))
#line 1022 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = MR_TRUE;
#line 1022 "autopar_search_goals.m"
    else
#line 1022 "autopar_search_goals.m"
      if ((mdprof_fb__automatic_parallelism__autopar_search_goals__Detism_3 == (MR_Integer) 0))
#line 1021 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = MR_TRUE;
#line 1022 "autopar_search_goals.m"
      else
#line 1022 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = MR_FALSE;
#line 1019 "autopar_search_goals.m"
    return mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 1019 "autopar_search_goals.m"
  }
#line 49 "autopar_search_goals.m"
}

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_17(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 833 "autopar_search_goals.m"
{
#line 833 "autopar_search_goals.m"
  {
#line 833 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 833 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv43_STATE_VARIABLE_Map_18;

#line 833 "autopar_search_goals.m"
    {
#line 833 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv43_STATE_VARIABLE_Map_18);
    }
#line 833 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv43_STATE_VARIABLE_Map_18));
#line 833 "autopar_search_goals.m"
  }
#line 833 "autopar_search_goals.m"
}

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_16(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 828 "autopar_search_goals.m"
{
#line 828 "autopar_search_goals.m"
  {
#line 828 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 828 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv41_STATE_VARIABLE_Map_18;

#line 828 "autopar_search_goals.m"
    {
#line 828 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv41_STATE_VARIABLE_Map_18);
    }
#line 828 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv41_STATE_VARIABLE_Map_18));
#line 828 "autopar_search_goals.m"
  }
#line 828 "autopar_search_goals.m"
}

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_15(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 833 "autopar_search_goals.m"
{
#line 833 "autopar_search_goals.m"
  {
#line 833 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 833 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv39_STATE_VARIABLE_Map_18;

#line 833 "autopar_search_goals.m"
    {
#line 833 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv39_STATE_VARIABLE_Map_18);
    }
#line 833 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv39_STATE_VARIABLE_Map_18));
#line 833 "autopar_search_goals.m"
  }
#line 833 "autopar_search_goals.m"
}

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_14(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 828 "autopar_search_goals.m"
{
#line 828 "autopar_search_goals.m"
  {
#line 828 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 828 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv37_STATE_VARIABLE_Map_18;

#line 828 "autopar_search_goals.m"
    {
#line 828 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv37_STATE_VARIABLE_Map_18);
    }
#line 828 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv37_STATE_VARIABLE_Map_18));
#line 828 "autopar_search_goals.m"
  }
#line 828 "autopar_search_goals.m"
}

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_13(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 833 "autopar_search_goals.m"
{
#line 833 "autopar_search_goals.m"
  {
#line 833 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 833 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv35_STATE_VARIABLE_Map_18;

#line 833 "autopar_search_goals.m"
    {
#line 833 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv35_STATE_VARIABLE_Map_18);
    }
#line 833 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv35_STATE_VARIABLE_Map_18));
#line 833 "autopar_search_goals.m"
  }
#line 833 "autopar_search_goals.m"
}

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_12(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 828 "autopar_search_goals.m"
{
#line 828 "autopar_search_goals.m"
  {
#line 828 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 828 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv33_STATE_VARIABLE_Map_18;

#line 828 "autopar_search_goals.m"
    {
#line 828 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv33_STATE_VARIABLE_Map_18);
    }
#line 828 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv33_STATE_VARIABLE_Map_18));
#line 828 "autopar_search_goals.m"
  }
#line 828 "autopar_search_goals.m"
}

#line 849 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_11(
#line 849 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 849 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 849 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 849 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 849 "autopar_search_goals.m"
{
#line 849 "autopar_search_goals.m"
  {
#line 849 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 849 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv31_HeadVar__7_7;

#line 849 "autopar_search_goals.m"
    {
#line 849 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv31_HeadVar__7_7);
    }
#line 849 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv31_HeadVar__7_7));
#line 849 "autopar_search_goals.m"
  }
#line 849 "autopar_search_goals.m"
}

#line 844 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_10(
#line 844 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 844 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 844 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 844 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 844 "autopar_search_goals.m"
{
#line 844 "autopar_search_goals.m"
  {
#line 844 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 844 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv29_HeadVar__7_7;

#line 844 "autopar_search_goals.m"
    {
#line 844 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv29_HeadVar__7_7);
    }
#line 844 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv29_HeadVar__7_7));
#line 844 "autopar_search_goals.m"
  }
#line 844 "autopar_search_goals.m"
}

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_9(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 833 "autopar_search_goals.m"
{
#line 833 "autopar_search_goals.m"
  {
#line 833 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 833 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv27_STATE_VARIABLE_Map_18;

#line 833 "autopar_search_goals.m"
    {
#line 833 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv27_STATE_VARIABLE_Map_18);
    }
#line 833 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv27_STATE_VARIABLE_Map_18));
#line 833 "autopar_search_goals.m"
  }
#line 833 "autopar_search_goals.m"
}

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_8(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 828 "autopar_search_goals.m"
{
#line 828 "autopar_search_goals.m"
  {
#line 828 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 828 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv25_STATE_VARIABLE_Map_18;

#line 828 "autopar_search_goals.m"
    {
#line 828 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv25_STATE_VARIABLE_Map_18);
    }
#line 828 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv25_STATE_VARIABLE_Map_18));
#line 828 "autopar_search_goals.m"
  }
#line 828 "autopar_search_goals.m"
}

#line 793 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_7(
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 793 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 793 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 793 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 793 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6)
#line 793 "autopar_search_goals.m"
{
#line 793 "autopar_search_goals.m"
  {
#line 793 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 793 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv22_STATE_VARIABLE_Case_20;
#line 793 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__conv21_STATE_VARIABLE_CaseNum_22;
#line 793 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv20_STATE_VARIABLE_Messages_24;

#line 793 "autopar_search_goals.m"
    {
#line 793 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv22_STATE_VARIABLE_Case_20, ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv21_STATE_VARIABLE_CaseNum_22, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv20_STATE_VARIABLE_Messages_24);
    }
#line 793 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv22_STATE_VARIABLE_Case_20));
#line 793 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv21_STATE_VARIABLE_CaseNum_22));
#line 793 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv20_STATE_VARIABLE_Messages_24));
#line 793 "autopar_search_goals.m"
  }
#line 793 "autopar_search_goals.m"
}

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_6(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 833 "autopar_search_goals.m"
{
#line 833 "autopar_search_goals.m"
  {
#line 833 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 833 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv18_STATE_VARIABLE_Map_18;

#line 833 "autopar_search_goals.m"
    {
#line 833 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv18_STATE_VARIABLE_Map_18);
    }
#line 833 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv18_STATE_VARIABLE_Map_18));
#line 833 "autopar_search_goals.m"
  }
#line 833 "autopar_search_goals.m"
}

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_5(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 828 "autopar_search_goals.m"
{
#line 828 "autopar_search_goals.m"
  {
#line 828 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 828 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv16_STATE_VARIABLE_Map_18;

#line 828 "autopar_search_goals.m"
    {
#line 828 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv16_STATE_VARIABLE_Map_18);
    }
#line 828 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv16_STATE_VARIABLE_Map_18));
#line 828 "autopar_search_goals.m"
  }
#line 828 "autopar_search_goals.m"
}

#line 787 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_4(
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 787 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 787 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 787 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 787 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6)
#line 787 "autopar_search_goals.m"
{
#line 787 "autopar_search_goals.m"
  {
#line 787 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 787 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv13_STATE_VARIABLE_Goal_16;
#line 787 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__conv12_STATE_VARIABLE_DisjNum_18;
#line 787 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv11_STATE_VARIABLE_Messages_20;

#line 787 "autopar_search_goals.m"
    {
#line 787 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv13_STATE_VARIABLE_Goal_16, ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv12_STATE_VARIABLE_DisjNum_18, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv11_STATE_VARIABLE_Messages_20);
    }
#line 787 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv13_STATE_VARIABLE_Goal_16));
#line 787 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv12_STATE_VARIABLE_DisjNum_18));
#line 787 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv11_STATE_VARIABLE_Messages_20));
#line 787 "autopar_search_goals.m"
  }
#line 787 "autopar_search_goals.m"
}

#line 833 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_3(
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 833 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 833 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 833 "autopar_search_goals.m"
{
#line 833 "autopar_search_goals.m"
  {
#line 833 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 833 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv9_STATE_VARIABLE_Map_18;

#line 833 "autopar_search_goals.m"
    {
#line 833 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv9_STATE_VARIABLE_Map_18);
    }
#line 833 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv9_STATE_VARIABLE_Map_18));
#line 833 "autopar_search_goals.m"
  }
#line 833 "autopar_search_goals.m"
}

#line 828 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_2(
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 828 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 828 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3)
#line 828 "autopar_search_goals.m"
{
#line 828 "autopar_search_goals.m"
  {
#line 828 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 828 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv7_STATE_VARIABLE_Map_18;

#line 828 "autopar_search_goals.m"
    {
#line 828 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 7))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv7_STATE_VARIABLE_Map_18);
    }
#line 828 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv7_STATE_VARIABLE_Map_18));
#line 828 "autopar_search_goals.m"
  }
#line 828 "autopar_search_goals.m"
}

#line 781 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_1(
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 781 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 781 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 781 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 781 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6)
#line 781 "autopar_search_goals.m"
{
#line 781 "autopar_search_goals.m"
  {
#line 781 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 781 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_STATE_VARIABLE_Goal_16;
#line 781 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_STATE_VARIABLE_ConjNum_18;
#line 781 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Messages_20;

#line 781 "autopar_search_goals.m"
    {
#line 781 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_STATE_VARIABLE_Goal_16, ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_STATE_VARIABLE_ConjNum_18, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Messages_20);
    }
#line 781 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_STATE_VARIABLE_Goal_16));
#line 781 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_STATE_VARIABLE_ConjNum_18));
#line 781 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Messages_20));
#line 781 "autopar_search_goals.m"
  }
#line 781 "autopar_search_goals.m"
}

#line 41 "autopar_search_goals.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(
#line 41 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7,
#line 41 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8,
#line 41 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9,
#line 41 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoal_10,
#line 41 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54,
#line 41 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55)
#line 41 "autopar_search_goals.m"
{
#line 773 "autopar_search_goals.m"
  {
#line 773 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9, (MR_Integer) 0)));
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9, (MR_Integer) 1)));
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9, (MR_Integer) 2)));
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_16;
#line 773 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Before_17;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CostAboveThreshold_52;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53;
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 8)));
#line 773 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57;
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 0)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 1)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 2)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 3)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 4)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 5)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 6)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 7)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 9)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 10)));
#line 775 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 11)));
#line 775 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_InstMapInfo_15;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_111_111;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_112_112;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_113_113;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_114_114;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_115_115;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_116_116;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_117_117;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_118_118;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_119_119;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_120_120;
#line 776 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_121_121;
#line 776 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_Coverage_16;

#line 775 "autopar_search_goals.m"
    {
#line 775 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_InstMapInfo_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0, mdprof_fb__automatic_parallelism__autopar_search_goals__V_56_56, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalId_14);
    }
#line 775 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_InstMapInfo_15);
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 0)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 1)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 2)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 3)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 4)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 5)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 6)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 7)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 8)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 9)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 10)));
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, (MR_Integer) 11)));
#line 776 "autopar_search_goals.m"
    {
#line 776 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_Coverage_16 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, mdprof_fb__automatic_parallelism__autopar_search_goals__V_57_57, mdprof_fb__automatic_parallelism__autopar_search_goals__GoalId_14);
    }
#line 776 "autopar_search_goals.m"
    mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_16 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_Coverage_16);
#line 777 "autopar_search_goals.m"
    {
#line 777 "autopar_search_goals.m"
      coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_16, &mdprof_fb__automatic_parallelism__autopar_search_goals__Before_17);
    }
#line 837 "autopar_search_goals.m"
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12)) == (MR_mktag((MR_Integer) 0))))
#line 824 "autopar_search_goals.m"
      {
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_185;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_186;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 0)));
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailConjs_19;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_45;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_47;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_91_91;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92;
#line 824 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_93_93;
#line 781 "autopar_search_goals.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20;
#line 781 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv6_V_20_20;
#line 781 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv5_STATE_VARIABLE_Messages_55;
#line 827 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_140_140;
#line 827 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_141_141;
#line 827 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_142_142;
#line 828 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv8_ProductionUseMap_46;
#line 832 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_143_143;
#line 832 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_144_144;
#line 832 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_145_145;
#line 833 "autopar_search_goals.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv10_ConsumptionUseMap_48;

#line 781 "autopar_search_goals.m"
        {
#line 781 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 781 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[0]));
#line 781 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_1));
#line 781 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 781 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 781 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 781 "autopar_search_goals.m"
        }
#line 781 "autopar_search_goals.m"
        {
#line 781 "autopar_search_goals.m"
          mercury__list__map_foldl2_7_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[8], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84, mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_18, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailConjs_19, ((MR_Box) ((MR_Integer) 1)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv6_V_20_20, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv5_STATE_VARIABLE_Messages_55);
        }
#line 781 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_20_20 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__conv6_V_20_20);
#line 781 "autopar_search_goals.m"
        *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv5_STATE_VARIABLE_Messages_55);
#line 783 "autopar_search_goals.m"
        {
#line 783 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__DetailConjs_19, mdprof_fb__automatic_parallelism__autopar_search_goals__Before_17, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21);
        }
#line 784 "autopar_search_goals.m"
        {
#line 784 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 784 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailConjs_19));
#line 784 "autopar_search_goals.m"
        }
#line 825 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 6640 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
        mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 827 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 827 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 827 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 827 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 827 "autopar_search_goals.m"
        {
#line 827 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_45 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181, mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87);
        }
#line 828 "autopar_search_goals.m"
        {
#line 828 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_2));
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 828 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, 7) = ((MR_Box) ((MR_Integer) 0));
#line 828 "autopar_search_goals.m"
        }
#line 6677 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
        mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_185 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
#line 828 "autopar_search_goals.m"
        {
#line 828 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_185);
        }
#line 6684 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
        mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_186 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
#line 828 "autopar_search_goals.m"
        {
#line 828 "autopar_search_goals.m"
          mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_186, mdprof_fb__automatic_parallelism__autopar_search_goals__V_88_88, mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_45, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_89_89)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv8_ProductionUseMap_46);
        }
#line 828 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv8_ProductionUseMap_46);
#line 832 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 832 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 832 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 832 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 832 "autopar_search_goals.m"
        {
#line 832 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_47 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181, mdprof_fb__automatic_parallelism__autopar_search_goals__V_91_91);
        }
#line 833 "autopar_search_goals.m"
        {
#line 833 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_3));
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 833 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, 7) = ((MR_Box) ((MR_Integer) 1));
#line 833 "autopar_search_goals.m"
        }
#line 833 "autopar_search_goals.m"
        {
#line 833 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_93_93 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_185);
        }
#line 833 "autopar_search_goals.m"
        {
#line 833 "autopar_search_goals.m"
          mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_181, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_186, mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_47, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_93_93)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv10_ConsumptionUseMap_48);
        }
#line 833 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv10_ConsumptionUseMap_48);
#line 824 "autopar_search_goals.m"
      }
#line 837 "autopar_search_goals.m"
    else
#line 837 "autopar_search_goals.m"
      if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12)) == (MR_mktag((MR_Integer) 1))))
#line 824 "autopar_search_goals.m"
        {
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_230;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_231;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 0)));
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailDisjs_24;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_213;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_214;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_215_215;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_217_217;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_219_219;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220;
#line 824 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_221_221;
#line 787 "autopar_search_goals.m"
          MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25;
#line 787 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv15_V_25_25;
#line 787 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv14_STATE_VARIABLE_Messages_55;
#line 827 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_201_201;
#line 827 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_202_202;
#line 827 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_203_203;
#line 828 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv17_ProductionUseMap_46;
#line 832 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_207_207;
#line 832 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_208_208;
#line 832 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_209_209;
#line 833 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv19_ConsumptionUseMap_48;

#line 787 "autopar_search_goals.m"
          {
#line 787 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 787 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[0]));
#line 787 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_4));
#line 787 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 787 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 787 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 787 "autopar_search_goals.m"
          }
#line 787 "autopar_search_goals.m"
          {
#line 787 "autopar_search_goals.m"
            mercury__list__map_foldl2_7_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[8], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81, mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs_23, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailDisjs_24, ((MR_Box) ((MR_Integer) 1)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv15_V_25_25, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv14_STATE_VARIABLE_Messages_55);
          }
#line 787 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_25_25 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__conv15_V_25_25);
#line 787 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv14_STATE_VARIABLE_Messages_55);
#line 789 "autopar_search_goals.m"
          {
#line 789 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__DetailDisjs_24, mdprof_fb__automatic_parallelism__autopar_search_goals__Before_17, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21);
          }
#line 790 "autopar_search_goals.m"
          {
#line 790 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 790 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailDisjs_24));
#line 790 "autopar_search_goals.m"
          }
#line 825 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 6839 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
          mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 827 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 827 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 827 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 827 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 827 "autopar_search_goals.m"
          {
#line 827 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_213 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229, mdprof_fb__automatic_parallelism__autopar_search_goals__V_215_215);
          }
#line 828 "autopar_search_goals.m"
          {
#line 828 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_5));
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 828 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, 7) = ((MR_Box) ((MR_Integer) 0));
#line 828 "autopar_search_goals.m"
          }
#line 6876 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
          mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_230 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
#line 828 "autopar_search_goals.m"
          {
#line 828 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_217_217 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_230);
          }
#line 6883 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
          mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_231 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
#line 828 "autopar_search_goals.m"
          {
#line 828 "autopar_search_goals.m"
            mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_231, mdprof_fb__automatic_parallelism__autopar_search_goals__V_216_216, mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_213, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_217_217)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv17_ProductionUseMap_46);
          }
#line 828 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv17_ProductionUseMap_46);
#line 832 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 832 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 832 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 832 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 832 "autopar_search_goals.m"
          {
#line 832 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_214 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229, mdprof_fb__automatic_parallelism__autopar_search_goals__V_219_219);
          }
#line 833 "autopar_search_goals.m"
          {
#line 833 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_6));
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 833 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, 7) = ((MR_Box) ((MR_Integer) 1));
#line 833 "autopar_search_goals.m"
          }
#line 833 "autopar_search_goals.m"
          {
#line 833 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_221_221 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_230);
          }
#line 833 "autopar_search_goals.m"
          {
#line 833 "autopar_search_goals.m"
            mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_229, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_231, mdprof_fb__automatic_parallelism__autopar_search_goals__V_220_220, mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_214, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_221_221)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv19_ConsumptionUseMap_48);
          }
#line 833 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv19_ConsumptionUseMap_48);
#line 824 "autopar_search_goals.m"
        }
#line 837 "autopar_search_goals.m"
      else
#line 837 "autopar_search_goals.m"
        if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12)) == (MR_mktag((MR_Integer) 2))))
#line 824 "autopar_search_goals.m"
          {
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_354;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_355;
#line 824 "autopar_search_goals.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 0)));
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 1)));
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 2)));
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCases_29;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_337;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_338;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_339_339;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_341_341;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_343_343;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344;
#line 824 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_345_345;
#line 793 "autopar_search_goals.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30;
#line 793 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv24_V_30_30;
#line 793 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv23_STATE_VARIABLE_Messages_55;
#line 827 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_325_325;
#line 827 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_326_326;
#line 827 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_327_327;
#line 828 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv26_ProductionUseMap_46;
#line 832 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_331_331;
#line 832 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_332_332;
#line 832 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_333_333;
#line 833 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv28_ConsumptionUseMap_48;

#line 793 "autopar_search_goals.m"
            {
#line 793 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[2]));
#line 793 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_7));
#line 793 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 793 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 793 "autopar_search_goals.m"
            }
#line 793 "autopar_search_goals.m"
            {
#line 793 "autopar_search_goals.m"
              mercury__list__map_foldl2_7_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[9], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[7], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78, mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_28, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCases_29, ((MR_Box) ((MR_Integer) 1)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv24_V_30_30, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv23_STATE_VARIABLE_Messages_55);
            }
#line 793 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_30_30 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__conv24_V_30_30);
#line 793 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv23_STATE_VARIABLE_Messages_55);
#line 795 "autopar_search_goals.m"
            {
#line 795 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCases_29, mdprof_fb__automatic_parallelism__autopar_search_goals__Before_17, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21);
            }
#line 796 "autopar_search_goals.m"
            {
#line 796 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 796 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Var_26));
#line 796 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__CanFail_27));
#line 796 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCases_29));
#line 796 "autopar_search_goals.m"
            }
#line 825 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 7046 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
            mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 827 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 827 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 827 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 827 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 827 "autopar_search_goals.m"
            {
#line 827 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_337 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353, mdprof_fb__automatic_parallelism__autopar_search_goals__V_339_339);
            }
#line 828 "autopar_search_goals.m"
            {
#line 828 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_8));
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 828 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, 7) = ((MR_Box) ((MR_Integer) 0));
#line 828 "autopar_search_goals.m"
            }
#line 7083 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
            mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_354 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
#line 828 "autopar_search_goals.m"
            {
#line 828 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_341_341 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_354);
            }
#line 7090 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
            mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_355 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
#line 828 "autopar_search_goals.m"
            {
#line 828 "autopar_search_goals.m"
              mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_355, mdprof_fb__automatic_parallelism__autopar_search_goals__V_340_340, mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_337, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_341_341)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv26_ProductionUseMap_46);
            }
#line 828 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv26_ProductionUseMap_46);
#line 832 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 832 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 832 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 832 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 832 "autopar_search_goals.m"
            {
#line 832 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_338 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353, mdprof_fb__automatic_parallelism__autopar_search_goals__V_343_343);
            }
#line 833 "autopar_search_goals.m"
            {
#line 833 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_9));
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 833 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, 7) = ((MR_Box) ((MR_Integer) 1));
#line 833 "autopar_search_goals.m"
            }
#line 833 "autopar_search_goals.m"
            {
#line 833 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_345_345 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_354);
            }
#line 833 "autopar_search_goals.m"
            {
#line 833 "autopar_search_goals.m"
              mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_353, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_355, mdprof_fb__automatic_parallelism__autopar_search_goals__V_344_344, mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_338, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_345_345)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv28_ConsumptionUseMap_48);
            }
#line 833 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv28_ConsumptionUseMap_48);
#line 824 "autopar_search_goals.m"
          }
#line 837 "autopar_search_goals.m"
        else
#line 837 "autopar_search_goals.m"
          if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 838 "autopar_search_goals.m"
            {
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_193_193;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_194_194;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_195_195;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_11;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 4)));
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_59_59;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_61_61;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_63_63;
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 3)));
#line 838 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_99;
#line 838 "autopar_search_goals.m"
              MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__Context_49 = ((MR_String) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 1)));
#line 838 "autopar_search_goals.m"
              MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Line_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 2)));
#line 844 "autopar_search_goals.m"
              MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv30_ProductionUseMap_46;
#line 848 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_146_146;
#line 848 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_147_147;
#line 848 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_148_148;
#line 849 "autopar_search_goals.m"
              MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv32_ConsumptionUseMap_48;

#line 839 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22 = (MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12;
#line 840 "autopar_search_goals.m"
              {
#line 840 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8, mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_51, mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, &mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44, &mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_11);
              }
#line 842 "autopar_search_goals.m"
              {
#line 842 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8, mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_16, mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_51, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21);
              }
#line 844 "autopar_search_goals.m"
              {
#line 844 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 844 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[0]));
#line 844 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_10));
#line 844 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 844 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_51));
#line 844 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 844 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 844 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, 6) = ((MR_Box) ((MR_Integer) 0));
#line 844 "autopar_search_goals.m"
              }
#line 7225 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
              mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7227 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
              mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_194_194 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
#line 844 "autopar_search_goals.m"
              {
#line 844 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_59_59 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_194_194);
              }
#line 7234 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
              mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_195_195 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
#line 844 "autopar_search_goals.m"
              {
#line 844 "autopar_search_goals.m"
                mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_195_195, mdprof_fb__automatic_parallelism__autopar_search_goals__V_58_58, mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_98, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_59_59)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv30_ProductionUseMap_46);
              }
#line 844 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv30_ProductionUseMap_46);
#line 848 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 848 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 848 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 848 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 848 "autopar_search_goals.m"
              {
#line 848 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_99 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_search_goals__V_61_61);
              }
#line 849 "autopar_search_goals.m"
              {
#line 849 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 849 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[0]));
#line 849 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_11));
#line 849 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 849 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__AtomicGoal_51));
#line 849 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 849 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 849 "autopar_search_goals.m"
                MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, 6) = ((MR_Box) ((MR_Integer) 1));
#line 849 "autopar_search_goals.m"
              }
#line 849 "autopar_search_goals.m"
              {
#line 849 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_63_63 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_194_194);
              }
#line 849 "autopar_search_goals.m"
              {
#line 849 "autopar_search_goals.m"
                mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_195_195, mdprof_fb__automatic_parallelism__autopar_search_goals__V_62_62, mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_99, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_63_63)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv32_ConsumptionUseMap_48);
              }
#line 849 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv32_ConsumptionUseMap_48);
#line 854 "autopar_search_goals.m"
              {
#line 854 "autopar_search_goals.m"
                *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_11);
              }
#line 838 "autopar_search_goals.m"
            }
#line 837 "autopar_search_goals.m"
          else
#line 837 "autopar_search_goals.m"
            if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 824 "autopar_search_goals.m"
              {
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_261;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_262;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cond_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 1)));
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Then_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 2)));
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Else_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 3)));
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CondRevGoalPath_34;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ThenRevGoalPath_35;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ElseRevGoalPath_36;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCond_37;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailThen_38;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailElse_39;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_75_75;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_76_76;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_244;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_245;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_246_246;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_248_248;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_250_250;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251;
#line 824 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_252_252;
#line 827 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_232_232;
#line 827 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_233_233;
#line 827 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_234_234;
#line 828 "autopar_search_goals.m"
                MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv34_ProductionUseMap_46;
#line 832 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_238_238;
#line 832 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_239_239;
#line 832 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_240_240;
#line 833 "autopar_search_goals.m"
                MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv36_ConsumptionUseMap_48;

#line 799 "autopar_search_goals.m"
                {
#line 799 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__CondRevGoalPath_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__CondRevGoalPath_34, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 799 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__CondRevGoalPath_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "autopar_search_goals.m"
                }
#line 800 "autopar_search_goals.m"
                {
#line 800 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ThenRevGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ThenRevGoalPath_35, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 800 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ThenRevGoalPath_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 800 "autopar_search_goals.m"
                }
#line 801 "autopar_search_goals.m"
                {
#line 801 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ElseRevGoalPath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ElseRevGoalPath_36, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 801 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__ElseRevGoalPath_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 801 "autopar_search_goals.m"
                }
#line 802 "autopar_search_goals.m"
                {
#line 802 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__CondRevGoalPath_34, mdprof_fb__automatic_parallelism__autopar_search_goals__Cond_31, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCond_37, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54, &mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_75_75);
                }
#line 804 "autopar_search_goals.m"
                {
#line 804 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__ThenRevGoalPath_35, mdprof_fb__automatic_parallelism__autopar_search_goals__Then_32, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailThen_38, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_75_75, &mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_76_76);
                }
#line 806 "autopar_search_goals.m"
                {
#line 806 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__ElseRevGoalPath_36, mdprof_fb__automatic_parallelism__autopar_search_goals__Else_33, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailElse_39, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_76_76, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55);
                }
#line 808 "autopar_search_goals.m"
                {
#line 808 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCond_37, mdprof_fb__automatic_parallelism__autopar_search_goals__DetailThen_38, mdprof_fb__automatic_parallelism__autopar_search_goals__DetailElse_39, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21);
                }
#line 809 "autopar_search_goals.m"
                {
#line 809 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 809 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 809 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailCond_37));
#line 809 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailThen_38));
#line 809 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailElse_39));
#line 809 "autopar_search_goals.m"
                }
#line 825 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 7428 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 827 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 827 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 827 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 827 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 827 "autopar_search_goals.m"
                {
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_244 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260, mdprof_fb__automatic_parallelism__autopar_search_goals__V_246_246);
                }
#line 828 "autopar_search_goals.m"
                {
#line 828 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_12));
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 828 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, 7) = ((MR_Box) ((MR_Integer) 0));
#line 828 "autopar_search_goals.m"
                }
#line 7465 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_261 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
#line 828 "autopar_search_goals.m"
                {
#line 828 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_248_248 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_261);
                }
#line 7472 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_262 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
#line 828 "autopar_search_goals.m"
                {
#line 828 "autopar_search_goals.m"
                  mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_262, mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247, mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_244, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_248_248)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv34_ProductionUseMap_46);
                }
#line 828 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv34_ProductionUseMap_46);
#line 832 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 832 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 832 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 832 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 832 "autopar_search_goals.m"
                {
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_245 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260, mdprof_fb__automatic_parallelism__autopar_search_goals__V_250_250);
                }
#line 833 "autopar_search_goals.m"
                {
#line 833 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_13));
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 833 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, 7) = ((MR_Box) ((MR_Integer) 1));
#line 833 "autopar_search_goals.m"
                }
#line 833 "autopar_search_goals.m"
                {
#line 833 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_252_252 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_261);
                }
#line 833 "autopar_search_goals.m"
                {
#line 833 "autopar_search_goals.m"
                  mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_260, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_262, mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251, mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_245, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_252_252)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv36_ConsumptionUseMap_48);
                }
#line 833 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv36_ConsumptionUseMap_48);
#line 824 "autopar_search_goals.m"
              }
#line 837 "autopar_search_goals.m"
            else
#line 837 "autopar_search_goals.m"
              if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 824 "autopar_search_goals.m"
                {
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_292;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_293;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 1)));
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_41;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_42;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_275;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_276;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_277_277;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_279_279;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_281_281;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_283_283;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_122_122;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_123_123;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_124_124;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_125_125;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_126_126;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_127_127;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_128_128;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_129_129;
#line 815 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_130_130;
#line 827 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_263_263;
#line 827 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_264_264;
#line 827 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_265_265;
#line 828 "autopar_search_goals.m"
                  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv38_ProductionUseMap_46;
#line 832 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_269_269;
#line 832 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_270_270;
#line 832 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_271_271;
#line 833 "autopar_search_goals.m"
                  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv40_ConsumptionUseMap_48;

#line 812 "autopar_search_goals.m"
                  {
#line 812 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_41, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 812 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 812 "autopar_search_goals.m"
                  }
#line 813 "autopar_search_goals.m"
                  {
#line 813 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_41, mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_40, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_42, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55);
                  }
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_42, (MR_Integer) 0)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_42, (MR_Integer) 1)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_42, (MR_Integer) 2)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 0)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 1)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 2)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 3)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 4)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 5)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 6)));
#line 815 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_71_71, (MR_Integer) 7)));
#line 816 "autopar_search_goals.m"
                  {
#line 816 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 816 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_42));
#line 816 "autopar_search_goals.m"
                  }
#line 825 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 7650 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 827 "autopar_search_goals.m"
                  {
#line 827 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_275 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291, mdprof_fb__automatic_parallelism__autopar_search_goals__V_277_277);
                  }
#line 828 "autopar_search_goals.m"
                  {
#line 828 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_14));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, 7) = ((MR_Box) ((MR_Integer) 0));
#line 828 "autopar_search_goals.m"
                  }
#line 7687 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_292 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
#line 828 "autopar_search_goals.m"
                  {
#line 828 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_279_279 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_292);
                  }
#line 7694 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_293 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
#line 828 "autopar_search_goals.m"
                  {
#line 828 "autopar_search_goals.m"
                    mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_293, mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278, mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_275, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_279_279)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv38_ProductionUseMap_46);
                  }
#line 828 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv38_ProductionUseMap_46);
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 832 "autopar_search_goals.m"
                  {
#line 832 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_276 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291, mdprof_fb__automatic_parallelism__autopar_search_goals__V_281_281);
                  }
#line 833 "autopar_search_goals.m"
                  {
#line 833 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_15));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, 7) = ((MR_Box) ((MR_Integer) 1));
#line 833 "autopar_search_goals.m"
                  }
#line 833 "autopar_search_goals.m"
                  {
#line 833 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_283_283 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_292);
                  }
#line 833 "autopar_search_goals.m"
                  {
#line 833 "autopar_search_goals.m"
                    mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_291, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_293, mdprof_fb__automatic_parallelism__autopar_search_goals__V_282_282, mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_276, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_283_283)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv40_ConsumptionUseMap_48);
                  }
#line 833 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv40_ConsumptionUseMap_48);
#line 824 "autopar_search_goals.m"
                }
#line 837 "autopar_search_goals.m"
              else
#line 824 "autopar_search_goals.m"
                {
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_323;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_324;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCut_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 2)));
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_12, (MR_Integer) 1)));
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_96;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_97;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_306;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_307;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_308_308;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_310_310;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_312_312;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313;
#line 824 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_314_314;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_131_131;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_132_132;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_133_133;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_134_134;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_135_135;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_136_136;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_137_137;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_138_138;
#line 822 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_139_139;
#line 827 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_294_294;
#line 827 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_295_295;
#line 827 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_296_296;
#line 828 "autopar_search_goals.m"
                  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv42_ProductionUseMap_46;
#line 832 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_300_300;
#line 832 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_301_301;
#line 832 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_302_302;
#line 833 "autopar_search_goals.m"
                  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv44_ConsumptionUseMap_48;

#line 819 "autopar_search_goals.m"
                  {
#line 819 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 819 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCut_43));
#line 819 "autopar_search_goals.m"
                  }
#line 819 "autopar_search_goals.m"
                  {
#line 819 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_96, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 819 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_96, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_66_66));
#line 819 "autopar_search_goals.m"
                  }
#line 820 "autopar_search_goals.m"
                  {
#line 820 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__SubRevGoalPath_96, mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_95, &mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_97, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_0_54, mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Messages_55);
                  }
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_97, (MR_Integer) 0)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_97, (MR_Integer) 1)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_97, (MR_Integer) 2)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 0)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 1)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 2)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 3)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 4)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 5)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 6)));
#line 822 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_68_68, (MR_Integer) 7)));
#line 823 "autopar_search_goals.m"
                  {
#line 823 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 823 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 823 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailSubGoal_97));
#line 823 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCut_43));
#line 823 "autopar_search_goals.m"
                  }
#line 825 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 7886 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 827 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 827 "autopar_search_goals.m"
                  {
#line 827 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_306 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322, mdprof_fb__automatic_parallelism__autopar_search_goals__V_308_308);
                  }
#line 828 "autopar_search_goals.m"
                  {
#line 828 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_16));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 828 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, 7) = ((MR_Box) ((MR_Integer) 0));
#line 828 "autopar_search_goals.m"
                  }
#line 7923 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_323 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
#line 828 "autopar_search_goals.m"
                  {
#line 828 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_310_310 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_323);
                  }
#line 7930 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_324 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
#line 828 "autopar_search_goals.m"
                  {
#line 828 "autopar_search_goals.m"
                    mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_324, mdprof_fb__automatic_parallelism__autopar_search_goals__V_309_309, mdprof_fb__automatic_parallelism__autopar_search_goals__BoundVars_306, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_310_310)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv42_ProductionUseMap_46);
                  }
#line 828 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv42_ProductionUseMap_46);
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 0)));
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 1)));
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 2)));
#line 832 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15, (MR_Integer) 3)));
#line 832 "autopar_search_goals.m"
                  {
#line 832 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_307 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322, mdprof_fb__automatic_parallelism__autopar_search_goals__V_312_312);
                  }
#line 833 "autopar_search_goals.m"
                  {
#line 833 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_17));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7));
#line 833 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, 7) = ((MR_Box) ((MR_Integer) 1));
#line 833 "autopar_search_goals.m"
                  }
#line 833 "autopar_search_goals.m"
                  {
#line 833 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_314_314 = mercury__map__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_185_323);
                  }
#line 833 "autopar_search_goals.m"
                  {
#line 833 "autopar_search_goals.m"
                    mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_181_322, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_186_324, mdprof_fb__automatic_parallelism__autopar_search_goals__V_313_313, mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumedVars_307, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_314_314)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv44_ConsumptionUseMap_48);
                  }
#line 833 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv44_ConsumptionUseMap_48);
#line 824 "autopar_search_goals.m"
                }
#line 859 "autopar_search_goals.m"
    {
#line 859 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, mdprof_fb__automatic_parallelism__autopar_search_goals__Goal_9);
    }
#line 859 "autopar_search_goals.m"
    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 860 "autopar_search_goals.m"
      {
#line 860 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded = mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_7, mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21);
      }
#line 863 "autopar_search_goals.m"
    if (mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded)
#line 862 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__CostAboveThreshold_52 = (MR_Integer) 0;
#line 863 "autopar_search_goals.m"
    else
#line 864 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__CostAboveThreshold_52 = (MR_Integer) 1;
#line 866 "autopar_search_goals.m"
    {
#line 866 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalType_44));
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__InstMapInfo_15));
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_8));
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_16));
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_21));
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__CostAboveThreshold_52));
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__ProductionUseMap_46));
#line 866 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__ConsumptionUseMap_48));
#line 866 "autopar_search_goals.m"
    }
#line 869 "autopar_search_goals.m"
    {
#line 869 "autopar_search_goals.m"
      MR_Word base;
#line 869 "autopar_search_goals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 869 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoal_10 = base;
#line 869 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetailGoalExpr_22));
#line 869 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Detism_13));
#line 869 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__PardGoalAnnotation_53));
#line 869 "autopar_search_goals.m"
    }
#line 773 "autopar_search_goals.m"
  }
#line 41 "autopar_search_goals.m"
}

#line 174 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_2(
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_7,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_8,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_9,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_10,
#line 174 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_11,
#line 174 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_12)
#line 174 "autopar_search_goals.m"
{
#line 174 "autopar_search_goals.m"
  {
#line 174 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 174 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv16_STATE_VARIABLE_Case_29;
#line 174 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__conv15_STATE_VARIABLE_CaseNum_31;
#line 174 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv14_STATE_VARIABLE_Candidates_33;
#line 174 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv13_STATE_VARIABLE_Pushes_35;
#line 174 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv12_STATE_VARIABLE_Singles_37;
#line 174 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv11_STATE_VARIABLE_Messages_39;

#line 174 "autopar_search_goals.m"
    {
#line 174 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv16_STATE_VARIABLE_Case_29, ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv15_STATE_VARIABLE_CaseNum_31, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv14_STATE_VARIABLE_Candidates_33, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_7), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv13_STATE_VARIABLE_Pushes_35, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_9), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv12_STATE_VARIABLE_Singles_37, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_11), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv11_STATE_VARIABLE_Messages_39);
    }
#line 174 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv16_STATE_VARIABLE_Case_29));
#line 174 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv15_STATE_VARIABLE_CaseNum_31));
#line 174 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv14_STATE_VARIABLE_Candidates_33));
#line 174 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_8 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv13_STATE_VARIABLE_Pushes_35));
#line 174 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_10 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv12_STATE_VARIABLE_Singles_37));
#line 174 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_12 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv11_STATE_VARIABLE_Messages_39));
#line 174 "autopar_search_goals.m"
  }
#line 174 "autopar_search_goals.m"
}

#line 165 "autopar_search_goals.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_1(
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_7,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_8,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_9,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_10,
#line 165 "autopar_search_goals.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_11,
#line 165 "autopar_search_goals.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_12)
#line 165 "autopar_search_goals.m"
{
#line 165 "autopar_search_goals.m"
  {
#line 165 "autopar_search_goals.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__closure = mdprof_fb__automatic_parallelism__autopar_search_goals__closure_arg;
#line 165 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv5_STATE_VARIABLE_Disj_25;
#line 165 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_STATE_VARIABLE_DisjNum_27;
#line 165 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_STATE_VARIABLE_Candidates_29;
#line 165 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Pushes_31;
#line 165 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_Singles_33;
#line 165 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_STATE_VARIABLE_Messages_35;

#line 165 "autopar_search_goals.m"
    {
#line 165 "autopar_search_goals.m"
      mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__closure, (MR_Integer) 4))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv5_STATE_VARIABLE_Disj_25, ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_3), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_STATE_VARIABLE_DisjNum_27, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_5), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_STATE_VARIABLE_Candidates_29, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_7), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Pushes_31, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_9), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_Singles_33, ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_11), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_STATE_VARIABLE_Messages_35);
    }
#line 165 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv5_STATE_VARIABLE_Disj_25));
#line 165 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_4 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv4_STATE_VARIABLE_DisjNum_27));
#line 165 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_6 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv3_STATE_VARIABLE_Candidates_29));
#line 165 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_8 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv2_STATE_VARIABLE_Pushes_31));
#line 165 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_10 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv1_STATE_VARIABLE_Singles_33));
#line 165 "autopar_search_goals.m"
    *mdprof_fb__automatic_parallelism__autopar_search_goals__wrapper_arg_12 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conv0_STATE_VARIABLE_Messages_35));
#line 165 "autopar_search_goals.m"
  }
#line 165 "autopar_search_goals.m"
}

#line 32 "autopar_search_goals.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(
#line 32 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9,
#line 32 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10,
#line 32 "autopar_search_goals.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_70,
#line 32 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_71,
#line 32 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12,
#line 32 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13,
#line 32 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14,
#line 32 "autopar_search_goals.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15)
#line 32 "autopar_search_goals.m"
{
#line 82 "autopar_search_goals.m"
  {
#line 82 "autopar_search_goals.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_search_goals__succeeded;
#line 82 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));
#line 82 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__DetismRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
#line 82 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_70, (MR_Integer) 2)));
#line 82 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 82 "autopar_search_goals.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_20;
#line 82 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28;
#line 82 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64;
#line 84 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 84 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 84 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 84 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 84 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 84 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 84 "autopar_search_goals.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));

#line 85 "autopar_search_goals.m"
    {
#line 85 "autopar_search_goals.m"
      coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Coverage_19, &mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_20);
    }
#line 210 "autopar_search_goals.m"
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16)) == (MR_mktag((MR_Integer) 0))))
#line 208 "autopar_search_goals.m"
      {
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_184_184 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1];
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_185_185;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_186_186;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 0)));
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_22;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar_23;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevSingleCands_24;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesBelow_25;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__PushesBelow_26;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesBelow_27;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCands_29;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_30;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_91_91;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92;
#line 208 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_93_93;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_176_176;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_177_177;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_178_178;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_179_179;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_181_181;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_182_182;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_183_183;
#line 209 "autopar_search_goals.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_180_180;

#line 89 "autopar_search_goals.m"
        {
#line 89 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_91_91 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_184_184);
        }
#line 8306 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
        mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_185_185 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
#line 89 "autopar_search_goals.m"
        {
#line 89 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_185_185);
        }
#line 8313 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
        mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_186_186 = (MR_Word) &message__message__type_ctor_info_message_0;
#line 89 "autopar_search_goals.m"
        {
#line 89 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_93_93 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_186_186);
        }
#line 89 "autopar_search_goals.m"
        {
#line 89 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10, mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs0_21, &mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_22, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_fb__automatic_parallelism__autopar_search_goals__RevSingleCands_24, mdprof_fb__automatic_parallelism__autopar_search_goals__V_91_91, &mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesBelow_25, mdprof_fb__automatic_parallelism__autopar_search_goals__V_92_92, &mdprof_fb__automatic_parallelism__autopar_search_goals__PushesBelow_26, mdprof_fb__automatic_parallelism__autopar_search_goals__V_93_93, &mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesBelow_27);
        }
#line 93 "autopar_search_goals.m"
        {
#line 93 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_22));
#line 93 "autopar_search_goals.m"
        }
#line 94 "autopar_search_goals.m"
        {
#line 94 "autopar_search_goals.m"
          mercury__list__reverse_2_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[0], mdprof_fb__automatic_parallelism__autopar_search_goals__RevSingleCands_24, &mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCands_29);
        }
#line 102 "autopar_search_goals.m"
        if ((mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCands_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "autopar_search_goals.m"
          {
#line 101 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_112_112;
#line 101 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_113_113;
#line 101 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_114_114;
#line 101 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_115_115;
#line 101 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_116_116;
#line 101 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_117_117;
#line 101 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_118_118;

#line 97 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesBelow_25;
#line 98 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13 = mdprof_fb__automatic_parallelism__autopar_search_goals__PushesBelow_26;
#line 99 "autopar_search_goals.m"
            {
#line 99 "autopar_search_goals.m"
              *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__from_list_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar_23);
            }
#line 100 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15 = mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesBelow_27;
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 101 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 96 "autopar_search_goals.m"
          }
#line 102 "autopar_search_goals.m"
        else
#line 102 "autopar_search_goals.m"
          {
#line 102 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCands_29, (MR_Integer) 1)));
#line 102 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCands_29, (MR_Integer) 0)));

#line 102 "autopar_search_goals.m"
            if ((mdprof_fb__automatic_parallelism__autopar_search_goals__V_374_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 103 "autopar_search_goals.m"
              {
#line 103 "autopar_search_goals.m"
                MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndex_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_375_375, (MR_Integer) 0)));
#line 103 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesBefore_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_375_375, (MR_Integer) 1)));
#line 103 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesThisLevel_33;
#line 103 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesThisLevel_34;
#line 127 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_119_119;
#line 127 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_120_120;
#line 127 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_121_121;
#line 127 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_122_122;
#line 127 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_123_123;
#line 127 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_124_124;
#line 127 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_125_125;

#line 104 "autopar_search_goals.m"
                {
#line 104 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10, mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_22, mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndex_31, mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesBefore_32, &mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesThisLevel_33, &mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesThisLevel_34);
                }
#line 113 "autopar_search_goals.m"
                if ((mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesThisLevel_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "autopar_search_goals.m"
                  {
#line 109 "autopar_search_goals.m"
                    *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesBelow_25;
#line 110 "autopar_search_goals.m"
                    *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13 = mdprof_fb__automatic_parallelism__autopar_search_goals__PushesBelow_26;
#line 112 "autopar_search_goals.m"
                    {
#line 112 "autopar_search_goals.m"
                      *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__from_list_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar_23);
                    }
#line 108 "autopar_search_goals.m"
                  }
#line 113 "autopar_search_goals.m"
                else
#line 114 "autopar_search_goals.m"
                  {
#line 114 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__FirstCandidate_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesThisLevel_34, (MR_Integer) 0)));
#line 114 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__LaterCandidates_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesThisLevel_34, (MR_Integer) 1)));
#line 114 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__PushThisLevel_37;
#line 114 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_99_99;

#line 115 "autopar_search_goals.m"
                    {
#line 115 "autopar_search_goals.m"
                      mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__FirstCandidate_35, mdprof_fb__automatic_parallelism__autopar_search_goals__LaterCandidates_36, &mdprof_fb__automatic_parallelism__autopar_search_goals__PushThisLevel_37);
                    }
#line 117 "autopar_search_goals.m"
                    {
#line 117 "autopar_search_goals.m"
                      mdprof_fb__automatic_parallelism__autopar_search_goals__V_99_99 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_184_184, mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesThisLevel_34);
                    }
#line 117 "autopar_search_goals.m"
                    {
#line 117 "autopar_search_goals.m"
                      *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_184_184, mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesBelow_25, mdprof_fb__automatic_parallelism__autopar_search_goals__V_99_99);
                    }
#line 119 "autopar_search_goals.m"
                    {
#line 119 "autopar_search_goals.m"
                      *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13 = mercury__cord__snoc_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_185_185, mdprof_fb__automatic_parallelism__autopar_search_goals__PushesBelow_26, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__PushThisLevel_37)));
                    }
#line 123 "autopar_search_goals.m"
                    {
#line 123 "autopar_search_goals.m"
                      *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
                    }
#line 114 "autopar_search_goals.m"
                  }
#line 125 "autopar_search_goals.m"
                {
#line 125 "autopar_search_goals.m"
                  *mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_186_186, mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesBelow_27, mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesThisLevel_33);
                }
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 127 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 103 "autopar_search_goals.m"
              }
#line 102 "autopar_search_goals.m"
            else
#line 129 "autopar_search_goals.m"
              {
#line 129 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndexes_41;
#line 129 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_42;
#line 129 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesThisLevel_101;

#line 130 "autopar_search_goals.m"
                {
#line 130 "autopar_search_goals.m"
                  mercury__assoc_list__keys_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[2], mdprof_fb__automatic_parallelism__autopar_search_goals__SingleCands_29, &mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndexes_41);
                }
#line 131 "autopar_search_goals.m"
                {
#line 131 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10, mdprof_fb__automatic_parallelism__autopar_search_goals__Conjs_22, mdprof_fb__automatic_parallelism__autopar_search_goals__CostlyIndexes_41, &mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesThisLevel_101, &mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_42);
                }
#line 133 "autopar_search_goals.m"
                *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13 = mdprof_fb__automatic_parallelism__autopar_search_goals__PushesBelow_26;
#line 134 "autopar_search_goals.m"
                {
#line 134 "autopar_search_goals.m"
                  *mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeCtorInfo_186_186, mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesBelow_27, mdprof_fb__automatic_parallelism__autopar_search_goals__MessagesThisLevel_101);
                }
#line 156 "autopar_search_goals.m"
                if ((mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "autopar_search_goals.m"
                  {
#line 160 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_151_151;
#line 160 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_152_152;
#line 160 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_153_153;
#line 160 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_154_154;
#line 160 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_155_155;
#line 160 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_156_156;
#line 160 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_157_157;

#line 158 "autopar_search_goals.m"
                    *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesBelow_25;
#line 159 "autopar_search_goals.m"
                    {
#line 159 "autopar_search_goals.m"
                      *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__from_list_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_search_goals__SinglesSoFar_23);
                    }
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 160 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 157 "autopar_search_goals.m"
                  }
#line 156 "autopar_search_goals.m"
                else
#line 136 "autopar_search_goals.m"
                  {
#line 136 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCandidate_42, (MR_Integer) 0)));
#line 136 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44;
#line 136 "autopar_search_goals.m"
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_95_95;
#line 136 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_136_136;
#line 138 "autopar_search_goals.m"
                    MR_String mdprof_fb__automatic_parallelism__autopar_search_goals__V_126_126;
#line 138 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_127_127;
#line 138 "autopar_search_goals.m"
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_128_128;
#line 138 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_129_129;
#line 138 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_130_130;
#line 138 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_131_131;
#line 138 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_132_132;
#line 138 "autopar_search_goals.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_133_133;
#line 138 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_134_134;
#line 139 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_135_135;
#line 139 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_137_137;
#line 139 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_138_138;
#line 139 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_139_139;
#line 139 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_140_140;
#line 139 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_141_141;
#line 139 "autopar_search_goals.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_search_goals__V_142_142;

#line 137 "autopar_search_goals.m"
                    {
#line 137 "autopar_search_goals.m"
                      *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = mercury__cord__cons_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_184_184, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43)), mdprof_fb__automatic_parallelism__autopar_search_goals__CandidatesBelow_25);
                    }
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_126_126 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 0)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 1)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 2)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 3)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 4)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_131_131 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 5)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 6)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 7)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_134_134 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 8)));
#line 138 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Candidate_43, (MR_Integer) 9)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 0)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_135_135 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 1)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_136_136 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 2)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_137_137 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 3)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_138_138 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 4)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_139_139 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 5)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_140_140 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 6)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_141_141 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 7)));
#line 139 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_142_142 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__ExecMetrics_44, (MR_Integer) 8)));
#line 139 "autopar_search_goals.m"
                    {
#line 139 "autopar_search_goals.m"
                      mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_30 = measurements__call_goal_cost_2_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__V_95_95, mdprof_fb__automatic_parallelism__autopar_search_goals__V_136_136);
                    }
#line 155 "autopar_search_goals.m"
                    {
#line 155 "autopar_search_goals.m"
                      *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
                    }
#line 136 "autopar_search_goals.m"
                  }
#line 129 "autopar_search_goals.m"
              }
#line 102 "autopar_search_goals.m"
          }
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 209 "autopar_search_goals.m"
        mdprof_fb__automatic_parallelism__autopar_search_goals__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 209 "autopar_search_goals.m"
        {
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_176_176));
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_177_177));
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_178_178));
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_179_179));
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_30));
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_181_181));
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_182_182));
#line 209 "autopar_search_goals.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_183_183));
#line 209 "autopar_search_goals.m"
        }
#line 208 "autopar_search_goals.m"
      }
#line 210 "autopar_search_goals.m"
    else
#line 210 "autopar_search_goals.m"
      if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16)) == (MR_mktag((MR_Integer) 1))))
#line 208 "autopar_search_goals.m"
        {
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_209_209;
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 0)));
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs_46;
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82;
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84;
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85;
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86;
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87;
#line 208 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_261;
#line 165 "autopar_search_goals.m"
          MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47;
#line 165 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv10_V_47_47;
#line 165 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv9_Candidates_12;
#line 165 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv8_Pushes_13;
#line 165 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv7_Singles_14;
#line 165 "autopar_search_goals.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv6_Messages_15;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_245_245;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_246_246;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_248_248;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_250_250;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_252_252;
#line 209 "autopar_search_goals.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_244_244;

#line 165 "autopar_search_goals.m"
          {
#line 165 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 165 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[0]));
#line 165 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_1));
#line 165 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 165 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9));
#line 165 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 165 "autopar_search_goals.m"
          }
#line 165 "autopar_search_goals.m"
          {
#line 165 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1]);
          }
#line 165 "autopar_search_goals.m"
          {
#line 165 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85 = mercury__cord__empty_0_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
          }
#line 8800 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
          mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_209_209 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
#line 165 "autopar_search_goals.m"
          {
#line 165 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_209_209);
          }
#line 165 "autopar_search_goals.m"
          {
#line 165 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
          }
#line 165 "autopar_search_goals.m"
          {
#line 165 "autopar_search_goals.m"
            mercury__list__map_foldl5_13_p_1(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_209_209, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_209_209, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[3], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[4], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[5], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], mdprof_fb__automatic_parallelism__autopar_search_goals__V_82_82, mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs0_45, &mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs_46, ((MR_Box) ((MR_Integer) 1)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv10_V_47_47, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_84_84)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv9_Candidates_12, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_85_85)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv8_Pushes_13, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_86_86)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv7_Singles_14, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_87_87)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv6_Messages_15);
          }
#line 165 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_47_47 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__conv10_V_47_47);
#line 165 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv9_Candidates_12);
#line 165 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv8_Pushes_13);
#line 165 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv7_Singles_14);
#line 165 "autopar_search_goals.m"
          *mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv6_Messages_15);
#line 170 "autopar_search_goals.m"
          {
#line 170 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs_46, mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_20, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_261);
          }
#line 171 "autopar_search_goals.m"
          {
#line 171 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 171 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Disjs_46));
#line 171 "autopar_search_goals.m"
          }
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 209 "autopar_search_goals.m"
          mdprof_fb__automatic_parallelism__autopar_search_goals__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 209 "autopar_search_goals.m"
          {
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_245_245));
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_246_246));
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_247_247));
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_248_248));
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_261));
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_250_250));
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_251_251));
#line 209 "autopar_search_goals.m"
            MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_252_252));
#line 209 "autopar_search_goals.m"
          }
#line 208 "autopar_search_goals.m"
        }
#line 210 "autopar_search_goals.m"
      else
#line 210 "autopar_search_goals.m"
        if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16)) == (MR_mktag((MR_Integer) 2))))
#line 208 "autopar_search_goals.m"
          {
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_232_232;
#line 208 "autopar_search_goals.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 0)));
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 1)));
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 2)));
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_51;
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76;
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78;
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79;
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80;
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81;
#line 208 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_365;
#line 174 "autopar_search_goals.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_search_goals__V_52_52;
#line 174 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv21_V_52_52;
#line 174 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv20_Candidates_12;
#line 174 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv19_Pushes_13;
#line 174 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv18_Singles_14;
#line 174 "autopar_search_goals.m"
            MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals__conv17_Messages_15;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_349_349;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_350_350;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_351_351;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_352_352;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_354_354;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_355_355;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_356_356;
#line 209 "autopar_search_goals.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_348_348;

#line 174 "autopar_search_goals.m"
            {
#line 174 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 174 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[1]));
#line 174 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_2));
#line 174 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 174 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9));
#line 174 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 174 "autopar_search_goals.m"
            }
#line 174 "autopar_search_goals.m"
            {
#line 174 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1]);
            }
#line 174 "autopar_search_goals.m"
            {
#line 174 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79 = mercury__cord__empty_0_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
            }
#line 174 "autopar_search_goals.m"
            {
#line 174 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
            }
#line 174 "autopar_search_goals.m"
            {
#line 174 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
            }
#line 8973 "mdprof_fb.automatic_parallelism.autopar_search_goals.c"
            mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_232_232 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[7];
#line 174 "autopar_search_goals.m"
            {
#line 174 "autopar_search_goals.m"
              mercury__list__map_foldl5_13_p_1(mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_232_232, mdprof_fb__automatic_parallelism__autopar_search_goals__TypeInfo_232_232, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[3], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[4], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[5], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], mdprof_fb__automatic_parallelism__autopar_search_goals__V_76_76, mdprof_fb__automatic_parallelism__autopar_search_goals__Cases0_50, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_51, ((MR_Box) ((MR_Integer) 1)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv21_V_52_52, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_78_78)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv20_Candidates_12, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_79_79)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv19_Pushes_13, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_80_80)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv18_Singles_14, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_81_81)), &mdprof_fb__automatic_parallelism__autopar_search_goals__conv17_Messages_15);
            }
#line 174 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_52_52 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_search_goals__conv21_V_52_52);
#line 174 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv20_Candidates_12);
#line 174 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv19_Pushes_13);
#line 174 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv18_Singles_14);
#line 174 "autopar_search_goals.m"
            *mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__conv17_Messages_15);
#line 180 "autopar_search_goals.m"
            {
#line 180 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_51, mdprof_fb__automatic_parallelism__autopar_search_goals__Calls_20, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_365);
            }
#line 181 "autopar_search_goals.m"
            {
#line 181 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 181 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Var_48));
#line 181 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__CanFail_49));
#line 181 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cases_51));
#line 181 "autopar_search_goals.m"
            }
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 209 "autopar_search_goals.m"
            mdprof_fb__automatic_parallelism__autopar_search_goals__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 209 "autopar_search_goals.m"
            {
#line 209 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_349_349));
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_350_350));
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_351_351));
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_352_352));
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_365));
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_354_354));
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_355_355));
#line 209 "autopar_search_goals.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_356_356));
#line 209 "autopar_search_goals.m"
            }
#line 208 "autopar_search_goals.m"
          }
#line 210 "autopar_search_goals.m"
        else
#line 210 "autopar_search_goals.m"
          if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 211 "autopar_search_goals.m"
            {
#line 211 "autopar_search_goals.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Costly_69;

#line 212 "autopar_search_goals.m"
              {
#line 212 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, &mdprof_fb__automatic_parallelism__autopar_search_goals__Costly_69);
              }
#line 216 "autopar_search_goals.m"
              if ((mdprof_fb__automatic_parallelism__autopar_search_goals__Costly_69 == (MR_Integer) 1))
#line 214 "autopar_search_goals.m"
                {
#line 215 "autopar_search_goals.m"
                  {
#line 215 "autopar_search_goals.m"
                    *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__singleton_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_0_70)));
                  }
#line 214 "autopar_search_goals.m"
                }
#line 216 "autopar_search_goals.m"
              else
#line 217 "autopar_search_goals.m"
                {
#line 218 "autopar_search_goals.m"
                  {
#line 218 "autopar_search_goals.m"
                    *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
                  }
#line 217 "autopar_search_goals.m"
                }
#line 220 "autopar_search_goals.m"
              {
#line 220 "autopar_search_goals.m"
                *mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1]);
              }
#line 221 "autopar_search_goals.m"
              {
#line 221 "autopar_search_goals.m"
                *mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13 = mercury__cord__empty_0_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
              }
#line 222 "autopar_search_goals.m"
              {
#line 222 "autopar_search_goals.m"
                *mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
              }
#line 223 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28 = mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16;
#line 224 "autopar_search_goals.m"
              mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64 = mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18;
#line 211 "autopar_search_goals.m"
            }
#line 210 "autopar_search_goals.m"
          else
#line 210 "autopar_search_goals.m"
            if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 208 "autopar_search_goals.m"
              {
#line 208 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 1)));
#line 208 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 2)));
#line 208 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 3)));
#line 208 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cond_56;
#line 208 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Then_57;
#line 208 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Else_58;
#line 208 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_287;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_271_271;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_272_272;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_273_273;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_274_274;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_276_276;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_277_277;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278;
#line 209 "autopar_search_goals.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_270_270;

#line 184 "autopar_search_goals.m"
                {
#line 184 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10, mdprof_fb__automatic_parallelism__autopar_search_goals__Cond0_53, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cond_56, mdprof_fb__automatic_parallelism__autopar_search_goals__Then0_54, &mdprof_fb__automatic_parallelism__autopar_search_goals__Then_57, mdprof_fb__automatic_parallelism__autopar_search_goals__Else0_55, &mdprof_fb__automatic_parallelism__autopar_search_goals__Else_58, mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12, mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13, mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15);
                }
#line 187 "autopar_search_goals.m"
                {
#line 187 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Cond_56, mdprof_fb__automatic_parallelism__autopar_search_goals__Then_57, mdprof_fb__automatic_parallelism__autopar_search_goals__Else_58, &mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_287);
                }
#line 188 "autopar_search_goals.m"
                {
#line 188 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 188 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 188 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cond_56));
#line 188 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Then_57));
#line 188 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Else_58));
#line 188 "autopar_search_goals.m"
                }
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 209 "autopar_search_goals.m"
                mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 209 "autopar_search_goals.m"
                {
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_271_271));
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_272_272));
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_273_273));
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_274_274));
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_287));
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_276_276));
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_277_277));
#line 209 "autopar_search_goals.m"
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_278_278));
#line 209 "autopar_search_goals.m"
                }
#line 208 "autopar_search_goals.m"
              }
#line 210 "autopar_search_goals.m"
            else
#line 210 "autopar_search_goals.m"
              if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 208 "autopar_search_goals.m"
                {
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73;
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 1)));
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_103;
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_104;
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_313;
#line 202 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals___Singles_63;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_167_167;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_169_169;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_171_171;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_172_172;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_173_173;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_174_174;
#line 206 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_175_175;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_297_297;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_298_298;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_299_299;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_300_300;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_302_302;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_303_303;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_304_304;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_296_296;

#line 199 "autopar_search_goals.m"
                  {
#line 199 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_103, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 199 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 199 "autopar_search_goals.m"
                  }
#line 202 "autopar_search_goals.m"
                  {
#line 202 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_103, mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal0_102, &mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_104, mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12, mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13, &mdprof_fb__automatic_parallelism__autopar_search_goals___Singles_63, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15);
                  }
#line 205 "autopar_search_goals.m"
                  {
#line 205 "autopar_search_goals.m"
                    *mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
                  }
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_104, (MR_Integer) 0)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_104, (MR_Integer) 1)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_104, (MR_Integer) 2)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 0)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 1)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 2)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 3)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 4)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 5)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 6)));
#line 206 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_73_73, (MR_Integer) 7)));
#line 207 "autopar_search_goals.m"
                  {
#line 207 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 207 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_104));
#line 207 "autopar_search_goals.m"
                  }
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 209 "autopar_search_goals.m"
                  {
#line 209 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_297_297));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_298_298));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_299_299));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_300_300));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_313));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_302_302));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_303_303));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_304_304));
#line 209 "autopar_search_goals.m"
                  }
#line 208 "autopar_search_goals.m"
                }
#line 210 "autopar_search_goals.m"
              else
#line 208 "autopar_search_goals.m"
                {
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 1)));
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCut_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr0_16, (MR_Integer) 2)));
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_61;
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_62;
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74;
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75;
#line 208 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_339;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_158_158;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_159_159;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_160_160;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_161_161;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_162_162;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_163_163;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_164_164;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_165_165;
#line 195 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_166_166;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_323_323;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_324_324;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_325_325;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_326_326;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_328_328;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_329_329;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_330_330;
#line 209 "autopar_search_goals.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_search_goals__V_322_322;

#line 191 "autopar_search_goals.m"
                  {
#line 191 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 191 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCut_60));
#line 191 "autopar_search_goals.m"
                  }
#line 191 "autopar_search_goals.m"
                  {
#line 191 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_61, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__RevGoalPath_10));
#line 191 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_61, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_74_74));
#line 191 "autopar_search_goals.m"
                  }
#line 192 "autopar_search_goals.m"
                  {
#line 192 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(mdprof_fb__automatic_parallelism__autopar_search_goals__Info_9, mdprof_fb__automatic_parallelism__autopar_search_goals__RevSubGoalPath_61, mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal0_59, &mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_62, mdprof_fb__automatic_parallelism__autopar_search_goals__Candidates_12, mdprof_fb__automatic_parallelism__autopar_search_goals__Pushes_13, mdprof_fb__automatic_parallelism__autopar_search_goals__Singles_14, mdprof_fb__automatic_parallelism__autopar_search_goals__Messages_15);
                  }
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_62, (MR_Integer) 0)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_62, (MR_Integer) 1)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_62, (MR_Integer) 2)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 0)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 1)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 2)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 3)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 4)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 5)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 6)));
#line 195 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__V_75_75, (MR_Integer) 7)));
#line 196 "autopar_search_goals.m"
                  {
#line 196 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 196 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 196 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__SubGoal_62));
#line 196 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__MaybeCut_60));
#line 196 "autopar_search_goals.m"
                  }
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 0)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 1)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 2)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 3)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 4)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 5)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 6)));
#line 209 "autopar_search_goals.m"
                  mdprof_fb__automatic_parallelism__autopar_search_goals__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation0_18, (MR_Integer) 7)));
#line 209 "autopar_search_goals.m"
                  {
#line 209 "autopar_search_goals.m"
                    mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_323_323));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_324_324));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_325_325));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_326_326));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Cost_339));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_328_328));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_329_329));
#line 209 "autopar_search_goals.m"
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__V_330_330));
#line 209 "autopar_search_goals.m"
                  }
#line 208 "autopar_search_goals.m"
                }
#line 226 "autopar_search_goals.m"
    {
#line 226 "autopar_search_goals.m"
      MR_Word base;
#line 226 "autopar_search_goals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 226 "autopar_search_goals.m"
      *mdprof_fb__automatic_parallelism__autopar_search_goals__STATE_VARIABLE_Goal_71 = base;
#line 226 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__GoalExpr_28));
#line 226 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__DetismRep_17));
#line 226 "autopar_search_goals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__Annotation_64));
#line 226 "autopar_search_goals.m"
    }
#line 82 "autopar_search_goals.m"
  }
#line 32 "autopar_search_goals.m"
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_type_tables(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_fb.automatic_parallelism.autopar_search_goals. */
