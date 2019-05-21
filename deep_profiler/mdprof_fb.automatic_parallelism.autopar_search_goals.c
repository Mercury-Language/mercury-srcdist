/*
** Automatically generated from `autopar_search_goals.m'
** by the Mercury compiler,
** version rotd-2018-03-27
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mdprof_fb.automatic_parallelism.autopar_search_goals.
// :- implementation.

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_search_goals.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"
#include "mdprof_fb.automatic_parallelism.autopar_find_best_par.mih"
#include "mdprof_fb.automatic_parallelism.autopar_reports.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_p_0(
  MR_Word InstMapBefore_7,
  MR_Word InstMapAfter_8,
  MR_Integer Arg_9,
  MR_Word * VarAndMode_10,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_p_0(
  MR_Word Info_9,
  MR_Word RevGoalPath_10,
  MR_Word STATE_VARIABLE_Case_0_19,
  MR_Word * STATE_VARIABLE_Case_20,
  MR_Integer STATE_VARIABLE_CaseNum_0_21,
  MR_Integer * STATE_VARIABLE_CaseNum_22,
  MR_Word STATE_VARIABLE_Messages_0_23,
  MR_Word * STATE_VARIABLE_Messages_24);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_p_0(
  MR_Word Info_9,
  MR_Word RevGoalPath_10,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Integer STATE_VARIABLE_DisjNum_0_17,
  MR_Integer * STATE_VARIABLE_DisjNum_18,
  MR_Word STATE_VARIABLE_Messages_0_19,
  MR_Word * STATE_VARIABLE_Messages_20);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_p_0(
  MR_Word Info_9,
  MR_Word RevGoalPath_10,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Integer STATE_VARIABLE_ConjNum_0_17,
  MR_Integer * STATE_VARIABLE_ConjNum_18,
  MR_Word STATE_VARIABLE_Messages_0_19,
  MR_Word * STATE_VARIABLE_Messages_20);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_f_0(
  MR_Word Goal_8,
  MR_Word RevGoalPath_9,
  MR_Word Cost_10,
  MR_Word Info_11,
  MR_Word VarUseType_12,
  MR_Integer Var_13);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(
  MR_Word Goal_9,
  MR_Word RevGoalPath_10,
  MR_Word Cost_11,
  MR_Word Info_12,
  MR_Word VarUseType_13,
  MR_Integer Var_14,
  MR_Word STATE_VARIABLE_Map_0_17,
  MR_Word * STATE_VARIABLE_Map_18);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word Single_6);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(
  MR_Word Info_5,
  MR_Integer Count_6,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_p_0(
  MR_Word Info_15,
  MR_Word RevGoalPath_16,
  MR_Word STATE_VARIABLE_Case_0_28,
  MR_Word * STATE_VARIABLE_Case_29,
  MR_Integer STATE_VARIABLE_CaseNum_0_30,
  MR_Integer * STATE_VARIABLE_CaseNum_31,
  MR_Word STATE_VARIABLE_Candidates_0_32,
  MR_Word * STATE_VARIABLE_Candidates_33,
  MR_Word STATE_VARIABLE_Pushes_0_34,
  MR_Word * STATE_VARIABLE_Pushes_35,
  MR_Word STATE_VARIABLE_Singles_0_36,
  MR_Word * STATE_VARIABLE_Singles_37,
  MR_Word STATE_VARIABLE_Messages_0_38,
  MR_Word * STATE_VARIABLE_Messages_39);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_p_0(
  MR_Word Info_15,
  MR_Word RevGoalPath_16,
  MR_Word STATE_VARIABLE_Disj_0_24,
  MR_Word * STATE_VARIABLE_Disj_25,
  MR_Integer STATE_VARIABLE_DisjNum_0_26,
  MR_Integer * STATE_VARIABLE_DisjNum_27,
  MR_Word STATE_VARIABLE_Candidates_0_28,
  MR_Word * STATE_VARIABLE_Candidates_29,
  MR_Word STATE_VARIABLE_Pushes_0_30,
  MR_Word * STATE_VARIABLE_Pushes_31,
  MR_Word STATE_VARIABLE_Singles_0_32,
  MR_Word * STATE_VARIABLE_Singles_33,
  MR_Word STATE_VARIABLE_Messages_0_34,
  MR_Word * STATE_VARIABLE_Messages_35);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_p_0(
  MR_Word Info_3,
  MR_Word Cost_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_p_0(
  MR_Word Info_6,
  MR_Word RevGoalPath_7,
  MR_Word Coverage_8,
  MR_Word AtomicGoal_9,
  MR_Word * Cost_10);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0(
  MR_Word Info_7,
  MR_Word RevGoalPath_8,
  MR_Word AtomicGoal_9,
  MR_Word InstMapInfo_10,
  MR_Word * GoalType_11,
  MR_Word * STATE_VARIABLE_Messages_20);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevSingleCands_0_8,
  MR_Word * STATE_VARIABLE_RevSingleCands_9,
  MR_Word STATE_VARIABLE_CandidatesBelow_0_10,
  MR_Word * STATE_VARIABLE_CandidatesBelow_11,
  MR_Word STATE_VARIABLE_Pushes_0_12,
  MR_Word * STATE_VARIABLE_Pushes_13,
  MR_Word STATE_VARIABLE_MessagesBelow_0_14,
  MR_Word * STATE_VARIABLE_MessagesBelow_15);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_p_0(
  MR_Word Info_13,
  MR_Word RevGoalPath_14,
  MR_Word STATE_VARIABLE_Cond_0_37,
  MR_Word * STATE_VARIABLE_Cond_38,
  MR_Word STATE_VARIABLE_Then_0_39,
  MR_Word * STATE_VARIABLE_Then_40,
  MR_Word STATE_VARIABLE_Else_0_41,
  MR_Word * STATE_VARIABLE_Else_42,
  MR_Word * Candidates_18,
  MR_Word * Pushes_19,
  MR_Word * Singles_20,
  MR_Word * Messages_21);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(
  MR_Word MainCandidate_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_p_0(
  MR_Word Info_8,
  MR_Word RevGoalPath_9,
  MR_Word Conjs_10,
  MR_Integer CostlyIndex_11,
  MR_Word Single_12,
  MR_Word * STATE_VARIABLE_Messages_35,
  MR_Word * MaybeCandidate_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0(
  MR_Word Info_8,
  MR_Word RevCurPath_9,
  MR_Word ForwardGoalPath_10,
  MR_Word GoalToPushInto_11,
  MR_Word GoalsToPush0_12,
  MR_Word * RevCandidateGoalPath_13,
  MR_Word * CandidateConjs_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_p_0(
  MR_Word Info_7,
  MR_Word RevGoalPath_8,
  MR_Word Conjs_9,
  MR_Word CostlyGoalsIndexes_10,
  MR_Word * STATE_VARIABLE_Messages_17,
  MR_Word * MaybeCandidate_12);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(
  MR_Word Info_9,
  MR_Word Location_10,
  MR_Word RevGoalPath_11,
  MR_Word MaybePushGoal_12,
  MR_Word Goals_13,
  MR_Word * MaybeCandidate_14,
  MR_Word STATE_VARIABLE_Messages_0_43,
  MR_Word * STATE_VARIABLE_Messages_44);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[14][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[2][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[1][7];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[2][17];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[1][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_6[1][9];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[2][10];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[3][11];




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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[1][7] = {
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[2][17] = {
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[1][6] = {
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_6[1][9] = {
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[2][10] = {
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[3][11] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__cord__pti_cord_1__plain_message__type_ctor_info_message_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0 = {
  &mercury__lazy__lazy__type_ctor_info_lazy_1,
  {
    (MR_TypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_search_goals__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_goals__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_p_0(
  MR_Word InstMapBefore_7,
  MR_Word InstMapAfter_8,
  MR_Integer Arg_9,
  MR_Word * VarAndMode_10,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14)
{
  {
    MR_Word Mode_12;
    MR_Word InstBefore_21;
    MR_Word InstAfter_23;
    MR_Word Var_22;
    MR_Word Var_24;

    program_representation_utils__inst_map_get_4_p_0(InstMapBefore_7, Arg_9, &InstBefore_21, &Var_22);
    program_representation_utils__inst_map_get_4_p_0(InstMapAfter_8, Arg_9, &InstAfter_23, &Var_24);
    {
      Mode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Mode_12, 0) = ((MR_Box) (InstBefore_21));
      MR_hl_field(MR_mktag(0), Mode_12, 1) = ((MR_Box) (InstAfter_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *VarAndMode_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Arg_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Mode_12));
    }
    *STATE_VARIABLE_ArgNum_14 = (STATE_VARIABLE_ArgNum_0_13 + (MR_Integer) 1);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_p_0(
  MR_Word Info_9,
  MR_Word RevGoalPath_10,
  MR_Word STATE_VARIABLE_Case_0_19,
  MR_Word * STATE_VARIABLE_Case_20,
  MR_Integer STATE_VARIABLE_CaseNum_0_21,
  MR_Integer * STATE_VARIABLE_CaseNum_22,
  MR_Word STATE_VARIABLE_Messages_0_23,
  MR_Word * STATE_VARIABLE_Messages_24)
{
  {
    MR_Word ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_19, (MR_Integer) 0)));
    MR_Word OtherConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_19, (MR_Integer) 1)));
    MR_Word Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_19, (MR_Integer) 2)));
    MR_Word RevArmPath_17;
    MR_Word Goal_18;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (STATE_VARIABLE_CaseNum_0_21));
      MR_hl_field(MR_mktag(3), Var_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      RevArmPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevArmPath_17, 0) = ((MR_Box) (RevGoalPath_10));
      MR_hl_field(MR_mktag(1), RevArmPath_17, 1) = ((MR_Box) (Var_25));
    }
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_9, RevArmPath_17, Goal0_16, &Goal_18, STATE_VARIABLE_Messages_0_23, STATE_VARIABLE_Messages_24);
    *STATE_VARIABLE_CaseNum_22 = (STATE_VARIABLE_CaseNum_0_21 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsId_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_18));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_p_0(
  MR_Word Info_9,
  MR_Word RevGoalPath_10,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Integer STATE_VARIABLE_DisjNum_0_17,
  MR_Integer * STATE_VARIABLE_DisjNum_18,
  MR_Word STATE_VARIABLE_Messages_0_19,
  MR_Word * STATE_VARIABLE_Messages_20)
{
  {
    MR_Word DisjRevGoalPath_14;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (STATE_VARIABLE_DisjNum_0_17));
    }
    {
      DisjRevGoalPath_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DisjRevGoalPath_14, 0) = ((MR_Box) (RevGoalPath_10));
      MR_hl_field(MR_mktag(1), DisjRevGoalPath_14, 1) = ((MR_Box) (Var_21));
    }
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_9, DisjRevGoalPath_14, STATE_VARIABLE_Goal_0_15, STATE_VARIABLE_Goal_16, STATE_VARIABLE_Messages_0_19, STATE_VARIABLE_Messages_20);
    *STATE_VARIABLE_DisjNum_18 = (STATE_VARIABLE_DisjNum_0_17 + (MR_Integer) 1);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_p_0(
  MR_Word Info_9,
  MR_Word RevGoalPath_10,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Integer STATE_VARIABLE_ConjNum_0_17,
  MR_Integer * STATE_VARIABLE_ConjNum_18,
  MR_Word STATE_VARIABLE_Messages_0_19,
  MR_Word * STATE_VARIABLE_Messages_20)
{
  {
    MR_Word ConjRevGoalPath_14;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (STATE_VARIABLE_ConjNum_0_17));
    }
    {
      ConjRevGoalPath_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConjRevGoalPath_14, 0) = ((MR_Box) (RevGoalPath_10));
      MR_hl_field(MR_mktag(1), ConjRevGoalPath_14, 1) = ((MR_Box) (Var_21));
    }
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_9, ConjRevGoalPath_14, STATE_VARIABLE_Goal_0_15, STATE_VARIABLE_Goal_16, STATE_VARIABLE_Messages_0_19, STATE_VARIABLE_Messages_20);
    *STATE_VARIABLE_ConjNum_18 = (STATE_VARIABLE_ConjNum_0_17 + (MR_Integer) 1);
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_f_0(
  MR_Word Goal_8,
  MR_Word RevGoalPath_9,
  MR_Word Cost_10,
  MR_Word Info_11,
  MR_Word VarUseType_12,
  MR_Integer Var_13)
{
  {
    MR_Word Use_14;
    MR_Word Deep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
    MR_Word CliquePtr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
    MR_Word CallSiteMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
    MR_Word RecursiveCallSiteMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
    MR_Word ContainingGoalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
    MR_Word CoverageArray_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)));
    MR_Word RecursionType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 9)));
    MR_Float CostPercall_27;
    MR_Word _ProgRep_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
    MR_Word _Params_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
    MR_Word _InstMapArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 8)));
    MR_Word _VarTable_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 10)));
    MR_Word _ProcLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 11)));

    CostPercall_27 = measurements__goal_cost_get_percall_1_f_0(Cost_10);
    switch (MR_tag((MR_Word) RecursionType_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RecDepth_33;
          MR_Word FollowCallsAcrossModules_34;
          MR_Word VarUseOptions_35;
          MR_Word Var_51;

          mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_0(RecursionType_24, &Var_51);
          RecDepth_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0)));
          mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(Info_11, &FollowCallsAcrossModules_34);
          {
            VarUseOptions_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), VarUseOptions_35, 0) = ((MR_Box) (Deep_15));
            MR_hl_field(MR_mktag(0), VarUseOptions_35, 1) = ((MR_Box) (FollowCallsAcrossModules_34));
            MR_hl_field(MR_mktag(0), VarUseOptions_35, 2) = ((MR_Box) (VarUseType_12));
          }
          var_use_analysis__var_first_use_13_p_0(CliquePtr_18, CallSiteMap_19, RecursiveCallSiteMap_20, ContainingGoalMap_21, CoverageArray_22, RecursionType_24, RecDepth_33, Goal_8, RevGoalPath_9, CostPercall_27, Var_13, VarUseOptions_35, &Use_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RecDepth_33;
          MR_Word FollowCallsAcrossModules_34;
          MR_Word VarUseOptions_35;
          MR_Word Var_51;

          mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_0(RecursionType_24, &Var_51);
          RecDepth_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0)));
          mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(Info_11, &FollowCallsAcrossModules_34);
          {
            VarUseOptions_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), VarUseOptions_35, 0) = ((MR_Box) (Deep_15));
            MR_hl_field(MR_mktag(0), VarUseOptions_35, 1) = ((MR_Box) (FollowCallsAcrossModules_34));
            MR_hl_field(MR_mktag(0), VarUseOptions_35, 2) = ((MR_Box) (VarUseType_12));
          }
          var_use_analysis__var_first_use_13_p_0(CliquePtr_18, CallSiteMap_19, RecursiveCallSiteMap_20, ContainingGoalMap_21, CoverageArray_22, RecursionType_24, RecDepth_33, Goal_8, RevGoalPath_9, CostPercall_27, Var_13, VarUseOptions_35, &Use_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Messages_41;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Stderr_43;

          var_use_analysis__pessimistic_var_use_info_3_p_0(VarUseType_12, CostPercall_27, &Use_14);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (CliquePtr_18));
          }
          Var_46 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
          message__append_message_4_p_0(Var_44, (MR_Word) MR_mkword(MR_mktag(3), &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[13]), Var_46, &Messages_41);
          mercury__io__stderr_stream_3_p_0(&Stderr_43);
          message__write_out_messages_4_p_0(Stderr_43, Messages_41);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Messages_41;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Stderr_43;

          var_use_analysis__pessimistic_var_use_info_3_p_0(VarUseType_12, CostPercall_27, &Use_14);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (CliquePtr_18));
          }
          Var_46 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
          message__append_message_4_p_0(Var_44, (MR_Word) MR_mkword(MR_mktag(3), &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[13]), Var_46, &Messages_41);
          mercury__io__stderr_stream_3_p_0(&Stderr_43);
          message__write_out_messages_4_p_0(Stderr_43, Messages_41);
        }
        break;
    }
    return Use_14;
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_1;
    MR_Box closure = closure_arg;
    MR_Word conv0_Use_14;

    conv0_Use_14 = mdprof_fb__automatic_parallelism__autopar_search_goals__compute_goal_var_use_lazy_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))));
    wrapper_arg_1 = ((MR_Box) (conv0_Use_14));
    return wrapper_arg_1;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(
  MR_Word Goal_9,
  MR_Word RevGoalPath_10,
  MR_Word Cost_11,
  MR_Word Info_12,
  MR_Word VarUseType_13,
  MR_Integer Var_14,
  MR_Word STATE_VARIABLE_Map_0_17,
  MR_Word * STATE_VARIABLE_Map_18)
{
  {
    MR_Word LazyUse_16;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Goal_9));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (RevGoalPath_10));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (Cost_11));
      MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (Info_12));
      MR_hl_field(MR_mktag(0), Var_19, 7) = ((MR_Box) (VarUseType_13));
      MR_hl_field(MR_mktag(0), Var_19, 8) = ((MR_Box) (Var_14));
    }
    LazyUse_16 = mercury__lazy__delay_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, Var_19);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10], Var_14, ((MR_Box) (LazyUse_16)), STATE_VARIABLE_Map_0_17, STATE_VARIABLE_Map_18);
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word Single_6)
{
  {
    MR_bool succeeded;
    MR_Word SingleCost_7;
    MR_Integer SingleCount_8;
    MR_Word ConjNewCounts_9;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Single_6, (MR_Integer) 2)));
    MR_Word Var_11;
    MR_Word Var_24;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Single_6, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Single_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    SingleCost_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 7)));
    SingleCount_8 = measurements__goal_cost_get_calls_1_f_0(SingleCost_7);
    mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(Info_4, SingleCount_8, Goal_5, &ConjNewCounts_9);
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjNewCounts_9, (MR_Integer) 0)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjNewCounts_9, (MR_Integer) 1)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConjNewCounts_9, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(Var_11, &Var_24);
    succeeded = ((MR_Integer) 1 == Var_24);
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(
  MR_Word Info_5,
  MR_Integer Count_6,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13)
{
  {
    MR_bool succeeded;
    MR_Word Annotation0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 2)));
    MR_Word Cost0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 4)));
    MR_Word Cost_10;
    MR_Word AboveThreshold_11;
    MR_Word STATE_VARIABLE_Goal_14_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 0)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 3)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 5)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 6)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_8, (MR_Integer) 7)));
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_35;
    MR_Float PercallCost_57;
    MR_Integer Var_58;
    MR_Float Var_60;
    MR_Integer Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Float Var_74;
    MR_Word Var_75;
    MR_Integer Var_76;
    MR_Integer Var_77;
    MR_Integer Var_78;
    MR_Integer Var_79;
    MR_Integer Var_80;
    MR_Integer Var_81;
    MR_Integer Var_82;
    MR_Float Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_49;

    Cost_10 = measurements__goal_cost_change_calls_2_f_0(Cost0_9, Count_6);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 0)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 1)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 2)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 3)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 4)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 5)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 6)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 7)));
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Cost_10));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_16, 6) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_16, 7) = ((MR_Box) (Var_38));
    }
    {
      STATE_VARIABLE_Goal_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_14_14, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_14_14, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_14_14, 2) = ((MR_Box) (Var_16));
    }
    Var_58 = measurements__goal_cost_get_calls_1_f_0(Cost_10);
    succeeded = (Var_58 > (MR_Integer) 0);
    if (succeeded)
    {
      PercallCost_57 = measurements__goal_cost_get_percall_1_f_0(Cost_10);
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
      Var_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1)));
      Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 2)));
      Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 3)));
      Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 4)));
      Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 5)));
      Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 6)));
      Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 7)));
      Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 8)));
      Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 9)));
      Var_83 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 10)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 11)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 12)));
      Var_60 = mercury__float__float_1_f_0(Var_61);
      succeeded = (PercallCost_57 > Var_60);
    }
    if (succeeded)
      AboveThreshold_11 = (MR_Integer) 0;
    else
      AboveThreshold_11 = (MR_Integer) 1;
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_14_14, (MR_Integer) 0)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_14_14, (MR_Integer) 1)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_14_14, (MR_Integer) 2)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 3)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 4)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 5)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 6)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 7)));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (AboveThreshold_11));
      MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_19, 7) = ((MR_Box) (Var_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_p_0(
  MR_Word Info_15,
  MR_Word RevGoalPath_16,
  MR_Word STATE_VARIABLE_Case_0_28,
  MR_Word * STATE_VARIABLE_Case_29,
  MR_Integer STATE_VARIABLE_CaseNum_0_30,
  MR_Integer * STATE_VARIABLE_CaseNum_31,
  MR_Word STATE_VARIABLE_Candidates_0_32,
  MR_Word * STATE_VARIABLE_Candidates_33,
  MR_Word STATE_VARIABLE_Pushes_0_34,
  MR_Word * STATE_VARIABLE_Pushes_35,
  MR_Word STATE_VARIABLE_Singles_0_36,
  MR_Word * STATE_VARIABLE_Singles_37,
  MR_Word STATE_VARIABLE_Messages_0_38,
  MR_Word * STATE_VARIABLE_Messages_39)
{
  {
    MR_Word Candidates_19;
    MR_Word Pushes_20;
    MR_Word Singles_21;
    MR_Word Messages_22;
    MR_Word MainConsIdRep_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_28, (MR_Integer) 0)));
    MR_Word OtherConsIdReps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_28, (MR_Integer) 1)));
    MR_Word Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_28, (MR_Integer) 2)));
    MR_Word RevArmPath_26;
    MR_Word Goal_27;
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (STATE_VARIABLE_CaseNum_0_30));
      MR_hl_field(MR_mktag(3), Var_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      RevArmPath_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevArmPath_26, 0) = ((MR_Box) (RevGoalPath_16));
      MR_hl_field(MR_mktag(1), RevArmPath_26, 1) = ((MR_Box) (Var_40));
    }
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_15, RevArmPath_26, Goal0_25, &Goal_27, &Candidates_19, &Pushes_20, &Singles_21, &Messages_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsIdRep_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIdReps_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_27));
    }
    *STATE_VARIABLE_Candidates_33 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1], STATE_VARIABLE_Candidates_0_32, Candidates_19);
    *STATE_VARIABLE_Pushes_35 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, STATE_VARIABLE_Pushes_0_34, Pushes_20);
    *STATE_VARIABLE_Singles_37 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], STATE_VARIABLE_Singles_0_36, Singles_21);
    *STATE_VARIABLE_Messages_39 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, STATE_VARIABLE_Messages_0_38, Messages_22);
    *STATE_VARIABLE_CaseNum_31 = (STATE_VARIABLE_CaseNum_0_30 + (MR_Integer) 1);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_p_0(
  MR_Word Info_15,
  MR_Word RevGoalPath_16,
  MR_Word STATE_VARIABLE_Disj_0_24,
  MR_Word * STATE_VARIABLE_Disj_25,
  MR_Integer STATE_VARIABLE_DisjNum_0_26,
  MR_Integer * STATE_VARIABLE_DisjNum_27,
  MR_Word STATE_VARIABLE_Candidates_0_28,
  MR_Word * STATE_VARIABLE_Candidates_29,
  MR_Word STATE_VARIABLE_Pushes_0_30,
  MR_Word * STATE_VARIABLE_Pushes_31,
  MR_Word STATE_VARIABLE_Singles_0_32,
  MR_Word * STATE_VARIABLE_Singles_33,
  MR_Word STATE_VARIABLE_Messages_0_34,
  MR_Word * STATE_VARIABLE_Messages_35)
{
  {
    MR_Word Candidates_19;
    MR_Word Pushes_20;
    MR_Word Singles_21;
    MR_Word Messages_22;
    MR_Word RevDisjGoalPath_23;
    MR_Word Var_36;

    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (STATE_VARIABLE_DisjNum_0_26));
    }
    {
      RevDisjGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevDisjGoalPath_23, 0) = ((MR_Box) (RevGoalPath_16));
      MR_hl_field(MR_mktag(1), RevDisjGoalPath_23, 1) = ((MR_Box) (Var_36));
    }
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_15, RevDisjGoalPath_23, STATE_VARIABLE_Disj_0_24, STATE_VARIABLE_Disj_25, &Candidates_19, &Pushes_20, &Singles_21, &Messages_22);
    *STATE_VARIABLE_Candidates_29 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1], STATE_VARIABLE_Candidates_0_28, Candidates_19);
    *STATE_VARIABLE_Pushes_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, STATE_VARIABLE_Pushes_0_30, Pushes_20);
    *STATE_VARIABLE_Singles_33 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], STATE_VARIABLE_Singles_0_32, Singles_21);
    *STATE_VARIABLE_Messages_35 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, STATE_VARIABLE_Messages_0_34, Messages_22);
    *STATE_VARIABLE_DisjNum_27 = (STATE_VARIABLE_DisjNum_0_26 + (MR_Integer) 1);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv43_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv43_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv43_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv41_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv41_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv41_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv38_STATE_VARIABLE_Case_20;
    MR_Integer conv37_STATE_VARIABLE_CaseNum_22;
    MR_Word conv36_STATE_VARIABLE_Messages_24;

    mdprof_fb__automatic_parallelism__autopar_search_goals__case_to_pard_goal_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv38_STATE_VARIABLE_Case_20, ((MR_Integer) wrapper_arg_3), &conv37_STATE_VARIABLE_CaseNum_22, ((MR_Word) wrapper_arg_5), &conv36_STATE_VARIABLE_Messages_24);
    *wrapper_arg_2 = ((MR_Box) (conv38_STATE_VARIABLE_Case_20));
    *wrapper_arg_4 = ((MR_Box) (conv37_STATE_VARIABLE_CaseNum_22));
    *wrapper_arg_6 = ((MR_Box) (conv36_STATE_VARIABLE_Messages_24));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv34_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv34_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv32_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv32_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv32_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv30_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv30_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv28_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv28_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv28_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv26_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv26_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv26_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv24_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv24_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv22_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv22_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv20_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv20_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_STATE_VARIABLE_Goal_16;
    MR_Integer conv16_STATE_VARIABLE_DisjNum_18;
    MR_Word conv15_STATE_VARIABLE_Messages_20;

    mdprof_fb__automatic_parallelism__autopar_search_goals__disj_to_pard_goals_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv17_STATE_VARIABLE_Goal_16, ((MR_Integer) wrapper_arg_3), &conv16_STATE_VARIABLE_DisjNum_18, ((MR_Word) wrapper_arg_5), &conv15_STATE_VARIABLE_Messages_20);
    *wrapper_arg_2 = ((MR_Box) (conv17_STATE_VARIABLE_Goal_16));
    *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_DisjNum_18));
    *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Messages_20));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv13_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Map_18;

    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_build_use_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv11_STATE_VARIABLE_Map_18);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_Map_18));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Goal_16;
    MR_Integer conv7_STATE_VARIABLE_ConjNum_18;
    MR_Word conv6_STATE_VARIABLE_Messages_20;

    mdprof_fb__automatic_parallelism__autopar_search_goals__conj_to_pard_goals_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv8_STATE_VARIABLE_Goal_16, ((MR_Integer) wrapper_arg_3), &conv7_STATE_VARIABLE_ConjNum_18, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_Messages_20);
    *wrapper_arg_2 = ((MR_Box) (conv8_STATE_VARIABLE_Goal_16));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ConjNum_18));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Messages_20));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__7_7;

    mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__7_7));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__7_7;

    mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__7_7));
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(
  MR_Word Info_7,
  MR_Word RevGoalPath_8,
  MR_Word Goal_9,
  MR_Word * DetailGoal_10,
  MR_Word STATE_VARIABLE_Messages_0_54,
  MR_Word * STATE_VARIABLE_Messages_55)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 0)));
    MR_Word Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 1)));
    MR_Word GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 2)));
    MR_Word InstMapInfo_15;
    MR_Word Coverage_16;
    MR_Integer Before_17;
    MR_Word Cost_21;
    MR_Word DetailGoalExpr_22;
    MR_Word PardGoalType_44;
    MR_Word ProductionUseMap_46;
    MR_Word ConsumptionUseMap_48;
    MR_Word CostAboveThreshold_52;
    MR_Word PardGoalAnnotation_53;
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_57;
    MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
    MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 11)));
    MR_Box conv0_InstMapInfo_15;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Box conv1_Coverage_16;

    conv0_InstMapInfo_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0, Var_56, GoalId_14);
    InstMapInfo_15 = ((MR_Word) conv0_InstMapInfo_15);
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 11)));
    conv1_Coverage_16 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, Var_57, GoalId_14);
    Coverage_16 = ((MR_Word) conv1_Coverage_16);
    coverage__get_coverage_before_det_2_p_0(Coverage_16, &Before_17);
    switch (MR_tag((MR_Word) GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_181_181;
          MR_Word TypeInfo_185_185;
          MR_Word TypeInfo_186_186;
          MR_Word Conjs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalExpr_12, (MR_Integer) 0)));
          MR_Word DetailConjs_19;
          MR_Word BoundVars_45;
          MR_Word ConsumedVars_47;
          MR_Word Var_84;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Integer Var_20;
          MR_Box conv10_Var_20;
          MR_Box conv9_STATE_VARIABLE_Messages_55;
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_Box conv12_ProductionUseMap_46;
          MR_Word Var_143;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Box conv14_ConsumptionUseMap_48;

          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (RevGoalPath_8));
          }
          mercury__list__map_foldl2_7_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[8], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], Var_84, Conjs_18, &DetailConjs_19, ((MR_Box) ((MR_Integer) 1)), &conv10_Var_20, ((MR_Box) (STATE_VARIABLE_Messages_0_54)), &conv9_STATE_VARIABLE_Messages_55);
          Var_20 = ((MR_Integer) conv10_Var_20);
          *STATE_VARIABLE_Messages_55 = ((MR_Word) conv9_STATE_VARIABLE_Messages_55);
          mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(DetailConjs_19, Before_17, &Cost_21);
          {
            DetailGoalExpr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DetailGoalExpr_22, 0) = ((MR_Box) (DetailConjs_19));
          }
          PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          TypeCtorInfo_181_181 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
          Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
          Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
          Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
          BoundVars_45 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_181, Var_87);
          {
            Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_4));
            MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (Goal_9));
            MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (RevGoalPath_8));
            MR_hl_field(MR_mktag(0), Var_88, 5) = ((MR_Box) (Cost_21));
            MR_hl_field(MR_mktag(0), Var_88, 6) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_88, 7) = ((MR_Box) ((MR_Integer) 0));
          }
          TypeInfo_185_185 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
          Var_89 = mercury__map__init_0_f_0(TypeCtorInfo_181_181, TypeInfo_185_185);
          TypeInfo_186_186 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
          mercury__list__foldl_4_p_0(TypeCtorInfo_181_181, TypeInfo_186_186, Var_88, BoundVars_45, ((MR_Box) (Var_89)), &conv12_ProductionUseMap_46);
          ProductionUseMap_46 = ((MR_Word) conv12_ProductionUseMap_46);
          Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
          Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
          Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
          Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
          ConsumedVars_47 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_181, Var_91);
          {
            Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_5));
            MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (Goal_9));
            MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (RevGoalPath_8));
            MR_hl_field(MR_mktag(0), Var_92, 5) = ((MR_Box) (Cost_21));
            MR_hl_field(MR_mktag(0), Var_92, 6) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_92, 7) = ((MR_Box) ((MR_Integer) 1));
          }
          Var_93 = mercury__map__init_0_f_0(TypeCtorInfo_181_181, TypeInfo_185_185);
          mercury__list__foldl_4_p_0(TypeCtorInfo_181_181, TypeInfo_186_186, Var_92, ConsumedVars_47, ((MR_Box) (Var_93)), &conv14_ConsumptionUseMap_48);
          ConsumptionUseMap_48 = ((MR_Word) conv14_ConsumptionUseMap_48);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_181_229;
          MR_Word TypeInfo_185_230;
          MR_Word TypeInfo_186_231;
          MR_Word Disjs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 0)));
          MR_Word DetailDisjs_24;
          MR_Word Var_81;
          MR_Word BoundVars_213;
          MR_Word ConsumedVars_214;
          MR_Word Var_215;
          MR_Word Var_216;
          MR_Word Var_217;
          MR_Word Var_219;
          MR_Word Var_220;
          MR_Word Var_221;
          MR_Integer Var_25;
          MR_Box conv19_Var_25;
          MR_Box conv18_STATE_VARIABLE_Messages_55;
          MR_Word Var_201;
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Box conv21_ProductionUseMap_46;
          MR_Word Var_207;
          MR_Word Var_208;
          MR_Word Var_209;
          MR_Box conv23_ConsumptionUseMap_48;

          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_6));
            MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (RevGoalPath_8));
          }
          mercury__list__map_foldl2_7_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[8], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], Var_81, Disjs_23, &DetailDisjs_24, ((MR_Box) ((MR_Integer) 1)), &conv19_Var_25, ((MR_Box) (STATE_VARIABLE_Messages_0_54)), &conv18_STATE_VARIABLE_Messages_55);
          Var_25 = ((MR_Integer) conv19_Var_25);
          *STATE_VARIABLE_Messages_55 = ((MR_Word) conv18_STATE_VARIABLE_Messages_55);
          mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_4_p_0(Detism_13, DetailDisjs_24, Before_17, &Cost_21);
          {
            DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DetailGoalExpr_22, 0) = ((MR_Box) (DetailDisjs_24));
          }
          PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          TypeCtorInfo_181_229 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
          Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
          Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
          Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
          BoundVars_213 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_229, Var_215);
          {
            Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_216, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_216, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_7));
            MR_hl_field(MR_mktag(0), Var_216, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_216, 3) = ((MR_Box) (Goal_9));
            MR_hl_field(MR_mktag(0), Var_216, 4) = ((MR_Box) (RevGoalPath_8));
            MR_hl_field(MR_mktag(0), Var_216, 5) = ((MR_Box) (Cost_21));
            MR_hl_field(MR_mktag(0), Var_216, 6) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_216, 7) = ((MR_Box) ((MR_Integer) 0));
          }
          TypeInfo_185_230 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
          Var_217 = mercury__map__init_0_f_0(TypeCtorInfo_181_229, TypeInfo_185_230);
          TypeInfo_186_231 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
          mercury__list__foldl_4_p_0(TypeCtorInfo_181_229, TypeInfo_186_231, Var_216, BoundVars_213, ((MR_Box) (Var_217)), &conv21_ProductionUseMap_46);
          ProductionUseMap_46 = ((MR_Word) conv21_ProductionUseMap_46);
          Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
          Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
          Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
          Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
          ConsumedVars_214 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_229, Var_219);
          {
            Var_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_220, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_8));
            MR_hl_field(MR_mktag(0), Var_220, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_220, 3) = ((MR_Box) (Goal_9));
            MR_hl_field(MR_mktag(0), Var_220, 4) = ((MR_Box) (RevGoalPath_8));
            MR_hl_field(MR_mktag(0), Var_220, 5) = ((MR_Box) (Cost_21));
            MR_hl_field(MR_mktag(0), Var_220, 6) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_220, 7) = ((MR_Box) ((MR_Integer) 1));
          }
          Var_221 = mercury__map__init_0_f_0(TypeCtorInfo_181_229, TypeInfo_185_230);
          mercury__list__foldl_4_p_0(TypeCtorInfo_181_229, TypeInfo_186_231, Var_220, ConsumedVars_214, ((MR_Box) (Var_221)), &conv23_ConsumptionUseMap_48);
          ConsumptionUseMap_48 = ((MR_Word) conv23_ConsumptionUseMap_48);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_181_353;
          MR_Word TypeInfo_185_354;
          MR_Word TypeInfo_186_355;
          MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 0)));
          MR_Word CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 1)));
          MR_Word Cases_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 2)));
          MR_Word DetailCases_29;
          MR_Word Var_78;
          MR_Word BoundVars_337;
          MR_Word ConsumedVars_338;
          MR_Word Var_339;
          MR_Word Var_340;
          MR_Word Var_341;
          MR_Word Var_343;
          MR_Word Var_344;
          MR_Word Var_345;
          MR_Integer Var_30;
          MR_Box conv40_Var_30;
          MR_Box conv39_STATE_VARIABLE_Messages_55;
          MR_Word Var_325;
          MR_Word Var_326;
          MR_Word Var_327;
          MR_Box conv42_ProductionUseMap_46;
          MR_Word Var_331;
          MR_Word Var_332;
          MR_Word Var_333;
          MR_Box conv44_ConsumptionUseMap_48;

          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[2]));
            MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_15));
            MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (RevGoalPath_8));
          }
          mercury__list__map_foldl2_7_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[9], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[7], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], Var_78, Cases_28, &DetailCases_29, ((MR_Box) ((MR_Integer) 1)), &conv40_Var_30, ((MR_Box) (STATE_VARIABLE_Messages_0_54)), &conv39_STATE_VARIABLE_Messages_55);
          Var_30 = ((MR_Integer) conv40_Var_30);
          *STATE_VARIABLE_Messages_55 = ((MR_Word) conv39_STATE_VARIABLE_Messages_55);
          mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(DetailCases_29, Before_17, &Cost_21);
          {
            DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), DetailGoalExpr_22, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(2), DetailGoalExpr_22, 1) = ((MR_Box) (CanFail_27));
            MR_hl_field(MR_mktag(2), DetailGoalExpr_22, 2) = ((MR_Box) (DetailCases_29));
          }
          PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          TypeCtorInfo_181_353 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          Var_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
          Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
          Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
          Var_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
          BoundVars_337 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_353, Var_339);
          {
            Var_340 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_340, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_340, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_16));
            MR_hl_field(MR_mktag(0), Var_340, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_340, 3) = ((MR_Box) (Goal_9));
            MR_hl_field(MR_mktag(0), Var_340, 4) = ((MR_Box) (RevGoalPath_8));
            MR_hl_field(MR_mktag(0), Var_340, 5) = ((MR_Box) (Cost_21));
            MR_hl_field(MR_mktag(0), Var_340, 6) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_340, 7) = ((MR_Box) ((MR_Integer) 0));
          }
          TypeInfo_185_354 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
          Var_341 = mercury__map__init_0_f_0(TypeCtorInfo_181_353, TypeInfo_185_354);
          TypeInfo_186_355 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
          mercury__list__foldl_4_p_0(TypeCtorInfo_181_353, TypeInfo_186_355, Var_340, BoundVars_337, ((MR_Box) (Var_341)), &conv42_ProductionUseMap_46);
          ProductionUseMap_46 = ((MR_Word) conv42_ProductionUseMap_46);
          Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
          Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
          Var_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
          Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
          ConsumedVars_338 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_353, Var_343);
          {
            Var_344 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_344, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_344, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_17));
            MR_hl_field(MR_mktag(0), Var_344, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_344, 3) = ((MR_Box) (Goal_9));
            MR_hl_field(MR_mktag(0), Var_344, 4) = ((MR_Box) (RevGoalPath_8));
            MR_hl_field(MR_mktag(0), Var_344, 5) = ((MR_Box) (Cost_21));
            MR_hl_field(MR_mktag(0), Var_344, 6) = ((MR_Box) (Info_7));
            MR_hl_field(MR_mktag(0), Var_344, 7) = ((MR_Box) ((MR_Integer) 1));
          }
          Var_345 = mercury__map__init_0_f_0(TypeCtorInfo_181_353, TypeInfo_185_354);
          mercury__list__foldl_4_p_0(TypeCtorInfo_181_353, TypeInfo_186_355, Var_344, ConsumedVars_338, ((MR_Box) (Var_345)), &conv44_ConsumptionUseMap_48);
          ConsumptionUseMap_48 = ((MR_Word) conv44_ConsumptionUseMap_48);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_181_260;
              MR_Word TypeInfo_185_261;
              MR_Word TypeInfo_186_262;
              MR_Word Cond_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
              MR_Word Then_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
              MR_Word Else_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
              MR_Word CondRevGoalPath_34;
              MR_Word ThenRevGoalPath_35;
              MR_Word ElseRevGoalPath_36;
              MR_Word DetailCond_37;
              MR_Word DetailThen_38;
              MR_Word DetailElse_39;
              MR_Word STATE_VARIABLE_Messages_75_75;
              MR_Word STATE_VARIABLE_Messages_76_76;
              MR_Word BoundVars_244;
              MR_Word ConsumedVars_245;
              MR_Word Var_246;
              MR_Word Var_247;
              MR_Word Var_248;
              MR_Word Var_250;
              MR_Word Var_251;
              MR_Word Var_252;
              MR_Word Var_232;
              MR_Word Var_233;
              MR_Word Var_234;
              MR_Box conv25_ProductionUseMap_46;
              MR_Word Var_238;
              MR_Word Var_239;
              MR_Word Var_240;
              MR_Box conv27_ConsumptionUseMap_48;

              {
                CondRevGoalPath_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CondRevGoalPath_34, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), CondRevGoalPath_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ThenRevGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ThenRevGoalPath_35, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), ThenRevGoalPath_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              {
                ElseRevGoalPath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ElseRevGoalPath_36, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), ElseRevGoalPath_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              }
              mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_7, CondRevGoalPath_34, Cond_31, &DetailCond_37, STATE_VARIABLE_Messages_0_54, &STATE_VARIABLE_Messages_75_75);
              mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_7, ThenRevGoalPath_35, Then_32, &DetailThen_38, STATE_VARIABLE_Messages_75_75, &STATE_VARIABLE_Messages_76_76);
              mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_7, ElseRevGoalPath_36, Else_33, &DetailElse_39, STATE_VARIABLE_Messages_76_76, STATE_VARIABLE_Messages_55);
              mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_p_0(DetailCond_37, DetailThen_38, DetailElse_39, &Cost_21);
              {
                DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 1) = ((MR_Box) (DetailCond_37));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 2) = ((MR_Box) (DetailThen_38));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 3) = ((MR_Box) (DetailElse_39));
              }
              PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              TypeCtorInfo_181_260 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
              Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
              Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
              Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
              BoundVars_244 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_260, Var_246);
              {
                Var_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_247, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_247, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_9));
                MR_hl_field(MR_mktag(0), Var_247, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_247, 3) = ((MR_Box) (Goal_9));
                MR_hl_field(MR_mktag(0), Var_247, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_247, 5) = ((MR_Box) (Cost_21));
                MR_hl_field(MR_mktag(0), Var_247, 6) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_247, 7) = ((MR_Box) ((MR_Integer) 0));
              }
              TypeInfo_185_261 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
              Var_248 = mercury__map__init_0_f_0(TypeCtorInfo_181_260, TypeInfo_185_261);
              TypeInfo_186_262 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
              mercury__list__foldl_4_p_0(TypeCtorInfo_181_260, TypeInfo_186_262, Var_247, BoundVars_244, ((MR_Box) (Var_248)), &conv25_ProductionUseMap_46);
              ProductionUseMap_46 = ((MR_Word) conv25_ProductionUseMap_46);
              Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
              Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
              Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
              Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
              ConsumedVars_245 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_260, Var_250);
              {
                Var_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_251, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_251, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_10));
                MR_hl_field(MR_mktag(0), Var_251, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_251, 3) = ((MR_Box) (Goal_9));
                MR_hl_field(MR_mktag(0), Var_251, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_251, 5) = ((MR_Box) (Cost_21));
                MR_hl_field(MR_mktag(0), Var_251, 6) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_251, 7) = ((MR_Box) ((MR_Integer) 1));
              }
              Var_252 = mercury__map__init_0_f_0(TypeCtorInfo_181_260, TypeInfo_185_261);
              mercury__list__foldl_4_p_0(TypeCtorInfo_181_260, TypeInfo_186_262, Var_251, ConsumedVars_245, ((MR_Box) (Var_252)), &conv27_ConsumptionUseMap_48);
              ConsumptionUseMap_48 = ((MR_Word) conv27_ConsumptionUseMap_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_181_291;
              MR_Word TypeInfo_185_292;
              MR_Word TypeInfo_186_293;
              MR_Word SubGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
              MR_Word SubRevGoalPath_41;
              MR_Word DetailSubGoal_42;
              MR_Word Var_71;
              MR_Word BoundVars_275;
              MR_Word ConsumedVars_276;
              MR_Word Var_277;
              MR_Word Var_278;
              MR_Word Var_279;
              MR_Word Var_281;
              MR_Word Var_282;
              MR_Word Var_283;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_263;
              MR_Word Var_264;
              MR_Word Var_265;
              MR_Box conv29_ProductionUseMap_46;
              MR_Word Var_269;
              MR_Word Var_270;
              MR_Word Var_271;
              MR_Box conv31_ConsumptionUseMap_48;

              {
                SubRevGoalPath_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SubRevGoalPath_41, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), SubRevGoalPath_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_7, SubRevGoalPath_41, SubGoal_40, &DetailSubGoal_42, STATE_VARIABLE_Messages_0_54, STATE_VARIABLE_Messages_55);
              Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailSubGoal_42, (MR_Integer) 0)));
              Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailSubGoal_42, (MR_Integer) 1)));
              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailSubGoal_42, (MR_Integer) 2)));
              Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0)));
              Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 1)));
              Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 2)));
              Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 3)));
              Cost_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 4)));
              Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 5)));
              Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 6)));
              Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 7)));
              {
                DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 1) = ((MR_Box) (DetailSubGoal_42));
              }
              PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              TypeCtorInfo_181_291 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
              Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
              Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
              Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
              BoundVars_275 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_291, Var_277);
              {
                Var_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_278, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_278, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_11));
                MR_hl_field(MR_mktag(0), Var_278, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_278, 3) = ((MR_Box) (Goal_9));
                MR_hl_field(MR_mktag(0), Var_278, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_278, 5) = ((MR_Box) (Cost_21));
                MR_hl_field(MR_mktag(0), Var_278, 6) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_278, 7) = ((MR_Box) ((MR_Integer) 0));
              }
              TypeInfo_185_292 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
              Var_279 = mercury__map__init_0_f_0(TypeCtorInfo_181_291, TypeInfo_185_292);
              TypeInfo_186_293 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
              mercury__list__foldl_4_p_0(TypeCtorInfo_181_291, TypeInfo_186_293, Var_278, BoundVars_275, ((MR_Box) (Var_279)), &conv29_ProductionUseMap_46);
              ProductionUseMap_46 = ((MR_Word) conv29_ProductionUseMap_46);
              Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
              Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
              Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
              Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
              ConsumedVars_276 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_291, Var_281);
              {
                Var_282 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_282, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_282, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_12));
                MR_hl_field(MR_mktag(0), Var_282, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_282, 3) = ((MR_Box) (Goal_9));
                MR_hl_field(MR_mktag(0), Var_282, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_282, 5) = ((MR_Box) (Cost_21));
                MR_hl_field(MR_mktag(0), Var_282, 6) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_282, 7) = ((MR_Box) ((MR_Integer) 1));
              }
              Var_283 = mercury__map__init_0_f_0(TypeCtorInfo_181_291, TypeInfo_185_292);
              mercury__list__foldl_4_p_0(TypeCtorInfo_181_291, TypeInfo_186_293, Var_282, ConsumedVars_276, ((MR_Box) (Var_283)), &conv31_ConsumptionUseMap_48);
              ConsumptionUseMap_48 = ((MR_Word) conv31_ConsumptionUseMap_48);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_181_322;
              MR_Word TypeInfo_185_323;
              MR_Word TypeInfo_186_324;
              MR_Word MaybeCut_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
              MR_Word Var_66;
              MR_Word Var_68;
              MR_Word SubGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
              MR_Word SubRevGoalPath_96;
              MR_Word DetailSubGoal_97;
              MR_Word BoundVars_306;
              MR_Word ConsumedVars_307;
              MR_Word Var_308;
              MR_Word Var_309;
              MR_Word Var_310;
              MR_Word Var_312;
              MR_Word Var_313;
              MR_Word Var_314;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_294;
              MR_Word Var_295;
              MR_Word Var_296;
              MR_Box conv33_ProductionUseMap_46;
              MR_Word Var_300;
              MR_Word Var_301;
              MR_Word Var_302;
              MR_Box conv35_ConsumptionUseMap_48;

              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (MaybeCut_43));
              }
              {
                SubRevGoalPath_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SubRevGoalPath_96, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), SubRevGoalPath_96, 1) = ((MR_Box) (Var_66));
              }
              mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_7, SubRevGoalPath_96, SubGoal_95, &DetailSubGoal_97, STATE_VARIABLE_Messages_0_54, STATE_VARIABLE_Messages_55);
              Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailSubGoal_97, (MR_Integer) 0)));
              Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailSubGoal_97, (MR_Integer) 1)));
              Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailSubGoal_97, (MR_Integer) 2)));
              Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
              Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
              Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 2)));
              Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 3)));
              Cost_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 4)));
              Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 5)));
              Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 6)));
              Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 7)));
              {
                DetailGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 1) = ((MR_Box) (DetailSubGoal_97));
                MR_hl_field(MR_mktag(3), DetailGoalExpr_22, 2) = ((MR_Box) (MaybeCut_43));
              }
              PardGoalType_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              TypeCtorInfo_181_322 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
              Var_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
              Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
              Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
              BoundVars_306 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_322, Var_308);
              {
                Var_309 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_309, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_309, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_13));
                MR_hl_field(MR_mktag(0), Var_309, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_309, 3) = ((MR_Box) (Goal_9));
                MR_hl_field(MR_mktag(0), Var_309, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_309, 5) = ((MR_Box) (Cost_21));
                MR_hl_field(MR_mktag(0), Var_309, 6) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_309, 7) = ((MR_Box) ((MR_Integer) 0));
              }
              TypeInfo_185_323 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
              Var_310 = mercury__map__init_0_f_0(TypeCtorInfo_181_322, TypeInfo_185_323);
              TypeInfo_186_324 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
              mercury__list__foldl_4_p_0(TypeCtorInfo_181_322, TypeInfo_186_324, Var_309, BoundVars_306, ((MR_Box) (Var_310)), &conv33_ProductionUseMap_46);
              ProductionUseMap_46 = ((MR_Word) conv33_ProductionUseMap_46);
              Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
              Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
              Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
              Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
              ConsumedVars_307 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_181_322, Var_312);
              {
                Var_313 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_313, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_313, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_14));
                MR_hl_field(MR_mktag(0), Var_313, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_313, 3) = ((MR_Box) (Goal_9));
                MR_hl_field(MR_mktag(0), Var_313, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_313, 5) = ((MR_Box) (Cost_21));
                MR_hl_field(MR_mktag(0), Var_313, 6) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_313, 7) = ((MR_Box) ((MR_Integer) 1));
              }
              Var_314 = mercury__map__init_0_f_0(TypeCtorInfo_181_322, TypeInfo_185_323);
              mercury__list__foldl_4_p_0(TypeCtorInfo_181_322, TypeInfo_186_324, Var_313, ConsumedVars_307, ((MR_Box) (Var_314)), &conv35_ConsumptionUseMap_48);
              ConsumptionUseMap_48 = ((MR_Word) conv35_ConsumptionUseMap_48);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_193_193;
              MR_Word TypeInfo_194_194;
              MR_Word TypeInfo_195_195;
              MR_Word Messages_11;
              MR_Word AtomicGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4)));
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word BoundVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
              MR_Word ConsumedVars_99;
              MR_String Context_49 = ((MR_String) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
              MR_Integer Line_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
              MR_Box conv3_ProductionUseMap_46;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Box conv5_ConsumptionUseMap_48;

              DetailGoalExpr_22 = (MR_Word) GoalExpr_12;
              mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0(Info_7, RevGoalPath_8, AtomicGoal_51, InstMapInfo_15, &PardGoalType_44, &Messages_11);
              mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_p_0(Info_7, RevGoalPath_8, Coverage_16, AtomicGoal_51, &Cost_21);
              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (AtomicGoal_51));
                MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_58, 5) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_58, 6) = ((MR_Box) ((MR_Integer) 0));
              }
              TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              TypeInfo_194_194 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[10];
              Var_59 = mercury__map__init_0_f_0(TypeCtorInfo_193_193, TypeInfo_194_194);
              TypeInfo_195_195 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[1];
              mercury__list__foldl_4_p_0(TypeCtorInfo_193_193, TypeInfo_195_195, Var_58, BoundVars_98, ((MR_Box) (Var_59)), &conv3_ProductionUseMap_46);
              ProductionUseMap_46 = ((MR_Word) conv3_ProductionUseMap_46);
              Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
              Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
              Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
              Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
              ConsumedVars_99 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_193_193, Var_61);
              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (AtomicGoal_51));
                MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_62, 6) = ((MR_Box) ((MR_Integer) 1));
              }
              Var_63 = mercury__map__init_0_f_0(TypeCtorInfo_193_193, TypeInfo_194_194);
              mercury__list__foldl_4_p_0(TypeCtorInfo_193_193, TypeInfo_195_195, Var_62, ConsumedVars_99, ((MR_Box) (Var_63)), &conv5_ConsumptionUseMap_48);
              ConsumptionUseMap_48 = ((MR_Word) conv5_ConsumptionUseMap_48);
              *STATE_VARIABLE_Messages_55 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, STATE_VARIABLE_Messages_0_54, Messages_11);
            }
            break;
        }
        break;
    }
    succeeded = mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, Goal_9);
    if (succeeded)
      succeeded = mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_p_0(Info_7, Cost_21);
    if (succeeded)
      CostAboveThreshold_52 = (MR_Integer) 0;
    else
      CostAboveThreshold_52 = (MR_Integer) 1;
    {
      PardGoalAnnotation_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 0) = ((MR_Box) (PardGoalType_44));
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 1) = ((MR_Box) (InstMapInfo_15));
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 2) = ((MR_Box) (RevGoalPath_8));
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 3) = ((MR_Box) (Coverage_16));
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 4) = ((MR_Box) (Cost_21));
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 5) = ((MR_Box) (CostAboveThreshold_52));
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 6) = ((MR_Box) (ProductionUseMap_46));
      MR_hl_field(MR_mktag(0), PardGoalAnnotation_53, 7) = ((MR_Box) (ConsumptionUseMap_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *DetailGoal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DetailGoalExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Detism_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PardGoalAnnotation_53));
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_cost_above_par_threshold_2_p_0(
  MR_Word Info_3,
  MR_Word Cost_4)
{
  {
    MR_bool succeeded;
    MR_Float PercallCost_5;
    MR_Integer Var_6;
    MR_Float Var_8;
    MR_Integer Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Float Var_22;
    MR_Word Var_23;
    MR_Integer Var_24;
    MR_Integer Var_25;
    MR_Integer Var_26;
    MR_Integer Var_27;
    MR_Integer Var_28;
    MR_Integer Var_29;
    MR_Integer Var_30;
    MR_Float Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    Var_6 = measurements__goal_cost_get_calls_1_f_0(Cost_4);
    succeeded = (Var_6 > (MR_Integer) 0);
    if (succeeded)
    {
      PercallCost_5 = measurements__goal_cost_get_percall_1_f_0(Cost_4);
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 8)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 9)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 10)));
      Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 11)));
      Var_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
      Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
      Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
      Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));
      Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)));
      Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6)));
      Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 7)));
      Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 8)));
      Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 9)));
      Var_31 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 10)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 11)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 12)));
      Var_8 = mercury__float__float_1_f_0(Var_9);
      succeeded = (PercallCost_5 > Var_8);
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_cost_5_p_0(
  MR_Word Info_6,
  MR_Word RevGoalPath_7,
  MR_Word Coverage_8,
  MR_Word AtomicGoal_9,
  MR_Word * Cost_10)
{
  {
    MR_bool succeeded;
    MR_Word IsCall_11;

    program_representation_utils__atomic_goal_is_call_2_p_0(AtomicGoal_9, &IsCall_11);
    if ((IsCall_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Calls_12;

      coverage__get_coverage_before_det_2_p_0(Coverage_8, &Calls_12);
      *Cost_10 = measurements__atomic_goal_cost_1_f_0(Calls_12);
    }
    else
    {
      MR_Word TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
      MR_Word CallSite_14;
      MR_Word CSCost_16;
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)));
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 8)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 9)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 10)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 11)));
      MR_Box conv0_CallSite_14;
      MR_Word RecCost_15;
      MR_Word TypeCtorInfo_58_58;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Box conv1_RecCost_15;

      mercury__map__lookup_3_p_0(TypeCtorInfo_56_56, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[11], Var_17, ((MR_Box) (RevGoalPath_7)), &conv0_CallSite_14);
      CallSite_14 = ((MR_Word) conv0_CallSite_14);
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 8)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 9)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 10)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 11)));
      succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(Var_18, CallSite_14);
      if (succeeded)
      {
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
        Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
        Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)));
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 8)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 9)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 10)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 11)));
        TypeCtorInfo_58_58 = (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0;
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_56_56, TypeCtorInfo_58_58, Var_19, ((MR_Box) (RevGoalPath_7)), &conv1_RecCost_15);
        if (succeeded)
        {
          RecCost_15 = ((MR_Word) conv1_RecCost_15);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        CSCost_16 = RecCost_15;
      else
      {
        MR_Integer Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        CSCost_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallSite_14, (MR_Integer) 0)));
        Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallSite_14, (MR_Integer) 1)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallSite_14, (MR_Integer) 2)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallSite_14, (MR_Integer) 3)));
      }
      *Cost_10 = measurements__call_goal_cost_1_f_0(CSCost_16);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_VarAndMode_10;
    MR_Integer conv1_STATE_VARIABLE_ArgNum_14;

    mdprof_fb__automatic_parallelism__autopar_search_goals__compute_var_modes_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), &conv2_VarAndMode_10, ((MR_Integer) wrapper_arg_3), &conv1_STATE_VARIABLE_ArgNum_14);
    *wrapper_arg_2 = ((MR_Box) (conv2_VarAndMode_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ArgNum_14));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0(
  MR_Word Info_7,
  MR_Word RevGoalPath_8,
  MR_Word AtomicGoal_9,
  MR_Word InstMapInfo_10,
  MR_Word * GoalType_11,
  MR_Word * STATE_VARIABLE_Messages_20)
{
  {
    MR_Word InstMapBefore_13;
    MR_Word InstMapAfter_14;
    MR_Word IsCall_15;
    MR_Word Var_26;
    MR_Word Var_27;

    *STATE_VARIABLE_Messages_20 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
    InstMapBefore_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_10, (MR_Integer) 0)));
    InstMapAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_10, (MR_Integer) 1)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_10, (MR_Integer) 2)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_10, (MR_Integer) 3)));
    program_representation_utils__atomic_goal_is_call_2_p_0(AtomicGoal_9, &IsCall_15);
    if ((IsCall_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *GoalType_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtorInfo_49_49;
      MR_Word Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), IsCall_15, (MR_Integer) 0)));
      MR_Word CallSite_17;
      MR_Word VarsAndModes_18;
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
      MR_Word Var_23;
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 11)));
      MR_Box conv0_CallSite_17;
      MR_Integer Var_19;
      MR_Box conv3_Var_19;

      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[11], Var_22, ((MR_Box) (RevGoalPath_8)), &conv0_CallSite_17);
      CallSite_17 = ((MR_Word) conv0_CallSite_17);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__atomic_pard_goal_type_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (InstMapBefore_13));
        MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (InstMapAfter_14));
      }
      TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__list__map_foldl_5_p_0(TypeCtorInfo_49_49, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0, TypeCtorInfo_49_49, Var_23, Args_16, &VarsAndModes_18, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_19);
      Var_19 = ((MR_Integer) conv3_Var_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *GoalType_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarsAndModes_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CallSite_17));
      }
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__can_parallelise_goal_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Goal_2)
{
  {
    MR_bool succeeded;
    MR_Word Detism_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 1)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 0)));
    MR_Box Var_5 = (MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 2));

    switch (Detism_3) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 5:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdprof_fb__automatic_parallelism__autopar_search_goals__single_context_makes_goal_costly_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevSingleCands_0_8,
  MR_Word * STATE_VARIABLE_RevSingleCands_9,
  MR_Word STATE_VARIABLE_CandidatesBelow_0_10,
  MR_Word * STATE_VARIABLE_CandidatesBelow_11,
  MR_Word STATE_VARIABLE_Pushes_0_12,
  MR_Word * STATE_VARIABLE_Pushes_13,
  MR_Word STATE_VARIABLE_MessagesBelow_0_14,
  MR_Word * STATE_VARIABLE_MessagesBelow_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_MessagesBelow_15 = STATE_VARIABLE_MessagesBelow_0_14;
      *STATE_VARIABLE_Pushes_13 = STATE_VARIABLE_Pushes_0_12;
      *STATE_VARIABLE_CandidatesBelow_11 = STATE_VARIABLE_CandidatesBelow_0_10;
      *STATE_VARIABLE_RevSingleCands_9 = STATE_VARIABLE_RevSingleCands_0_8;
      *HeadVar__7_7 = HeadVar__6_6;
    }
    else
    {
      MR_Word TypeInfo_91_91;
      MR_Word Conj0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Conjs0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Conj_38;
      MR_Word Conjs_39;
      MR_Word Pushes_45;
      MR_Word RevConjGoalPath_47;
      MR_Word Candidates_48;
      MR_Word SinglesCord_49;
      MR_Word Messages_50;
      MR_Word Singles_51;
      MR_Word Costly_52;
      MR_Word SinglesSoFar1_53;
      MR_Word Var_73;
      MR_Word STATE_VARIABLE_CandidatesBelow_74_74;
      MR_Word STATE_VARIABLE_Pushes_75_75;
      MR_Word STATE_VARIABLE_MessagesBelow_76_76;
      MR_Word Var_77;
      MR_Word STATE_VARIABLE_RevSingleCands_81_81;
      MR_Integer Var_83;
      MR_Word Var_89;
      MR_Word Var_90;

      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (HeadVar__5_5));
      }
      {
        RevConjGoalPath_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RevConjGoalPath_47, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(1), RevConjGoalPath_47, 1) = ((MR_Box) (Var_73));
      }
      mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(HeadVar__1_1, RevConjGoalPath_47, Conj0_36, &Conj_38, &Candidates_48, &Pushes_45, &SinglesCord_49, &Messages_50);
      TypeInfo_91_91 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
      Singles_51 = mercury__cord__list_1_f_0(TypeInfo_91_91, SinglesCord_49);
      STATE_VARIABLE_CandidatesBelow_74_74 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1], STATE_VARIABLE_CandidatesBelow_0_10, Candidates_48);
      STATE_VARIABLE_Pushes_75_75 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, STATE_VARIABLE_Pushes_0_12, Pushes_45);
      STATE_VARIABLE_MessagesBelow_76_76 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, STATE_VARIABLE_MessagesBelow_0_14, Messages_50);
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Conj_38, (MR_Integer) 0)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Conj_38, (MR_Integer) 1)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Conj_38, (MR_Integer) 2)));
      mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(Var_77, &Costly_52);
      switch (Costly_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_82;

            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (HeadVar__5_5));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (HeadVar__6_6));
            }
            {
              STATE_VARIABLE_RevSingleCands_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSingleCands_81_81, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSingleCands_81_81, 1) = ((MR_Box) (STATE_VARIABLE_RevSingleCands_0_8));
            }
            SinglesSoFar1_53 = Singles_51;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word SinglesSoFarMakeConjCostly_54;
            MR_Word Var_78;

            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0_1));
              MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (HeadVar__1_1));
              MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (Conj_38));
            }
            mercury__list__filter_3_p_0(TypeInfo_91_91, Var_78, HeadVar__6_6, &SinglesSoFarMakeConjCostly_54);
            if ((SinglesSoFarMakeConjCostly_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_RevSingleCands_81_81 = STATE_VARIABLE_RevSingleCands_0_8;
            else
            {
              MR_Word Var_80;

              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (HeadVar__5_5));
                MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (SinglesSoFarMakeConjCostly_54));
              }
              {
                STATE_VARIABLE_RevSingleCands_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSingleCands_81_81, 0) = ((MR_Box) (Var_80));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSingleCands_81_81, 1) = ((MR_Box) (STATE_VARIABLE_RevSingleCands_0_8));
              }
            }
            if ((HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((Singles_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                SinglesSoFar1_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                SinglesSoFar1_53 = Singles_51;
            else
            if ((Singles_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              SinglesSoFar1_53 = HeadVar__6_6;
            else
              SinglesSoFar1_53 = Singles_51;
          }
          break;
      }
      Var_83 = (HeadVar__5_5 + (MR_Integer) 1);
      mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(HeadVar__1_1, HeadVar__2_2, Conjs0_37, &Conjs_39, Var_83, SinglesSoFar1_53, HeadVar__7_7, STATE_VARIABLE_RevSingleCands_81_81, STATE_VARIABLE_RevSingleCands_9, STATE_VARIABLE_CandidatesBelow_74_74, STATE_VARIABLE_CandidatesBelow_11, STATE_VARIABLE_Pushes_75_75, STATE_VARIABLE_Pushes_13, STATE_VARIABLE_MessagesBelow_76_76, STATE_VARIABLE_MessagesBelow_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Conj_38));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Conjs_39));
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_p_0(
  MR_Word Info_13,
  MR_Word RevGoalPath_14,
  MR_Word STATE_VARIABLE_Cond_0_37,
  MR_Word * STATE_VARIABLE_Cond_38,
  MR_Word STATE_VARIABLE_Then_0_39,
  MR_Word * STATE_VARIABLE_Then_40,
  MR_Word STATE_VARIABLE_Else_0_41,
  MR_Word * STATE_VARIABLE_Else_42,
  MR_Word * Candidates_18,
  MR_Word * Pushes_19,
  MR_Word * Singles_20,
  MR_Word * Messages_21)
{
  {
    MR_Word TypeInfo_52_52;
    MR_Word TypeCtorInfo_53_53;
    MR_Word TypeCtorInfo_55_55;
    MR_Word RevCondGoalPath_22;
    MR_Word RevThenGoalPath_23;
    MR_Word RevElseGoalPath_24;
    MR_Word CondCandidates_25;
    MR_Word CondPushes_26;
    MR_Word CondMessages_28;
    MR_Word ThenCandidates_29;
    MR_Word ThenPushes_30;
    MR_Word ThenSingles_31;
    MR_Word ThenMessages_32;
    MR_Word ElseCandidates_33;
    MR_Word ElsePushes_34;
    MR_Word ElseSingles_35;
    MR_Word ElseMessages_36;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word _CondSingles_27;

    {
      RevCondGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevCondGoalPath_22, 0) = ((MR_Box) (RevGoalPath_14));
      MR_hl_field(MR_mktag(1), RevCondGoalPath_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      RevThenGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevThenGoalPath_23, 0) = ((MR_Box) (RevGoalPath_14));
      MR_hl_field(MR_mktag(1), RevThenGoalPath_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    {
      RevElseGoalPath_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevElseGoalPath_24, 0) = ((MR_Box) (RevGoalPath_14));
      MR_hl_field(MR_mktag(1), RevElseGoalPath_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_13, RevCondGoalPath_22, STATE_VARIABLE_Cond_0_37, STATE_VARIABLE_Cond_38, &CondCandidates_25, &CondPushes_26, &_CondSingles_27, &CondMessages_28);
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_13, RevThenGoalPath_23, STATE_VARIABLE_Then_0_39, STATE_VARIABLE_Then_40, &ThenCandidates_29, &ThenPushes_30, &ThenSingles_31, &ThenMessages_32);
    mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_13, RevElseGoalPath_24, STATE_VARIABLE_Else_0_41, STATE_VARIABLE_Else_42, &ElseCandidates_33, &ElsePushes_34, &ElseSingles_35, &ElseMessages_36);
    TypeInfo_52_52 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1];
    Var_49 = mercury__cord__f_43_43_2_f_0(TypeInfo_52_52, ThenCandidates_29, ElseCandidates_33);
    *Candidates_18 = mercury__cord__f_43_43_2_f_0(TypeInfo_52_52, CondCandidates_25, Var_49);
    TypeCtorInfo_53_53 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
    Var_50 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_53_53, ThenPushes_30, ElsePushes_34);
    *Pushes_19 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_53_53, CondPushes_26, Var_50);
    *Singles_20 = mercury__cord__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], ThenSingles_31, ElseSingles_35);
    TypeCtorInfo_55_55 = (MR_Word) &message__message__type_ctor_info_message_0;
    Var_51 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_55_55, ThenMessages_32, ElseMessages_36);
    *Messages_21 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_55_55, CondMessages_28, Var_51);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_STATE_VARIABLE_Case_29;
    MR_Integer conv15_STATE_VARIABLE_CaseNum_31;
    MR_Word conv14_STATE_VARIABLE_Candidates_33;
    MR_Word conv13_STATE_VARIABLE_Pushes_35;
    MR_Word conv12_STATE_VARIABLE_Singles_37;
    MR_Word conv11_STATE_VARIABLE_Messages_39;

    mdprof_fb__automatic_parallelism__autopar_search_goals__switch_case_get_conjunctions_worth_parallelising_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv16_STATE_VARIABLE_Case_29, ((MR_Integer) wrapper_arg_3), &conv15_STATE_VARIABLE_CaseNum_31, ((MR_Word) wrapper_arg_5), &conv14_STATE_VARIABLE_Candidates_33, ((MR_Word) wrapper_arg_7), &conv13_STATE_VARIABLE_Pushes_35, ((MR_Word) wrapper_arg_9), &conv12_STATE_VARIABLE_Singles_37, ((MR_Word) wrapper_arg_11), &conv11_STATE_VARIABLE_Messages_39);
    *wrapper_arg_2 = ((MR_Box) (conv16_STATE_VARIABLE_Case_29));
    *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_CaseNum_31));
    *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_Candidates_33));
    *wrapper_arg_8 = ((MR_Box) (conv13_STATE_VARIABLE_Pushes_35));
    *wrapper_arg_10 = ((MR_Box) (conv12_STATE_VARIABLE_Singles_37));
    *wrapper_arg_12 = ((MR_Box) (conv11_STATE_VARIABLE_Messages_39));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Disj_25;
    MR_Integer conv4_STATE_VARIABLE_DisjNum_27;
    MR_Word conv3_STATE_VARIABLE_Candidates_29;
    MR_Word conv2_STATE_VARIABLE_Pushes_31;
    MR_Word conv1_STATE_VARIABLE_Singles_33;
    MR_Word conv0_STATE_VARIABLE_Messages_35;

    mdprof_fb__automatic_parallelism__autopar_search_goals__disj_get_conjunctions_worth_parallelising_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv5_STATE_VARIABLE_Disj_25, ((MR_Integer) wrapper_arg_3), &conv4_STATE_VARIABLE_DisjNum_27, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Candidates_29, ((MR_Word) wrapper_arg_7), &conv2_STATE_VARIABLE_Pushes_31, ((MR_Word) wrapper_arg_9), &conv1_STATE_VARIABLE_Singles_33, ((MR_Word) wrapper_arg_11), &conv0_STATE_VARIABLE_Messages_35);
    *wrapper_arg_2 = ((MR_Box) (conv5_STATE_VARIABLE_Disj_25));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_DisjNum_27));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Candidates_29));
    *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_Pushes_31));
    *wrapper_arg_10 = ((MR_Box) (conv1_STATE_VARIABLE_Singles_33));
    *wrapper_arg_12 = ((MR_Box) (conv0_STATE_VARIABLE_Messages_35));
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(
  MR_Word Info_9,
  MR_Word RevGoalPath_10,
  MR_Word STATE_VARIABLE_Goal_0_70,
  MR_Word * STATE_VARIABLE_Goal_71,
  MR_Word * Candidates_12,
  MR_Word * Pushes_13,
  MR_Word * Singles_14,
  MR_Word * Messages_15)
{
  {
    MR_Word GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_70, (MR_Integer) 0)));
    MR_Word DetismRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_70, (MR_Integer) 1)));
    MR_Word Annotation0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_70, (MR_Integer) 2)));
    MR_Word Coverage_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
    MR_Integer Calls_20;
    MR_Word GoalExpr_28;
    MR_Word Annotation_64;
    MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
    MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
    MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
    MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
    MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));

    coverage__get_coverage_before_det_2_p_0(Coverage_19, &Calls_20);
    switch (MR_tag((MR_Word) GoalExpr0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_184_184 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1];
          MR_Word TypeCtorInfo_185_185;
          MR_Word TypeCtorInfo_186_186;
          MR_Word Conjs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalExpr0_16, (MR_Integer) 0)));
          MR_Word Conjs_22;
          MR_Word SinglesSoFar_23;
          MR_Word RevSingleCands_24;
          MR_Word CandidatesBelow_25;
          MR_Word PushesBelow_26;
          MR_Word MessagesBelow_27;
          MR_Word SingleCands_29;
          MR_Word Cost_30;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_180;

          Var_91 = mercury__cord__empty_0_f_0(TypeInfo_184_184);
          TypeCtorInfo_185_185 = (MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
          Var_92 = mercury__cord__empty_0_f_0(TypeCtorInfo_185_185);
          TypeCtorInfo_186_186 = (MR_Word) &message__message__type_ctor_info_message_0;
          Var_93 = mercury__cord__empty_0_f_0(TypeCtorInfo_186_186);
          mdprof_fb__automatic_parallelism__autopar_search_goals__conj_get_conjunctions_worth_parallelising_15_p_0(Info_9, RevGoalPath_10, Conjs0_21, &Conjs_22, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &SinglesSoFar_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevSingleCands_24, Var_91, &CandidatesBelow_25, Var_92, &PushesBelow_26, Var_93, &MessagesBelow_27);
          {
            GoalExpr_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GoalExpr_28, 0) = ((MR_Box) (Conjs_22));
          }
          mercury__list__reverse_2_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_2[0], RevSingleCands_24, &SingleCands_29);
          if ((SingleCands_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_117;
            MR_Word Var_118;

            *Candidates_12 = CandidatesBelow_25;
            *Pushes_13 = PushesBelow_26;
            *Singles_14 = mercury__cord__from_list_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], SinglesSoFar_23);
            *Messages_15 = MessagesBelow_27;
            Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
            Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
            Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
            Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
            Cost_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
            Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
            Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
            Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
          }
          else
          {
            MR_Word Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), SingleCands_29, (MR_Integer) 1)));
            MR_Word Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(1), SingleCands_29, (MR_Integer) 0)));

            if ((Var_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Integer CostlyIndex_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_375, (MR_Integer) 0)));
              MR_Word SinglesBefore_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_375, (MR_Integer) 1)));
              MR_Word MessagesThisLevel_33;
              MR_Word CandidatesThisLevel_34;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_125;

              mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(Info_9, RevGoalPath_10, Conjs_22, CostlyIndex_31, SinglesBefore_32, &MessagesThisLevel_33, &CandidatesThisLevel_34);
              if ((CandidatesThisLevel_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *Candidates_12 = CandidatesBelow_25;
                *Pushes_13 = PushesBelow_26;
                *Singles_14 = mercury__cord__from_list_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], SinglesSoFar_23);
              }
              else
              {
                MR_Word FirstCandidate_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), CandidatesThisLevel_34, (MR_Integer) 0)));
                MR_Word LaterCandidates_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), CandidatesThisLevel_34, (MR_Integer) 1)));
                MR_Word PushThisLevel_37;
                MR_Word Var_99;

                mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(FirstCandidate_35, LaterCandidates_36, &PushThisLevel_37);
                Var_99 = mercury__cord__from_list_1_f_0(TypeInfo_184_184, CandidatesThisLevel_34);
                *Candidates_12 = mercury__cord__f_43_43_2_f_0(TypeInfo_184_184, CandidatesBelow_25, Var_99);
                *Pushes_13 = mercury__cord__snoc_2_f_0(TypeCtorInfo_185_185, PushesBelow_26, ((MR_Box) (PushThisLevel_37)));
                *Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
              }
              *Messages_15 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_186_186, MessagesBelow_27, MessagesThisLevel_33);
              Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
              Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
              Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
              Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
              Cost_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
              Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
              Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
              Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
            }
            else
            {
              MR_Word CostlyIndexes_41;
              MR_Word MaybeCandidate_42;
              MR_Word MessagesThisLevel_101;

              mercury__assoc_list__keys_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[2], SingleCands_29, &CostlyIndexes_41);
              mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_p_0(Info_9, RevGoalPath_10, Conjs_22, CostlyIndexes_41, &MessagesThisLevel_101, &MaybeCandidate_42);
              *Pushes_13 = PushesBelow_26;
              *Messages_15 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_186_186, MessagesBelow_27, MessagesThisLevel_101);
              if ((MaybeCandidate_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word Var_151;
                MR_Word Var_152;
                MR_Word Var_153;
                MR_Word Var_154;
                MR_Word Var_155;
                MR_Word Var_156;
                MR_Word Var_157;

                *Candidates_12 = CandidatesBelow_25;
                *Singles_14 = mercury__cord__from_list_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], SinglesSoFar_23);
                Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
                Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
                Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
                Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
                Cost_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
                Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
                Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
                Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
              }
              else
              {
                MR_Word Candidate_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCandidate_42, (MR_Integer) 0)));
                MR_Word ExecMetrics_44;
                MR_Integer Var_95;
                MR_Float Var_136;
                MR_String Var_126;
                MR_Word Var_127;
                MR_Integer Var_128;
                MR_Word Var_129;
                MR_Word Var_130;
                MR_Float Var_131;
                MR_Word Var_132;
                MR_Word Var_133;
                MR_Float Var_134;
                MR_Float Var_135;
                MR_Float Var_137;
                MR_Float Var_138;
                MR_Float Var_139;
                MR_Float Var_140;
                MR_Float Var_141;
                MR_Float Var_142;

                *Candidates_12 = mercury__cord__cons_2_f_0(TypeInfo_184_184, ((MR_Box) (Candidate_43)), CandidatesBelow_25);
                Var_126 = ((MR_String) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 0)));
                Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 1)));
                Var_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 2)));
                Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 3)));
                Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 4)));
                Var_131 = MR_unbox_float((MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 5)));
                Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 6)));
                Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 7)));
                Var_134 = MR_unbox_float((MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 8)));
                ExecMetrics_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_43, (MR_Integer) 9)));
                Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 0)));
                Var_135 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 1)));
                Var_136 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 2)));
                Var_137 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 3)));
                Var_138 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 4)));
                Var_139 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 5)));
                Var_140 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 6)));
                Var_141 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 7)));
                Var_142 = MR_unbox_float((MR_hl_field(MR_mktag(0), ExecMetrics_44, (MR_Integer) 8)));
                Cost_30 = measurements__call_goal_cost_2_f_0(Var_95, Var_136);
                *Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
              }
            }
          }
          Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
          Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
          Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
          Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
          Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
          Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
          Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
          Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
          {
            Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Annotation_64, 0) = ((MR_Box) (Var_176));
            MR_hl_field(MR_mktag(0), Annotation_64, 1) = ((MR_Box) (Var_177));
            MR_hl_field(MR_mktag(0), Annotation_64, 2) = ((MR_Box) (Var_178));
            MR_hl_field(MR_mktag(0), Annotation_64, 3) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(0), Annotation_64, 4) = ((MR_Box) (Cost_30));
            MR_hl_field(MR_mktag(0), Annotation_64, 5) = ((MR_Box) (Var_181));
            MR_hl_field(MR_mktag(0), Annotation_64, 6) = ((MR_Box) (Var_182));
            MR_hl_field(MR_mktag(0), Annotation_64, 7) = ((MR_Box) (Var_183));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_209_209;
          MR_Word Disjs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 0)));
          MR_Word Disjs_46;
          MR_Word Var_82;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Cost_261;
          MR_Integer Var_47;
          MR_Box conv10_Var_47;
          MR_Box conv9_Candidates_12;
          MR_Box conv8_Pushes_13;
          MR_Box conv7_Singles_14;
          MR_Box conv6_Messages_15;
          MR_Word Var_245;
          MR_Word Var_246;
          MR_Word Var_247;
          MR_Word Var_248;
          MR_Word Var_250;
          MR_Word Var_251;
          MR_Word Var_252;
          MR_Word Var_244;

          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Info_9));
            MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (RevGoalPath_10));
          }
          Var_84 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1]);
          Var_85 = mercury__cord__empty_0_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
          TypeInfo_209_209 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
          Var_86 = mercury__cord__empty_0_f_0(TypeInfo_209_209);
          Var_87 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
          mercury__list__map_foldl5_13_p_1(TypeInfo_209_209, TypeInfo_209_209, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[3], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[4], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[5], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], Var_82, Disjs0_45, &Disjs_46, ((MR_Box) ((MR_Integer) 1)), &conv10_Var_47, ((MR_Box) (Var_84)), &conv9_Candidates_12, ((MR_Box) (Var_85)), &conv8_Pushes_13, ((MR_Box) (Var_86)), &conv7_Singles_14, ((MR_Box) (Var_87)), &conv6_Messages_15);
          Var_47 = ((MR_Integer) conv10_Var_47);
          *Candidates_12 = ((MR_Word) conv9_Candidates_12);
          *Pushes_13 = ((MR_Word) conv8_Pushes_13);
          *Singles_14 = ((MR_Word) conv7_Singles_14);
          *Messages_15 = ((MR_Word) conv6_Messages_15);
          mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_4_p_0(DetismRep_17, Disjs_46, Calls_20, &Cost_261);
          {
            GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GoalExpr_28, 0) = ((MR_Box) (Disjs_46));
          }
          Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
          Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
          Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
          Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
          Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
          Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
          Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
          Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
          {
            Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Annotation_64, 0) = ((MR_Box) (Var_245));
            MR_hl_field(MR_mktag(0), Annotation_64, 1) = ((MR_Box) (Var_246));
            MR_hl_field(MR_mktag(0), Annotation_64, 2) = ((MR_Box) (Var_247));
            MR_hl_field(MR_mktag(0), Annotation_64, 3) = ((MR_Box) (Var_248));
            MR_hl_field(MR_mktag(0), Annotation_64, 4) = ((MR_Box) (Cost_261));
            MR_hl_field(MR_mktag(0), Annotation_64, 5) = ((MR_Box) (Var_250));
            MR_hl_field(MR_mktag(0), Annotation_64, 6) = ((MR_Box) (Var_251));
            MR_hl_field(MR_mktag(0), Annotation_64, 7) = ((MR_Box) (Var_252));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_232_232;
          MR_Integer Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 0)));
          MR_Word CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 1)));
          MR_Word Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 2)));
          MR_Word Cases_51;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Cost_365;
          MR_Integer Var_52;
          MR_Box conv21_Var_52;
          MR_Box conv20_Candidates_12;
          MR_Box conv19_Pushes_13;
          MR_Box conv18_Singles_14;
          MR_Box conv17_Messages_15;
          MR_Word Var_349;
          MR_Word Var_350;
          MR_Word Var_351;
          MR_Word Var_352;
          MR_Word Var_354;
          MR_Word Var_355;
          MR_Word Var_356;
          MR_Word Var_348;

          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Info_9));
            MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (RevGoalPath_10));
          }
          Var_78 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1]);
          Var_79 = mercury__cord__empty_0_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
          Var_80 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
          Var_81 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
          TypeInfo_232_232 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[7];
          mercury__list__map_foldl5_13_p_1(TypeInfo_232_232, TypeInfo_232_232, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[3], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[4], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[5], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[6], Var_76, Cases0_50, &Cases_51, ((MR_Box) ((MR_Integer) 1)), &conv21_Var_52, ((MR_Box) (Var_78)), &conv20_Candidates_12, ((MR_Box) (Var_79)), &conv19_Pushes_13, ((MR_Box) (Var_80)), &conv18_Singles_14, ((MR_Box) (Var_81)), &conv17_Messages_15);
          Var_52 = ((MR_Integer) conv21_Var_52);
          *Candidates_12 = ((MR_Word) conv20_Candidates_12);
          *Pushes_13 = ((MR_Word) conv19_Pushes_13);
          *Singles_14 = ((MR_Word) conv18_Singles_14);
          *Messages_15 = ((MR_Word) conv17_Messages_15);
          mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(Cases_51, Calls_20, &Cost_365);
          {
            GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GoalExpr_28, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(2), GoalExpr_28, 1) = ((MR_Box) (CanFail_49));
            MR_hl_field(MR_mktag(2), GoalExpr_28, 2) = ((MR_Box) (Cases_51));
          }
          Var_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
          Var_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
          Var_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
          Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
          Var_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
          Var_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
          Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
          Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
          {
            Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Annotation_64, 0) = ((MR_Box) (Var_349));
            MR_hl_field(MR_mktag(0), Annotation_64, 1) = ((MR_Box) (Var_350));
            MR_hl_field(MR_mktag(0), Annotation_64, 2) = ((MR_Box) (Var_351));
            MR_hl_field(MR_mktag(0), Annotation_64, 3) = ((MR_Box) (Var_352));
            MR_hl_field(MR_mktag(0), Annotation_64, 4) = ((MR_Box) (Cost_365));
            MR_hl_field(MR_mktag(0), Annotation_64, 5) = ((MR_Box) (Var_354));
            MR_hl_field(MR_mktag(0), Annotation_64, 6) = ((MR_Box) (Var_355));
            MR_hl_field(MR_mktag(0), Annotation_64, 7) = ((MR_Box) (Var_356));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1)));
              MR_Word Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2)));
              MR_Word Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3)));
              MR_Word Cond_56;
              MR_Word Then_57;
              MR_Word Else_58;
              MR_Word Cost_287;
              MR_Word Var_271;
              MR_Word Var_272;
              MR_Word Var_273;
              MR_Word Var_274;
              MR_Word Var_276;
              MR_Word Var_277;
              MR_Word Var_278;
              MR_Word Var_270;

              mdprof_fb__automatic_parallelism__autopar_search_goals__ite_get_conjunctions_worth_parallelising_12_p_0(Info_9, RevGoalPath_10, Cond0_53, &Cond_56, Then0_54, &Then_57, Else0_55, &Else_58, Candidates_12, Pushes_13, Singles_14, Messages_15);
              mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_p_0(Cond_56, Then_57, Else_58, &Cost_287);
              {
                GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 1) = ((MR_Box) (Cond_56));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 2) = ((MR_Box) (Then_57));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 3) = ((MR_Box) (Else_58));
              }
              Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
              Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
              Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
              Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
              Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
              Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
              Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
              Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
              {
                Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Annotation_64, 0) = ((MR_Box) (Var_271));
                MR_hl_field(MR_mktag(0), Annotation_64, 1) = ((MR_Box) (Var_272));
                MR_hl_field(MR_mktag(0), Annotation_64, 2) = ((MR_Box) (Var_273));
                MR_hl_field(MR_mktag(0), Annotation_64, 3) = ((MR_Box) (Var_274));
                MR_hl_field(MR_mktag(0), Annotation_64, 4) = ((MR_Box) (Cost_287));
                MR_hl_field(MR_mktag(0), Annotation_64, 5) = ((MR_Box) (Var_276));
                MR_hl_field(MR_mktag(0), Annotation_64, 6) = ((MR_Box) (Var_277));
                MR_hl_field(MR_mktag(0), Annotation_64, 7) = ((MR_Box) (Var_278));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_73;
              MR_Word SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1)));
              MR_Word RevSubGoalPath_103;
              MR_Word SubGoal_104;
              MR_Word Cost_313;
              MR_Word _Singles_63;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_169;
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_Word Var_173;
              MR_Word Var_174;
              MR_Word Var_175;
              MR_Word Var_297;
              MR_Word Var_298;
              MR_Word Var_299;
              MR_Word Var_300;
              MR_Word Var_302;
              MR_Word Var_303;
              MR_Word Var_304;
              MR_Word Var_296;

              {
                RevSubGoalPath_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_103, 0) = ((MR_Box) (RevGoalPath_10));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_9, RevSubGoalPath_103, SubGoal0_102, &SubGoal_104, Candidates_12, Pushes_13, &_Singles_63, Messages_15);
              *Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
              Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_104, (MR_Integer) 0)));
              Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_104, (MR_Integer) 1)));
              Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_104, (MR_Integer) 2)));
              Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 0)));
              Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 1)));
              Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 2)));
              Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 3)));
              Cost_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 4)));
              Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 5)));
              Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 6)));
              Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 7)));
              {
                GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 1) = ((MR_Box) (SubGoal_104));
              }
              Var_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
              Var_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
              Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
              Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
              Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
              Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
              Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
              Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
              {
                Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Annotation_64, 0) = ((MR_Box) (Var_297));
                MR_hl_field(MR_mktag(0), Annotation_64, 1) = ((MR_Box) (Var_298));
                MR_hl_field(MR_mktag(0), Annotation_64, 2) = ((MR_Box) (Var_299));
                MR_hl_field(MR_mktag(0), Annotation_64, 3) = ((MR_Box) (Var_300));
                MR_hl_field(MR_mktag(0), Annotation_64, 4) = ((MR_Box) (Cost_313));
                MR_hl_field(MR_mktag(0), Annotation_64, 5) = ((MR_Box) (Var_302));
                MR_hl_field(MR_mktag(0), Annotation_64, 6) = ((MR_Box) (Var_303));
                MR_hl_field(MR_mktag(0), Annotation_64, 7) = ((MR_Box) (Var_304));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1)));
              MR_Word MaybeCut_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2)));
              MR_Word RevSubGoalPath_61;
              MR_Word SubGoal_62;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Cost_339;
              MR_Word Var_158;
              MR_Word Var_159;
              MR_Word Var_160;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Word Var_323;
              MR_Word Var_324;
              MR_Word Var_325;
              MR_Word Var_326;
              MR_Word Var_328;
              MR_Word Var_329;
              MR_Word Var_330;
              MR_Word Var_322;

              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (MaybeCut_60));
              }
              {
                RevSubGoalPath_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_61, 0) = ((MR_Box) (RevGoalPath_10));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_61, 1) = ((MR_Box) (Var_74));
              }
              mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_9, RevSubGoalPath_61, SubGoal0_59, &SubGoal_62, Candidates_12, Pushes_13, Singles_14, Messages_15);
              Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_62, (MR_Integer) 0)));
              Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_62, (MR_Integer) 1)));
              Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_62, (MR_Integer) 2)));
              Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 0)));
              Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 1)));
              Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 2)));
              Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 3)));
              Cost_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 4)));
              Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 5)));
              Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 6)));
              Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 7)));
              {
                GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 1) = ((MR_Box) (SubGoal_62));
                MR_hl_field(MR_mktag(3), GoalExpr_28, 2) = ((MR_Box) (MaybeCut_60));
              }
              Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 0)));
              Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 1)));
              Var_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 2)));
              Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 3)));
              Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 4)));
              Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 5)));
              Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 6)));
              Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), Annotation0_18, (MR_Integer) 7)));
              {
                Annotation_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Annotation_64, 0) = ((MR_Box) (Var_323));
                MR_hl_field(MR_mktag(0), Annotation_64, 1) = ((MR_Box) (Var_324));
                MR_hl_field(MR_mktag(0), Annotation_64, 2) = ((MR_Box) (Var_325));
                MR_hl_field(MR_mktag(0), Annotation_64, 3) = ((MR_Box) (Var_326));
                MR_hl_field(MR_mktag(0), Annotation_64, 4) = ((MR_Box) (Cost_339));
                MR_hl_field(MR_mktag(0), Annotation_64, 5) = ((MR_Box) (Var_328));
                MR_hl_field(MR_mktag(0), Annotation_64, 6) = ((MR_Box) (Var_329));
                MR_hl_field(MR_mktag(0), Annotation_64, 7) = ((MR_Box) (Var_330));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Costly_69;

              mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(Annotation0_18, &Costly_69);
              switch (Costly_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *Singles_14 = mercury__cord__singleton_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], ((MR_Box) (STATE_VARIABLE_Goal_0_70)));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *Singles_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0]);
                  }
                  break;
              }
              *Candidates_12 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[1]);
              *Pushes_13 = mercury__cord__empty_0_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
              *Messages_15 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
              GoalExpr_28 = GoalExpr0_16;
              Annotation_64 = Annotation0_18;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_71 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (DetismRep_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Annotation_64));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(
  MR_Word MainCandidate_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word MaybeMainPush_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 1)));
      MR_String Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 0)));
      MR_Integer Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 2)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 3)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 4)));
      MR_Float Var_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 5)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 6)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 7)));
      MR_Float Var_38 = MR_unbox_float((MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 8)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 9)));

      if ((MaybeMainPush_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", (MR_String) "no push");
          return;
        }
      }
      else
        *HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMainPush_6, (MR_Integer) 0)));
    }
    else
    {
      MR_Word HeadCandidate_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word TailCandidates_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word RestPush_14;
      MR_Word MaybeMainPush_15;
      MR_Word MainPush_16;
      MR_String Var_40;
      MR_Integer Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Float Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Float Var_47;
      MR_Word Var_48;
      MR_String GoalPathStr_17;
      MR_Integer Lo_18;
      MR_Integer Hi_19;
      MR_String MainPushInto_20;
      MR_Word RestPushInto_21;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_String Var_49;
      MR_Integer Var_50;
      MR_Integer Var_51;

      mdprof_fb__automatic_parallelism__autopar_search_goals__merge_same_level_pushes_3_p_0(HeadCandidate_11, TailCandidates_12, &RestPush_14);
      Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 0)));
      MaybeMainPush_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 1)));
      Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 2)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 3)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 4)));
      Var_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 5)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 6)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 7)));
      Var_47 = MR_unbox_float((MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 8)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainCandidate_1, (MR_Integer) 9)));
      if ((MaybeMainPush_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", (MR_String) "no push");
          return;
        }
      }
      else
        MainPush_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMainPush_15, (MR_Integer) 0)));
      GoalPathStr_17 = ((MR_String) (MR_hl_field(MR_mktag(0), MainPush_16, (MR_Integer) 0)));
      Lo_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MainPush_16, (MR_Integer) 1)));
      Hi_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MainPush_16, (MR_Integer) 2)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainPush_16, (MR_Integer) 3)));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        MainPushInto_20 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
        succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          Var_49 = ((MR_String) (MR_hl_field(MR_mktag(0), RestPush_14, (MR_Integer) 0)));
          Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RestPush_14, (MR_Integer) 1)));
          Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RestPush_14, (MR_Integer) 2)));
          RestPushInto_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RestPush_14, (MR_Integer) 3)));
          succeeded = (strcmp(GoalPathStr_17, Var_49) == 0);
          if (succeeded)
          {
            succeeded = (Lo_18 == Var_50);
            if (succeeded)
              succeeded = (Hi_19 == Var_51);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MainPushInto_20));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (RestPushInto_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalPathStr_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Lo_18));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Hi_19));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.merge_same_level_pushes\'/3", (MR_String) "mismatch on pushed goals");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
    *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Single_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
    MR_Word Singles_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
    MR_Word HeadMessages_20;
    MR_Word MaybeHeadCandidate_21;
    MR_Word TailMessages_22;
    MR_Word TailCandidates_23;

    mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Single_16, &HeadMessages_20, &MaybeHeadCandidate_21);
    mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunctions_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Singles_17, &TailMessages_22, &TailCandidates_23);
    *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, HeadMessages_20, TailMessages_22);
    if ((MaybeHeadCandidate_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__7_7 = TailCandidates_23;
    else
    {
      MR_Word HeadCandidate_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeHeadCandidate_21, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCandidate_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCandidates_23));
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_and_build_candidate_conjunction_7_p_0(
  MR_Word Info_8,
  MR_Word RevGoalPath_9,
  MR_Word Conjs_10,
  MR_Integer CostlyIndex_11,
  MR_Word Single_12,
  MR_Word * STATE_VARIABLE_Messages_35,
  MR_Word * MaybeCandidate_14)
{
  {
    MR_bool succeeded;
    MR_Word SingleRevPath_15;
    MR_Word SinglePath_16;
    MR_Word GoalPath_17;
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Single_12, (MR_Integer) 2)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Single_12, (MR_Integer) 0)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Single_12, (MR_Integer) 1)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0)));
    MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1)));
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word RelativePath_18;
    MR_Integer RelConjStep_19;
    MR_Word TailRelativePath_20;
    MR_Word GoalToPushInto_22;
    MR_Word GoalsToPush_23;
    MR_Word Var_37;
    MR_Word TypeInfo_79_79;
    MR_Word ConjsUptoCostly_21;
    MR_Integer Var_38;
    MR_Word Var_39;
    MR_Integer Var_40;

    SingleRevPath_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 3)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 4)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 5)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 6)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 7)));
    mdbcomp__goal_path__rgp_to_fgp_2_p_0(SingleRevPath_15, &SinglePath_16);
    mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevGoalPath_9, &GoalPath_17);
    succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(GoalPath_17, SinglePath_16, &RelativePath_18);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) RelativePath_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), RelativePath_18, (MR_Integer) 0)));
        TailRelativePath_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), RelativePath_18, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          RelConjStep_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0)));
          succeeded = (RelConjStep_19 < CostlyIndex_11);
          if (succeeded)
          {
            TypeInfo_79_79 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
            succeeded = mercury__list__take_3_p_0(TypeInfo_79_79, CostlyIndex_11, Conjs_10, &ConjsUptoCostly_21);
            if (succeeded)
            {
              Var_40 = (MR_Integer) 1;
              Var_38 = (RelConjStep_19 - Var_40);
              succeeded = mercury__list__drop_3_p_0(TypeInfo_79_79, Var_38, ConjsUptoCostly_21, &Var_39);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  GoalToPushInto_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0)));
                  GoalsToPush_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1)));
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word RevPushGoalPath_24;
      MR_Word RevCandidateGoalPath_25;
      MR_Word CandidateConjs_26;
      MR_Word ProcLabel_27;
      MR_Word Location_28;
      MR_Word PushGoalPath_32;
      MR_Word PushGoal_33;
      MR_Word STATE_VARIABLE_Messages_42_42;
      MR_Word STATE_VARIABLE_Messages_44_44;
      MR_String Var_45;
      MR_Integer Var_46;
      MR_Word Var_48;
      MR_String Var_49;
      MR_Word Var_51;
      MR_Word STATE_VARIABLE_Messages_52_52;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word MostRelativePath_29;
      MR_Word LastRelativeStep_30;
      MR_Integer Var_31;

      {
        RevPushGoalPath_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RevPushGoalPath_24, 0) = ((MR_Box) (RevGoalPath_9));
        MR_hl_field(MR_mktag(1), RevPushGoalPath_24, 1) = ((MR_Box) (Var_37));
      }
      mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0(Info_8, RevPushGoalPath_24, TailRelativePath_20, GoalToPushInto_22, GoalsToPush_23, &RevCandidateGoalPath_25, &CandidateConjs_26);
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 8)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 9)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 10)));
      ProcLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 11)));
      STATE_VARIABLE_Messages_42_42 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
      {
        Location_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Location_28, 0) = ((MR_Box) (ProcLabel_27));
        MR_hl_field(MR_mktag(1), Location_28, 1) = ((MR_Box) (RevGoalPath_9));
      }
      message__append_message_4_p_0(Location_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_Messages_42_42, &STATE_VARIABLE_Messages_44_44);
      succeeded = mdbcomp__goal_path__goal_path_remove_last_3_p_0(RelativePath_18, &MostRelativePath_29, &LastRelativeStep_30);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) LastRelativeStep_30)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LastRelativeStep_30, (MR_Integer) 0)));
      }
      if (succeeded)
        PushGoalPath_32 = MostRelativePath_29;
      else
        PushGoalPath_32 = RelativePath_18;
      Var_45 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_9);
      Var_46 = (RelConjStep_19 + (MR_Integer) 1);
      Var_49 = mdbcomp__goal_path__goal_path_to_string_1_f_0(PushGoalPath_32);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        PushGoal_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PushGoal_33, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), PushGoal_33, 1) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), PushGoal_33, 2) = ((MR_Box) (CostlyIndex_11));
        MR_hl_field(MR_mktag(0), PushGoal_33, 3) = ((MR_Box) (Var_48));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (PushGoal_33));
      }
      mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(Info_8, Location_28, RevCandidateGoalPath_25, Var_51, CandidateConjs_26, MaybeCandidate_14, STATE_VARIABLE_Messages_44_44, &STATE_VARIABLE_Messages_52_52);
      if ((*MaybeCandidate_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_Messages_35 = STATE_VARIABLE_Messages_52_52;
      else
      {
        message__append_message_4_p_0(Location_28, (MR_Word) MR_mkword(MR_mktag(3), &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[12]), STATE_VARIABLE_Messages_52_52, STATE_VARIABLE_Messages_35);
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_and_build_candidate_conjunction\'/7", (MR_String) "bad goal path for Single");
        return;
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Goal_13;

    mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_Goal_13);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_13));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_13;

    mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_Goal_13);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_13));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Goal_13;

    mdprof_fb__automatic_parallelism__autopar_search_goals__fix_goal_counts_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Goal_13);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_13));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0(
  MR_Word Info_8,
  MR_Word RevCurPath_9,
  MR_Word ForwardGoalPath_10,
  MR_Word GoalToPushInto_11,
  MR_Word GoalsToPush0_12,
  MR_Word * RevCandidateGoalPath_13,
  MR_Word * CandidateConjs_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 2)));
    MR_Word Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 0)));
    MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 1)));

    // setup for model_det tailcalls optimized into a loop
    if ((ForwardGoalPath_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeInfo_159_159;
      MR_Integer Calls_15;
      MR_Word GoalsToPush_16;
      MR_Word Var_94;
      MR_Word Var_96;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_138;

      *RevCandidateGoalPath_13 = RevCurPath_9;
      Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 0)));
      Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 1)));
      Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 2)));
      Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 3)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 4)));
      Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 5)));
      Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 6)));
      Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 7)));
      Calls_15 = measurements__goal_cost_get_calls_1_f_0(Var_94);
      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (Info_8));
        MR_hl_field(MR_mktag(0), Var_96, 4) = ((MR_Box) (Calls_15));
      }
      TypeInfo_159_159 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
      mercury__list__map_3_p_0(TypeInfo_159_159, TypeInfo_159_159, Var_96, GoalsToPush0_12, &GoalsToPush_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *CandidateConjs_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GoalToPushInto_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalsToPush_16));
      }
    }
    else
    {
      MR_Word FirstRelStep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ForwardGoalPath_10, (MR_Integer) 0)));
      MR_Word TailRelPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ForwardGoalPath_10, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) FirstRelStep_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(FirstRelStep_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "ite_cond");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Then_37;
                MR_Word Var_36;
                MR_Word Var_38;

                succeeded = ((((MR_tag((MR_Word) Var_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 1)));
                  Then_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 2)));
                  Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 3)));
                  {
                    MR_Word Var_71;
                    MR_Word next_value_of_RevCurPath_9;
                    MR_Word next_value_of_ForwardGoalPath_10;
                    MR_Word next_value_of_GoalToPushInto_11;

                    {
                      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RevCurPath_9));
                      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (FirstRelStep_17));
                    }
                    // direct tailcall eliminated
                    next_value_of_RevCurPath_9 = Var_71;
                    next_value_of_ForwardGoalPath_10 = TailRelPath_18;
                    next_value_of_GoalToPushInto_11 = Then_37;
                    RevCurPath_9 = next_value_of_RevCurPath_9;
                    ForwardGoalPath_10 = next_value_of_ForwardGoalPath_10;
                    GoalToPushInto_11 = next_value_of_GoalToPushInto_11;
                    continue;
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not ite_then");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Else_41;
                MR_Word Var_39;
                MR_Word Var_40;

                succeeded = ((((MR_tag((MR_Word) Var_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 1)));
                  Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 2)));
                  Else_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 3)));
                  {
                    MR_Word Var_67;
                    MR_Word next_value_of_RevCurPath_9;
                    MR_Word next_value_of_ForwardGoalPath_10;
                    MR_Word next_value_of_GoalToPushInto_11;

                    {
                      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (RevCurPath_9));
                      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (FirstRelStep_17));
                    }
                    // direct tailcall eliminated
                    next_value_of_RevCurPath_9 = Var_67;
                    next_value_of_ForwardGoalPath_10 = TailRelPath_18;
                    next_value_of_GoalToPushInto_11 = Else_41;
                    RevCurPath_9 = next_value_of_RevCurPath_9;
                    ForwardGoalPath_10 = next_value_of_ForwardGoalPath_10;
                    GoalToPushInto_11 = next_value_of_GoalToPushInto_11;
                    continue;
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not ite_else");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "neg");
                  return;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "lambda");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "try");
                  return;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "atomic_main");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FirstRelStep_17, (MR_Integer) 0)));
            MR_Word Goals_23;

            succeeded = ((MR_tag((MR_Word) Var_170)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_170, (MR_Integer) 0)));
              if ((TailRelPath_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word TypeInfo_162_162;
                MR_Word Cost_24;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Integer Calls_97;
                MR_Word GoalsToPush_98;
                MR_Word Var_139;
                MR_Word Var_140;
                MR_Word Var_141;
                MR_Word Var_142;
                MR_Word Var_143;
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Var_146;
                MR_Word Var_147;

                *RevCandidateGoalPath_13 = RevCurPath_9;
                Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 0)));
                Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 1)));
                Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 2)));
                Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 0)));
                Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1)));
                Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 2)));
                Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 3)));
                Cost_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 4)));
                Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 5)));
                Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 6)));
                Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 7)));
                Calls_97 = measurements__goal_cost_get_calls_1_f_0(Cost_24);
                {
                  Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Info_8));
                  MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Calls_97));
                }
                TypeInfo_162_162 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
                mercury__list__map_3_p_0(TypeInfo_162_162, TypeInfo_162_162, Var_90, GoalsToPush0_12, &GoalsToPush_98);
                *CandidateConjs_14 = mercury__list__f_43_43_2_f_0(TypeInfo_162_162, Goals_23, GoalsToPush_98);
              }
              else
              {
                MR_Word TypeInfo_163_163 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0];
                MR_Word Tail_27;
                MR_Integer Var_83 = (N_22 - (MR_Integer) 1);
                MR_Word SubGoal_28;
                MR_Word Var_85;

                mercury__list__det_drop_3_p_0(TypeInfo_163_163, Var_83, Goals_23, &Tail_27);
                succeeded = ((MR_tag((MR_Word) Tail_27)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  SubGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_27, (MR_Integer) 0)));
                  Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_27, (MR_Integer) 1)));
                  succeeded = (Var_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Var_86;
                  MR_Word next_value_of_RevCurPath_9;
                  MR_Word next_value_of_ForwardGoalPath_10;
                  MR_Word next_value_of_GoalToPushInto_11;

                  {
                    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (RevCurPath_9));
                    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (FirstRelStep_17));
                  }
                  // direct tailcall eliminated
                  next_value_of_RevCurPath_9 = Var_86;
                  next_value_of_ForwardGoalPath_10 = TailRelPath_18;
                  next_value_of_GoalToPushInto_11 = SubGoal_28;
                  RevCurPath_9 = next_value_of_RevCurPath_9;
                  ForwardGoalPath_10 = next_value_of_ForwardGoalPath_10;
                  GoalToPushInto_11 = next_value_of_GoalToPushInto_11;
                  continue;
                }
                else
                {
                  MR_Word Var_87;
                  MR_Word Var_88;
                  MR_Integer Calls_99;
                  MR_Word GoalsToPush_100;
                  MR_Word Cost_101;
                  MR_Word Var_148;
                  MR_Word Var_149;
                  MR_Word Var_150;
                  MR_Word Var_151;
                  MR_Word Var_152;
                  MR_Word Var_153;
                  MR_Word Var_154;
                  MR_Word Var_155;
                  MR_Word Var_156;

                  *RevCandidateGoalPath_13 = RevCurPath_9;
                  Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 0)));
                  Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 1)));
                  Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalToPushInto_11, (MR_Integer) 2)));
                  Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 0)));
                  Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 1)));
                  Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 2)));
                  Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 3)));
                  Cost_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 4)));
                  Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 5)));
                  Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 6)));
                  Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 7)));
                  Calls_99 = measurements__goal_cost_get_calls_1_f_0(Cost_101);
                  {
                    Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_goals__push_goals_create_candidate_7_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (Info_8));
                    MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (Calls_99));
                  }
                  mercury__list__map_3_p_0(TypeInfo_163_163, TypeInfo_163_163, Var_88, GoalsToPush0_12, &GoalsToPush_100);
                  *CandidateConjs_14 = mercury__list__f_43_43_2_f_0(TypeInfo_163_163, Goals_23, GoalsToPush_100);
                }
              }
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not conj");
                return;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_117 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FirstRelStep_17, (MR_Integer) 0)));
            MR_Word Goals_115;

            succeeded = ((MR_tag((MR_Word) Var_170)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Goals_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_170, (MR_Integer) 0)));
              {
                MR_Word Var_79;
                MR_Word SubGoal_114;
                MR_Box conv3_SubGoal_114;
                MR_Word next_value_of_RevCurPath_9;
                MR_Word next_value_of_ForwardGoalPath_10;
                MR_Word next_value_of_GoalToPushInto_11;

                mercury__list__det_index1_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[0], Goals_115, N_117, &conv3_SubGoal_114);
                SubGoal_114 = ((MR_Word) conv3_SubGoal_114);
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (RevCurPath_9));
                  MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (FirstRelStep_17));
                }
                // direct tailcall eliminated
                next_value_of_RevCurPath_9 = Var_79;
                next_value_of_ForwardGoalPath_10 = TailRelPath_18;
                next_value_of_GoalToPushInto_11 = SubGoal_114;
                RevCurPath_9 = next_value_of_RevCurPath_9;
                ForwardGoalPath_10 = next_value_of_ForwardGoalPath_10;
                GoalToPushInto_11 = next_value_of_GoalToPushInto_11;
                continue;
              }
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not disj");
                return;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FirstRelStep_17, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer N_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), FirstRelStep_17, (MR_Integer) 1)));
                MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), FirstRelStep_17, (MR_Integer) 2)));
                MR_Word Cases_32;
                MR_Integer Var_30;
                MR_Word Var_31;

                succeeded = ((MR_tag((MR_Word) Var_170)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_170, (MR_Integer) 0)));
                  Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_170, (MR_Integer) 1)));
                  Cases_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_170, (MR_Integer) 2)));
                  {
                    MR_Word Case_33;
                    MR_Word Var_75;
                    MR_Word SubGoal_120;
                    MR_Box conv4_Case_33;
                    MR_Word Var_34;
                    MR_Word Var_35;
                    MR_Word next_value_of_RevCurPath_9;
                    MR_Word next_value_of_ForwardGoalPath_10;
                    MR_Word next_value_of_GoalToPushInto_11;

                    mercury__list__det_index1_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[7], Cases_32, N_122, &conv4_Case_33);
                    Case_33 = ((MR_Word) conv4_Case_33);
                    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_33, (MR_Integer) 0)));
                    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_33, (MR_Integer) 1)));
                    SubGoal_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_33, (MR_Integer) 2)));
                    {
                      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (RevCurPath_9));
                      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (FirstRelStep_17));
                    }
                    // direct tailcall eliminated
                    next_value_of_RevCurPath_9 = Var_75;
                    next_value_of_ForwardGoalPath_10 = TailRelPath_18;
                    next_value_of_GoalToPushInto_11 = SubGoal_120;
                    RevCurPath_9 = next_value_of_RevCurPath_9;
                    ForwardGoalPath_10 = next_value_of_ForwardGoalPath_10;
                    GoalToPushInto_11 = next_value_of_GoalToPushInto_11;
                    continue;
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not switch");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubGoal_124;
                MR_Word Var_43;

                succeeded = ((((MR_tag((MR_Word) Var_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 1)));
                  Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_170, (MR_Integer) 2)));
                  {
                    MR_Word Var_57;
                    MR_Word next_value_of_RevCurPath_9;
                    MR_Word next_value_of_ForwardGoalPath_10;
                    MR_Word next_value_of_GoalToPushInto_11;

                    {
                      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (RevCurPath_9));
                      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (FirstRelStep_17));
                    }
                    // direct tailcall eliminated
                    next_value_of_RevCurPath_9 = Var_57;
                    next_value_of_ForwardGoalPath_10 = TailRelPath_18;
                    next_value_of_GoalToPushInto_11 = SubGoal_124;
                    RevCurPath_9 = next_value_of_RevCurPath_9;
                    ForwardGoalPath_10 = next_value_of_ForwardGoalPath_10;
                    GoalToPushInto_11 = next_value_of_GoalToPushInto_11;
                    continue;
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "not scope");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_search_goals", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_goals.push_goals_create_candidate\'/7", (MR_String) "atomic_orelse");
                  return;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__build_candidate_conjunction_6_p_0(
  MR_Word Info_7,
  MR_Word RevGoalPath_8,
  MR_Word Conjs_9,
  MR_Word CostlyGoalsIndexes_10,
  MR_Word * STATE_VARIABLE_Messages_17,
  MR_Word * MaybeCandidate_12)
{
  {
    MR_Word ProcLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 11)));
    MR_Integer NumCostlyGoals_14;
    MR_Word Location_15;
    MR_Word STATE_VARIABLE_Messages_18_18;
    MR_Word Var_19;
    MR_Word STATE_VARIABLE_Messages_20_20;
    MR_Word STATE_VARIABLE_Messages_22_22;
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));

    STATE_VARIABLE_Messages_18_18 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
    NumCostlyGoals_14 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, CostlyGoalsIndexes_10);
    {
      Location_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Location_15, 0) = ((MR_Box) (ProcLabel_13));
      MR_hl_field(MR_mktag(1), Location_15, 1) = ((MR_Box) (RevGoalPath_8));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (NumCostlyGoals_14));
    }
    message__append_message_4_p_0(Location_15, Var_19, STATE_VARIABLE_Messages_18_18, &STATE_VARIABLE_Messages_20_20);
    mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(Info_7, Location_15, RevGoalPath_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Conjs_9, MaybeCandidate_12, STATE_VARIABLE_Messages_20_20, &STATE_VARIABLE_Messages_22_22);
    if ((*MaybeCandidate_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Messages_17 = STATE_VARIABLE_Messages_22_22;
    else
    {
      message__append_message_4_p_0(Location_15, (MR_Word) MR_mkword(MR_mktag(3), &mdprof_fb__automatic_parallelism__autopar_search_goals_scalar_common_1[12]), STATE_VARIABLE_Messages_22_22, STATE_VARIABLE_Messages_17);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_goals__pardgoals_build_candidate_conjunction_8_p_0(
  MR_Word Info_9,
  MR_Word Location_10,
  MR_Word RevGoalPath_11,
  MR_Word MaybePushGoal_12,
  MR_Word Goals_13,
  MR_Word * MaybeCandidate_14,
  MR_Word STATE_VARIABLE_Messages_0_43,
  MR_Word * STATE_VARIABLE_Messages_44)
{
  {
    MR_bool succeeded;
    MR_Word MaybeBestParallelisation_16;

    mdprof_fb__automatic_parallelism__autopar_find_best_par__find_best_parallelisation_6_p_0(Info_9, Location_10, Goals_13, &MaybeBestParallelisation_16, STATE_VARIABLE_Messages_0_43, STATE_VARIABLE_Messages_44);
    if ((MaybeBestParallelisation_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *MaybeCandidate_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word BestParallelisation_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeBestParallelisation_16, (MR_Integer) 0)));
      MR_Word ParalleliseDepConjs_19;
      MR_Float SpeedupThreshold_20;
      MR_Word GoalsBefore_21;
      MR_Word ParConjs_22;
      MR_Word GoalsAfter_23;
      MR_Word IsDependent_24;
      MR_Word Metrics_25;
      MR_Float Speedup_26;
      MR_Integer Calls_27;
      MR_Word GoalsBeforeCost0_28;
      MR_Float GoalsBeforeCost_29;
      MR_Word GoalsAfterCost0_30;
      MR_Float GoalsAfterCost_31;
      MR_String RevGoalPathString_32;
      MR_Word Candidate_33;
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 7)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 8)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 9)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 10)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 11)));
      MR_Float Var_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 1)));
      MR_Integer Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 2)));
      MR_Integer Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 3)));
      MR_Integer Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 4)));
      MR_Integer Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 5)));
      MR_Integer Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 6)));
      MR_Integer Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 7)));
      MR_Integer Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 8)));
      MR_Integer Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 9)));
      MR_Word Var_89;
      MR_Float Var_113;
      MR_Float Var_114;
      MR_Float Var_115;
      MR_Float Var_116;
      MR_Float Var_117;
      MR_Float Var_118;
      MR_Float Var_119;
      MR_Float Var_120;

      SpeedupThreshold_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 10)));
      ParalleliseDepConjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 11)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 12)));
      GoalsBefore_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestParallelisation_17, (MR_Integer) 0)));
      ParConjs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestParallelisation_17, (MR_Integer) 1)));
      GoalsAfter_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestParallelisation_17, (MR_Integer) 2)));
      IsDependent_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestParallelisation_17, (MR_Integer) 3)));
      Metrics_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestParallelisation_17, (MR_Integer) 4)));
      Speedup_26 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(Metrics_25);
      Calls_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 0)));
      Var_113 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 1)));
      Var_114 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 2)));
      Var_115 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 3)));
      Var_116 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 4)));
      Var_117 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 5)));
      Var_118 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 6)));
      Var_119 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 7)));
      Var_120 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_25, (MR_Integer) 8)));
      mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(GoalsBefore_21, Calls_27, &GoalsBeforeCost0_28);
      GoalsBeforeCost_29 = measurements__goal_cost_get_percall_1_f_0(GoalsBeforeCost0_28);
      mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(GoalsAfter_23, Calls_27, &GoalsAfterCost0_30);
      GoalsAfterCost_31 = measurements__goal_cost_get_percall_1_f_0(GoalsAfterCost0_30);
      RevGoalPathString_32 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_11);
      {
        Candidate_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Candidate_33, 0) = ((MR_Box) (RevGoalPathString_32));
        MR_hl_field(MR_mktag(0), Candidate_33, 1) = ((MR_Box) (MaybePushGoal_12));
        MR_hl_field(MR_mktag(0), Candidate_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Candidate_33, 3) = ((MR_Box) (IsDependent_24));
        MR_hl_field(MR_mktag(0), Candidate_33, 4) = ((MR_Box) (GoalsBefore_21));
        MR_hl_field(MR_mktag(0), Candidate_33, 5) = MR_box_float(GoalsBeforeCost_29);
        MR_hl_field(MR_mktag(0), Candidate_33, 6) = ((MR_Box) (ParConjs_22));
        MR_hl_field(MR_mktag(0), Candidate_33, 7) = ((MR_Box) (GoalsAfter_23));
        MR_hl_field(MR_mktag(0), Candidate_33, 8) = MR_box_float(GoalsAfterCost_31);
        MR_hl_field(MR_mktag(0), Candidate_33, 9) = ((MR_Box) (Metrics_25));
      }
      succeeded = (Speedup_26 > SpeedupThreshold_20);
      if (succeeded)
      {
        succeeded = (ParalleliseDepConjs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (IsDependent_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          succeeded = !(succeeded);
        }
        succeeded = !(succeeded);
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCandidate_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Candidate_33));
        }
      else
        *MaybeCandidate_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_search_goals__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_fb.automatic_parallelism.autopar_search_goals.
