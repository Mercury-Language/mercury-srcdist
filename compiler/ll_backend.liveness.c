/*
** Automatically generated from `liveness.m'
** by the Mercury compiler,
** version rotd-2020-10-06
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


// :- module ll_backend.liveness.
// :- implementation.

/*
INIT mercury__ll_backend__liveness__init
ENDINIT
*/

#include "ll_backend.liveness.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0[6];

static const MR_ConstString ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0[6];

static const MR_DuArgLocn ll_backend__liveness__ll_backend__liveness__field_locns_live_info_0_0[6];

static const MR_DuFunctorDesc ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0[1];

static const MR_DuPtagLayout ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0[1];

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0[1];

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__liveness__var_is_not_dummy_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word Var_6);

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
  MR_Word VarSet_3,
  MR_Word Var_4);

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word * STATE_VARIABLE_PredInfo_13);

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * PredInfo_6);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(
  MR_Word PredIds_5,
  MR_Word HLDS0_6,
  MR_Word STATE_VARIABLE_HLDS_0_10,
  MR_Word * STATE_VARIABLE_HLDS_11);

static void MR_CALL 
ll_backend__liveness__detect_liveness_proc_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41);

static void MR_CALL 
ll_backend__liveness__live_info_init_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeInfoLiveness_8,
  MR_Word VarSet_9,
  MR_Word VarTypes_10,
  MR_Word RttiVarMaps_11,
  MR_Word * LiveInfo_12);

static void MR_CALL 
ll_backend__liveness__initial_deadness_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word LiveInfo_7,
  MR_Word * Deadness_8);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6,
  MR_Word * Needed_7);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Liveness0_3,
  MR_Word * Liveness_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6,
  MR_Word * Needed_7);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Liveness_0_83,
  MR_Word * STATE_VARIABLE_Liveness_84,
  MR_Word LiveInfo_10,
  MR_Word ResumeVars0_11);

static MR_bool MR_CALL 
ll_backend__liveness__make_and_set_resume_point_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__liveness__make_and_set_resume_point_5_p_0(
  MR_Word LiveInfo_6,
  MR_Word ResumeVars0_7,
  MR_Word ResumeLocs_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10);

static void MR_CALL 
ll_backend__liveness__require_equal_4_p_0(
  MR_Word LivenessFirst_5,
  MR_Word LivenessRest_6,
  MR_String GoalType_7,
  MR_Word LiveInfo_8);

static void MR_CALL 
ll_backend__liveness__delay_death_proc_body_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word VarSet_7,
  MR_Word BornVars0_8);

static void MR_CALL 
ll_backend__liveness__delay_death_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word BornVars0_3,
  MR_Word DelayedDead0_4,
  MR_Word VarSet_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word BornVars0_3,
  MR_Word DelayedDead0_4,
  MR_Word VarSet_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word VarSet_7);

static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_BornVars_0_3,
  MR_Word * STATE_VARIABLE_BornVars_4,
  MR_Word STATE_VARIABLE_DelayedDead_0_5,
  MR_Word * STATE_VARIABLE_DelayedDead_6,
  MR_Word VarSet_7);

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_72,
  MR_Word * STATE_VARIABLE_GoalExpr_73,
  MR_Word STATE_VARIABLE_GoalInfo_0_74,
  MR_Word * STATE_VARIABLE_GoalInfo_75,
  MR_Word STATE_VARIABLE_BornVars_0_76,
  MR_Word * STATE_VARIABLE_BornVars_77,
  MR_Word STATE_VARIABLE_DelayedDead_0_78,
  MR_Word * STATE_VARIABLE_DelayedDead_79,
  MR_Word VarSet_14);

static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_BornVars_0_30,
  MR_Word * STATE_VARIABLE_BornVars_31,
  MR_Word STATE_VARIABLE_DelayedDead_0_32,
  MR_Word * STATE_VARIABLE_DelayedDead_33,
  MR_Word VarSet_12);

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CompletedNonLocals_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Union_0_7,
  MR_Word * STATE_VARIABLE_Union_8,
  MR_Word * CompletedNonLocalUnion_9);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_10_p_0(
  MR_Word SwitchVar_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word CompletedNonLocals_6,
  MR_Word LiveInfo_7,
  MR_Word STATE_VARIABLE_Union_0_8,
  MR_Word * STATE_VARIABLE_Union_9,
  MR_Word * CompletedNonLocalUnion_10);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CompletedNonLocals_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Union_0_7,
  MR_Word * STATE_VARIABLE_Union_8,
  MR_Word * CompletedNonLocalUnion_9);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Deadness_0_3,
  MR_Word * STATE_VARIABLE_Deadness_4,
  MR_Word Liveness0_5,
  MR_Word HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Deadness_0_105,
  MR_Word * STATE_VARIABLE_Deadness_106,
  MR_Word STATE_VARIABLE_Liveness_0_107,
  MR_Word LiveInfo_11);

static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
  MR_Word LiveInfo_4,
  MR_Word Vars0_5,
  MR_Word * Vars_6);

static void MR_CALL 
ll_backend__liveness__union_branch_deadness_5_p_0(
  MR_Word DeadnessGoal_6,
  MR_Word Deadness0_7,
  MR_Word InstmapReachable_8,
  MR_Word STATE_VARIABLE_Union_0_11,
  MR_Word * STATE_VARIABLE_Union_12);

static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_6_p_0(
  MR_Word DeadnessGoal_7,
  MR_Word Deadness0_8,
  MR_Word CompletedNonLocalUnion_9,
  MR_Word InstmapReachable_10,
  MR_Word STATE_VARIABLE_Goal_0_14,
  MR_Word * STATE_VARIABLE_Goal_15);

static void MR_CALL 
ll_backend__liveness__update_liveness_expr_4_p_0(
  MR_Word GoalExpr_5,
  MR_Word LiveInfo_6,
  MR_Word STATE_VARIABLE_Liveness_0_55,
  MR_Word * STATE_VARIABLE_Liveness_56);

static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LiveInfo_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4);

static void MR_CALL 
ll_backend__liveness__update_liveness_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word LiveInfo_6,
  MR_Word STATE_VARIABLE_Liveness_0_20,
  MR_Word * STATE_VARIABLE_Liveness_21);

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_case_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ReachableGoal_7);

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ReachableGoal_5);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word Liveness0_8,
  MR_Word * FinalLiveness_9,
  MR_Word LiveInfo_10);

static void MR_CALL 
ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(
  MR_Word LiveInfo_5,
  MR_Word GoalInfo_6,
  MR_Word * NonLocals_7,
  MR_Word * CompletedNonLocals_8);

static void MR_CALL 
ll_backend__liveness__find_value_giving_occurrences_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LiveInfo_2,
  MR_Word InstMapDelta_3,
  MR_Word STATE_VARIABLE_ValueVars_0_4,
  MR_Word * STATE_VARIABLE_ValueVars_5);

static void MR_CALL 
ll_backend__liveness__add_liveness_after_goal_3_p_0(
  MR_Word Goal0_4,
  MR_Word Residue_5,
  MR_Word * Goal_6);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Liveness_0_25,
  MR_Word * STATE_VARIABLE_Liveness_26,
  MR_Word LiveInfo_10,
  MR_Word TermVar_11);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalLiveVars_0_3,
  MR_Word * STATE_VARIABLE_LocalLiveVars_4);

static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_8_p_0(
  MR_Word ModuleInfo_9,
  MR_String Message_10,
  MR_Integer DebugLiveness_11,
  MR_Integer PredIdInt_12,
  MR_Word VarSet_13,
  MR_Word Goal_14);

static MR_bool MR_CALL 
ll_backend__liveness__initial_liveness_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Liveness_0_5,
  MR_Word * STATE_VARIABLE_Liveness_6);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[5][3];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[1][5];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[4][6];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_6[1][8];




static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_5[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_5[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__liveness__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0),
    (MR_PseudoTypeInfo) (&ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)
};

static const MR_ConstString ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0[6] = {
  (MR_String) "li_module_info",
  (MR_String) "li_typeinfo_liveness",
  (MR_String) "li_allow_packing_dummies",
  (MR_String) "li_varset",
  (MR_String) "li_vartypes",
  (MR_String) "li_rtti_varmaps"
};

static const MR_DuArgLocn ll_backend__liveness__ll_backend__liveness__field_locns_live_info_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0 = {
  (MR_String) "live_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0,
  ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0,
  ll_backend__liveness__ll_backend__liveness__field_locns_live_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0[1] = {
  &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0
};

static const MR_DuPtagLayout ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0[1] = {
  &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0
};

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__liveness__ll_backend__liveness__type_ctor_info_live_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__liveness____Unify____live_info_0_0_10001)),
  ((MR_Box) (ll_backend__liveness____Compare____live_info_0_0_10001)),
  (MR_String) "ll_backend.liveness",
  (MR_String) "live_info",
  {     ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0 },
  {     ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0
};

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_29 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_30 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_31 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_32 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_31 > Var_32);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__liveness_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                hlds__hlds_rtti____Compare____rtti_varmaps_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeCtorInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&ll_backend__liveness_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeCtorInfo_19_19 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
                succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX6_13, ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__var_is_not_dummy_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word Type_7;
    MR_Word IsDummy_8;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_6, &Type_7);
    IsDummy_8 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_4, Type_7);
    succeeded = (IsDummy_8 == (MR_Integer) 1);
    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Case_7;
    MR_Word Case0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word DelayedDead0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MainConsId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 0))));
    MR_Word OtherConsIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 1))));
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 2))));
    MR_Word ToBeKilled_11;
    MR_Word GoalExpr_12;
    MR_Word GoalInfo0_13;
    MR_Word PostDeath0_14;
    MR_Word PostDeath_15;
    MR_Word GoalInfo_16;
    MR_Word Goal_17;

    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDead0_6, FinalDelayedDead_4, &ToBeKilled_11);
    GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
    GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_13, &PostDeath0_14);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeath0_14, ToBeKilled_11, &PostDeath_15);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeath_15, GoalInfo0_13, &GoalInfo_16);
    {
      Goal_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_17, 0) = ((MR_Box) (GoalExpr_12));
      MR_hl_field(MR_mktag(0), Goal_17, 1) = ((MR_Box) (GoalInfo_16));
    }
    {
      Case_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_7, 0) = ((MR_Box) (MainConsId_8));
      MR_hl_field(MR_mktag(0), Case_7, 1) = ((MR_Box) (OtherConsIds_9));
      MR_hl_field(MR_mktag(0), Case_7, 2) = ((MR_Box) (Goal_17));
    }
    return Case_7;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
  MR_Word VarSet_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_String Var_5;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, Var_4, &Var_5);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word * STATE_VARIABLE_PredInfo_13)
{
  {
    MR_Word ProcInfo0_10;
    MR_Word ProcInfo_11;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_12, ProcId_8, &ProcInfo0_10);
    ll_backend__liveness__detect_liveness_proc_2_4_p_0(ModuleInfo_6, PredId_7, ProcInfo0_10, &ProcInfo_11);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, ProcInfo_11, STATE_VARIABLE_PredInfo_0_12, STATE_VARIABLE_PredInfo_13);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredInfo_13;

    ll_backend__liveness__detect_liveness_pred_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredInfo_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredInfo_13));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * PredInfo_6)
{
  {
    MR_Word PredInfo0_7;
    MR_Word ProcIds_8;
    MR_Word Var_9;
    MR_Box conv1_PredInfo_6;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo0_7);
    ProcIds_8 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo0_7);
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (PredId_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_9, ProcIds_8, ((MR_Box) (PredInfo0_7)), &conv1_PredInfo_6);
    *PredInfo_6 = ((MR_Word) (conv1_PredInfo_6));
  }
}

void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_5,
  MR_Word * STATE_VARIABLE_HLDS_6)
{
  {
    MR_Word PredIds_4;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_HLDS_0_5, &PredIds_4);
    ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(PredIds_4, STATE_VARIABLE_HLDS_0_5, STATE_VARIABLE_HLDS_0_5, STATE_VARIABLE_HLDS_6);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_PredInfo_6;

    ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_PredInfo_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_PredInfo_6));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_PredInfo_6;

    ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredInfo_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_PredInfo_6));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(
  MR_Word PredIds_5,
  MR_Word HLDS0_6,
  MR_Word STATE_VARIABLE_HLDS_0_10,
  MR_Word * STATE_VARIABLE_HLDS_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadPredIds_8;
    MR_Word TailPredIds_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__list__split_list_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Integer) 1000, PredIds_5, &HeadPredIds_8, &TailPredIds_9);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_HLDS_13_13;
      MR_Word PredInfos_22;
      MR_Word Var_23;
      MR_Box conv2_STATE_VARIABLE_HLDS_13_13;
      MR_Word next_value_of_PredIds_5;
      MR_Word next_value_of_STATE_VARIABLE_HLDS_0_10;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (HLDS0_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_23, HeadPredIds_8, &PredInfos_22);
      mercury__list__foldl_corresponding_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&ll_backend__liveness_scalar_common_2[3]), HeadPredIds_8, PredInfos_22, ((MR_Box) (STATE_VARIABLE_HLDS_0_10)), &conv2_STATE_VARIABLE_HLDS_13_13);
      STATE_VARIABLE_HLDS_13_13 = ((MR_Word) (conv2_STATE_VARIABLE_HLDS_13_13));
      // direct tailcall eliminated
      ;
      next_value_of_PredIds_5 = TailPredIds_9;
      next_value_of_STATE_VARIABLE_HLDS_0_10 = STATE_VARIABLE_HLDS_13_13;
      PredIds_5 = next_value_of_PredIds_5;
      STATE_VARIABLE_HLDS_0_10 = next_value_of_STATE_VARIABLE_HLDS_0_10;
      continue;
    }
    else
    {
      MR_Word PredInfos_40;
      MR_Word Var_41;
      MR_Box conv5_STATE_VARIABLE_HLDS_11;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (HLDS0_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_41, PredIds_5, &PredInfos_40);
      mercury__list__foldl_corresponding_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&ll_backend__liveness_scalar_common_2[4]), PredIds_5, PredInfos_40, ((MR_Box) (STATE_VARIABLE_HLDS_0_10)), &conv5_STATE_VARIABLE_HLDS_11);
      *STATE_VARIABLE_HLDS_11 = ((MR_Word) (conv5_STATE_VARIABLE_HLDS_11));
    }
    break;
  }
}

void MR_CALL 
ll_backend__liveness__detect_liveness_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10)
{
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    ll_backend__liveness__detect_liveness_proc_2_4_p_0(ModuleInfo_5, PredId_6, STATE_VARIABLE_ProcInfo_0_9, STATE_VARIABLE_ProcInfo_10);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_proc_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41)
{
  {
    MR_bool succeeded;
    MR_Word Globals_8;
    MR_Integer DebugLiveness_9;
    MR_Integer PredIdInt_10;
    MR_Word GoalBeforeQuant_11;
    MR_Word VarSetBeforeQuant_12;
    MR_Word GoalAfterQuant_14;
    MR_Word VarSet_15;
    MR_Word VarTypes_16;
    MR_Word RttiVarMaps_17;
    MR_Word PredInfo_18;
    MR_Word TypeInfoLiveness_19;
    MR_Word LiveInfo_20;
    MR_Word Liveness0_21;
    MR_Word GoalAfterLiveness_22;
    MR_Word Deadness0_24;
    MR_Word GoalAfterDeadness_25;
    MR_Word TraceLevel_27;
    MR_Word GoalAfterDelayDeath_35;
    MR_Word NeedsFailVars_36;
    MR_Word ResumeVars0_37;
    MR_Word Goal_38;
    MR_Word STATE_VARIABLE_ProcInfo_47_47;
    MR_Word STATE_VARIABLE_ProcInfo_66_66;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word AllowDelayDeath_28;
    MR_Word DelayDeath_29;
    MR_Integer DelayDeathMaxVars_30;
    MR_Word Origin_32;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_71;
    MR_Word Var_39;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
    libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 93, &DebugLiveness_9);
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_6, &PredIdInt_10);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &GoalBeforeQuant_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &VarSetBeforeQuant_12);
    succeeded = (DebugLiveness_9 == PredIdInt_10);
    if (succeeded)
    {
      MR_Word Globals_82;
      MR_Word OutInfo_83;

      mercury__io__write_string_3_p_0((MR_String) "\nbefore requantify");
      mercury__io__write_string_3_p_0((MR_String) ":\n");
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_82);
      OutInfo_83 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_82, (MR_Integer) 1);
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(OutInfo_83, ModuleInfo_5, VarSetBeforeQuant_12, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", GoalBeforeQuant_11);
    }
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_0_40, &STATE_VARIABLE_ProcInfo_47_47);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &GoalAfterQuant_14);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &VarSet_15);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &VarTypes_16);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &RttiVarMaps_17);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_18);
    hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_18, Globals_8, &TypeInfoLiveness_19);
    ll_backend__liveness__live_info_init_6_p_0(ModuleInfo_5, TypeInfoLiveness_19, VarSet_15, VarTypes_16, RttiVarMaps_17, &LiveInfo_20);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ModuleInfo_5, (MR_String) "\nbefore liveness", DebugLiveness_9, PredIdInt_10, VarSet_15, GoalAfterQuant_14);
    ll_backend__liveness__initial_liveness_4_p_0(ModuleInfo_5, PredInfo_18, STATE_VARIABLE_ProcInfo_47_47, &Liveness0_21);
    ll_backend__liveness__detect_liveness_in_goal_5_p_0(GoalAfterQuant_14, &GoalAfterLiveness_22, Liveness0_21, &Var_23, LiveInfo_20);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ModuleInfo_5, (MR_String) "\nafter liveness", DebugLiveness_9, PredIdInt_10, VarSet_15, GoalAfterLiveness_22);
    ll_backend__liveness__initial_deadness_4_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_47_47, LiveInfo_20, &Deadness0_24);
    ll_backend__liveness__detect_deadness_in_goal_6_p_0(GoalAfterLiveness_22, &GoalAfterDeadness_25, Deadness0_24, &Var_26, Liveness0_21, LiveInfo_20);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ModuleInfo_5, (MR_String) "\nafter deadness", DebugLiveness_9, PredIdInt_10, VarSet_15, GoalAfterDeadness_25);
    libs__globals__get_trace_level_2_p_0(Globals_8, &TraceLevel_27);
    libs__globals__get_trace_level_2_p_0(Globals_8, &Var_71);
    succeeded = libs__trace_params____Unify____trace_level_0_0(TraceLevel_27, Var_71);
    if (succeeded)
    {
      AllowDelayDeath_28 = libs__trace_params__trace_level_allows_delay_death_1_f_0(TraceLevel_27);
      succeeded = (AllowDelayDeath_28 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_57 = (MR_Integer) 151;
        libs__globals__lookup_bool_option_3_p_0(Globals_8, Var_57, &DelayDeath_29);
        succeeded = (DelayDeath_29 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_58 = (MR_Integer) 152;
          libs__globals__lookup_int_option_3_p_0(Globals_8, Var_58, &DelayDeathMaxVars_30);
          {
            MR_Integer Var_59;

            Var_59 = mercury__varset__num_allocated_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15);
            succeeded = (Var_59 <= DelayDeathMaxVars_30);
          }
          if (!(succeeded))
          {
            MR_Integer NumVars_31;

            hlds__vartypes__vartypes_count_2_p_0(VarTypes_16, &NumVars_31);
            succeeded = (NumVars_31 <= DelayDeathMaxVars_30);
          }
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_18, &Origin_32);
            succeeded = ((MR_tag((MR_Word) Origin_32)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
          }
        }
      }
    }
    if (succeeded)
    {
      ll_backend__liveness__delay_death_proc_body_4_p_0(GoalAfterDeadness_25, &GoalAfterDelayDeath_35, VarSet_15, Liveness0_21);
      ll_backend__liveness__maybe_debug_liveness_8_p_0(ModuleInfo_5, (MR_String) "\nafter delay death", DebugLiveness_9, PredIdInt_10, VarSet_15, GoalAfterDelayDeath_35);
    }
    else
      GoalAfterDelayDeath_35 = GoalAfterDeadness_25;
    NeedsFailVars_36 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ModuleInfo_5, PredInfo_18, STATE_VARIABLE_ProcInfo_47_47, TraceLevel_27);
    switch (NeedsFailVars_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ResumeVars0_37 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        break;
      case (MR_Integer) 1:
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_47_47, &ResumeVars0_37);
        break;
    }
    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(GoalAfterDelayDeath_35, &Goal_38, Liveness0_21, &Var_39, LiveInfo_20, ResumeVars0_37);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ModuleInfo_5, (MR_String) "\nafter resume point", DebugLiveness_9, PredIdInt_10, VarSet_15, Goal_38);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_38, STATE_VARIABLE_ProcInfo_47_47, &STATE_VARIABLE_ProcInfo_66_66);
    hlds__hlds_pred__proc_info_set_liveness_info_3_p_0(Liveness0_21, STATE_VARIABLE_ProcInfo_66_66, STATE_VARIABLE_ProcInfo_41);
  }
}

static void MR_CALL 
ll_backend__liveness__live_info_init_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeInfoLiveness_8,
  MR_Word VarSet_9,
  MR_Word VarTypes_10,
  MR_Word RttiVarMaps_11,
  MR_Word * LiveInfo_12)
{
  {
    MR_Word Globals_13;
    MR_Word AllowPackingDummies_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 279, &AllowPackingDummies_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *LiveInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) (((((MR_Unsigned) (TypeInfoLiveness_8) << 1)) | (MR_Unsigned) (AllowPackingDummies_14)));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (RttiVarMaps_11));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__initial_deadness_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word LiveInfo_7,
  MR_Word * Deadness_8)
{
  {
    MR_Word Deadness0_10;
    MR_Word VarTypes_12;
    MR_Word RttiVarMaps_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_9;
    MR_Word Var_11;

    hlds__arg_info__partition_proc_args_5_p_0(ProcInfo_6, ModuleInfo_5, &Var_9, &Deadness0_10, &Var_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_6, &VarTypes_12);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_6, &RttiVarMaps_13);
    Var_14 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Deadness0_10);
    Var_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_14, Var_15, VarTypes_12, RttiVarMaps_13, Deadness_8);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = HeadVar__3_3;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word _LivenessRest_20;

    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Goal0_12, &Goal_14, HeadVar__3_3, HeadVar__4_4, LiveInfo_5, ResumeVars0_6);
    ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(Goals0_13, &Goals_15, HeadVar__3_3, &_LivenessRest_20, LiveInfo_5, ResumeVars0_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word Case0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_14;
      MR_Word Cases_15;
      MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 0))));
      MR_Word OtherConsIds_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 1))));
      MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 2))));
      MR_Word Goal_23;

      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Goal0_22, &Goal_23, HeadVar__3_3, HeadVar__4_4, LiveInfo_5, ResumeVars0_6);
      {
        Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_14, 0) = ((MR_Box) (MainConsId_20));
        MR_hl_field(MR_mktag(0), Case_14, 1) = ((MR_Box) (OtherConsIds_21));
        MR_hl_field(MR_mktag(0), Case_14, 2) = ((MR_Box) (Goal_23));
      }
      if ((Cases0_13 == (MR_Word) ((MR_Unsigned) 0U)))
        Cases_15 = Cases0_13;
      else
      {
        MR_Word LivenessRest_26;

        ll_backend__liveness__detect_resume_points_in_cases_6_p_0(Cases0_13, &Cases_15, HeadVar__3_3, &LivenessRest_26, LiveInfo_5, ResumeVars0_6);
        succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *HeadVar__4_4, LivenessRest_26);
        if (!(succeeded))
        {
          MR_Word VarSet_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_5, (MR_Integer) 2))));
          MR_Word FirstVars_33;
          MR_Word RestVars_34;
          MR_String FirstNames_35;
          MR_String RestNames_36;
          MR_String Msg_37;
          MR_String Var_41;
          MR_String Var_42;
          MR_String Var_44;
          MR_String Var_46;
          MR_String Var_47;
          MR_String Var_49;
          MR_String Var_51;

          FirstVars_33 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *HeadVar__4_4);
          RestVars_34 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessRest_26);
          FirstNames_35 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_32, (MR_Integer) 1, FirstVars_33);
          RestNames_36 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_32, (MR_Integer) 1, RestVars_34);
          Var_51 = mercury__string__f_43_43_2_f_0(RestNames_36, (MR_String) "\n");
          Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", Var_51);
          Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_49);
          Var_46 = mercury__string__f_43_43_2_f_0(FirstNames_35, Var_47);
          Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", Var_46);
          Var_42 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", Var_44);
          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "switch", Var_42);
          Msg_37 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", Var_41);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", Msg_37);
            return;
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_15));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6,
  MR_Word * Needed_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *Needed_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_16;
      MR_Word Goals_17;
      MR_Word GoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 1))));
      MR_Word Detism0_25;
      MR_Word CanFail0_26;
      MR_Word Var_27;

      Detism0_25 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_24);
      parse_tree__prog_data__determinism_components_3_p_0(Detism0_25, &CanFail0_26, &Var_27);
      succeeded = (CanFail0_26 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Goals0_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word LivenessRest_30;
        MR_Word NeededRest_31;
        MR_Word ResumeVars1_44;
        MR_Word Goal1_45;
        MR_Word ResumeLocs_46;
        MR_Word GoalInfo_48;
        MR_Word PreDeaths_49;
        MR_Word NeededFirst_50;
        MR_Word CompletedNeededFirst_51;

        ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(Goals0_15, &Goals_17, HeadVar__3_3, &LivenessRest_30, LiveInfo_5, ResumeVars0_6, &NeededRest_31);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededRest_31, ResumeVars0_6, &ResumeVars1_44);
        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Goal0_14, &Goal1_45, HeadVar__3_3, HeadVar__4_4, LiveInfo_5, ResumeVars1_44);
        succeeded = MR_TRUE;
        if (succeeded)
          succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(Goal1_45);
        if (succeeded)
          ResumeLocs_46 = (MR_Integer) 0;
        else
        {
          succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(Goal1_45);
          if (succeeded)
            ResumeLocs_46 = (MR_Integer) 1;
          else
            ResumeLocs_46 = (MR_Integer) 3;
        }
        ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_5, ResumeVars1_44, ResumeLocs_46, Goal1_45, &Goal_16);
        GoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 1))));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_48, &PreDeaths_49);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__3_3, PreDeaths_49, &NeededFirst_50);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_5, NeededFirst_50, &CompletedNeededFirst_51);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNeededFirst_51, NeededRest_31, Needed_7);
        ll_backend__liveness__require_equal_4_p_0(*HeadVar__4_4, LivenessRest_30, (MR_String) "disjunction", LiveInfo_5);
      }
      else
      {
        MR_Word GoalInfo_62;
        MR_Word PreDeaths_63;
        MR_Word Needed_64;

        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Goal0_14, &Goal_16, HeadVar__3_3, HeadVar__4_4, LiveInfo_5, ResumeVars0_6);
        GoalInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 1))));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_62, &PreDeaths_63);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__3_3, PreDeaths_63, &Needed_64);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_5, Needed_64, Needed_7);
        Goals_17 = Goals0_15;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_17));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Liveness0_3,
  MR_Word * Liveness_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6,
  MR_Word * Needed_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_resume_points_in_non_disj\'/7", (MR_String) "empty nondet disjunction");
        return;
      }
    else
    {
      MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_18;
      MR_Word Goals_19;

      if ((Goals0_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word GoalInfo_38;
        MR_Word PreDeaths_39;
        MR_Word Needed_40;

        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Goal0_16, &Goal_18, Liveness0_3, Liveness_4, LiveInfo_5, ResumeVars0_6);
        GoalInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_38, &PreDeaths_39);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_3, PreDeaths_39, &Needed_40);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_5, Needed_40, Needed_7);
        Goals_19 = Goals0_17;
      }
      else
      {
        MR_Word LivenessRest_27;
        MR_Word NeededRest_28;
        MR_Word ResumeVars1_52;
        MR_Word Goal1_53;
        MR_Word ResumeLocs_54;
        MR_Word GoalInfo_56;
        MR_Word PreDeaths_57;
        MR_Word NeededFirst_58;
        MR_Word CompletedNeededFirst_59;

        ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(Goals0_17, &Goals_19, Liveness0_3, &LivenessRest_27, LiveInfo_5, ResumeVars0_6, &NeededRest_28);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededRest_28, ResumeVars0_6, &ResumeVars1_52);
        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Goal0_16, &Goal1_53, Liveness0_3, Liveness_4, LiveInfo_5, ResumeVars1_52);
        succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(Goal1_53);
        if (succeeded)
          ResumeLocs_54 = (MR_Integer) 1;
        else
          ResumeLocs_54 = (MR_Integer) 3;
        ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_5, ResumeVars1_52, ResumeLocs_54, Goal1_53, &Goal_18);
        GoalInfo_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_56, &PreDeaths_57);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_3, PreDeaths_57, &NeededFirst_58);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_5, NeededFirst_58, &CompletedNeededFirst_59);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNeededFirst_59, NeededRest_28, Needed_7);
        ll_backend__liveness__require_equal_4_p_0(*Liveness_4, LivenessRest_27, (MR_String) "disjunction", LiveInfo_5);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4,
  MR_Word LiveInfo_5,
  MR_Word ResumeVars0_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Liveness_4 = STATE_VARIABLE_Liveness_0_3;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word STATE_VARIABLE_Liveness_21_21;

    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_Liveness_0_3, &STATE_VARIABLE_Liveness_21_21, LiveInfo_5, ResumeVars0_6);
    ll_backend__liveness__detect_resume_points_in_conj_6_p_0(Goals0_13, &Goals_15, STATE_VARIABLE_Liveness_21_21, STATE_VARIABLE_Liveness_4, LiveInfo_5, ResumeVars0_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Liveness_0_83,
  MR_Word * STATE_VARIABLE_Liveness_84,
  MR_Word LiveInfo_10,
  MR_Word ResumeVars0_11)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word PreDeaths0_14;
    MR_Word PreBirths0_15;
    MR_Word PostDeaths0_16;
    MR_Word PostBirths0_17;
    MR_Word GoalExpr_21;
    MR_Word STATE_VARIABLE_Liveness_85_85;
    MR_Word STATE_VARIABLE_Liveness_86_86;
    MR_Word STATE_VARIABLE_Liveness_100_100;
    MR_Word STATE_VARIABLE_Liveness_101_101;

    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_13, &PreDeaths0_14);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_13, &PreBirths0_15);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_13, &PostDeaths0_16);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_13, &PostBirths0_17);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_83, PreDeaths0_14, &STATE_VARIABLE_Liveness_85_85);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreBirths0_15, STATE_VARIABLE_Liveness_85_85, &STATE_VARIABLE_Liveness_86_86);
    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_48 = (MR_Word) ((MR_Word) (GoalExpr0_12));
          MR_Word CompletedLiveness_50;
          MR_Word ResumeVars1_51;
          MR_Word SubGoal1_52;
          MR_Word ResumeLocs_54;
          MR_Word SubGoal_55;
          MR_Word Var_49;
          MR_Word _Liveness_53;

          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(SubGoal0_48, &Var_49, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11);
          ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_10, STATE_VARIABLE_Liveness_100_100, &CompletedLiveness_50);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedLiveness_50, ResumeVars0_11, &ResumeVars1_51);
          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(SubGoal0_48, &SubGoal1_52, STATE_VARIABLE_Liveness_86_86, &_Liveness_53, LiveInfo_10, ResumeVars1_51);
          succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(SubGoal1_52);
          if (succeeded)
            ResumeLocs_54 = (MR_Integer) 0;
          else
          {
            succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(SubGoal1_52);
            if (succeeded)
              ResumeLocs_54 = (MR_Integer) 1;
            else
              ResumeLocs_54 = (MR_Integer) 3;
          }
          ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_10, ResumeVars1_51, ResumeLocs_54, SubGoal1_52, &SubGoal_55);
          GoalExpr_21 = (MR_Word) ((MR_Word) (SubGoal_55));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          GoalExpr_21 = GoalExpr0_12;
          STATE_VARIABLE_Liveness_100_100 = STATE_VARIABLE_Liveness_86_86;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_21 = GoalExpr0_12;
              STATE_VARIABLE_Liveness_100_100 = STATE_VARIABLE_Liveness_86_86;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Goals_20;

              switch (ConjType_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(Goals0_19, &Goals_20, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11);
                  break;
                case (MR_Integer) 0:
                  ll_backend__liveness__detect_resume_points_in_conj_6_p_0(Goals0_19, &Goals_20, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11);
                  break;
              }
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = (MR_Box) ((MR_Unsigned) (ConjType_18));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (Goals_20));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CodeModel_22;
              MR_Word Goals0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Goals_104;

              CodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_13);
              switch (CodeModel_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word Var_24;

                    ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(Goals0_103, &Goals_104, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11, &Var_24);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_23;

                    ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(Goals0_103, &Goals_104, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11, &Var_23);
                  }
                  break;
              }
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Goals_104));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word CF_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Cases_28;

              ll_backend__liveness__detect_resume_points_in_cases_6_p_0(Cases0_27, &Cases_28, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = (MR_Box) ((MR_Unsigned) (CF_26));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 3) = ((MR_Box) (Cases_28));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word SubGoal_110;
              MR_Word TermVar_57;
              MR_Word Var_89;

              succeeded = ((((MR_tag((MR_Word) Reason_56)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_56, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_56, (MR_Integer) 1))));
                Var_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_56, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_89 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_Word CompletedTermVars_58;
                MR_Word Var_90;

                Var_90 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_57);
                ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_10, Var_90, &CompletedTermVars_58);
                parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedTermVars_58, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100);
                SubGoal_110 = SubGoal0_109;
              }
              else
                ll_backend__liveness__detect_resume_points_in_goal_6_p_0(SubGoal0_109, &SubGoal_110, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Reason_56));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (SubGoal_110));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Cond0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Then0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Else0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
              MR_Word ElseInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_32, (MR_Integer) 1))));
              MR_Word ElsePreDeath0_36;
              MR_Word CondResumeVars0_37;
              MR_Word CondResumeVars1_38;
              MR_Word CondResumeVars_39;
              MR_Word Cond1_40;
              MR_Word LivenessCond_41;
              MR_Word Then_42;
              MR_Word Else_44;
              MR_Word LivenessElse_45;
              MR_Word CondResumeLocs_46;
              MR_Word Cond_47;
              MR_Word CodeModel_105;

              hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ElseInfo0_35, &ElsePreDeath0_36);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_86_86, ElsePreDeath0_36, &CondResumeVars0_37);
              ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_10, CondResumeVars0_37, &CondResumeVars1_38);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondResumeVars1_38, ResumeVars0_11, &CondResumeVars_39);
              ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Cond0_30, &Cond1_40, STATE_VARIABLE_Liveness_86_86, &LivenessCond_41, LiveInfo_10, CondResumeVars_39);
              ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Then0_31, &Then_42, LivenessCond_41, &STATE_VARIABLE_Liveness_100_100, LiveInfo_10, ResumeVars0_11);
              ll_backend__liveness__detect_resume_points_in_goal_6_p_0(Else0_32, &Else_44, STATE_VARIABLE_Liveness_86_86, &LivenessElse_45, LiveInfo_10, ResumeVars0_11);
              succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(Cond1_40);
              if (succeeded)
              {
                CodeModel_105 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_13);
                succeeded = (CodeModel_105 != (MR_Integer) 2);
              }
              if (succeeded)
                CondResumeLocs_46 = (MR_Integer) 0;
              else
              {
                succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondResumeVars_39);
                if (succeeded)
                  CondResumeLocs_46 = (MR_Integer) 1;
                else
                {
                  succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(Cond1_40);
                  if (succeeded)
                    CondResumeLocs_46 = (MR_Integer) 1;
                  else
                    CondResumeLocs_46 = (MR_Integer) 3;
                }
              }
              ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_10, CondResumeVars_39, CondResumeLocs_46, Cond1_40, &Cond_47);
              ll_backend__liveness__require_equal_4_p_0(STATE_VARIABLE_Liveness_100_100, LivenessElse_45, (MR_String) "if-then-else", LiveInfo_10);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Vars_29));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (Cond_47));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 3) = ((MR_Box) (Then_42));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 4) = ((MR_Box) (Else_44));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_resume_points_in_goal\'/6", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
    }
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_100_100, PostDeaths0_16, &STATE_VARIABLE_Liveness_101_101);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_17, STATE_VARIABLE_Liveness_101_101, STATE_VARIABLE_Liveness_84);
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__make_and_set_resume_point_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__liveness__var_is_not_dummy_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__liveness__make_and_set_resume_point_5_p_0(
  MR_Word LiveInfo_6,
  MR_Word ResumeVars0_7,
  MR_Word ResumeLocs_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10)
{
  {
    MR_bool succeeded;
    MR_Word AllowPackingDummies_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ResumeVars_12;
    MR_Word Resume_15;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 3))));

    switch (AllowPackingDummies_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ResumeVars_12 = ResumeVars0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ll_backend__liveness__make_and_set_resume_point_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Var_20));
          }
          parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16, ResumeVars0_7, &ResumeVars_12);
        }
        break;
    }
    {
      Resume_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Resume_15, 0) = ((MR_Box) (ResumeVars_12));
      MR_hl_field(MR_mktag(1), Resume_15, 1) = (MR_Box) ((MR_Unsigned) (ResumeLocs_8));
    }
    hlds__hlds_llds__goal_set_resume_point_3_p_0(Resume_15, Goal0_9, Goal_10);
  }
}

static void MR_CALL 
ll_backend__liveness__require_equal_4_p_0(
  MR_Word LivenessFirst_5,
  MR_Word LivenessRest_6,
  MR_String GoalType_7,
  MR_Word LiveInfo_8)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessFirst_5, LivenessRest_6);
    if (!(succeeded))
    {
      MR_Word VarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_8, (MR_Integer) 2))));
      MR_Word FirstVars_10;
      MR_Word RestVars_11;
      MR_String FirstNames_12;
      MR_String RestNames_13;
      MR_String Msg_14;
      MR_String Var_18;
      MR_String Var_19;
      MR_String Var_21;
      MR_String Var_23;
      MR_String Var_24;
      MR_String Var_26;
      MR_String Var_28;

      FirstVars_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessFirst_5);
      RestVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessRest_6);
      FirstNames_12 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, (MR_Integer) 1, FirstVars_10);
      RestNames_13 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, (MR_Integer) 1, RestVars_11);
      Var_28 = mercury__string__f_43_43_2_f_0(RestNames_13, (MR_String) "\n");
      Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", Var_28);
      Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_26);
      Var_23 = mercury__string__f_43_43_2_f_0(FirstNames_12, Var_24);
      Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", Var_23);
      Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", Var_21);
      Var_18 = mercury__string__f_43_43_2_f_0(GoalType_7, Var_19);
      Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", Var_18);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", Msg_14);
        return;
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_proc_body_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word VarSet_7,
  MR_Word BornVars0_8)
{
  {
    MR_Word Goal1_9;
    MR_Word DelayedDead_11;
    MR_Word GoalExpr_12;
    MR_Word GoalInfo1_13;
    MR_Word PostDeaths1_14;
    MR_Word PostDeaths_15;
    MR_Word GoalInfo_16;
    MR_Word Var_17;
    MR_Word Var_10;

    Var_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    ll_backend__liveness__delay_death_goal_7_p_0(Goal0_5, &Goal1_9, BornVars0_8, &Var_10, Var_17, &DelayedDead_11, VarSet_7);
    GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_9, (MR_Integer) 0))));
    GoalInfo1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_9, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo1_13, &PostDeaths1_14);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths1_14, DelayedDead_11, &PostDeaths_15);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeaths_15, GoalInfo1_13, &GoalInfo_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_16));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word BornVars0_3,
  MR_Word DelayedDead0_4,
  MR_Word VarSet_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word DelayedDeadGoal_13;
    MR_Word Cases_14;
    MR_Word BornVars_18;
    MR_Word DelayedDead_19;
    MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_23;
    MR_Word BornVarsGoal_24;
    MR_Word MaybeBornVarsDelayedDead_25;
    MR_Word Var_28;
    MR_Word Var_29;

    ll_backend__liveness__delay_death_goal_7_p_0(Goal0_22, &Goal_23, BornVars0_3, &BornVarsGoal_24, DelayedDead0_4, &DelayedDeadGoal_13, VarSet_5);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_20));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_21));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_23));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Case_12));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (DelayedDeadGoal_13));
    }
    ll_backend__liveness__delay_death_cases_6_p_0(Cases0_11, &Cases_14, BornVars0_3, DelayedDead0_4, VarSet_5, &MaybeBornVarsDelayedDead_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_14));
    }
    if ((MaybeBornVarsDelayedDead_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      BornVars_18 = BornVarsGoal_24;
      DelayedDead_19 = DelayedDeadGoal_13;
    }
    else
    {
      MR_Word BornVarsCases_26;
      MR_Word DelayedDeadCases_27;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBornVarsDelayedDead_25, (MR_Integer) 0))));

      BornVarsCases_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      DelayedDeadCases_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsGoal_24, BornVarsCases_26, &BornVars_18);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadGoal_13, DelayedDeadCases_27, &DelayedDead_19);
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (BornVars_18));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (DelayedDead_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word BornVars0_3,
  MR_Word DelayedDead0_4,
  MR_Word VarSet_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word DelayedDeadGoal_13;
    MR_Word Goals_14;
    MR_Word BornVars_18;
    MR_Word DelayedDead_19;
    MR_Word BornVarsGoal_20;
    MR_Word MaybeBornVarsDelayedDead_21;
    MR_Word Var_24;
    MR_Word Var_25;

    ll_backend__liveness__delay_death_goal_7_p_0(Goal0_10, &Goal_12, BornVars0_3, &BornVarsGoal_20, DelayedDead0_4, &DelayedDeadGoal_13, VarSet_5);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (DelayedDeadGoal_13));
    }
    ll_backend__liveness__delay_death_disj_6_p_0(Goals0_11, &Goals_14, BornVars0_3, DelayedDead0_4, VarSet_5, &MaybeBornVarsDelayedDead_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_14));
    }
    if ((MaybeBornVarsDelayedDead_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      BornVars_18 = BornVarsGoal_20;
      DelayedDead_19 = DelayedDeadGoal_13;
    }
    else
    {
      MR_Word BornVarsGoals_22;
      MR_Word DelayedDeadGoals_23;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBornVarsDelayedDead_21, (MR_Integer) 0))));

      BornVarsGoals_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
      DelayedDeadGoals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsGoal_20, BornVarsGoals_22, &BornVars_18);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadGoal_13, DelayedDeadGoals_23, &DelayedDead_19);
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (BornVars_18));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (DelayedDead_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word VarSet_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = HeadVar__5_5;
    *HeadVar__4_4 = HeadVar__3_3;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word BornVarsGoal_24;
    MR_Word DelayedDeadGoal_25;
    MR_Word BornVarsGoals_26;
    MR_Word DelayedDeadGoals_27;

    ll_backend__liveness__delay_death_goal_7_p_0(Goal0_15, &Goal_17, HeadVar__3_3, &BornVarsGoal_24, HeadVar__5_5, &DelayedDeadGoal_25, VarSet_7);
    ll_backend__liveness__delay_death_par_conj_7_p_0(Goals0_16, &Goals_18, HeadVar__3_3, &BornVarsGoals_26, HeadVar__5_5, &DelayedDeadGoals_27, VarSet_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_18));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsGoal_24, BornVarsGoals_26, HeadVar__4_4);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadGoal_25, DelayedDeadGoals_27, HeadVar__6_6);
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_BornVars_0_3,
  MR_Word * STATE_VARIABLE_BornVars_4,
  MR_Word STATE_VARIABLE_DelayedDead_0_5,
  MR_Word * STATE_VARIABLE_DelayedDead_6,
  MR_Word VarSet_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DelayedDead_6 = STATE_VARIABLE_DelayedDead_0_5;
    *STATE_VARIABLE_BornVars_4 = STATE_VARIABLE_BornVars_0_3;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word STATE_VARIABLE_BornVars_26_26;
    MR_Word STATE_VARIABLE_DelayedDead_27_27;

    ll_backend__liveness__delay_death_goal_7_p_0(Goal0_15, &Goal_17, STATE_VARIABLE_BornVars_0_3, &STATE_VARIABLE_BornVars_26_26, STATE_VARIABLE_DelayedDead_0_5, &STATE_VARIABLE_DelayedDead_27_27, VarSet_7);
    ll_backend__liveness__delay_death_conj_7_p_0(Goals0_16, &Goals_18, STATE_VARIABLE_BornVars_26_26, STATE_VARIABLE_BornVars_4, STATE_VARIABLE_DelayedDead_27_27, STATE_VARIABLE_DelayedDead_6, VarSet_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_18));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Case_7;

    conv1_Case_7 = ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Case_7));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_7;

    conv0_Goal_7 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Goal_7));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_72,
  MR_Word * STATE_VARIABLE_GoalExpr_73,
  MR_Word STATE_VARIABLE_GoalInfo_0_74,
  MR_Word * STATE_VARIABLE_GoalInfo_75,
  MR_Word STATE_VARIABLE_BornVars_0_76,
  MR_Word * STATE_VARIABLE_BornVars_77,
  MR_Word STATE_VARIABLE_DelayedDead_0_78,
  MR_Word * STATE_VARIABLE_DelayedDead_79,
  MR_Word VarSet_14)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_72)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_48 = (MR_Word) ((MR_Word) (STATE_VARIABLE_GoalExpr_0_72));
          MR_Word Goal_49;
          MR_Word Var_50;

          ll_backend__liveness__delay_death_goal_7_p_0(Goal0_48, &Goal_49, STATE_VARIABLE_BornVars_0_76, &Var_50, STATE_VARIABLE_DelayedDead_0_78, STATE_VARIABLE_DelayedDead_79, VarSet_14);
          *STATE_VARIABLE_GoalExpr_73 = (MR_Word) ((MR_Word) (Goal_49));
          *STATE_VARIABLE_BornVars_77 = STATE_VARIABLE_BornVars_0_76;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_GoalExpr_73 = STATE_VARIABLE_GoalExpr_0_72;
          *STATE_VARIABLE_BornVars_77 = STATE_VARIABLE_BornVars_0_76;
          *STATE_VARIABLE_DelayedDead_79 = STATE_VARIABLE_DelayedDead_0_78;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_GoalExpr_73 = STATE_VARIABLE_GoalExpr_0_72;
          *STATE_VARIABLE_BornVars_77 = STATE_VARIABLE_BornVars_0_76;
          *STATE_VARIABLE_DelayedDead_79 = STATE_VARIABLE_DelayedDead_0_78;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_GoalExpr_73 = STATE_VARIABLE_GoalExpr_0_72;
              *STATE_VARIABLE_BornVars_77 = STATE_VARIABLE_BornVars_0_76;
              *STATE_VARIABLE_DelayedDead_79 = STATE_VARIABLE_DelayedDead_0_78;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_GoalExpr_73 = STATE_VARIABLE_GoalExpr_0_72;
              *STATE_VARIABLE_BornVars_77 = STATE_VARIABLE_BornVars_0_76;
              *STATE_VARIABLE_DelayedDead_79 = STATE_VARIABLE_DelayedDead_0_78;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2))));
              MR_Word Goals_40;

              switch (ConjType_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__liveness__delay_death_par_conj_7_p_0(Goals0_39, &Goals_40, STATE_VARIABLE_BornVars_0_76, STATE_VARIABLE_BornVars_77, STATE_VARIABLE_DelayedDead_0_78, STATE_VARIABLE_DelayedDead_79, VarSet_14);
                  break;
                case (MR_Integer) 0:
                  ll_backend__liveness__delay_death_conj_7_p_0(Goals0_39, &Goals_40, STATE_VARIABLE_BornVars_0_76, STATE_VARIABLE_BornVars_77, STATE_VARIABLE_DelayedDead_0_78, STATE_VARIABLE_DelayedDead_79, VarSet_14);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_73 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_40));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalDeaths_41;
              MR_Word MaybeBornVarsDelayedDead_42;
              MR_Word Goals0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1))));

              ll_backend__liveness__delay_death_disj_6_p_0(Goals0_111, &GoalDeaths_41, STATE_VARIABLE_BornVars_0_76, STATE_VARIABLE_DelayedDead_0_78, VarSet_14, &MaybeBornVarsDelayedDead_42);
              if ((MaybeBornVarsDelayedDead_42 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_GoalExpr_73 = STATE_VARIABLE_GoalExpr_0_72;
                *STATE_VARIABLE_BornVars_77 = STATE_VARIABLE_BornVars_0_76;
                *STATE_VARIABLE_DelayedDead_79 = STATE_VARIABLE_DelayedDead_0_78;
              }
              else
              {
                MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBornVarsDelayedDead_42, (MR_Integer) 0))));
                MR_Word Var_102;
                MR_Word Goals_109;

                *STATE_VARIABLE_BornVars_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0))));
                *STATE_VARIABLE_DelayedDead_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 1))));
                {
                  Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_expr_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (*STATE_VARIABLE_DelayedDead_79));
                }
                Goals_109 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__liveness_scalar_common_2[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_102, GoalDeaths_41);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_GoalExpr_73 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_109));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1))));
              MR_Word CanFail_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 3))));
              MR_Word CaseDeaths_46;
              MR_Word MaybeBornVarsDelayedDead_113;

              ll_backend__liveness__delay_death_cases_6_p_0(Cases0_45, &CaseDeaths_46, STATE_VARIABLE_BornVars_0_76, STATE_VARIABLE_DelayedDead_0_78, VarSet_14, &MaybeBornVarsDelayedDead_113);
              if ((MaybeBornVarsDelayedDead_113 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", (MR_String) "empty switch");
                  return;
                }
              else
              {
                MR_Word Cases_47;
                MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBornVarsDelayedDead_113, (MR_Integer) 0))));
                MR_Word Var_97;

                *STATE_VARIABLE_BornVars_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 0))));
                *STATE_VARIABLE_DelayedDead_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 1))));
                {
                  Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_expr_9_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (*STATE_VARIABLE_DelayedDead_79));
                }
                Cases_47 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__liveness_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_97, CaseDeaths_46);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_GoalExpr_73 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_43));
                  MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_44));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_47));
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1))));
              MR_Word Goal0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2))));
              MR_Word Goal_115;
              MR_Word Var_82;

              succeeded = ((((MR_tag((MR_Word) Reason_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_82 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                Goal_115 = Goal0_114;
                *STATE_VARIABLE_DelayedDead_79 = STATE_VARIABLE_DelayedDead_0_78;
              }
              else
              {
                MR_Word Var_70;

                ll_backend__liveness__delay_death_goal_7_p_0(Goal0_114, &Goal_115, STATE_VARIABLE_BornVars_0_76, &Var_70, STATE_VARIABLE_DelayedDead_0_78, STATE_VARIABLE_DelayedDead_79, VarSet_14);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_73 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_68));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goal_115));
              }
              *STATE_VARIABLE_BornVars_77 = STATE_VARIABLE_BornVars_0_76;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantVars_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1))));
              MR_Word Cond0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2))));
              MR_Word Then0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 3))));
              MR_Word Else0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 4))));
              MR_Word Cond_57;
              MR_Word BornVarsCond_58;
              MR_Word DelayedDeadCond_59;
              MR_Word Then1_60;
              MR_Word BornVarsThen_61;
              MR_Word DelayedDeadThen_62;
              MR_Word Else1_63;
              MR_Word BornVarsElse_64;
              MR_Word DelayedDeadElse_65;
              MR_Word Then_66;
              MR_Word Else_67;
              MR_Word Var_85;
              MR_Word Var_88;

              ll_backend__liveness__delay_death_goal_7_p_0(Cond0_52, &Cond_57, STATE_VARIABLE_BornVars_0_76, &BornVarsCond_58, STATE_VARIABLE_DelayedDead_0_78, &DelayedDeadCond_59, VarSet_14);
              ll_backend__liveness__delay_death_goal_7_p_0(Then0_53, &Then1_60, BornVarsCond_58, &BornVarsThen_61, DelayedDeadCond_59, &DelayedDeadThen_62, VarSet_14);
              ll_backend__liveness__delay_death_goal_7_p_0(Else0_54, &Else1_63, STATE_VARIABLE_BornVars_0_76, &BornVarsElse_64, STATE_VARIABLE_DelayedDead_0_78, &DelayedDeadElse_65, VarSet_14);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsThen_61, BornVarsElse_64, STATE_VARIABLE_BornVars_77);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadThen_62, DelayedDeadElse_65, STATE_VARIABLE_DelayedDead_79);
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Then1_60));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (DelayedDeadThen_62));
              }
              Then_66 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(*STATE_VARIABLE_DelayedDead_79, Var_85);
              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (Else1_63));
                MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (DelayedDeadElse_65));
              }
              Else_67 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(*STATE_VARIABLE_DelayedDead_79, Var_88);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_73 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (QuantVars_51));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_57));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_66));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_67));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_GoalInfo_75 = STATE_VARIABLE_GoalInfo_0_74;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__liveness__var_is_named_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_BornVars_0_30,
  MR_Word * STATE_VARIABLE_BornVars_31,
  MR_Word STATE_VARIABLE_DelayedDead_0_32,
  MR_Word * STATE_VARIABLE_DelayedDead_33,
  MR_Word VarSet_12)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
    MR_Word PreBirths_15;
    MR_Word PreDeaths0_16;
    MR_Word PreDelayedDead_18;
    MR_Word UnnamedPreDeaths_19;
    MR_Word GoalInfo1_20;
    MR_Word GoalExpr_21;
    MR_Word GoalInfo2_22;
    MR_Word PostBirths_23;
    MR_Word PostDeaths2_24;
    MR_Word PostDelayedDead_25;
    MR_Word UnnamedPostDeaths_26;
    MR_Word ToBeKilled_27;
    MR_Word PostDeaths_28;
    MR_Word GoalInfo_29;
    MR_Word STATE_VARIABLE_BornVars_34_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_DelayedDead_36_36;
    MR_Word STATE_VARIABLE_BornVars_37_37;
    MR_Word STATE_VARIABLE_DelayedDead_38_38;
    MR_Word STATE_VARIABLE_DelayedDead_41_41;

    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_14, &PreBirths_15);
    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_14, &PreDeaths0_16);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreBirths_15, STATE_VARIABLE_BornVars_0_30, &STATE_VARIABLE_BornVars_34_34);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (VarSet_12));
    }
    parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_35, PreDeaths0_16, &PreDelayedDead_18, &UnnamedPreDeaths_19);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDelayedDead_18, STATE_VARIABLE_DelayedDead_0_32, &STATE_VARIABLE_DelayedDead_36_36);
    hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(UnnamedPreDeaths_19, GoalInfo0_14, &GoalInfo1_20);
    ll_backend__liveness__delay_death_goal_expr_9_p_0(GoalExpr0_13, &GoalExpr_21, GoalInfo1_20, &GoalInfo2_22, STATE_VARIABLE_BornVars_34_34, &STATE_VARIABLE_BornVars_37_37, STATE_VARIABLE_DelayedDead_36_36, &STATE_VARIABLE_DelayedDead_38_38, VarSet_12);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo2_22, &PostBirths_23);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo2_22, &PostDeaths2_24);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths_23, STATE_VARIABLE_BornVars_37_37, STATE_VARIABLE_BornVars_31);
    parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_35, PostDeaths2_24, &PostDelayedDead_25, &UnnamedPostDeaths_26);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDelayedDead_25, STATE_VARIABLE_DelayedDead_38_38, &STATE_VARIABLE_DelayedDead_41_41);
    parse_tree__set_of_var__divide_by_set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_BornVars_0_30, STATE_VARIABLE_DelayedDead_41_41, STATE_VARIABLE_DelayedDead_33, &ToBeKilled_27);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UnnamedPostDeaths_26, ToBeKilled_27, &PostDeaths_28);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeaths_28, GoalInfo2_22, &GoalInfo_29);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Goal_7;
    MR_Word Goal0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word DelayedDead0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ToBeKilled_8;
    MR_Word GoalExpr_9;
    MR_Word GoalInfo0_10;
    MR_Word PostDeath0_11;
    MR_Word PostDeath_12;
    MR_Word GoalInfo_13;

    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDead0_6, FinalDelayedDead_4, &ToBeKilled_8);
    GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    GoalInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_10, &PostDeath0_11);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeath0_11, ToBeKilled_8, &PostDeath_12);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeath_12, GoalInfo0_10, &GoalInfo_13);
    {
      Goal_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_7, 0) = ((MR_Box) (GoalExpr_9));
      MR_hl_field(MR_mktag(0), Goal_7, 1) = ((MR_Box) (GoalInfo_13));
    }
    return Goal_7;
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CompletedNonLocals_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Union_0_7,
  MR_Word * STATE_VARIABLE_Union_8,
  MR_Word * CompletedNonLocalUnion_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_7, CompletedNonLocals_5, CompletedNonLocalUnion_9);
      *STATE_VARIABLE_Union_8 = STATE_VARIABLE_Union_0_7;
    }
    else
    {
      MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_20;
      MR_Word Goals_21;
      MR_Word Goal1_28;
      MR_Word DeadnessGoal_29;
      MR_Word GoalInfo1_31;
      MR_Word InstmapDelta1_32;
      MR_Word InstmapReachable_33;
      MR_Word STATE_VARIABLE_Union_36_36;

      ll_backend__liveness__detect_deadness_in_goal_6_p_0(Goal0_18, &Goal1_28, HeadVar__3_3, &DeadnessGoal_29, HeadVar__4_4, HeadVar__6_6);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessGoal_29, STATE_VARIABLE_Union_0_7, &STATE_VARIABLE_Union_36_36);
      ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(Goals0_19, &Goals_21, HeadVar__3_3, HeadVar__4_4, CompletedNonLocals_5, HeadVar__6_6, STATE_VARIABLE_Union_36_36, STATE_VARIABLE_Union_8, CompletedNonLocalUnion_9);
      GoalInfo1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_28, (MR_Integer) 1))));
      InstmapDelta1_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_31);
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta1_32);
      if (succeeded)
        InstmapReachable_33 = (MR_Integer) 1;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_deadness_in_par_conj\'/9", (MR_String) "unreachable instmap");
          return;
        }
      ll_backend__liveness__add_branch_pre_deaths_6_p_0(DeadnessGoal_29, HeadVar__3_3, *CompletedNonLocalUnion_9, InstmapReachable_33, Goal1_28, &Goal_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_21));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_10_p_0(
  MR_Word SwitchVar_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word CompletedNonLocals_6,
  MR_Word LiveInfo_7,
  MR_Word STATE_VARIABLE_Union_0_8,
  MR_Word * STATE_VARIABLE_Union_9,
  MR_Word * CompletedNonLocalUnion_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word CompletedSwitchVar_18;
      MR_Word Var_21;
      MR_Word Var_52;
      MR_Word Var_58;
      MR_Word Var_59;

      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      Var_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SwitchVar_1);
      Var_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_7, (MR_Integer) 3))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_7, (MR_Integer) 4))));
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_21, Var_52, Var_58, Var_59, &CompletedSwitchVar_18);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedSwitchVar_18, STATE_VARIABLE_Union_0_8, STATE_VARIABLE_Union_9);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_9, CompletedNonLocals_6, CompletedNonLocalUnion_10);
    }
    else
    {
      MR_Word Case0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Case_26;
      MR_Word Cases_27;
      MR_Word MainConsId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_24, (MR_Integer) 0))));
      MR_Word OtherConsIds_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_24, (MR_Integer) 1))));
      MR_Word Goal0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_24, (MR_Integer) 2))));
      MR_Word Goal1_37;
      MR_Word DeadnessGoal_38;
      MR_Word GoalInfo1_40;
      MR_Word InstmapDelta1_41;
      MR_Word InstmapReachable_42;
      MR_Word Goal_43;
      MR_Word STATE_VARIABLE_Union_46_46;

      ll_backend__liveness__detect_deadness_in_goal_6_p_0(Goal0_36, &Goal1_37, HeadVar__4_4, &DeadnessGoal_38, HeadVar__5_5, LiveInfo_7);
      GoalInfo1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_37, (MR_Integer) 1))));
      InstmapDelta1_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_40);
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta1_41);
      if (succeeded)
      {
        InstmapReachable_42 = (MR_Integer) 1;
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_8, DeadnessGoal_38, &STATE_VARIABLE_Union_46_46);
      }
      else
      {
        MR_Word FilteredDeadnessGoal_76;

        InstmapReachable_42 = (MR_Integer) 0;
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessGoal_38, HeadVar__4_4, &FilteredDeadnessGoal_76);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_8, FilteredDeadnessGoal_76, &STATE_VARIABLE_Union_46_46);
      }
      ll_backend__liveness__detect_deadness_in_cases_10_p_0(SwitchVar_1, Cases0_25, &Cases_27, HeadVar__4_4, HeadVar__5_5, CompletedNonLocals_6, LiveInfo_7, STATE_VARIABLE_Union_46_46, STATE_VARIABLE_Union_9, CompletedNonLocalUnion_10);
      ll_backend__liveness__add_branch_pre_deaths_6_p_0(DeadnessGoal_38, HeadVar__4_4, *CompletedNonLocalUnion_10, InstmapReachable_42, Goal1_37, &Goal_43);
      {
        Case_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_26, 0) = ((MR_Box) (MainConsId_34));
        MR_hl_field(MR_mktag(0), Case_26, 1) = ((MR_Box) (OtherConsIds_35));
        MR_hl_field(MR_mktag(0), Case_26, 2) = ((MR_Box) (Goal_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_27));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CompletedNonLocals_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Union_0_7,
  MR_Word * STATE_VARIABLE_Union_8,
  MR_Word * CompletedNonLocalUnion_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_7, CompletedNonLocals_5, CompletedNonLocalUnion_9);
      *STATE_VARIABLE_Union_8 = STATE_VARIABLE_Union_0_7;
    }
    else
    {
      MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_20;
      MR_Word Goals_21;
      MR_Word Goal1_28;
      MR_Word DeadnessGoal_29;
      MR_Word GoalInfo1_31;
      MR_Word InstmapDelta1_32;
      MR_Word InstmapReachable_33;
      MR_Word STATE_VARIABLE_Union_36_36;

      ll_backend__liveness__detect_deadness_in_goal_6_p_0(Goal0_18, &Goal1_28, HeadVar__3_3, &DeadnessGoal_29, HeadVar__4_4, HeadVar__6_6);
      GoalInfo1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_28, (MR_Integer) 1))));
      InstmapDelta1_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_31);
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta1_32);
      if (succeeded)
      {
        InstmapReachable_33 = (MR_Integer) 1;
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_7, DeadnessGoal_29, &STATE_VARIABLE_Union_36_36);
      }
      else
      {
        MR_Word FilteredDeadnessGoal_45;

        InstmapReachable_33 = (MR_Integer) 0;
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessGoal_29, HeadVar__3_3, &FilteredDeadnessGoal_45);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_7, FilteredDeadnessGoal_45, &STATE_VARIABLE_Union_36_36);
      }
      ll_backend__liveness__detect_deadness_in_disj_9_p_0(Goals0_19, &Goals_21, HeadVar__3_3, HeadVar__4_4, CompletedNonLocals_5, HeadVar__6_6, STATE_VARIABLE_Union_36_36, STATE_VARIABLE_Union_8, CompletedNonLocalUnion_9);
      ll_backend__liveness__add_branch_pre_deaths_6_p_0(DeadnessGoal_29, HeadVar__3_3, *CompletedNonLocalUnion_9, InstmapReachable_33, Goal1_28, &Goal_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_21));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Deadness_0_3,
  MR_Word * STATE_VARIABLE_Deadness_4,
  MR_Word Liveness0_5,
  MR_Word HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Deadness_4 = STATE_VARIABLE_Deadness_0_3;
    }
    else
    {
      MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_14;
      MR_Word Goals_15;
      MR_Word GoalInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 1))));
      MR_Word InstmapDelta_21;

      InstmapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_20);
      succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_21);
      if (succeeded)
      {
        Goals_15 = Goals0_13;
        ll_backend__liveness__detect_deadness_in_goal_6_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_Deadness_0_3, STATE_VARIABLE_Deadness_4, Liveness0_5, HeadVar__6_6);
      }
      else
      {
        MR_Word LivenessGoal_22;
        MR_Word STATE_VARIABLE_Deadness_26_26;

        ll_backend__liveness__update_liveness_goal_4_p_0(Goal0_12, HeadVar__6_6, Liveness0_5, &LivenessGoal_22);
        ll_backend__liveness__detect_deadness_in_conj_6_p_0(Goals0_13, &Goals_15, STATE_VARIABLE_Deadness_0_3, &STATE_VARIABLE_Deadness_26_26, LivenessGoal_22, HeadVar__6_6);
        ll_backend__liveness__detect_deadness_in_goal_6_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_Deadness_26_26, STATE_VARIABLE_Deadness_4, Liveness0_5, HeadVar__6_6);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Deadness_0_105,
  MR_Word * STATE_VARIABLE_Deadness_106,
  MR_Word STATE_VARIABLE_Liveness_0_107,
  MR_Word LiveInfo_11)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word PreDeaths0_14;
    MR_Word PreBirths0_15;
    MR_Word PostDeaths0_16;
    MR_Word PostBirths0_17;
    MR_Word GoalExpr_45;
    MR_Word GoalInfo_47;
    MR_Word STATE_VARIABLE_Deadness_108_108;
    MR_Word STATE_VARIABLE_Deadness_109_109;
    MR_Word STATE_VARIABLE_Liveness_110_110;
    MR_Word STATE_VARIABLE_Liveness_111_111;
    MR_Word STATE_VARIABLE_Deadness_124_124;
    MR_Word STATE_VARIABLE_Deadness_125_125;

    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_13, &PreDeaths0_14);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_13, &PreBirths0_15);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_13, &PostDeaths0_16);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_13, &PostBirths0_17);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Deadness_0_105, PostBirths0_17, &STATE_VARIABLE_Deadness_108_108);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths0_16, STATE_VARIABLE_Deadness_108_108, &STATE_VARIABLE_Deadness_109_109);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_107, PreDeaths0_14, &STATE_VARIABLE_Liveness_110_110);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreBirths0_15, STATE_VARIABLE_Liveness_110_110, &STATE_VARIABLE_Liveness_111_111);
    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_99 = (MR_Word) ((MR_Word) (GoalExpr0_12));
          MR_Word SubGoal_100;

          ll_backend__liveness__detect_deadness_in_goal_6_p_0(SubGoal0_99, &SubGoal_100, STATE_VARIABLE_Deadness_109_109, &STATE_VARIABLE_Deadness_124_124, STATE_VARIABLE_Liveness_111_111, LiveInfo_11);
          GoalExpr_45 = (MR_Word) ((MR_Word) (SubGoal_100));
          GoalInfo_47 = GoalInfo0_13;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word CompletedNonLocals_42;
          MR_Word LiveNonLocals_43;
          MR_Word NewPostDeaths_44;
          MR_Word PostDeaths_46;
          MR_Word _BaseNonLocals_41;

          ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_11, GoalInfo0_13, &_BaseNonLocals_41, &CompletedNonLocals_42);
          parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_111_111, CompletedNonLocals_42, &LiveNonLocals_43);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveNonLocals_43, STATE_VARIABLE_Deadness_109_109, &NewPostDeaths_44);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewPostDeaths_44, STATE_VARIABLE_Deadness_109_109, &STATE_VARIABLE_Deadness_124_124);
          GoalExpr_45 = GoalExpr0_12;
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths0_16, NewPostDeaths_44, &PostDeaths_46);
          hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeaths_46, GoalInfo0_13, &GoalInfo_47);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word CompletedNonLocals_42;
              MR_Word LiveNonLocals_43;
              MR_Word NewPostDeaths_44;
              MR_Word PostDeaths_46;
              MR_Word _BaseNonLocals_41;

              ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_11, GoalInfo0_13, &_BaseNonLocals_41, &CompletedNonLocals_42);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_111_111, CompletedNonLocals_42, &LiveNonLocals_43);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveNonLocals_43, STATE_VARIABLE_Deadness_109_109, &NewPostDeaths_44);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewPostDeaths_44, STATE_VARIABLE_Deadness_109_109, &STATE_VARIABLE_Deadness_124_124);
              GoalExpr_45 = GoalExpr0_12;
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths0_16, NewPostDeaths_44, &PostDeaths_46);
              hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeaths_46, GoalInfo0_13, &GoalInfo_47);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));

              if ((Conjuncts0_49 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_45 = GoalExpr0_12;
                STATE_VARIABLE_Deadness_124_124 = STATE_VARIABLE_Deadness_109_109;
              }
              else
              {
                MR_Word Conjuncts_52;

                switch (ConjType_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Union0_54;
                      MR_Word CompletedNonLocals_127;
                      MR_Word Var_53;
                      MR_Word _CompletedNonLocalUnion_56;

                      ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_11, GoalInfo0_13, &Var_53, &CompletedNonLocals_127);
                      Union0_54 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                      ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(Conjuncts0_49, &Conjuncts_52, STATE_VARIABLE_Deadness_109_109, STATE_VARIABLE_Liveness_111_111, CompletedNonLocals_127, LiveInfo_11, Union0_54, &STATE_VARIABLE_Deadness_124_124, &_CompletedNonLocalUnion_56);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Goal0_160 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_49, (MR_Integer) 0))));
                      MR_Word Goals0_161 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_49, (MR_Integer) 1))));
                      MR_Word Goal_162;
                      MR_Word Goals_163;
                      MR_Word GoalInfo_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_160, (MR_Integer) 1))));
                      MR_Word InstmapDelta_169;

                      InstmapDelta_169 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_168);
                      succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_169);
                      if (succeeded)
                      {
                        Goals_163 = Goals0_161;
                        ll_backend__liveness__detect_deadness_in_goal_6_p_0(Goal0_160, &Goal_162, STATE_VARIABLE_Deadness_109_109, &STATE_VARIABLE_Deadness_124_124, STATE_VARIABLE_Liveness_111_111, LiveInfo_11);
                      }
                      else
                      {
                        MR_Word LivenessGoal_170;
                        MR_Word STATE_VARIABLE_Deadness_26_174;

                        ll_backend__liveness__update_liveness_goal_4_p_0(Goal0_160, LiveInfo_11, STATE_VARIABLE_Liveness_111_111, &LivenessGoal_170);
                        ll_backend__liveness__detect_deadness_in_conj_6_p_0(Goals0_161, &Goals_163, STATE_VARIABLE_Deadness_109_109, &STATE_VARIABLE_Deadness_26_174, LivenessGoal_170, LiveInfo_11);
                        ll_backend__liveness__detect_deadness_in_goal_6_p_0(Goal0_160, &Goal_162, STATE_VARIABLE_Deadness_26_174, &STATE_VARIABLE_Deadness_124_124, STATE_VARIABLE_Liveness_111_111, LiveInfo_11);
                      }
                      {
                        Conjuncts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Conjuncts_52, 0) = ((MR_Box) (Goal_162));
                        MR_hl_field(MR_mktag(1), Conjuncts_52, 1) = ((MR_Box) (Goals_163));
                      }
                    }
                    break;
                }
                {
                  GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_45, 1) = (MR_Box) ((MR_Unsigned) (ConjType_48));
                  MR_hl_field(MR_mktag(3), GoalExpr_45, 2) = ((MR_Box) (Conjuncts_52));
                }
              }
              GoalInfo_47 = GoalInfo0_13;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));

              if ((Disjuncts0_57 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_45 = GoalExpr0_12;
                STATE_VARIABLE_Deadness_124_124 = STATE_VARIABLE_Deadness_109_109;
              }
              else
              {
                MR_Word Disjuncts_61;
                MR_Word CompletedNonLocals_132;
                MR_Word Union0_133;
                MR_Word Var_60;
                MR_Word Var_62;

                ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_11, GoalInfo0_13, &Var_60, &CompletedNonLocals_132);
                Union0_133 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                ll_backend__liveness__detect_deadness_in_disj_9_p_0(Disjuncts0_57, &Disjuncts_61, STATE_VARIABLE_Deadness_109_109, STATE_VARIABLE_Liveness_111_111, CompletedNonLocals_132, LiveInfo_11, Union0_133, &STATE_VARIABLE_Deadness_124_124, &Var_62);
                {
                  GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), GoalExpr_45, 1) = ((MR_Box) (Disjuncts_61));
                }
              }
              GoalInfo_47 = GoalInfo0_13;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Det_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Cases_67;
              MR_Word CompletedNonLocals_141;
              MR_Word Union0_142;
              MR_Word Var_66;
              MR_Word Var_68;

              ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_11, GoalInfo0_13, &Var_66, &CompletedNonLocals_141);
              Union0_142 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              ll_backend__liveness__detect_deadness_in_cases_10_p_0(Var_63, Cases0_65, &Cases_67, STATE_VARIABLE_Deadness_109_109, STATE_VARIABLE_Liveness_111_111, CompletedNonLocals_141, LiveInfo_11, Union0_142, &STATE_VARIABLE_Deadness_124_124, &Var_68);
              {
                GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 1) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 2) = (MR_Box) ((MR_Unsigned) (Det_64));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 3) = ((MR_Box) (Cases_67));
              }
              GoalInfo_47 = GoalInfo0_13;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal0_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word SubGoal_153;
              MR_Word TermVar_102;
              MR_Word Var_114;

              succeeded = ((((MR_tag((MR_Word) Reason_101)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_101, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_101, (MR_Integer) 1))));
                Var_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_101, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_114 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_Word CompletedTermVars_103;
                MR_Word Var_115;

                Var_115 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_102);
                ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_11, Var_115, &CompletedTermVars_103);
                parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Deadness_109_109, CompletedTermVars_103, &STATE_VARIABLE_Deadness_124_124);
                SubGoal_153 = SubGoal0_152;
              }
              else
                ll_backend__liveness__detect_deadness_in_goal_6_p_0(SubGoal0_152, &SubGoal_153, STATE_VARIABLE_Deadness_109_109, &STATE_VARIABLE_Deadness_124_124, STATE_VARIABLE_Liveness_111_111, LiveInfo_11);
              {
                GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 1) = ((MR_Box) (Reason_101));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 2) = ((MR_Box) (SubGoal_153));
              }
              GoalInfo_47 = GoalInfo0_13;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Cond0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Then0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Else0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
              MR_Word LivenessCond_74;
              MR_Word Else1_75;
              MR_Word DeadnessElse_76;
              MR_Word Then_77;
              MR_Word DeadnessThen_78;
              MR_Word Cond1_79;
              MR_Word DeadnessCond_80;
              MR_Word InstmapDelta_82;
              MR_Word Cond_96;
              MR_Word Else_97;
              MR_Word CompletedNonLocals_149;
              MR_Word Var_81;

              ll_backend__liveness__update_liveness_goal_4_p_0(Cond0_70, LiveInfo_11, STATE_VARIABLE_Liveness_111_111, &LivenessCond_74);
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(Else0_72, &Else1_75, STATE_VARIABLE_Deadness_109_109, &DeadnessElse_76, STATE_VARIABLE_Liveness_111_111, LiveInfo_11);
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(Then0_71, &Then_77, STATE_VARIABLE_Deadness_109_109, &DeadnessThen_78, LivenessCond_74, LiveInfo_11);
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(Cond0_70, &Cond1_79, DeadnessThen_78, &DeadnessCond_80, STATE_VARIABLE_Liveness_111_111, LiveInfo_11);
              ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_11, GoalInfo0_13, &Var_81, &CompletedNonLocals_149);
              InstmapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
              succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta_82);
              if (succeeded)
              {
                MR_Word CondGoalInfo_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_70, (MR_Integer) 1))));
                MR_Word CondInstmapDelta_85;
                MR_Word ThenGoalInfo_87;
                MR_Word ThenInstmapDelta_88;
                MR_Word ElseGoalInfo_90;
                MR_Word ElseInstmapDelta_91;
                MR_Word CondThenInstmapReachable_92;
                MR_Word ElseInstmapReachable_93;
                MR_Word Union1_94;
                MR_Word CompletedNonLocalDeadness_95;
                MR_Word Union0_144;

                CondInstmapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondGoalInfo_84);
                ThenGoalInfo_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_71, (MR_Integer) 1))));
                ThenInstmapDelta_88 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ThenGoalInfo_87);
                ElseGoalInfo_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_72, (MR_Integer) 1))));
                ElseInstmapDelta_91 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ElseGoalInfo_90);
                Union0_144 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CondInstmapDelta_85);
                if (succeeded)
                  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ThenInstmapDelta_88);
                if (succeeded)
                {
                  CondThenInstmapReachable_92 = (MR_Integer) 1;
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Union0_144, DeadnessCond_80, &Union1_94);
                }
                else
                {
                  MR_Word FilteredDeadnessGoal_182;

                  CondThenInstmapReachable_92 = (MR_Integer) 0;
                  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessCond_80, STATE_VARIABLE_Deadness_109_109, &FilteredDeadnessGoal_182);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Union0_144, FilteredDeadnessGoal_182, &Union1_94);
                }
                succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ElseInstmapDelta_91);
                if (succeeded)
                {
                  ElseInstmapReachable_93 = (MR_Integer) 1;
                  ll_backend__liveness__union_branch_deadness_5_p_0(DeadnessElse_76, STATE_VARIABLE_Deadness_109_109, ElseInstmapReachable_93, Union1_94, &STATE_VARIABLE_Deadness_124_124);
                }
                else
                {
                  MR_Word FilteredDeadnessGoal_204;

                  ElseInstmapReachable_93 = (MR_Integer) 0;
                  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessElse_76, STATE_VARIABLE_Deadness_109_109, &FilteredDeadnessGoal_204);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Union1_94, FilteredDeadnessGoal_204, &STATE_VARIABLE_Deadness_124_124);
                }
                parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Deadness_124_124, CompletedNonLocals_149, &CompletedNonLocalDeadness_95);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(DeadnessCond_80, STATE_VARIABLE_Deadness_109_109, CompletedNonLocalDeadness_95, CondThenInstmapReachable_92, Cond1_79, &Cond_96);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(DeadnessElse_76, STATE_VARIABLE_Deadness_109_109, CompletedNonLocalDeadness_95, ElseInstmapReachable_93, Else1_75, &Else_97);
              }
              else
              {
                MR_Word CompletedNonLocalDeadness_146;

                parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessCond_80, DeadnessElse_76, &STATE_VARIABLE_Deadness_124_124);
                parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Deadness_124_124, CompletedNonLocals_149, &CompletedNonLocalDeadness_146);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(DeadnessCond_80, STATE_VARIABLE_Deadness_109_109, CompletedNonLocalDeadness_146, (MR_Integer) 0, Cond1_79, &Cond_96);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(DeadnessElse_76, STATE_VARIABLE_Deadness_109_109, CompletedNonLocalDeadness_146, (MR_Integer) 0, Else1_75, &Else_97);
              }
              {
                GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 1) = ((MR_Box) (Vars_69));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 2) = ((MR_Box) (Cond_96));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 3) = ((MR_Box) (Then_77));
                MR_hl_field(MR_mktag(3), GoalExpr_45, 4) = ((MR_Box) (Else_97));
              }
              GoalInfo_47 = GoalInfo0_13;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_deadness_in_goal\'/6", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_47));
    }
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Deadness_124_124, PreBirths0_15, &STATE_VARIABLE_Deadness_125_125);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths0_14, STATE_VARIABLE_Deadness_125_125, STATE_VARIABLE_Deadness_106);
  }
}

static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
  MR_Word LiveInfo_4,
  MR_Word Vars0_5,
  MR_Word * Vars_6)
{
  {
    MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_4, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_4, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_4, (MR_Integer) 4))));

    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Vars0_5, Var_7, Var_13, Var_14, Vars_6);
  }
}

static void MR_CALL 
ll_backend__liveness__union_branch_deadness_5_p_0(
  MR_Word DeadnessGoal_6,
  MR_Word Deadness0_7,
  MR_Word InstmapReachable_8,
  MR_Word STATE_VARIABLE_Union_0_11,
  MR_Word * STATE_VARIABLE_Union_12)
{
  switch (InstmapReachable_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FilteredDeadnessGoal_10;

        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessGoal_6, Deadness0_7, &FilteredDeadnessGoal_10);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_11, FilteredDeadnessGoal_10, STATE_VARIABLE_Union_12);
      }
      break;
    case (MR_Integer) 1:
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_11, DeadnessGoal_6, STATE_VARIABLE_Union_12);
      break;
  }
}

static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_6_p_0(
  MR_Word DeadnessGoal_7,
  MR_Word Deadness0_8,
  MR_Word CompletedNonLocalUnion_9,
  MR_Word InstmapReachable_10,
  MR_Word STATE_VARIABLE_Goal_0_14,
  MR_Word * STATE_VARIABLE_Goal_15)
{
  {
    MR_Word PreDeaths_12;

    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocalUnion_9, DeadnessGoal_7, &PreDeaths_12);
    switch (InstmapReachable_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FilteredPreDeaths_13;
          MR_Word GoalExpr_22;
          MR_Word GoalInfo0_23;
          MR_Word PreDeaths0_24;
          MR_Word PreDeaths_25;
          MR_Word GoalInfo_26;

          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths_12, Deadness0_8, &FilteredPreDeaths_13);
          GoalExpr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_14, (MR_Integer) 0))));
          GoalInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_14, (MR_Integer) 1))));
          hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_23, &PreDeaths0_24);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths0_24, FilteredPreDeaths_13, &PreDeaths_25);
          hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(PreDeaths_25, GoalInfo0_23, &GoalInfo_26);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Goal_15 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_22));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_26));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalExpr_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_14, (MR_Integer) 0))));
          MR_Word GoalInfo0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_14, (MR_Integer) 1))));
          MR_Word PreDeaths0_33;
          MR_Word PreDeaths_34;
          MR_Word GoalInfo_35;

          hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_32, &PreDeaths0_33);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths0_33, PreDeaths_12, &PreDeaths_34);
          hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(PreDeaths_34, GoalInfo0_32, &GoalInfo_35);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Goal_15 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_31));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_35));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__liveness__update_liveness_expr_4_p_0(
  MR_Word GoalExpr_5,
  MR_Word LiveInfo_6,
  MR_Word STATE_VARIABLE_Liveness_0_55,
  MR_Word * STATE_VARIABLE_Liveness_56)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_50 = (MR_Word) ((MR_Word) (GoalExpr_5));

          ll_backend__liveness__update_liveness_goal_4_p_0(SubGoal_50, LiveInfo_6, STATE_VARIABLE_Liveness_0_55, STATE_VARIABLE_Liveness_56);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Liveness_56 = STATE_VARIABLE_Liveness_0_55;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Liveness_56 = STATE_VARIABLE_Liveness_0_55;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Liveness_56 = STATE_VARIABLE_Liveness_0_55;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Liveness_56 = STATE_VARIABLE_Liveness_0_55;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              ll_backend__liveness__update_liveness_conj_4_p_0(Goals_32, LiveInfo_6, STATE_VARIABLE_Liveness_0_55, STATE_VARIABLE_Liveness_56);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word Goal_33;

              succeeded = ll_backend__liveness__find_reachable_goal_2_p_0(Goals_70, &Goal_33);
              if (succeeded)
                ll_backend__liveness__update_liveness_goal_4_p_0(Goal_33, LiveInfo_6, STATE_VARIABLE_Liveness_0_55, STATE_VARIABLE_Liveness_56);
              else
                *STATE_VARIABLE_Liveness_56 = STATE_VARIABLE_Liveness_0_55;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Goal_71;

              succeeded = ll_backend__liveness__find_reachable_case_2_p_0(Cases_36, &Goal_71);
              if (succeeded)
                ll_backend__liveness__update_liveness_goal_4_p_0(Goal_71, LiveInfo_6, STATE_VARIABLE_Liveness_0_55, STATE_VARIABLE_Liveness_56);
              else
                *STATE_VARIABLE_Liveness_56 = STATE_VARIABLE_Liveness_0_55;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word SubGoal_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word TermVar_52;
              MR_Word Var_59;

              succeeded = ((((MR_tag((MR_Word) Reason_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_51, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_51, (MR_Integer) 1))));
                Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_51, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_59 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_Word CompletedTermVars_53;
                MR_Word Var_60;
                MR_Word Var_78;
                MR_Word Var_84;
                MR_Word Var_85;

                Var_60 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_52);
                Var_78 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 3))));
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 4))));
                hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_60, Var_78, Var_84, Var_85, &CompletedTermVars_53);
                parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedTermVars_53, STATE_VARIABLE_Liveness_0_55, STATE_VARIABLE_Liveness_56);
              }
              else
                ll_backend__liveness__update_liveness_goal_4_p_0(SubGoal_73, LiveInfo_6, STATE_VARIABLE_Liveness_0_55, STATE_VARIABLE_Liveness_56);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
              MR_Word ElseGoalInfo_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_40, (MR_Integer) 1))));
              MR_Word ElseInstmapDelta_43;
              MR_Word CondGoalInfo_45;
              MR_Word CondInstmapDelta_46;
              MR_Word ThenGoalInfo_48;
              MR_Word ThenInstmapDelta_49;

              ElseInstmapDelta_43 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ElseGoalInfo_42);
              CondGoalInfo_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_38, (MR_Integer) 1))));
              CondInstmapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondGoalInfo_45);
              ThenGoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_39, (MR_Integer) 1))));
              ThenInstmapDelta_49 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ThenGoalInfo_48);
              succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ElseInstmapDelta_43);
              if (succeeded)
                ll_backend__liveness__update_liveness_goal_4_p_0(Else_40, LiveInfo_6, STATE_VARIABLE_Liveness_0_55, STATE_VARIABLE_Liveness_56);
              else
              {
                succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CondInstmapDelta_46);
                if (succeeded)
                  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ThenInstmapDelta_49);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_Liveness_65_65;

                  ll_backend__liveness__update_liveness_goal_4_p_0(Cond_38, LiveInfo_6, STATE_VARIABLE_Liveness_0_55, &STATE_VARIABLE_Liveness_65_65);
                  ll_backend__liveness__update_liveness_goal_4_p_0(Then_39, LiveInfo_6, STATE_VARIABLE_Liveness_65_65, STATE_VARIABLE_Liveness_56);
                }
                else
                  *STATE_VARIABLE_Liveness_56 = STATE_VARIABLE_Liveness_0_55;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.update_liveness_expr\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LiveInfo_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Liveness_4 = STATE_VARIABLE_Liveness_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Liveness_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Liveness_0_3;

      ll_backend__liveness__update_liveness_goal_4_p_0(Goal_9, LiveInfo_2, STATE_VARIABLE_Liveness_0_3, &STATE_VARIABLE_Liveness_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_10;
      next_value_of_STATE_VARIABLE_Liveness_0_3 = STATE_VARIABLE_Liveness_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Liveness_0_3 = next_value_of_STATE_VARIABLE_Liveness_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__liveness__update_liveness_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word LiveInfo_6,
  MR_Word STATE_VARIABLE_Liveness_0_20,
  MR_Word * STATE_VARIABLE_Liveness_21)
{
  {
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
    MR_Word PreDeaths_10;
    MR_Word PreBirths_11;
    MR_Word PostDeaths_12;
    MR_Word PostBirths_13;
    MR_Word OldLiveness_15;
    MR_Word NewLiveness0_16;
    MR_Word Var_17;
    MR_Word CompletedNonLocals_18;
    MR_Word NewLiveness_19;
    MR_Word STATE_VARIABLE_Liveness_22_22;
    MR_Word STATE_VARIABLE_Liveness_23_23;
    MR_Word STATE_VARIABLE_Liveness_24_24;
    MR_Word STATE_VARIABLE_Liveness_25_25;
    MR_Word STATE_VARIABLE_Liveness_26_26;
    MR_Word Var_36;
    MR_Word Var_42;
    MR_Word Var_43;

    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_9, &PreDeaths_10);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo_9, &PreBirths_11);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_9, &PostDeaths_12);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo_9, &PostBirths_13);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_20, PreDeaths_10, &STATE_VARIABLE_Liveness_22_22);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreBirths_11, STATE_VARIABLE_Liveness_22_22, &STATE_VARIABLE_Liveness_23_23);
    ll_backend__liveness__update_liveness_expr_4_p_0(GoalExpr_8, LiveInfo_6, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_24_24, PostDeaths_12, &STATE_VARIABLE_Liveness_25_25);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths_13, STATE_VARIABLE_Liveness_25_25, &STATE_VARIABLE_Liveness_26_26);
    parse_tree__set_of_var__divide_by_set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_20, STATE_VARIABLE_Liveness_26_26, &OldLiveness_15, &NewLiveness0_16);
    Var_17 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_9);
    Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 3))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_6, (MR_Integer) 4))));
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_17, Var_36, Var_42, Var_43, &CompletedNonLocals_18);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewLiveness0_16, CompletedNonLocals_18, &NewLiveness_19);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldLiveness_15, NewLiveness_19, STATE_VARIABLE_Liveness_21);
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_case_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ReachableGoal_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word GoalInfo_9;
    MR_Word InstmapDelta_10;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
      InstmapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_9);
      succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_10);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        *ReachableGoal_7 = Goal_5;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ReachableGoal_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_3;
    MR_Word Goals_4;
    MR_Word GoalInfo_7;
    MR_Word InstmapDelta_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));
      InstmapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_7);
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta_8);
      if (succeeded)
      {
        *ReachableGoal_5 = Goal_3;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Union_7 = STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word Goal1_22;
    MR_Word Liveness1_23;
    MR_Word NonLocalUnion_24;
    MR_Word Residue_25;
    MR_Word STATE_VARIABLE_Union_28_28;
    MR_Word GoalExpr_34;
    MR_Word GoalInfo0_35;
    MR_Word PostBirths0_36;
    MR_Word PostBirths_37;
    MR_Word GoalInfo_38;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(Goal0_14, &Goal1_22, HeadVar__3_3, &Liveness1_23, HeadVar__5_5);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness1_23, STATE_VARIABLE_Union_0_6, &STATE_VARIABLE_Union_28_28);
    ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(Goals0_15, &Goals_17, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_Union_28_28, STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_7, HeadVar__4_4, &NonLocalUnion_24);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalUnion_24, Liveness1_23, &Residue_25);
    GoalExpr_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_22, (MR_Integer) 0))));
    GoalInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_22, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_35, &PostBirths0_36);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_36, Residue_25, &PostBirths_37);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_37, GoalInfo0_35, &GoalInfo_38);
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_16, 0) = ((MR_Box) (GoalExpr_34));
      MR_hl_field(MR_mktag(0), Goal_16, 1) = ((MR_Box) (GoalInfo_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Union_7 = STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 2))));
    MR_Word Goal1_25;
    MR_Word Liveness1_26;
    MR_Word NonLocalUnion_27;
    MR_Word Residue_28;
    MR_Word Goal_29;
    MR_Word STATE_VARIABLE_Union_32_32;
    MR_Word GoalExpr_38;
    MR_Word GoalInfo0_39;
    MR_Word PostBirths0_40;
    MR_Word PostBirths_41;
    MR_Word GoalInfo_42;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(Goal0_24, &Goal1_25, HeadVar__3_3, &Liveness1_26, HeadVar__5_5);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness1_26, STATE_VARIABLE_Union_0_6, &STATE_VARIABLE_Union_32_32);
    ll_backend__liveness__detect_liveness_in_cases_7_p_0(Cases0_15, &Cases_17, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_Union_32_32, STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_7, HeadVar__4_4, &NonLocalUnion_27);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalUnion_27, Liveness1_26, &Residue_28);
    GoalExpr_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_25, (MR_Integer) 0))));
    GoalInfo0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_25, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_39, &PostBirths0_40);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_40, Residue_28, &PostBirths_41);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_41, GoalInfo0_39, &GoalInfo_42);
    {
      Goal_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_29, 0) = ((MR_Box) (GoalExpr_38));
      MR_hl_field(MR_mktag(0), Goal_29, 1) = ((MR_Box) (GoalInfo_42));
    }
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_16, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(MR_mktag(0), Case_16, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(MR_mktag(0), Case_16, 2) = ((MR_Box) (Goal_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Union_7 = STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word Goal1_22;
    MR_Word Liveness1_23;
    MR_Word NonLocalUnion_24;
    MR_Word Residue_25;
    MR_Word STATE_VARIABLE_Union_28_28;
    MR_Word GoalExpr_34;
    MR_Word GoalInfo0_35;
    MR_Word PostBirths0_36;
    MR_Word PostBirths_37;
    MR_Word GoalInfo_38;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(Goal0_14, &Goal1_22, HeadVar__3_3, &Liveness1_23, HeadVar__5_5);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness1_23, STATE_VARIABLE_Union_0_6, &STATE_VARIABLE_Union_28_28);
    ll_backend__liveness__detect_liveness_in_disj_7_p_0(Goals0_15, &Goals_17, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_Union_28_28, STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_7, HeadVar__4_4, &NonLocalUnion_24);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalUnion_24, Liveness1_23, &Residue_25);
    GoalExpr_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_22, (MR_Integer) 0))));
    GoalInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_22, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_35, &PostBirths0_36);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_36, Residue_25, &PostBirths_37);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_37, GoalInfo0_35, &GoalInfo_38);
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_16, 0) = ((MR_Box) (GoalExpr_34));
      MR_hl_field(MR_mktag(0), Goal_16, 1) = ((MR_Box) (GoalInfo_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4,
  MR_Word HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Liveness_4 = STATE_VARIABLE_Liveness_0_3;
    }
    else
    {
      MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_12;
      MR_Word Goals_13;
      MR_Word STATE_VARIABLE_Liveness_21_21;
      MR_Word GoalInfo_17;
      MR_Word InstmapDelta_18;

      ll_backend__liveness__detect_liveness_in_goal_5_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_Liveness_0_3, &STATE_VARIABLE_Liveness_21_21, HeadVar__5_5);
      GoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
      InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_17);
      succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_18);
      if (succeeded)
      {
        Goals_13 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Liveness_4 = STATE_VARIABLE_Liveness_21_21;
      }
      else
        ll_backend__liveness__detect_liveness_in_conj_5_p_0(Goals0_11, &Goals_13, STATE_VARIABLE_Liveness_21_21, STATE_VARIABLE_Liveness_4, HeadVar__5_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word Liveness0_8,
  MR_Word * FinalLiveness_9,
  MR_Word LiveInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
    MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
    MR_Word BaseNonLocals_13;
    MR_Word CompletedNonLocals_14;
    MR_Word NewVarsSet_15;
    MR_Word InstMapDelta_16;
    MR_Word Births_17;
    MR_Word PreDeaths_46;
    MR_Word PreBirths_47;
    MR_Word PostDeaths_48;
    MR_Word PostBirths_49;
    MR_Word GoalExpr_50;
    MR_Word GoalInfo_87;

    ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_10, GoalInfo0_12, &BaseNonLocals_13, &CompletedNonLocals_14);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness0_8, &NewVarsSet_15);
    InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_12);
    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_16);
    if (succeeded)
      Births_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    else
    {
      MR_Word NewVarsList_18;
      MR_Word Births0_19;
      MR_Word Births1_20;
      MR_Word TypeInfos_21;
      MR_Word NewTypeInfos_22;

      NewVarsList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewVarsSet_15);
      Births0_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      ll_backend__liveness__find_value_giving_occurrences_5_p_0(NewVarsList_18, LiveInfo_10, InstMapDelta_16, Births0_19, &Births1_20);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, BaseNonLocals_13, &TypeInfos_21);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfos_21, Liveness0_8, &NewTypeInfos_22);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Births1_20, NewTypeInfos_22, &Births_17);
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_8, Births_17, FinalLiveness_9);
    switch (MR_tag((MR_Word) GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_80 = (MR_Word) ((MR_Word) (GoalExpr0_11));
          MR_Word SubGoal_81;
          MR_Word Liveness_112;
          MR_Word NonLocalLiveness_113;
          MR_Word GoalFinalLiveness_114;

          ll_backend__liveness__detect_liveness_in_goal_5_p_0(SubGoal0_80, &SubGoal_81, Liveness0_8, &Liveness_112, LiveInfo_10);
          GoalExpr_50 = (MR_Word) ((MR_Word) (SubGoal_81));
          PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_112, &NonLocalLiveness_113);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_113, Liveness0_8, &GoalFinalLiveness_114);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_114, *FinalLiveness_9, &PostDeaths_48);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_9, GoalFinalLiveness_114, &PostBirths_49);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          PreBirths_47 = Births_17;
          PostDeaths_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          PostBirths_49 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          GoalExpr_50 = GoalExpr0_11;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              PreBirths_47 = Births_17;
              PostDeaths_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              PostBirths_49 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              GoalExpr_50 = GoalExpr0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word Goals_53;
              MR_Word Liveness_54;
              MR_Word NonLocalLiveness_84;
              MR_Word GoalFinalLiveness_85;

              switch (ConjType_51) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Union0_55;
                    MR_Word Union_56;

                    Union0_55 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(Goals0_52, &Goals_53, Liveness0_8, CompletedNonLocals_14, LiveInfo_10, Union0_55, &Union_56);
                    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Union_56, Liveness0_8, &Liveness_54);
                  }
                  break;
                case (MR_Integer) 0:
                  ll_backend__liveness__detect_liveness_in_conj_5_p_0(Goals0_52, &Goals_53, Liveness0_8, &Liveness_54, LiveInfo_10);
                  break;
              }
              {
                GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 1) = (MR_Box) ((MR_Unsigned) (ConjType_51));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 2) = ((MR_Box) (Goals_53));
              }
              PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_54, &NonLocalLiveness_84);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_84, Liveness0_8, &GoalFinalLiveness_85);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_85, *FinalLiveness_9, &PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_9, GoalFinalLiveness_85, &PostBirths_49);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word Goals_96;
              MR_Word Union0_97;
              MR_Word Union_98;
              MR_Word Liveness_106;
              MR_Word NonLocalLiveness_107;
              MR_Word GoalFinalLiveness_108;

              Union0_97 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              ll_backend__liveness__detect_liveness_in_disj_7_p_0(Goals0_95, &Goals_96, Liveness0_8, CompletedNonLocals_14, LiveInfo_10, Union0_97, &Union_98);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Union_98, Liveness0_8, &Liveness_106);
              {
                GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 1) = ((MR_Box) (Goals_96));
              }
              PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_106, &NonLocalLiveness_107);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_107, Liveness0_8, &GoalFinalLiveness_108);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_108, *FinalLiveness_9, &PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_9, GoalFinalLiveness_108, &PostBirths_49);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word Det_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
              MR_Word Cases_60;
              MR_Word Liveness_118;
              MR_Word NonLocalLiveness_119;
              MR_Word GoalFinalLiveness_120;

              ll_backend__liveness__detect_liveness_in_cases_7_p_0(Cases0_59, &Cases_60, Liveness0_8, CompletedNonLocals_14, LiveInfo_10, Liveness0_8, &Liveness_118);
              {
                GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 1) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 2) = (MR_Box) ((MR_Unsigned) (Det_58));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 3) = ((MR_Box) (Cases_60));
              }
              PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_118, &NonLocalLiveness_119);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_119, Liveness0_8, &GoalFinalLiveness_120);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_120, *FinalLiveness_9, &PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_9, GoalFinalLiveness_120, &PostBirths_49);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word SubGoal0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word Liveness_115;
              MR_Word NonLocalLiveness_116;
              MR_Word GoalFinalLiveness_117;
              MR_Word TermVar_83;
              MR_Word Var_90;

              succeeded = ((((MR_tag((MR_Word) Reason_82)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_82, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_82, (MR_Integer) 1))));
                Var_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_82, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_90 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14);
                if (succeeded)
                {
                  GoalExpr_50 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__liveness_scalar_common_2[2]));
                  Liveness_115 = Liveness0_8;
                }
                else
                {
                  MR_Word SubGoal_99;

                  ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(SubGoal0_103, &SubGoal_99, Liveness0_8, &Liveness_115, LiveInfo_10, TermVar_83);
                  {
                    GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), GoalExpr_50, 1) = ((MR_Box) (Reason_82));
                    MR_hl_field(MR_mktag(3), GoalExpr_50, 2) = ((MR_Box) (SubGoal_99));
                  }
                }
              }
              else
              {
                MR_Word SubGoal_101;

                ll_backend__liveness__detect_liveness_in_goal_5_p_0(SubGoal0_103, &SubGoal_101, Liveness0_8, &Liveness_115, LiveInfo_10);
                {
                  GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_50, 1) = ((MR_Box) (Reason_82));
                  MR_hl_field(MR_mktag(3), GoalExpr_50, 2) = ((MR_Box) (SubGoal_101));
                }
              }
              PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_115, &NonLocalLiveness_116);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_116, Liveness0_8, &GoalFinalLiveness_117);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_117, *FinalLiveness_9, &PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_9, GoalFinalLiveness_117, &PostBirths_49);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word Cond0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word Then0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
              MR_Word Else0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4))));
              MR_Word Cond_65;
              MR_Word LivenessCond_66;
              MR_Word CondInfo_68;
              MR_Word CondDelta_69;
              MR_Word LivenessThen_70;
              MR_Word Then1_71;
              MR_Word Else1_73;
              MR_Word LivenessElse_74;
              MR_Word ITENonLocalLiveness_75;
              MR_Word ResidueThen_76;
              MR_Word ResidueElse_77;
              MR_Word Then_78;
              MR_Word Else_79;
              MR_Word Liveness_109;
              MR_Word NonLocalLiveness_110;
              MR_Word GoalFinalLiveness_111;

              ll_backend__liveness__detect_liveness_in_goal_5_p_0(Cond0_62, &Cond_65, Liveness0_8, &LivenessCond_66, LiveInfo_10);
              CondInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_65, (MR_Integer) 1))));
              CondDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_68);
              succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(CondDelta_69);
              if (succeeded)
              {
                MR_Word _LivenessThen_72;

                LivenessThen_70 = LivenessCond_66;
                ll_backend__liveness__detect_liveness_in_goal_5_p_0(Then0_63, &Then1_71, LivenessCond_66, &_LivenessThen_72, LiveInfo_10);
              }
              else
                ll_backend__liveness__detect_liveness_in_goal_5_p_0(Then0_63, &Then1_71, LivenessCond_66, &LivenessThen_70, LiveInfo_10);
              ll_backend__liveness__detect_liveness_in_goal_5_p_0(Else0_64, &Else1_73, Liveness0_8, &LivenessElse_74, LiveInfo_10);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessThen_70, LivenessElse_74, &Liveness_109);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_109, CompletedNonLocals_14, &ITENonLocalLiveness_75);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ITENonLocalLiveness_75, LivenessThen_70, &ResidueThen_76);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ITENonLocalLiveness_75, LivenessElse_74, &ResidueElse_77);
              ll_backend__liveness__add_liveness_after_goal_3_p_0(Then1_71, ResidueThen_76, &Then_78);
              ll_backend__liveness__add_liveness_after_goal_3_p_0(Else1_73, ResidueElse_77, &Else_79);
              {
                GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 1) = ((MR_Box) (Vars_61));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 2) = ((MR_Box) (Cond_65));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 3) = ((MR_Box) (Then_78));
                MR_hl_field(MR_mktag(3), GoalExpr_50, 4) = ((MR_Box) (Else_79));
              }
              PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_109, &NonLocalLiveness_110);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_110, Liveness0_8, &GoalFinalLiveness_111);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_111, *FinalLiveness_9, &PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_9, GoalFinalLiveness_111, &PostBirths_49);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_goal\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(PreBirths_47, PostBirths_49, PreDeaths_46, PostDeaths_48, (MR_Word) ((MR_Unsigned) 0U), GoalInfo0_12, &GoalInfo_87);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_87));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(
  MR_Word LiveInfo_5,
  MR_Word GoalInfo_6,
  MR_Word * NonLocals_7,
  MR_Word * CompletedNonLocals_8)
{
  {
    MR_Word Var_12;
    MR_Word Var_18;
    MR_Word Var_19;

    *NonLocals_7 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_6);
    Var_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_5, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_5, (MR_Integer) 3))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_5, (MR_Integer) 4))));
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(*NonLocals_7, Var_12, Var_18, Var_19, CompletedNonLocals_8);
  }
}

static void MR_CALL 
ll_backend__liveness__find_value_giving_occurrences_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LiveInfo_2,
  MR_Word InstMapDelta_3,
  MR_Word STATE_VARIABLE_ValueVars_0_4,
  MR_Word * STATE_VARIABLE_ValueVars_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ValueVars_5 = STATE_VARIABLE_ValueVars_0_4;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_2, (MR_Integer) 3))));
      MR_Word Type_17;
      MR_Word STATE_VARIABLE_ValueVars_25_25;
      MR_Word Inst_18;
      MR_Word ModuleInfo_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_38;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ValueVars_0_4;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_16, Var_11, &Type_17);
      succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_3, Var_11, &Inst_18);
      if (succeeded)
      {
        ModuleInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_2, (MR_Integer) 0))));
        Var_24 = (MR_Word) ((MR_Unsigned) 0U);
        Var_23 = (MR_Integer) 1;
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Inst_18));
        }
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_19, Var_22, Type_17, &Var_38);
        succeeded = (Var_23 == Var_38);
      }
      if (succeeded)
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_11, STATE_VARIABLE_ValueVars_0_4, &STATE_VARIABLE_ValueVars_25_25);
      else
        STATE_VARIABLE_ValueVars_25_25 = STATE_VARIABLE_ValueVars_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_12;
      next_value_of_STATE_VARIABLE_ValueVars_0_4 = STATE_VARIABLE_ValueVars_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ValueVars_0_4 = next_value_of_STATE_VARIABLE_ValueVars_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__liveness__add_liveness_after_goal_3_p_0(
  MR_Word Goal0_4,
  MR_Word Residue_5,
  MR_Word * Goal_6)
{
  {
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 0))));
    MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 1))));
    MR_Word PostBirths0_9;
    MR_Word PostBirths_10;
    MR_Word GoalInfo_11;

    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_8, &PostBirths0_9);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_9, Residue_5, &PostBirths_10);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_10, GoalInfo0_8, &GoalInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Liveness_0_25,
  MR_Word * STATE_VARIABLE_Liveness_26,
  MR_Word LiveInfo_10,
  MR_Word TermVar_11)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word Conjuncts0_14;
    MR_Word Var_27;

    succeeded = ((((MR_tag((MR_Word) GoalExpr0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
      Conjuncts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
      succeeded = (Var_27 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word LocalLiveVars0_15;
      MR_Word Conjuncts_16;
      MR_Word LocalLiveVars_17;
      MR_Word TypeInfo_38_38;
      MR_Word Var_37;

      LocalLiveVars0_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(Conjuncts0_14, &Conjuncts_16, LocalLiveVars0_15, &LocalLiveVars_17);
      succeeded = parse_tree__set_of_var__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LocalLiveVars_17, &Var_37);
      if (succeeded)
      {
        TypeInfo_38_38 = (MR_Word) (&ll_backend__liveness_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (TermVar_11)), ((MR_Box) (Var_37)));
      }
      if (succeeded)
      {
        MR_Word CompletedTermVars_18;
        MR_Word GoalExpr_19;
        MR_Word PreBirths_20;
        MR_Word PostBirths_21;
        MR_Word PreDeaths_22;
        MR_Word PostDeaths_23;
        MR_Word GoalInfo_24;
        MR_Word Var_28;
        MR_Word Var_42;
        MR_Word Var_48;
        MR_Word Var_49;

        Var_28 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_11);
        Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LiveInfo_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_10, (MR_Integer) 3))));
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LiveInfo_10, (MR_Integer) 4))));
        hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_28, Var_42, Var_48, Var_49, &CompletedTermVars_18);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedTermVars_18, STATE_VARIABLE_Liveness_0_25, STATE_VARIABLE_Liveness_26);
        {
          GoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), GoalExpr_19, 2) = ((MR_Box) (Conjuncts_16));
        }
        PreBirths_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        PostBirths_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        PreDeaths_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        PostDeaths_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(PreBirths_20, PostBirths_21, PreDeaths_22, PostDeaths_23, (MR_Word) ((MR_Unsigned) 0U), GoalInfo0_13, &GoalInfo_24);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_24));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct\'/6", (MR_String) "unexpected liveness");
          return;
        }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct\'/6", (MR_String) "not conj");
        return;
      }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalLiveVars_0_3,
  MR_Word * STATE_VARIABLE_LocalLiveVars_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_LocalLiveVars_4 = STATE_VARIABLE_LocalLiveVars_0_3;
    }
    else
    {
      MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_10;
      MR_Word Goals_11;
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
      MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_LocalLiveVars_35_35;
      MR_Word LHSVar_20;
      MR_Word RHSVars_22;
      MR_Word Unification_18;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      succeeded = ((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_13, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unification_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          LHSVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_18, (MR_Integer) 0))));
          RHSVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_18, (MR_Integer) 2))));
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_18, (MR_Integer) 4))));
          Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification_18, (MR_Integer) 5))) & (MR_Integer) 1);
          Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_18, (MR_Integer) 6))));
          succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_32 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_LocalLiveVars_34_34;

        succeeded = parse_tree__set_of_var__remove_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVars_22, STATE_VARIABLE_LocalLiveVars_0_3, &STATE_VARIABLE_LocalLiveVars_34_34);
        if (succeeded)
        {
          MR_Word PreBirths_24;
          MR_Word PostBirths_25;
          MR_Word PreDeaths_26;
          MR_Word PostDeaths_27;
          MR_Word GoalInfo_28;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_20, STATE_VARIABLE_LocalLiveVars_34_34, &STATE_VARIABLE_LocalLiveVars_35_35);
          PreBirths_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_20);
          PostBirths_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          PreDeaths_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          PostDeaths_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVars_22);
          hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(PreBirths_24, PostBirths_25, PreDeaths_26, PostDeaths_27, (MR_Word) ((MR_Unsigned) 0U), GoalInfo0_14, &GoalInfo_28);
          {
            Goal_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal_10, 0) = ((MR_Box) (GoalExpr_13));
            MR_hl_field(MR_mktag(0), Goal_10, 1) = ((MR_Box) (GoalInfo_28));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct_goal_loop\'/4", (MR_String) "rhs var not live");
            return;
          }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct_goal_loop\'/4", (MR_String) "unexpected conjunct");
          return;
        }
      ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_LocalLiveVars_35_35, STATE_VARIABLE_LocalLiveVars_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_8_p_0(
  MR_Word ModuleInfo_9,
  MR_String Message_10,
  MR_Integer DebugLiveness_11,
  MR_Integer PredIdInt_12,
  MR_Word VarSet_13,
  MR_Word Goal_14)
{
  {
    MR_bool succeeded = (DebugLiveness_11 == PredIdInt_12);

    if (succeeded)
    {
      MR_Word Globals_16;
      MR_Word OutInfo_17;

      mercury__io__write_string_3_p_0(Message_10);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_16);
      OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_16, (MR_Integer) 1);
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(OutInfo_17, ModuleInfo_9, VarSet_13, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", Goal_14);
    }
  }
}

void MR_CALL 
ll_backend__liveness__initial_liveness_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * STATE_VARIABLE_Liveness_20)
{
  {
    MR_bool succeeded;
    MR_Word Vars_9;
    MR_Word Modes_10;
    MR_Word VarTypes_11;
    MR_Word Types_12;
    MR_Word Globals_13;
    MR_Word GoalInfo_15;
    MR_Word NonLocals0_16;
    MR_Word RttiVarMaps_17;
    MR_Word TypeinfoLiveness_18;
    MR_Word NonLocals_19;
    MR_Word STATE_VARIABLE_Liveness_21_21;
    MR_Word STATE_VARIABLE_Liveness_25_25;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_Liveness_22_22;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_7, &Vars_9);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_7, &Modes_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_11);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_11, Vars_9, &Types_12);
    STATE_VARIABLE_Liveness_21_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    succeeded = ll_backend__liveness__initial_liveness_2_6_p_0(ModuleInfo_5, Vars_9, Types_12, Modes_10, STATE_VARIABLE_Liveness_21_21, &STATE_VARIABLE_Liveness_22_22);
    if (succeeded)
      STATE_VARIABLE_Liveness_25_25 = STATE_VARIABLE_Liveness_22_22;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.initial_liveness\'/4", (MR_String) "length mismatch");
        return;
      }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_7, &Var_26);
    GoalInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
    NonLocals0_16 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_15);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_7, &RttiVarMaps_17);
    hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_6, Globals_13, &TypeinfoLiveness_18);
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(NonLocals0_16, TypeinfoLiveness_18, VarTypes_11, RttiVarMaps_17, &NonLocals_19);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_25_25, NonLocals_19, STATE_VARIABLE_Liveness_20);
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__initial_liveness_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Liveness_0_5,
  MR_Word * STATE_VARIABLE_Liveness_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Liveness_6 = STATE_VARIABLE_Liveness_0_5;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Type_14;
      MR_Word Types_15;
      MR_Word Mode_16;
      MR_Word Modes_17;
      MR_Word STATE_VARIABLE_Liveness_22_22;
      MR_Word Var_21;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Liveness_0_5;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Types_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Mode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          Modes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          Var_21 = (MR_Integer) 0;
          check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, Mode_16, Type_14, &Var_25);
          succeeded = (Var_21 == Var_25);
          if (succeeded)
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, STATE_VARIABLE_Liveness_0_5, &STATE_VARIABLE_Liveness_22_22);
          else
            STATE_VARIABLE_Liveness_22_22 = STATE_VARIABLE_Liveness_0_5;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Vars_13;
          next_value_of_HeadVar__3_3 = Types_15;
          next_value_of_HeadVar__4_4 = Modes_17;
          next_value_of_STATE_VARIABLE_Liveness_0_5 = STATE_VARIABLE_Liveness_22_22;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          STATE_VARIABLE_Liveness_0_5 = next_value_of_STATE_VARIABLE_Liveness_0_5;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__liveness____Unify____live_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__liveness____Compare____live_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__liveness__init(void)
{
}

void mercury__ll_backend__liveness__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__liveness__ll_backend__liveness__type_ctor_info_live_info_0);
}

void mercury__ll_backend__liveness__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__liveness__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.liveness.
