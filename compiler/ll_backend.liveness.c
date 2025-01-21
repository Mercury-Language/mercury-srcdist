/*
** Automatically generated from `liveness.m'
** by the Mercury compiler,
** version rotd-2025-01-21
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
#include "getopt.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_0;

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_1;

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_ordinal_ordered_is_any_branch_end_reachable_0[2];

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_name_ordered_is_any_branch_end_reachable_0[2];

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_is_any_branch_end_reachable_0[2];

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_0;

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_1;

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_ordinal_ordered_is_this_branch_end_reachable_0[2];

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_name_ordered_is_this_branch_end_reachable_0[2];

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_is_this_branch_end_reachable_0[2];

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

static void MR_CALL 
ll_backend__liveness____Compare____is_this_branch_end_reachable_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_this_branch_end_reachable_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__liveness____Compare____is_any_branch_end_reachable_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_any_branch_end_reachable_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__liveness__var_is_not_dummy_type_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4);

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
  MR_Word VarTable_3,
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
  MR_Word STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * STATE_VARIABLE_ProcInfo_42);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word * Needed_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word * Needed_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word Liveness0_6,
  MR_Word * Liveness_7);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Liveness_0_5,
  MR_Word * STATE_VARIABLE_Liveness_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
  MR_Word LiveInfo_7,
  MR_Word ResumeVars0_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Liveness_0_83,
  MR_Word * STATE_VARIABLE_Liveness_84);

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
ll_backend__liveness__delay_death_cases_6_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word BornVars0_4,
  MR_Word DelayedDead0_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word BornVars0_4,
  MR_Word DelayedDead0_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_BornVars_0_4,
  MR_Word * STATE_VARIABLE_BornVars_5,
  MR_Word STATE_VARIABLE_DelayedDead_0_6,
  MR_Word * STATE_VARIABLE_DelayedDead_7);

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
  MR_Word VarTable_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_BornVars_0_30,
  MR_Word * STATE_VARIABLE_BornVars_31,
  MR_Word STATE_VARIABLE_DelayedDead_0_32,
  MR_Word * STATE_VARIABLE_DelayedDead_33);

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
  MR_Word LiveInfo_1,
  MR_Word CompletedNonLocals_2,
  MR_Word Deadness0_3,
  MR_Word Liveness0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Union_0_7,
  MR_Word * STATE_VARIABLE_Union_8,
  MR_Word * CompletedNonLocalUnion_9);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_11_p_0(
  MR_Word LiveInfo_1,
  MR_Word SwitchVar_2,
  MR_Word IsAnyBranchEndReachable_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word CompletedNonLocals_8,
  MR_Word STATE_VARIABLE_Union_0_9,
  MR_Word * STATE_VARIABLE_Union_10,
  MR_Word * CompletedNonLocalUnion_11);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_10_p_0(
  MR_Word LiveInfo_1,
  MR_Word IsAnyBranchEndReachable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word CompletedNonLocals_7,
  MR_Word STATE_VARIABLE_Union_0_8,
  MR_Word * STATE_VARIABLE_Union_9,
  MR_Word * CompletedNonLocalUnion_10);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word Liveness0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Deadness_0_5,
  MR_Word * STATE_VARIABLE_Deadness_6);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
  MR_Word LiveInfo_7,
  MR_Word STATE_VARIABLE_Liveness_0_116,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Deadness_0_117,
  MR_Word * STATE_VARIABLE_Deadness_118);

static MR_Word MR_CALL 
ll_backend__liveness__is_this_structured_goals_end_reachable_1_f_0(
  MR_Word GoalInfo_3);

static MR_Word MR_CALL 
ll_backend__liveness__is_this_branch_goals_end_reachable_1_f_0(
  MR_Word Goal_3);

static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_7_p_0(
  MR_Word DeadnessGoal_8,
  MR_Word Deadness0_9,
  MR_Word CompletedNonLocalUnion_10,
  MR_Word ThisBranchEndReachable_11,
  MR_Word * AddedPreDeaths_12,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16);

static void MR_CALL 
ll_backend__liveness__union_branch_deadness_6_p_0(
  MR_Word AnyBranchEndReachable_7,
  MR_Word ThisBranchEndReachable_8,
  MR_Word DeadnessGoal_9,
  MR_Word Deadness0_10,
  MR_Word STATE_VARIABLE_Union_0_13,
  MR_Word * STATE_VARIABLE_Union_14);

static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
  MR_Word LiveInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4);

static void MR_CALL 
ll_backend__liveness__update_liveness_goal_4_p_0(
  MR_Word LiveInfo_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Liveness_0_20,
  MR_Word * STATE_VARIABLE_Liveness_21);

static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
  MR_Word LiveInfo_4,
  MR_Word Vars0_5,
  MR_Word * Vars_6);

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
  MR_Word LiveInfo_1,
  MR_Word NonLocals_2,
  MR_Word Liveness0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word NonLocals_2,
  MR_Word Liveness0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word NonLocals_2,
  MR_Word Liveness0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
  MR_Word LiveInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Liveness_0_4,
  MR_Word * STATE_VARIABLE_Liveness_5);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
  MR_Word LiveInfo_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word Liveness0_9,
  MR_Word * FinalLiveness_10);

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
  MR_Word AddedPostLiveness_5,
  MR_Word * Goal_6);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(
  MR_Word LiveInfo_7,
  MR_Word TermVar_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Liveness_0_25,
  MR_Word * STATE_VARIABLE_Liveness_26);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalLiveVars_0_3,
  MR_Word * STATE_VARIABLE_LocalLiveVars_4);

static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_9_p_0(
  MR_Word ModuleInfo_10,
  MR_String Message_11,
  MR_Word DebugThisPred_12,
  MR_Word PredId_13,
  MR_Word ProcInfo_14,
  MR_Word VarTable_15,
  MR_Word Goal_16);

static void MR_CALL 
ll_backend__liveness__initial_liveness_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Liveness_0_5,
  MR_Word * STATE_VARIABLE_Liveness_6);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_any_branch_end_reachable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness____Compare____is_any_branch_end_reachable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_this_branch_end_reachable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness____Compare____is_this_branch_end_reachable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[5][3];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[1][5];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[3][6];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_6[1][8];




static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_5[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_5[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   2 */
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
  /* row   0 */
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
  /* row   0 */
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
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_0 = {
  (MR_String) "no_branch_end_is_reachable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_1 = {
  (MR_String) "some_branch_end_is_reachable",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_ordinal_ordered_is_any_branch_end_reachable_0[2] = {
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_0,
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_name_ordered_is_any_branch_end_reachable_0[2] = {
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_0,
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_any_branch_end_reachable_0_1
};

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_is_any_branch_end_reachable_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__liveness__ll_backend__liveness__type_ctor_info_is_any_branch_end_reachable_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__liveness____Unify____is_any_branch_end_reachable_0_0_10001)),
  ((MR_Box) (ll_backend__liveness____Compare____is_any_branch_end_reachable_0_0_10001)),
  (MR_String) "ll_backend.liveness",
  (MR_String) "is_any_branch_end_reachable",
  { ll_backend__liveness__ll_backend__liveness__enum_name_ordered_is_any_branch_end_reachable_0 },
  { ll_backend__liveness__ll_backend__liveness__enum_ordinal_ordered_is_any_branch_end_reachable_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__liveness__ll_backend__liveness__functor_number_map_is_any_branch_end_reachable_0,

};

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_0 = {
  (MR_String) "this_branch_end_is_not_reachable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_1 = {
  (MR_String) "this_branch_end_is_reachable",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_ordinal_ordered_is_this_branch_end_reachable_0[2] = {
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_0,
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__liveness__ll_backend__liveness__enum_name_ordered_is_this_branch_end_reachable_0[2] = {
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_0,
  &ll_backend__liveness__ll_backend__liveness__enum_functor_desc_is_this_branch_end_reachable_0_1
};

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_is_this_branch_end_reachable_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__liveness__ll_backend__liveness__type_ctor_info_is_this_branch_end_reachable_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__liveness____Unify____is_this_branch_end_reachable_0_0_10001)),
  ((MR_Box) (ll_backend__liveness____Compare____is_this_branch_end_reachable_0_0_10001)),
  (MR_String) "ll_backend.liveness",
  (MR_String) "is_this_branch_end_reachable",
  { ll_backend__liveness__ll_backend__liveness__enum_name_ordered_is_this_branch_end_reachable_0 },
  { ll_backend__liveness__ll_backend__liveness__enum_ordinal_ordered_is_this_branch_end_reachable_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__liveness__ll_backend__liveness__functor_number_map_is_this_branch_end_reachable_0,

};

static const MR_PseudoTypeInfo ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)
};

static const MR_ConstString ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0[6] = {
  (MR_String) "li_module_info",
  (MR_String) "li_typeinfo_liveness",
  (MR_String) "li_allow_packing_dummies",
  (MR_String) "li_debug_this_pred",
  (MR_String) "li_var_table",
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
    (MR_Integer) 2,
    (MR_Integer) 1
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

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0[1] = { &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0 };

static const MR_DuPtagLayout ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0[1] = { &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0 };

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__liveness__ll_backend__liveness__type_ctor_info_live_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__liveness____Unify____live_info_0_0_10001)),
  ((MR_Box) (ll_backend__liveness____Compare____live_info_0_0_10001)),
  (MR_String) "ll_backend.liveness",
  (MR_String) "live_info",
  { ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0 },
  { ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0,

};

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
          MR_Integer Var_33 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_34 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            parse_tree__var_table____Compare____var_table_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
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

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__liveness____Compare____is_this_branch_end_reachable_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_this_branch_end_reachable_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__liveness____Compare____is_any_branch_end_reachable_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_any_branch_end_reachable_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__liveness__var_is_not_dummy_type_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Entry_5;
  MR_Word Var_6;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, Var_4, &Entry_5);
  Var_6 = ((MR_Unsigned) ((MR_hl_field(0, Entry_5, (MR_Integer) 2))) & (MR_Integer) 1);
  succeeded = (Var_6 == (MR_Integer) 1);
  return succeeded;
}

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2)
{
  MR_Word Case_7;
  MR_Word Case0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word DelayedDead0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word MainConsId_8 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 0))));
  MR_Word OtherConsIds_9 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 1))));
  MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 2))));
  MR_Word ToBeKilled_11;
  MR_Word GoalExpr_12;
  MR_Word GoalInfo0_13;
  MR_Word PostDeath0_14;
  MR_Word PostDeath_15;
  MR_Word GoalInfo_16;
  MR_Word Goal_17;

  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDead0_6, FinalDelayedDead_4, &ToBeKilled_11);
  GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 0))));
  GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 1))));
  hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_13, &PostDeath0_14);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeath0_14, ToBeKilled_11, &PostDeath_15);
  hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeath_15, GoalInfo0_13, &GoalInfo_16);
  {
    Goal_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_17, 0) = ((MR_Box) (GoalExpr_12));
    MR_hl_field(0, Goal_17, 1) = ((MR_Box) (GoalInfo_16));
  }
  {
    Case_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Case_7, 0) = ((MR_Box) (MainConsId_8));
    MR_hl_field(0, Case_7, 1) = ((MR_Box) (OtherConsIds_9));
    MR_hl_field(0, Case_7, 2) = ((MR_Box) (Goal_17));
  }
  return Case_7;
}

static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Entry_5;
  MR_String Name_6;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, Var_4, &Entry_5);
  Name_6 = ((MR_String) ((MR_hl_field(0, Entry_5, (MR_Integer) 0))));
  succeeded = (strcmp(Name_6, (MR_String) "") == 0);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word * STATE_VARIABLE_PredInfo_13)
{
  MR_Word ProcInfo0_10;
  MR_Word ProcInfo_11;

  hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_12, ProcId_8, &ProcInfo0_10);
  ll_backend__liveness__detect_liveness_proc_2_4_p_0(ModuleInfo_6, PredId_7, ProcInfo0_10, &ProcInfo_11);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, ProcInfo_11, STATE_VARIABLE_PredInfo_0_12, STATE_VARIABLE_PredInfo_13);
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PredInfo_13;

  ll_backend__liveness__detect_liveness_pred_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredInfo_13));
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * PredInfo_6)
{
  MR_Word PredInfo0_7;
  MR_Word ProcIds_8;
  MR_Word Var_9;
  MR_Box conv1_PredInfo_6;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo0_7);
  ProcIds_8 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_7);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_6[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_pred_3_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (PredId_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_9, ProcIds_8, ((MR_Box) (PredInfo0_7)), &conv1_PredInfo_6);
  *PredInfo_6 = ((MR_Word) (conv1_PredInfo_6));
}

void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_5,
  MR_Word * STATE_VARIABLE_HLDS_6)
{
  MR_Word PredIds_4;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_HLDS_0_5, &PredIds_4);
  ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(PredIds_4, STATE_VARIABLE_HLDS_0_5, STATE_VARIABLE_HLDS_0_5, STATE_VARIABLE_HLDS_6);
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_PredInfo_6;

  ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_PredInfo_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_PredInfo_6));
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredInfo_6;

  ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredInfo_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_PredInfo_6));
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
      MR_Word PredInfos_15;
      MR_Word Var_16;
      MR_Box conv2_STATE_VARIABLE_HLDS_13_13;
      MR_Word next_value_of_PredIds_5;
      MR_Word next_value_of_STATE_VARIABLE_HLDS_0_10;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[2]));
        MR_hl_field(0, Var_16, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1));
        MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_16, 3) = ((MR_Box) (HLDS0_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_16, HeadPredIds_8, &PredInfos_15);
      mercury__list__foldl_corresponding_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&ll_backend__liveness_scalar_common_2[3]), HeadPredIds_8, PredInfos_15, ((MR_Box) (STATE_VARIABLE_HLDS_0_10)), &conv2_STATE_VARIABLE_HLDS_13_13);
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
      MR_Word PredInfos_21;
      MR_Word Var_22;
      MR_Box conv5_STATE_VARIABLE_HLDS_11;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[2]));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (HLDS0_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_22, PredIds_5, &PredInfos_21);
      mercury__list__foldl_corresponding_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&ll_backend__liveness_scalar_common_2[4]), PredIds_5, PredInfos_21, ((MR_Box) (STATE_VARIABLE_HLDS_0_10)), &conv5_STATE_VARIABLE_HLDS_11);
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
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

  ll_backend__liveness__detect_liveness_proc_2_4_p_0(ModuleInfo_5, PredId_6, STATE_VARIABLE_ProcInfo_0_9, STATE_VARIABLE_ProcInfo_10);
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_proc_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * STATE_VARIABLE_ProcInfo_42)
{
  MR_bool succeeded;
  MR_Word Globals_8;
  MR_Integer DebugLiveness_9;
  MR_Integer PredIdInt_10;
  MR_Word DebugThisPred_11;
  MR_Word GoalBeforeQuant_12;
  MR_Word VarTableBeforeQuant_13;
  MR_Word GoalAfterQuant_15;
  MR_Word VarTable_16;
  MR_Word RttiVarMaps_17;
  MR_Word PredInfo_18;
  MR_Word TypeInfoLiveness_19;
  MR_Word LiveInfo_20;
  MR_Word Liveness0_21;
  MR_Word GoalAfterLiveness_22;
  MR_Word Deadness0_24;
  MR_Word GoalAfterDeadness_25;
  MR_Word TraceLevel_27;
  MR_Word EffTraceLevel_28;
  MR_Word GoalAfterDelayDeath_36;
  MR_Word NeedsFailVars_37;
  MR_Word ResumeVars0_38;
  MR_Word Goal_39;
  MR_Word STATE_VARIABLE_ProcInfo_48_48;
  MR_Word STATE_VARIABLE_ProcInfo_67_67;
  MR_Word Globals_69;
  MR_Word AllowPackingDummies_70;
  MR_Word Deadness0_73;
  MR_Word VarTable_75;
  MR_Word RttiVarMaps_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_23;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_26;
  MR_Word AllowDelayDeath_29;
  MR_Word DelayDeath_30;
  MR_Integer DelayDeathMaxVars_31;
  MR_Integer NumVars_32;
  MR_Word Origin_33;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_40;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
  libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 125, &DebugLiveness_9);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_6, &PredIdInt_10);
  succeeded = (DebugLiveness_9 == PredIdInt_10);
  if (succeeded)
    DebugThisPred_11 = (MR_Integer) 1;
  else
    DebugThisPred_11 = (MR_Integer) 0;
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_41, &GoalBeforeQuant_12);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_41, &VarTableBeforeQuant_13);
  ll_backend__liveness__maybe_debug_liveness_9_p_0(ModuleInfo_5, (MR_String) "\nbefore requantify", DebugThisPred_11, PredId_6, STATE_VARIABLE_ProcInfo_0_41, VarTableBeforeQuant_13, GoalBeforeQuant_12);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_0_41, &STATE_VARIABLE_ProcInfo_48_48);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_48_48, &GoalAfterQuant_15);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_48_48, &VarTable_16);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_48_48, &RttiVarMaps_17);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_18);
  hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_18, Globals_8, &TypeInfoLiveness_19);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_69);
  libs__globals__lookup_bool_option_3_p_0(Globals_69, (MR_Integer) 320, &AllowPackingDummies_70);
  {
    LiveInfo_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LiveInfo_20, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, LiveInfo_20, 1) = (MR_Box) (((((MR_Unsigned) (TypeInfoLiveness_19) << 2)) | (((((MR_Unsigned) (AllowPackingDummies_70) << 1)) | (MR_Unsigned) (DebugThisPred_11)))));
    MR_hl_field(0, LiveInfo_20, 2) = ((MR_Box) (VarTable_16));
    MR_hl_field(0, LiveInfo_20, 3) = ((MR_Box) (RttiVarMaps_17));
  }
  ll_backend__liveness__maybe_debug_liveness_9_p_0(ModuleInfo_5, (MR_String) "\nbefore liveness", DebugThisPred_11, PredId_6, STATE_VARIABLE_ProcInfo_48_48, VarTable_16, GoalAfterQuant_15);
  ll_backend__liveness__initial_liveness_4_p_0(ModuleInfo_5, PredInfo_18, STATE_VARIABLE_ProcInfo_48_48, &Liveness0_21);
  ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_20, GoalAfterQuant_15, &GoalAfterLiveness_22, Liveness0_21, &Var_23);
  ll_backend__liveness__maybe_debug_liveness_9_p_0(ModuleInfo_5, (MR_String) "\nafter liveness", DebugThisPred_11, PredId_6, STATE_VARIABLE_ProcInfo_48_48, VarTable_16, GoalAfterLiveness_22);
  hlds__arg_info__partition_proc_args_5_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_48_48, &Var_72, &Deadness0_73, &Var_74);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_48_48, &VarTable_75);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_48_48, &RttiVarMaps_76);
  Var_77 = ((((MR_Unsigned) ((MR_hl_field(0, LiveInfo_20, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  Var_78 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Deadness0_73);
  hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(VarTable_75, RttiVarMaps_76, Var_77, Var_78, &Deadness0_24);
  ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_20, Liveness0_21, GoalAfterLiveness_22, &GoalAfterDeadness_25, Deadness0_24, &Var_26);
  ll_backend__liveness__maybe_debug_liveness_9_p_0(ModuleInfo_5, (MR_String) "\nafter deadness", DebugThisPred_11, PredId_6, STATE_VARIABLE_ProcInfo_48_48, VarTable_16, GoalAfterDeadness_25);
  libs__globals__get_trace_level_2_p_0(Globals_8, &TraceLevel_27);
  EffTraceLevel_28 = libs__trace_params__eff_trace_level_for_proc_4_f_0(ModuleInfo_5, PredInfo_18, STATE_VARIABLE_ProcInfo_48_48, TraceLevel_27);
  AllowDelayDeath_29 = libs__trace_params__eff_trace_level_allows_delay_death_1_f_0(EffTraceLevel_28);
  succeeded = (AllowDelayDeath_29 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_58 = (MR_Integer) 191;
    libs__globals__lookup_bool_option_3_p_0(Globals_8, Var_58, &DelayDeath_30);
    succeeded = (DelayDeath_30 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_59 = (MR_Integer) 192;
      libs__globals__lookup_int_option_3_p_0(Globals_8, Var_59, &DelayDeathMaxVars_31);
      parse_tree__var_table__var_table_count_2_p_0(VarTable_16, &NumVars_32);
      succeeded = (NumVars_32 <= DelayDeathMaxVars_31);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_18, &Origin_33);
        succeeded = ((MR_tag((MR_Word) Origin_33)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_60 = ((MR_Word) ((MR_hl_field(1, Origin_33, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Goal1_85;
    MR_Word DelayedDead_87;
    MR_Word GoalExpr_88;
    MR_Word GoalInfo1_89;
    MR_Word PostDeaths1_90;
    MR_Word PostDeaths_91;
    MR_Word GoalInfo_92;
    MR_Word Var_93;
    MR_Word Var_86;

    Var_93 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    ll_backend__liveness__delay_death_goal_7_p_0(VarTable_16, GoalAfterDeadness_25, &Goal1_85, Liveness0_21, &Var_86, Var_93, &DelayedDead_87);
    GoalExpr_88 = ((MR_Word) ((MR_hl_field(0, Goal1_85, (MR_Integer) 0))));
    GoalInfo1_89 = ((MR_Word) ((MR_hl_field(0, Goal1_85, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo1_89, &PostDeaths1_90);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths1_90, DelayedDead_87, &PostDeaths_91);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeaths_91, GoalInfo1_89, &GoalInfo_92);
    {
      GoalAfterDelayDeath_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalAfterDelayDeath_36, 0) = ((MR_Box) (GoalExpr_88));
      MR_hl_field(0, GoalAfterDelayDeath_36, 1) = ((MR_Box) (GoalInfo_92));
    }
    ll_backend__liveness__maybe_debug_liveness_9_p_0(ModuleInfo_5, (MR_String) "\nafter delay death", DebugThisPred_11, PredId_6, STATE_VARIABLE_ProcInfo_48_48, VarTable_16, GoalAfterDelayDeath_36);
  }
  else
    GoalAfterDelayDeath_36 = GoalAfterDeadness_25;
  NeedsFailVars_37 = libs__trace_params__eff_trace_level_needs_fail_vars_1_f_0(EffTraceLevel_28);
  switch (NeedsFailVars_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ResumeVars0_38 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 1:
      ll_backend__trace_gen__trace_fail_vars_3_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_48_48, &ResumeVars0_38);
      break;
  }
  ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_20, ResumeVars0_38, GoalAfterDelayDeath_36, &Goal_39, Liveness0_21, &Var_40);
  ll_backend__liveness__maybe_debug_liveness_9_p_0(ModuleInfo_5, (MR_String) "\nafter resume point", DebugThisPred_11, PredId_6, STATE_VARIABLE_ProcInfo_48_48, VarTable_16, Goal_39);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_39, STATE_VARIABLE_ProcInfo_48_48, &STATE_VARIABLE_ProcInfo_67_67);
  hlds__hlds_pred__proc_info_set_liveness_info_3_p_0(Liveness0_21, STATE_VARIABLE_ProcInfo_67_67, STATE_VARIABLE_ProcInfo_42);
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = HeadVar__5_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word _LivenessRest_20;

    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_1, ResumeVars0_2, Goal0_14, &Goal_16, HeadVar__5_5, HeadVar__6_6);
    ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(LiveInfo_1, ResumeVars0_2, Goals0_15, &Goals_17, HeadVar__5_5, &_LivenessRest_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = HeadVar__5_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 2))));
    MR_Word Goal_23;

    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_1, ResumeVars0_2, Goal0_22, &Goal_23, HeadVar__5_5, HeadVar__6_6);
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_16, 0) = ((MR_Box) (MainConsId_20));
      MR_hl_field(0, Case_16, 1) = ((MR_Box) (OtherConsIds_21));
      MR_hl_field(0, Case_16, 2) = ((MR_Box) (Goal_23));
    }
    if ((Cases0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      Cases_17 = Cases0_15;
    else
    {
      MR_Word LivenessRest_26;

      ll_backend__liveness__detect_resume_points_in_cases_6_p_0(LiveInfo_1, ResumeVars0_2, Cases0_15, &Cases_17, HeadVar__5_5, &LivenessRest_26);
      succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *HeadVar__6_6, LivenessRest_26);
      if (!(succeeded))
      {
        MR_Word VarTable_28 = ((MR_Word) ((MR_hl_field(0, LiveInfo_1, (MR_Integer) 2))));
        MR_Word FirstVars_29;
        MR_Word RestVars_30;
        MR_String FirstNames_31;
        MR_String RestNames_32;
        MR_String Msg_33;
        MR_String Var_37;
        MR_String Var_38;
        MR_String Var_40;
        MR_String Var_42;
        MR_String Var_43;
        MR_String Var_45;
        MR_String Var_47;

        FirstVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *HeadVar__6_6);
        RestVars_30 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessRest_26);
        FirstNames_31 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_28, (MR_Integer) 1, FirstVars_29);
        RestNames_32 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_28, (MR_Integer) 1, RestVars_30);
        Var_47 = mercury__string__f_43_43_2_f_0(RestNames_32, (MR_String) "\n");
        Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", Var_47);
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_45);
        Var_42 = mercury__string__f_43_43_2_f_0(FirstNames_31, Var_43);
        Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", Var_42);
        Var_38 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", Var_40);
        Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "switch", Var_38);
        Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", Var_37);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", Msg_33);
          return;
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word * Needed_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *Needed_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    *HeadVar__7_7 = HeadVar__6_6;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word GoalInfo0_24 = ((MR_Word) ((MR_hl_field(0, Goal0_17, (MR_Integer) 1))));
    MR_Word Detism0_25;
    MR_Word CanFail0_26;
    MR_Word Var_27;

    Detism0_25 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_24);
    parse_tree__prog_data__determinism_components_3_p_0(Detism0_25, &CanFail0_26, &Var_27);
    succeeded = (CanFail0_26 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Goals0_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word NeededRest_30;
      MR_Word LivenessRest_31;
      MR_Word ResumeVars1_34;
      MR_Word Goal1_35;
      MR_Word ResumeLocs_36;
      MR_Word GoalInfo_38;
      MR_Word PreDeaths_39;
      MR_Word NeededFirst_40;
      MR_Word CompletedNeededFirst_41;

      ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(LiveInfo_1, ResumeVars0_2, &NeededRest_30, Goals0_18, &Goals_20, HeadVar__6_6, &LivenessRest_31);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededRest_30, ResumeVars0_2, &ResumeVars1_34);
      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_1, ResumeVars1_34, Goal0_17, &Goal1_35, HeadVar__6_6, HeadVar__7_7);
      succeeded = MR_TRUE;
      if (succeeded)
        succeeded = hlds__goal_form__goal_cannot_stack_flush_1_p_0(Goal1_35);
      if (succeeded)
        ResumeLocs_36 = (MR_Integer) 0;
      else
      {
        succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(Goal1_35);
        if (succeeded)
          ResumeLocs_36 = (MR_Integer) 1;
        else
          ResumeLocs_36 = (MR_Integer) 3;
      }
      ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_1, ResumeVars1_34, ResumeLocs_36, Goal1_35, &Goal_19);
      GoalInfo_38 = ((MR_Word) ((MR_hl_field(0, Goal_19, (MR_Integer) 1))));
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_38, &PreDeaths_39);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__6_6, PreDeaths_39, &NeededFirst_40);
      ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_1, NeededFirst_40, &CompletedNeededFirst_41);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNeededFirst_41, NeededRest_30, Needed_3);
      ll_backend__liveness__require_equal_4_p_0(*HeadVar__7_7, LivenessRest_31, (MR_String) "disjunction", LiveInfo_1);
    }
    else
    {
      MR_Word GoalInfo_45;
      MR_Word PreDeaths_46;
      MR_Word Needed_47;

      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_1, ResumeVars0_2, Goal0_17, &Goal_19, HeadVar__6_6, HeadVar__7_7);
      GoalInfo_45 = ((MR_Word) ((MR_hl_field(0, Goal_19, (MR_Integer) 1))));
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_45, &PreDeaths_46);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__6_6, PreDeaths_46, &Needed_47);
      ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_1, Needed_47, Needed_3);
      Goals_20 = Goals0_18;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word * Needed_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word Liveness0_6,
  MR_Word * Liveness_7)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_resume_points_in_non_disj\'/7", (MR_String) "empty nondet disjunction");
      return;
    }
  else
  {
    MR_Word Goal0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_21;
    MR_Word Goals_22;

    if ((Goals0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word GoalInfo_31;
      MR_Word PreDeaths_32;
      MR_Word Needed_33;

      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_1, ResumeVars0_2, Goal0_19, &Goal_21, Liveness0_6, Liveness_7);
      GoalInfo_31 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 1))));
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_31, &PreDeaths_32);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_6, PreDeaths_32, &Needed_33);
      ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_1, Needed_33, Needed_3);
      Goals_22 = Goals0_20;
    }
    else
    {
      MR_Word NeededRest_27;
      MR_Word LivenessRest_28;
      MR_Word ResumeVars1_35;
      MR_Word Goal1_36;
      MR_Word ResumeLocs_37;
      MR_Word GoalInfo_39;
      MR_Word PreDeaths_40;
      MR_Word NeededFirst_41;
      MR_Word CompletedNeededFirst_42;

      ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(LiveInfo_1, ResumeVars0_2, &NeededRest_27, Goals0_20, &Goals_22, Liveness0_6, &LivenessRest_28);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededRest_27, ResumeVars0_2, &ResumeVars1_35);
      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_1, ResumeVars1_35, Goal0_19, &Goal1_36, Liveness0_6, Liveness_7);
      succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(Goal1_36);
      if (succeeded)
        ResumeLocs_37 = (MR_Integer) 1;
      else
        ResumeLocs_37 = (MR_Integer) 3;
      ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_1, ResumeVars1_35, ResumeLocs_37, Goal1_36, &Goal_21);
      GoalInfo_39 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 1))));
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_39, &PreDeaths_40);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_6, PreDeaths_40, &NeededFirst_41);
      ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_1, NeededFirst_41, &CompletedNeededFirst_42);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNeededFirst_42, NeededRest_27, Needed_3);
      ll_backend__liveness__require_equal_4_p_0(*Liveness_7, LivenessRest_28, (MR_String) "disjunction", LiveInfo_1);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_22));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Liveness_0_5,
  MR_Word * STATE_VARIABLE_Liveness_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Liveness_6 = STATE_VARIABLE_Liveness_0_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_Liveness_21_21;

    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_1, ResumeVars0_2, Goal0_14, &Goal_16, STATE_VARIABLE_Liveness_0_5, &STATE_VARIABLE_Liveness_21_21);
    ll_backend__liveness__detect_resume_points_in_conj_6_p_0(LiveInfo_1, ResumeVars0_2, Goals0_15, &Goals_17, STATE_VARIABLE_Liveness_21_21, STATE_VARIABLE_Liveness_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
  MR_Word LiveInfo_7,
  MR_Word ResumeVars0_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Liveness_0_83,
  MR_Word * STATE_VARIABLE_Liveness_84)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word PreDeaths0_14;
  MR_Word PreBirths0_15;
  MR_Word PostDeaths0_16;
  MR_Word PostBirths0_17;
  MR_Word GoalExpr_21;
  MR_Word STATE_VARIABLE_Liveness_85_85;
  MR_Word STATE_VARIABLE_Liveness_86_86;
  MR_Word STATE_VARIABLE_Liveness_87_87;
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

        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_7, ResumeVars0_8, SubGoal0_48, &Var_49, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_7, STATE_VARIABLE_Liveness_87_87, &CompletedLiveness_50);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedLiveness_50, ResumeVars0_8, &ResumeVars1_51);
        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_7, ResumeVars1_51, SubGoal0_48, &SubGoal1_52, STATE_VARIABLE_Liveness_86_86, &_Liveness_53);
        succeeded = hlds__goal_form__goal_cannot_stack_flush_1_p_0(SubGoal1_52);
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
        ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_7, ResumeVars1_51, ResumeLocs_54, SubGoal1_52, &SubGoal_55);
        GoalExpr_21 = (MR_Word) ((MR_Word) (SubGoal_55));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        GoalExpr_21 = GoalExpr0_12;
        STATE_VARIABLE_Liveness_87_87 = STATE_VARIABLE_Liveness_86_86;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_21 = GoalExpr0_12;
            STATE_VARIABLE_Liveness_87_87 = STATE_VARIABLE_Liveness_86_86;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_18 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_20;

            switch (ConjType_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(LiveInfo_7, ResumeVars0_8, Goals0_19, &Goals_20, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
                break;
              case (MR_Integer) 0:
                ll_backend__liveness__detect_resume_points_in_conj_6_p_0(LiveInfo_7, ResumeVars0_8, Goals0_19, &Goals_20, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
                break;
            }
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_21, 1) = (MR_Box) ((MR_Unsigned) (ConjType_18));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (Goals_20));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word CodeModel_22;
            MR_Word Goals0_103 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_104;

            CodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_13);
            switch (CodeModel_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_Word Var_24;

                  ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(LiveInfo_7, ResumeVars0_8, &Var_24, Goals0_103, &Goals_104, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_23;

                  ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(LiveInfo_7, ResumeVars0_8, &Var_23, Goals0_103, &Goals_104, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
                }
                break;
            }
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Goals_104));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CF_26 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_28;

            ll_backend__liveness__detect_resume_points_in_cases_6_p_0(LiveInfo_7, ResumeVars0_8, Cases0_27, &Cases_28, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Var_25));
              MR_hl_field(3, GoalExpr_21, 2) = (MR_Box) ((MR_Unsigned) (CF_26));
              MR_hl_field(3, GoalExpr_21, 3) = ((MR_Box) (Cases_28));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_109 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word SubGoal_110;
            MR_Word TermVar_57;
            MR_Word Var_95;

            succeeded = ((((MR_tag((MR_Word) Reason_56)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_56, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_57 = ((MR_Word) ((MR_hl_field(3, Reason_56, (MR_Integer) 1))));
              Var_95 = ((MR_Unsigned) ((MR_hl_field(3, Reason_56, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_95 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word CompletedTermVars_58;
              MR_Word Var_96;

              Var_96 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_57);
              ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_7, Var_96, &CompletedTermVars_58);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedTermVars_58, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
              SubGoal_110 = SubGoal0_109;
            }
            else
              ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_7, ResumeVars0_8, SubGoal0_109, &SubGoal_110, STATE_VARIABLE_Liveness_86_86, &STATE_VARIABLE_Liveness_87_87);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Reason_56));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (SubGoal_110));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word ElseInfo0_35 = ((MR_Word) ((MR_hl_field(0, Else0_32, (MR_Integer) 1))));
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
            ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_7, CondResumeVars0_37, &CondResumeVars1_38);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondResumeVars1_38, ResumeVars0_8, &CondResumeVars_39);
            ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_7, CondResumeVars_39, Cond0_30, &Cond1_40, STATE_VARIABLE_Liveness_86_86, &LivenessCond_41);
            ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_7, ResumeVars0_8, Then0_31, &Then_42, LivenessCond_41, &STATE_VARIABLE_Liveness_87_87);
            ll_backend__liveness__detect_resume_points_in_goal_6_p_0(LiveInfo_7, ResumeVars0_8, Else0_32, &Else_44, STATE_VARIABLE_Liveness_86_86, &LivenessElse_45);
            succeeded = hlds__goal_form__goal_cannot_stack_flush_1_p_0(Cond1_40);
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
            ll_backend__liveness__make_and_set_resume_point_5_p_0(LiveInfo_7, CondResumeVars_39, CondResumeLocs_46, Cond1_40, &Cond_47);
            ll_backend__liveness__require_equal_4_p_0(STATE_VARIABLE_Liveness_87_87, LivenessElse_45, (MR_String) "if-then-else", LiveInfo_7);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Vars_29));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (Cond_47));
              MR_hl_field(3, GoalExpr_21, 3) = ((MR_Box) (Then_42));
              MR_hl_field(3, GoalExpr_21, 4) = ((MR_Box) (Else_44));
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
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
  }
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_87_87, PostDeaths0_16, &STATE_VARIABLE_Liveness_101_101);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_17, STATE_VARIABLE_Liveness_101_101, STATE_VARIABLE_Liveness_84);
}

static MR_bool MR_CALL 
ll_backend__liveness__make_and_set_resume_point_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__liveness__var_is_not_dummy_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__liveness__make_and_set_resume_point_5_p_0(
  MR_Word LiveInfo_6,
  MR_Word ResumeVars0_7,
  MR_Word ResumeLocs_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10)
{
  MR_bool succeeded;
  MR_Word AllowPackingDummies_11 = ((((MR_Unsigned) ((MR_hl_field(0, LiveInfo_6, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word ResumeVars_12;
  MR_Word Resume_14;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, LiveInfo_6, (MR_Integer) 2))));

  switch (AllowPackingDummies_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ResumeVars_12 = ResumeVars0_7;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[0]));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (ll_backend__liveness__make_and_set_resume_point_5_p_0_1));
          MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_15, 3) = ((MR_Box) (Var_19));
        }
        parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_15, ResumeVars0_7, &ResumeVars_12);
      }
      break;
  }
  {
    Resume_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Resume_14, 0) = ((MR_Box) (ResumeVars_12));
    MR_hl_field(1, Resume_14, 1) = (MR_Box) ((MR_Unsigned) (ResumeLocs_8));
  }
  hlds__hlds_llds__goal_set_resume_point_3_p_0(Resume_14, Goal0_9, Goal_10);
}

static void MR_CALL 
ll_backend__liveness__require_equal_4_p_0(
  MR_Word LivenessFirst_5,
  MR_Word LivenessRest_6,
  MR_String GoalType_7,
  MR_Word LiveInfo_8)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessFirst_5, LivenessRest_6);
  if (!(succeeded))
  {
    MR_Word VarTable_9 = ((MR_Word) ((MR_hl_field(0, LiveInfo_8, (MR_Integer) 2))));
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
    FirstNames_12 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_9, (MR_Integer) 1, FirstVars_10);
    RestNames_13 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_9, (MR_Integer) 1, RestVars_11);
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

static void MR_CALL 
ll_backend__liveness__delay_death_cases_6_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word BornVars0_4,
  MR_Word DelayedDead0_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_13;
    MR_Word DelayedDeadGoal_14;
    MR_Word Cases_15;
    MR_Word BornVars_18;
    MR_Word DelayedDead_19;
    MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 0))));
    MR_Word OtherConsIds_21 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 1))));
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 2))));
    MR_Word Goal_23;
    MR_Word BornVarsGoal_24;
    MR_Word MaybeBornVarsDelayedDead_25;
    MR_Word Var_28;
    MR_Word Var_29;

    ll_backend__liveness__delay_death_goal_7_p_0(VarTable_1, Goal0_22, &Goal_23, BornVars0_4, &BornVarsGoal_24, DelayedDead0_5, &DelayedDeadGoal_14);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_13, 0) = ((MR_Box) (MainConsId_20));
      MR_hl_field(0, Case_13, 1) = ((MR_Box) (OtherConsIds_21));
      MR_hl_field(0, Case_13, 2) = ((MR_Box) (Goal_23));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Case_13));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (DelayedDeadGoal_14));
    }
    ll_backend__liveness__delay_death_cases_6_p_0(VarTable_1, Cases0_12, &Cases_15, BornVars0_4, DelayedDead0_5, &MaybeBornVarsDelayedDead_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_15));
    }
    if ((MaybeBornVarsDelayedDead_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      BornVars_18 = BornVarsGoal_24;
      DelayedDead_19 = DelayedDeadGoal_14;
    }
    else
    {
      MR_Word BornVarsCases_26;
      MR_Word DelayedDeadCases_27;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, MaybeBornVarsDelayedDead_25, (MR_Integer) 0))));

      BornVarsCases_26 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      DelayedDeadCases_27 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsGoal_24, BornVarsCases_26, &BornVars_18);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadGoal_14, DelayedDeadCases_27, &DelayedDead_19);
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (BornVars_18));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (DelayedDead_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word BornVars0_4,
  MR_Word DelayedDead0_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word DelayedDeadGoal_14;
    MR_Word Goals_15;
    MR_Word BornVars_18;
    MR_Word DelayedDead_19;
    MR_Word BornVarsGoal_20;
    MR_Word MaybeBornVarsDelayedDead_21;
    MR_Word Var_24;
    MR_Word Var_25;

    ll_backend__liveness__delay_death_goal_7_p_0(VarTable_1, Goal0_11, &Goal_13, BornVars0_4, &BornVarsGoal_20, DelayedDead0_5, &DelayedDeadGoal_14);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (DelayedDeadGoal_14));
    }
    ll_backend__liveness__delay_death_disj_6_p_0(VarTable_1, Goals0_12, &Goals_15, BornVars0_4, DelayedDead0_5, &MaybeBornVarsDelayedDead_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
    }
    if ((MaybeBornVarsDelayedDead_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      BornVars_18 = BornVarsGoal_20;
      DelayedDead_19 = DelayedDeadGoal_14;
    }
    else
    {
      MR_Word BornVarsGoals_22;
      MR_Word DelayedDeadGoals_23;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, MaybeBornVarsDelayedDead_21, (MR_Integer) 0))));

      BornVarsGoals_22 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
      DelayedDeadGoals_23 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsGoal_20, BornVarsGoals_22, &BornVars_18);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadGoal_14, DelayedDeadGoals_23, &DelayedDead_19);
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (BornVars_18));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (DelayedDead_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = HeadVar__6_6;
    *HeadVar__5_5 = HeadVar__4_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word BornVarsGoal_24;
    MR_Word DelayedDeadGoal_25;
    MR_Word BornVarsGoals_26;
    MR_Word DelayedDeadGoals_27;

    ll_backend__liveness__delay_death_goal_7_p_0(VarTable_1, Goal0_16, &Goal_18, HeadVar__4_4, &BornVarsGoal_24, HeadVar__6_6, &DelayedDeadGoal_25);
    ll_backend__liveness__delay_death_par_conj_7_p_0(VarTable_1, Goals0_17, &Goals_19, HeadVar__4_4, &BornVarsGoals_26, HeadVar__6_6, &DelayedDeadGoals_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsGoal_24, BornVarsGoals_26, HeadVar__5_5);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadGoal_25, DelayedDeadGoals_27, HeadVar__7_7);
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_BornVars_0_4,
  MR_Word * STATE_VARIABLE_BornVars_5,
  MR_Word STATE_VARIABLE_DelayedDead_0_6,
  MR_Word * STATE_VARIABLE_DelayedDead_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DelayedDead_7 = STATE_VARIABLE_DelayedDead_0_6;
    *STATE_VARIABLE_BornVars_5 = STATE_VARIABLE_BornVars_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_BornVars_26_26;
    MR_Word STATE_VARIABLE_DelayedDead_27_27;

    ll_backend__liveness__delay_death_goal_7_p_0(VarTable_1, Goal0_16, &Goal_18, STATE_VARIABLE_BornVars_0_4, &STATE_VARIABLE_BornVars_26_26, STATE_VARIABLE_DelayedDead_0_6, &STATE_VARIABLE_DelayedDead_27_27);
    ll_backend__liveness__delay_death_conj_7_p_0(VarTable_1, Goals0_17, &Goals_19, STATE_VARIABLE_BornVars_26_26, STATE_VARIABLE_BornVars_5, STATE_VARIABLE_DelayedDead_27_27, STATE_VARIABLE_DelayedDead_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Case_7;

  conv1_Case_7 = ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Case_7));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_7;

  conv0_Goal_7 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Goal_7));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__liveness__var_is_named_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
  MR_Word VarTable_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_BornVars_0_30,
  MR_Word * STATE_VARIABLE_BornVars_31,
  MR_Word STATE_VARIABLE_DelayedDead_0_32,
  MR_Word * STATE_VARIABLE_DelayedDead_33)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word PreBirths_15;
  MR_Word PreDeaths0_16;
  MR_Word PreDelayedDead_18;
  MR_Word UnnamedPreDeaths_19;
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
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_7_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (VarTable_8));
  }
  parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_35, PreDeaths0_16, &PreDelayedDead_18, &UnnamedPreDeaths_19);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDelayedDead_18, STATE_VARIABLE_DelayedDead_0_32, &STATE_VARIABLE_DelayedDead_36_36);
  hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(UnnamedPreDeaths_19, GoalInfo0_14, &GoalInfo2_22);
  switch (MR_tag((MR_Word) GoalExpr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_53 = (MR_Word) ((MR_Word) (GoalExpr0_13));
        MR_Word Goal_54;
        MR_Word Var_55;

        ll_backend__liveness__delay_death_goal_7_p_0(VarTable_8, Goal0_53, &Goal_54, STATE_VARIABLE_BornVars_34_34, &Var_55, STATE_VARIABLE_DelayedDead_36_36, &STATE_VARIABLE_DelayedDead_38_38);
        GoalExpr_21 = (MR_Word) ((MR_Word) (Goal_54));
        STATE_VARIABLE_BornVars_37_37 = STATE_VARIABLE_BornVars_34_34;
      }
      break;
    case (MR_Integer) 1:
      {
        GoalExpr_21 = GoalExpr0_13;
        STATE_VARIABLE_BornVars_37_37 = STATE_VARIABLE_BornVars_34_34;
        STATE_VARIABLE_DelayedDead_38_38 = STATE_VARIABLE_DelayedDead_36_36;
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_21 = GoalExpr0_13;
        STATE_VARIABLE_BornVars_37_37 = STATE_VARIABLE_BornVars_34_34;
        STATE_VARIABLE_DelayedDead_38_38 = STATE_VARIABLE_DelayedDead_36_36;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            GoalExpr_21 = GoalExpr0_13;
            STATE_VARIABLE_BornVars_37_37 = STATE_VARIABLE_BornVars_34_34;
            STATE_VARIABLE_DelayedDead_38_38 = STATE_VARIABLE_DelayedDead_36_36;
          }
          break;
        case (MR_Integer) 1:
          {
            GoalExpr_21 = GoalExpr0_13;
            STATE_VARIABLE_BornVars_37_37 = STATE_VARIABLE_BornVars_34_34;
            STATE_VARIABLE_DelayedDead_38_38 = STATE_VARIABLE_DelayedDead_36_36;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_43 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Goals_45;

            switch (ConjType_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__liveness__delay_death_par_conj_7_p_0(VarTable_8, Goals0_44, &Goals_45, STATE_VARIABLE_BornVars_34_34, &STATE_VARIABLE_BornVars_37_37, STATE_VARIABLE_DelayedDead_36_36, &STATE_VARIABLE_DelayedDead_38_38);
                break;
              case (MR_Integer) 0:
                ll_backend__liveness__delay_death_conj_7_p_0(VarTable_8, Goals0_44, &Goals_45, STATE_VARIABLE_BornVars_34_34, &STATE_VARIABLE_BornVars_37_37, STATE_VARIABLE_DelayedDead_36_36, &STATE_VARIABLE_DelayedDead_38_38);
                break;
            }
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_21, 1) = (MR_Box) ((MR_Unsigned) (ConjType_43));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (Goals_45));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalDeaths_46;
            MR_Word MaybeBornVarsDelayedDead_47;
            MR_Word Goals0_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));

            ll_backend__liveness__delay_death_disj_6_p_0(VarTable_8, Goals0_86, &GoalDeaths_46, STATE_VARIABLE_BornVars_34_34, STATE_VARIABLE_DelayedDead_36_36, &MaybeBornVarsDelayedDead_47);
            if ((MaybeBornVarsDelayedDead_47 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              GoalExpr_21 = GoalExpr0_13;
              STATE_VARIABLE_BornVars_37_37 = STATE_VARIABLE_BornVars_34_34;
              STATE_VARIABLE_DelayedDead_38_38 = STATE_VARIABLE_DelayedDead_36_36;
            }
            else
            {
              MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, MaybeBornVarsDelayedDead_47, (MR_Integer) 0))));
              MR_Word Var_75;
              MR_Word Goals_85;

              STATE_VARIABLE_BornVars_37_37 = ((MR_Word) ((MR_hl_field(0, Var_74, (MR_Integer) 0))));
              STATE_VARIABLE_DelayedDead_38_38 = ((MR_Word) ((MR_hl_field(0, Var_74, (MR_Integer) 1))));
              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_75, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[0]));
                MR_hl_field(0, Var_75, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_7_p_0_2));
                MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_75, 3) = ((MR_Box) (STATE_VARIABLE_DelayedDead_38_38));
              }
              Goals_85 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__liveness_scalar_common_2[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_75, GoalDeaths_46);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Goals_85));
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word CanFail_49 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
            MR_Word CaseDeaths_51;
            MR_Word MaybeBornVarsDelayedDead_87;

            ll_backend__liveness__delay_death_cases_6_p_0(VarTable_8, Cases0_50, &CaseDeaths_51, STATE_VARIABLE_BornVars_34_34, STATE_VARIABLE_DelayedDead_36_36, &MaybeBornVarsDelayedDead_87);
            if ((MaybeBornVarsDelayedDead_87 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", (MR_String) "empty switch");
                return;
              }
            else
            {
              MR_Word Cases_52;
              MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, MaybeBornVarsDelayedDead_87, (MR_Integer) 0))));
              MR_Word Var_77;

              STATE_VARIABLE_BornVars_37_37 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
              STATE_VARIABLE_DelayedDead_38_38 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 1))));
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_77, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[1]));
                MR_hl_field(0, Var_77, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_7_p_0_3));
                MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_77, 3) = ((MR_Box) (STATE_VARIABLE_DelayedDead_38_38));
              }
              Cases_52 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__liveness_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_77, CaseDeaths_51);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Var_48));
                MR_hl_field(3, GoalExpr_21, 2) = (MR_Box) ((MR_Unsigned) (CanFail_49));
                MR_hl_field(3, GoalExpr_21, 3) = ((MR_Box) (Cases_52));
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Goal0_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Goal_89;
            MR_Word Var_82;

            succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_82 = ((MR_Unsigned) ((MR_hl_field(3, Reason_71, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_82 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              Goal_89 = Goal0_88;
              STATE_VARIABLE_DelayedDead_38_38 = STATE_VARIABLE_DelayedDead_36_36;
            }
            else
            {
              MR_Word Var_73;

              ll_backend__liveness__delay_death_goal_7_p_0(VarTable_8, Goal0_88, &Goal_89, STATE_VARIABLE_BornVars_34_34, &Var_73, STATE_VARIABLE_DelayedDead_36_36, &STATE_VARIABLE_DelayedDead_38_38);
            }
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (Reason_71));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (Goal_89));
            }
            STATE_VARIABLE_BornVars_37_37 = STATE_VARIABLE_BornVars_34_34;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word QuantVars_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Cond0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Then0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Else0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 4))));
            MR_Word Cond_60;
            MR_Word BornVarsCond_61;
            MR_Word DelayedDeadCond_62;
            MR_Word Then1_63;
            MR_Word BornVarsThen_64;
            MR_Word DelayedDeadThen_65;
            MR_Word Else1_66;
            MR_Word BornVarsElse_67;
            MR_Word DelayedDeadElse_68;
            MR_Word Then_69;
            MR_Word Else_70;
            MR_Word Var_80;
            MR_Word Var_81;

            ll_backend__liveness__delay_death_goal_7_p_0(VarTable_8, Cond0_57, &Cond_60, STATE_VARIABLE_BornVars_34_34, &BornVarsCond_61, STATE_VARIABLE_DelayedDead_36_36, &DelayedDeadCond_62);
            ll_backend__liveness__delay_death_goal_7_p_0(VarTable_8, Then0_58, &Then1_63, BornVarsCond_61, &BornVarsThen_64, DelayedDeadCond_62, &DelayedDeadThen_65);
            ll_backend__liveness__delay_death_goal_7_p_0(VarTable_8, Else0_59, &Else1_66, STATE_VARIABLE_BornVars_34_34, &BornVarsElse_67, STATE_VARIABLE_DelayedDead_36_36, &DelayedDeadElse_68);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BornVarsThen_64, BornVarsElse_67, &STATE_VARIABLE_BornVars_37_37);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDeadThen_65, DelayedDeadElse_68, &STATE_VARIABLE_DelayedDead_38_38);
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_80, 0) = ((MR_Box) (Then1_63));
              MR_hl_field(0, Var_80, 1) = ((MR_Box) (DelayedDeadThen_65));
            }
            Then_69 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(STATE_VARIABLE_DelayedDead_38_38, Var_80);
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (Else1_66));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (DelayedDeadElse_68));
            }
            Else_70 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(STATE_VARIABLE_DelayedDead_38_38, Var_81);
            {
              GoalExpr_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_21, 1) = ((MR_Box) (QuantVars_56));
              MR_hl_field(3, GoalExpr_21, 2) = ((MR_Box) (Cond_60));
              MR_hl_field(3, GoalExpr_21, 3) = ((MR_Box) (Then_69));
              MR_hl_field(3, GoalExpr_21, 4) = ((MR_Box) (Else_70));
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
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_29));
  }
}

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
  MR_Word FinalDelayedDead_4,
  MR_Word HeadVar__2_2)
{
  MR_Word Goal_7;
  MR_Word Goal0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word DelayedDead0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word ToBeKilled_8;
  MR_Word GoalExpr_9;
  MR_Word GoalInfo0_10;
  MR_Word PostDeath0_11;
  MR_Word PostDeath_12;
  MR_Word GoalInfo_13;

  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayedDead0_6, FinalDelayedDead_4, &ToBeKilled_8);
  GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_10, &PostDeath0_11);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeath0_11, ToBeKilled_8, &PostDeath_12);
  hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeath_12, GoalInfo0_10, &GoalInfo_13);
  {
    Goal_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_7, 0) = ((MR_Box) (GoalExpr_9));
    MR_hl_field(0, Goal_7, 1) = ((MR_Box) (GoalInfo_13));
  }
  return Goal_7;
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
  MR_Word LiveInfo_1,
  MR_Word CompletedNonLocals_2,
  MR_Word Deadness0_3,
  MR_Word Liveness0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Union_0_7,
  MR_Word * STATE_VARIABLE_Union_8,
  MR_Word * CompletedNonLocalUnion_9)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_7, CompletedNonLocals_2, CompletedNonLocalUnion_9);
    *STATE_VARIABLE_Union_8 = STATE_VARIABLE_Union_0_7;
  }
  else
  {
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Goal_24;
    MR_Word Goals_25;
    MR_Word Goal1_28;
    MR_Word DeadnessGoal_29;
    MR_Word GoalInfo1_31;
    MR_Word InstmapDelta1_32;
    MR_Word STATE_VARIABLE_Union_37_37;
    MR_Word PreDeaths_43;
    MR_Word GoalExpr_45;
    MR_Word GoalInfo0_46;
    MR_Word PreDeaths0_47;
    MR_Word PreDeaths_48;
    MR_Word GoalInfo_49;

    ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_1, Liveness0_4, Goal0_22, &Goal1_28, Deadness0_3, &DeadnessGoal_29);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessGoal_29, STATE_VARIABLE_Union_0_7, &STATE_VARIABLE_Union_37_37);
    ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(LiveInfo_1, CompletedNonLocals_2, Deadness0_3, Liveness0_4, Goals0_23, &Goals_25, STATE_VARIABLE_Union_37_37, STATE_VARIABLE_Union_8, CompletedNonLocalUnion_9);
    GoalInfo1_31 = ((MR_Word) ((MR_hl_field(0, Goal1_28, (MR_Integer) 1))));
    InstmapDelta1_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_31);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta1_32);
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.detect_deadness_in_par_conj\'/9", (MR_String) "unreachable instmap");
        return;
      }
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *CompletedNonLocalUnion_9, DeadnessGoal_29, &PreDeaths_43);
    GoalExpr_45 = ((MR_Word) ((MR_hl_field(0, Goal1_28, (MR_Integer) 0))));
    GoalInfo0_46 = ((MR_Word) ((MR_hl_field(0, Goal1_28, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_46, &PreDeaths0_47);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths0_47, PreDeaths_43, &PreDeaths_48);
    hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(PreDeaths_48, GoalInfo0_46, &GoalInfo_49);
    {
      Goal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_24, 0) = ((MR_Box) (GoalExpr_45));
      MR_hl_field(0, Goal_24, 1) = ((MR_Box) (GoalInfo_49));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_25));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_11_p_0(
  MR_Word LiveInfo_1,
  MR_Word SwitchVar_2,
  MR_Word IsAnyBranchEndReachable_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word CompletedNonLocals_8,
  MR_Word STATE_VARIABLE_Union_0_9,
  MR_Word * STATE_VARIABLE_Union_10,
  MR_Word * CompletedNonLocalUnion_11)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CompletedSwitchVar_20;
    MR_Word Var_23;

    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    Var_23 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SwitchVar_2);
    ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_1, Var_23, &CompletedSwitchVar_20);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedSwitchVar_20, STATE_VARIABLE_Union_0_9, STATE_VARIABLE_Union_10);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_10, CompletedNonLocals_8, CompletedNonLocalUnion_11);
  }
  else
  {
    MR_Word Case0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Case_30;
    MR_Word Cases_31;
    MR_Word Union_35;
    MR_Word MainConsId_37 = ((MR_Word) ((MR_hl_field(0, Case0_28, (MR_Integer) 0))));
    MR_Word OtherConsIds_38 = ((MR_Word) ((MR_hl_field(0, Case0_28, (MR_Integer) 1))));
    MR_Word Goal0_39 = ((MR_Word) ((MR_hl_field(0, Case0_28, (MR_Integer) 2))));
    MR_Word Goal1_40;
    MR_Word DeadnessGoal_41;
    MR_Word ThisBranchEndReachable_42;
    MR_Word Goal_45;
    MR_Word AddedPreDeaths_44;

    ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_1, HeadVar__7_7, Goal0_39, &Goal1_40, HeadVar__6_6, &DeadnessGoal_41);
    ThisBranchEndReachable_42 = ll_backend__liveness__is_this_branch_goals_end_reachable_1_f_0(Goal1_40);
    ll_backend__liveness__union_branch_deadness_6_p_0(IsAnyBranchEndReachable_3, ThisBranchEndReachable_42, DeadnessGoal_41, HeadVar__6_6, STATE_VARIABLE_Union_0_9, &Union_35);
    ll_backend__liveness__detect_deadness_in_cases_11_p_0(LiveInfo_1, SwitchVar_2, IsAnyBranchEndReachable_3, Cases0_29, &Cases_31, HeadVar__6_6, HeadVar__7_7, CompletedNonLocals_8, Union_35, STATE_VARIABLE_Union_10, CompletedNonLocalUnion_11);
    ll_backend__liveness__add_branch_pre_deaths_7_p_0(DeadnessGoal_41, HeadVar__6_6, *CompletedNonLocalUnion_11, ThisBranchEndReachable_42, &AddedPreDeaths_44, Goal1_40, &Goal_45);
    {
      Case_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_30, 0) = ((MR_Box) (MainConsId_37));
      MR_hl_field(0, Case_30, 1) = ((MR_Box) (OtherConsIds_38));
      MR_hl_field(0, Case_30, 2) = ((MR_Box) (Goal_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_31));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_10_p_0(
  MR_Word LiveInfo_1,
  MR_Word IsAnyBranchEndReachable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word CompletedNonLocals_7,
  MR_Word STATE_VARIABLE_Union_0_8,
  MR_Word * STATE_VARIABLE_Union_9,
  MR_Word * CompletedNonLocalUnion_10)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_8, CompletedNonLocals_7, CompletedNonLocalUnion_10);
    *STATE_VARIABLE_Union_9 = STATE_VARIABLE_Union_0_8;
  }
  else
  {
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_24;
    MR_Word Goals_25;
    MR_Word Goal1_31;
    MR_Word DeadnessGoal_32;
    MR_Word Var_34;
    MR_Word GoalInfo_40;
    MR_Word InstmapDelta_41;
    MR_Word GoalExpr_47;
    MR_Word GoalInfo0_48;
    MR_Word PreDeaths0_49;
    MR_Word PreDeaths_50;
    MR_Word GoalInfo_51;

    ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_1, HeadVar__6_6, Goal0_22, &Goal1_31, HeadVar__5_5, &DeadnessGoal_32);
    GoalInfo_40 = ((MR_Word) ((MR_hl_field(0, Goal1_31, (MR_Integer) 1))));
    InstmapDelta_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_40);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta_41);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Union_37_37;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_8, DeadnessGoal_32, &STATE_VARIABLE_Union_37_37);
      ll_backend__liveness__detect_deadness_in_disj_10_p_0(LiveInfo_1, IsAnyBranchEndReachable_2, Goals0_23, &Goals_25, HeadVar__5_5, HeadVar__6_6, CompletedNonLocals_7, STATE_VARIABLE_Union_37_37, STATE_VARIABLE_Union_9, CompletedNonLocalUnion_10);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *CompletedNonLocalUnion_10, DeadnessGoal_32, &Var_34);
    }
    else
    {
      MR_Word STATE_VARIABLE_Union_37_61;
      MR_Word PreDeaths_65;

      succeeded = (IsAnyBranchEndReachable_2 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word FilteredDeadnessGoal_54;

        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessGoal_32, HeadVar__5_5, &FilteredDeadnessGoal_54);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_8, FilteredDeadnessGoal_54, &STATE_VARIABLE_Union_37_61);
      }
      else
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_8, DeadnessGoal_32, &STATE_VARIABLE_Union_37_61);
      ll_backend__liveness__detect_deadness_in_disj_10_p_0(LiveInfo_1, IsAnyBranchEndReachable_2, Goals0_23, &Goals_25, HeadVar__5_5, HeadVar__6_6, CompletedNonLocals_7, STATE_VARIABLE_Union_37_61, STATE_VARIABLE_Union_9, CompletedNonLocalUnion_10);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *CompletedNonLocalUnion_10, DeadnessGoal_32, &PreDeaths_65);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths_65, HeadVar__5_5, &Var_34);
    }
    GoalExpr_47 = ((MR_Word) ((MR_hl_field(0, Goal1_31, (MR_Integer) 0))));
    GoalInfo0_48 = ((MR_Word) ((MR_hl_field(0, Goal1_31, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_48, &PreDeaths0_49);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths0_49, Var_34, &PreDeaths_50);
    hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(PreDeaths_50, GoalInfo0_48, &GoalInfo_51);
    {
      Goal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_24, 0) = ((MR_Box) (GoalExpr_47));
      MR_hl_field(0, Goal_24, 1) = ((MR_Box) (GoalInfo_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_25));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
  MR_Word LiveInfo_1,
  MR_Word Liveness0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Deadness_0_5,
  MR_Word * STATE_VARIABLE_Deadness_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Deadness_6 = STATE_VARIABLE_Deadness_0_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word GoalInfo_20 = ((MR_Word) ((MR_hl_field(0, Goal0_14, (MR_Integer) 1))));
    MR_Word InstmapDelta_21;

    InstmapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_20);
    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_21);
    if (succeeded)
    {
      Goals_17 = Goals0_15;
      ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_1, Liveness0_2, Goal0_14, &Goal_16, STATE_VARIABLE_Deadness_0_5, STATE_VARIABLE_Deadness_6);
    }
    else
    {
      MR_Word LivenessGoal_22;
      MR_Word STATE_VARIABLE_Deadness_26_26;

      ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_1, Goal0_14, Liveness0_2, &LivenessGoal_22);
      ll_backend__liveness__detect_deadness_in_conj_6_p_0(LiveInfo_1, LivenessGoal_22, Goals0_15, &Goals_17, STATE_VARIABLE_Deadness_0_5, &STATE_VARIABLE_Deadness_26_26);
      ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_1, Liveness0_2, Goal0_14, &Goal_16, STATE_VARIABLE_Deadness_26_26, STATE_VARIABLE_Deadness_6);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
  MR_Word LiveInfo_7,
  MR_Word STATE_VARIABLE_Liveness_0_116,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Deadness_0_117,
  MR_Word * STATE_VARIABLE_Deadness_118)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word PreDeaths0_14;
  MR_Word PreBirths0_15;
  MR_Word PostDeaths0_16;
  MR_Word PostBirths0_17;
  MR_Word GoalExpr_45;
  MR_Word GoalInfo_47;
  MR_Word AfterGoalDeadness0_110;
  MR_Word AfterGoalDeadness1_111;
  MR_Word STATE_VARIABLE_Deadness_119_119;
  MR_Word STATE_VARIABLE_Deadness_120_120;
  MR_Word STATE_VARIABLE_Liveness_121_121;
  MR_Word STATE_VARIABLE_Liveness_122_122;

  hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_13, &PreDeaths0_14);
  hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_13, &PreBirths0_15);
  hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_13, &PostDeaths0_16);
  hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_13, &PostBirths0_17);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Deadness_0_117, PostBirths0_17, &STATE_VARIABLE_Deadness_119_119);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths0_16, STATE_VARIABLE_Deadness_119_119, &STATE_VARIABLE_Deadness_120_120);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_116, PreDeaths0_14, &STATE_VARIABLE_Liveness_121_121);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreBirths0_15, STATE_VARIABLE_Liveness_121_121, &STATE_VARIABLE_Liveness_122_122);
  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_104 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_105;

        ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_7, STATE_VARIABLE_Liveness_122_122, SubGoal0_104, &SubGoal_105, STATE_VARIABLE_Deadness_120_120, &AfterGoalDeadness0_110);
        GoalExpr_45 = (MR_Word) ((MR_Word) (SubGoal_105));
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

        ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_7, GoalInfo0_13, &_BaseNonLocals_41, &CompletedNonLocals_42);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_122_122, CompletedNonLocals_42, &LiveNonLocals_43);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveNonLocals_43, STATE_VARIABLE_Deadness_120_120, &NewPostDeaths_44);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewPostDeaths_44, STATE_VARIABLE_Deadness_120_120, &AfterGoalDeadness0_110);
        GoalExpr_45 = GoalExpr0_12;
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths0_16, NewPostDeaths_44, &PostDeaths_46);
        hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeaths_46, GoalInfo0_13, &GoalInfo_47);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word CompletedNonLocals_42;
            MR_Word LiveNonLocals_43;
            MR_Word NewPostDeaths_44;
            MR_Word PostDeaths_46;
            MR_Word _BaseNonLocals_41;

            ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_7, GoalInfo0_13, &_BaseNonLocals_41, &CompletedNonLocals_42);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_122_122, CompletedNonLocals_42, &LiveNonLocals_43);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveNonLocals_43, STATE_VARIABLE_Deadness_120_120, &NewPostDeaths_44);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewPostDeaths_44, STATE_VARIABLE_Deadness_120_120, &AfterGoalDeadness0_110);
            GoalExpr_45 = GoalExpr0_12;
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths0_16, NewPostDeaths_44, &PostDeaths_46);
            hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(PostDeaths_46, GoalInfo0_13, &GoalInfo_47);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));

            if ((Conjuncts0_49 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              GoalExpr_45 = GoalExpr0_12;
              AfterGoalDeadness0_110 = STATE_VARIABLE_Deadness_120_120;
            }
            else
            {
              MR_Word Conjuncts_52;

              switch (ConjType_48) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Union0_54;
                    MR_Word CompletedNonLocals_178;
                    MR_Word Var_53;
                    MR_Word _CompletedNonLocalUnion_56;

                    ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_7, GoalInfo0_13, &Var_53, &CompletedNonLocals_178);
                    Union0_54 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(LiveInfo_7, CompletedNonLocals_178, STATE_VARIABLE_Deadness_120_120, STATE_VARIABLE_Liveness_122_122, Conjuncts0_49, &Conjuncts_52, Union0_54, &AfterGoalDeadness0_110, &_CompletedNonLocalUnion_56);
                  }
                  break;
                case (MR_Integer) 0:
                  ll_backend__liveness__detect_deadness_in_conj_6_p_0(LiveInfo_7, STATE_VARIABLE_Liveness_122_122, Conjuncts0_49, &Conjuncts_52, STATE_VARIABLE_Deadness_120_120, &AfterGoalDeadness0_110);
                  break;
              }
              {
                GoalExpr_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_45, 1) = (MR_Box) ((MR_Unsigned) (ConjType_48));
                MR_hl_field(3, GoalExpr_45, 2) = ((MR_Box) (Conjuncts_52));
              }
            }
            GoalInfo_47 = GoalInfo0_13;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));

            if ((Disjuncts0_57 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              GoalExpr_45 = GoalExpr0_12;
              AfterGoalDeadness0_110 = STATE_VARIABLE_Deadness_120_120;
            }
            else
            {
              MR_Word IsAnyBranchEndReachable_60;
              MR_Word Disjuncts_62;
              MR_Word CompletedNonLocals_183;
              MR_Word Union0_184;
              MR_Word Var_61;
              MR_Word Var_63;

              IsAnyBranchEndReachable_60 = ll_backend__liveness__is_this_structured_goals_end_reachable_1_f_0(GoalInfo0_13);
              ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_7, GoalInfo0_13, &Var_61, &CompletedNonLocals_183);
              Union0_184 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              ll_backend__liveness__detect_deadness_in_disj_10_p_0(LiveInfo_7, IsAnyBranchEndReachable_60, Disjuncts0_57, &Disjuncts_62, STATE_VARIABLE_Deadness_120_120, STATE_VARIABLE_Liveness_122_122, CompletedNonLocals_183, Union0_184, &AfterGoalDeadness0_110, &Var_63);
              {
                GoalExpr_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_45, 1) = ((MR_Box) (Disjuncts_62));
              }
            }
            GoalInfo_47 = GoalInfo0_13;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Det_65 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_69;
            MR_Word CompletedNonLocals_196;
            MR_Word Union0_197;
            MR_Word IsAnyBranchEndReachable_199;
            MR_Word Var_67;
            MR_Word Var_70;

            IsAnyBranchEndReachable_199 = ll_backend__liveness__is_this_structured_goals_end_reachable_1_f_0(GoalInfo0_13);
            ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_7, GoalInfo0_13, &Var_67, &CompletedNonLocals_196);
            Union0_197 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            ll_backend__liveness__detect_deadness_in_cases_11_p_0(LiveInfo_7, Var_64, IsAnyBranchEndReachable_199, Cases0_66, &Cases_69, STATE_VARIABLE_Deadness_120_120, STATE_VARIABLE_Liveness_122_122, CompletedNonLocals_196, Union0_197, &AfterGoalDeadness0_110, &Var_70);
            {
              GoalExpr_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_45, 1) = ((MR_Box) (Var_64));
              MR_hl_field(3, GoalExpr_45, 2) = (MR_Box) ((MR_Unsigned) (Det_65));
              MR_hl_field(3, GoalExpr_45, 3) = ((MR_Box) (Cases_69));
            }
            GoalInfo_47 = GoalInfo0_13;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_106 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_216 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word SubGoal_217;
            MR_Word TermVar_107;
            MR_Word Var_156;

            succeeded = ((((MR_tag((MR_Word) Reason_106)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_106, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_107 = ((MR_Word) ((MR_hl_field(3, Reason_106, (MR_Integer) 1))));
              Var_156 = ((MR_Unsigned) ((MR_hl_field(3, Reason_106, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_156 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word CompletedTermVars_108;
              MR_Word Var_157;

              Var_157 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_107);
              ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_7, Var_157, &CompletedTermVars_108);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Deadness_120_120, CompletedTermVars_108, &AfterGoalDeadness0_110);
              SubGoal_217 = SubGoal0_216;
            }
            else
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_7, STATE_VARIABLE_Liveness_122_122, SubGoal0_216, &SubGoal_217, STATE_VARIABLE_Deadness_120_120, &AfterGoalDeadness0_110);
            {
              GoalExpr_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_45, 1) = ((MR_Box) (Reason_106));
              MR_hl_field(3, GoalExpr_45, 2) = ((MR_Box) (SubGoal_217));
            }
            GoalInfo_47 = GoalInfo0_13;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word LivenessCond_78;
            MR_Word Else1_79;
            MR_Word DeadnessElse_80;
            MR_Word Then_81;
            MR_Word DeadnessThen_82;
            MR_Word Cond1_83;
            MR_Word DeadnessCond_84;
            MR_Word InstmapDelta_86;
            MR_Word Cond_98;
            MR_Word Else_100;
            MR_Word CompletedNonLocals_211;
            MR_Word Var_85;

            ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_7, Cond0_75, STATE_VARIABLE_Liveness_122_122, &LivenessCond_78);
            ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_7, STATE_VARIABLE_Liveness_122_122, Else0_77, &Else1_79, STATE_VARIABLE_Deadness_120_120, &DeadnessElse_80);
            ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_7, LivenessCond_78, Then0_76, &Then_81, STATE_VARIABLE_Deadness_120_120, &DeadnessThen_82);
            ll_backend__liveness__detect_deadness_in_goal_6_p_0(LiveInfo_7, STATE_VARIABLE_Liveness_122_122, Cond0_75, &Cond1_83, DeadnessThen_82, &DeadnessCond_84);
            ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_7, GoalInfo0_13, &Var_85, &CompletedNonLocals_211);
            InstmapDelta_86 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
            succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta_86);
            if (succeeded)
            {
              MR_Word CondGoalInfo_88 = ((MR_Word) ((MR_hl_field(0, Cond0_75, (MR_Integer) 1))));
              MR_Word CondInstmapDelta_89;
              MR_Word ThenGoalInfo_91;
              MR_Word ThenInstmapDelta_92;
              MR_Word CondThenInstmapReachable_93;
              MR_Word ElseInstmapReachable_94;
              MR_Word Union1_95;
              MR_Word CompletedNonLocalDeadness_96;
              MR_Word Union0_204;
              MR_Word AddedCondPreDeaths_97;
              MR_Word AddedElsePreDeaths_99;

              CondInstmapDelta_89 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondGoalInfo_88);
              ThenGoalInfo_91 = ((MR_Word) ((MR_hl_field(0, Then0_76, (MR_Integer) 1))));
              ThenInstmapDelta_92 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ThenGoalInfo_91);
              succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CondInstmapDelta_89);
              if (succeeded)
                succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ThenInstmapDelta_92);
              if (succeeded)
                CondThenInstmapReachable_93 = (MR_Integer) 1;
              else
                CondThenInstmapReachable_93 = (MR_Integer) 0;
              ElseInstmapReachable_94 = ll_backend__liveness__is_this_branch_goals_end_reachable_1_f_0(Else0_77);
              Union0_204 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              ll_backend__liveness__union_branch_deadness_6_p_0((MR_Integer) 1, CondThenInstmapReachable_93, DeadnessCond_84, STATE_VARIABLE_Deadness_120_120, Union0_204, &Union1_95);
              ll_backend__liveness__union_branch_deadness_6_p_0((MR_Integer) 1, ElseInstmapReachable_94, DeadnessElse_80, STATE_VARIABLE_Deadness_120_120, Union1_95, &AfterGoalDeadness0_110);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AfterGoalDeadness0_110, CompletedNonLocals_211, &CompletedNonLocalDeadness_96);
              ll_backend__liveness__add_branch_pre_deaths_7_p_0(DeadnessCond_84, STATE_VARIABLE_Deadness_120_120, CompletedNonLocalDeadness_96, CondThenInstmapReachable_93, &AddedCondPreDeaths_97, Cond1_83, &Cond_98);
              ll_backend__liveness__add_branch_pre_deaths_7_p_0(DeadnessElse_80, STATE_VARIABLE_Deadness_120_120, CompletedNonLocalDeadness_96, ElseInstmapReachable_94, &AddedElsePreDeaths_99, Else1_79, &Else_100);
            }
            else
            {
              MR_Word CompletedNonLocalDeadness_207;
              MR_Word Var_102;
              MR_Word Var_103;

              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessCond_84, DeadnessElse_80, &AfterGoalDeadness0_110);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AfterGoalDeadness0_110, CompletedNonLocals_211, &CompletedNonLocalDeadness_207);
              ll_backend__liveness__add_branch_pre_deaths_7_p_0(DeadnessCond_84, STATE_VARIABLE_Deadness_120_120, CompletedNonLocalDeadness_207, (MR_Integer) 0, &Var_102, Cond1_83, &Cond_98);
              ll_backend__liveness__add_branch_pre_deaths_7_p_0(DeadnessElse_80, STATE_VARIABLE_Deadness_120_120, CompletedNonLocalDeadness_207, (MR_Integer) 0, &Var_103, Else1_79, &Else_100);
            }
            {
              GoalExpr_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_45, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_45, 1) = ((MR_Box) (Vars_74));
              MR_hl_field(3, GoalExpr_45, 2) = ((MR_Box) (Cond_98));
              MR_hl_field(3, GoalExpr_45, 3) = ((MR_Box) (Then_81));
              MR_hl_field(3, GoalExpr_45, 4) = ((MR_Box) (Else_100));
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
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_47));
  }
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AfterGoalDeadness0_110, PreBirths0_15, &AfterGoalDeadness1_111);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths0_14, AfterGoalDeadness1_111, STATE_VARIABLE_Deadness_118);
}

static MR_Word MR_CALL 
ll_backend__liveness__is_this_structured_goals_end_reachable_1_f_0(
  MR_Word GoalInfo_3)
{
  MR_bool succeeded;
  MR_Word EndIsReachable_4;
  MR_Word InstmapDelta_5;

  InstmapDelta_5 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_3);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta_5);
  if (succeeded)
    EndIsReachable_4 = (MR_Integer) 1;
  else
    EndIsReachable_4 = (MR_Integer) 0;
  return EndIsReachable_4;
}

static MR_Word MR_CALL 
ll_backend__liveness__is_this_branch_goals_end_reachable_1_f_0(
  MR_Word Goal_3)
{
  MR_bool succeeded;
  MR_Word EndIsReachable_4;
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 1))));
  MR_Word InstmapDelta_7;

  InstmapDelta_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_6);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta_7);
  if (succeeded)
    EndIsReachable_4 = (MR_Integer) 1;
  else
    EndIsReachable_4 = (MR_Integer) 0;
  return EndIsReachable_4;
}

static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_7_p_0(
  MR_Word DeadnessGoal_8,
  MR_Word Deadness0_9,
  MR_Word CompletedNonLocalUnion_10,
  MR_Word ThisBranchEndReachable_11,
  MR_Word * AddedPreDeaths_12,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16)
{
  MR_Word PreDeaths_14;
  MR_Word GoalExpr_18;
  MR_Word GoalInfo0_19;
  MR_Word PreDeaths0_20;
  MR_Word PreDeaths_21;
  MR_Word GoalInfo_22;

  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocalUnion_10, DeadnessGoal_8, &PreDeaths_14);
  switch (ThisBranchEndReachable_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths_14, Deadness0_9, AddedPreDeaths_12);
      break;
    case (MR_Integer) 1:
      *AddedPreDeaths_12 = PreDeaths_14;
      break;
  }
  GoalExpr_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_15, (MR_Integer) 0))));
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_15, (MR_Integer) 1))));
  hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_19, &PreDeaths0_20);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths0_20, *AddedPreDeaths_12, &PreDeaths_21);
  hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(PreDeaths_21, GoalInfo0_19, &GoalInfo_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_22));
  }
}

static void MR_CALL 
ll_backend__liveness__union_branch_deadness_6_p_0(
  MR_Word AnyBranchEndReachable_7,
  MR_Word ThisBranchEndReachable_8,
  MR_Word DeadnessGoal_9,
  MR_Word Deadness0_10,
  MR_Word STATE_VARIABLE_Union_0_13,
  MR_Word * STATE_VARIABLE_Union_14)
{
  MR_bool succeeded = (ThisBranchEndReachable_8 == (MR_Integer) 0);

  if (succeeded)
    succeeded = (AnyBranchEndReachable_7 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word FilteredDeadnessGoal_12;

    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeadnessGoal_9, Deadness0_10, &FilteredDeadnessGoal_12);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_13, FilteredDeadnessGoal_12, STATE_VARIABLE_Union_14);
  }
  else
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Union_0_13, DeadnessGoal_9, STATE_VARIABLE_Union_14);
}

static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
  MR_Word LiveInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Liveness_4 = STATE_VARIABLE_Liveness_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Liveness_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Liveness_0_3;

      ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_1, Goal_10, STATE_VARIABLE_Liveness_0_3, &STATE_VARIABLE_Liveness_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_Liveness_0_3 = STATE_VARIABLE_Liveness_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Liveness_0_3 = next_value_of_STATE_VARIABLE_Liveness_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__liveness__update_liveness_goal_4_p_0(
  MR_Word LiveInfo_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Liveness_0_20,
  MR_Word * STATE_VARIABLE_Liveness_21)
{
  MR_bool succeeded;
  MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
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
  MR_Word Var_84;
  MR_Word Var_88;
  MR_Word Var_91;

  hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_9, &PreDeaths_10);
  hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo_9, &PreBirths_11);
  hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_9, &PostDeaths_12);
  hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo_9, &PostBirths_13);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_20, PreDeaths_10, &STATE_VARIABLE_Liveness_22_22);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreBirths_11, STATE_VARIABLE_Liveness_22_22, &STATE_VARIABLE_Liveness_23_23);
  switch (MR_tag((MR_Word) GoalExpr_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_70 = (MR_Word) ((MR_Word) (GoalExpr_8));

        ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_5, SubGoal_70, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
      }
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Liveness_24_24 = STATE_VARIABLE_Liveness_23_23;
      break;
    case (MR_Integer) 2:
      STATE_VARIABLE_Liveness_24_24 = STATE_VARIABLE_Liveness_23_23;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Liveness_24_24 = STATE_VARIABLE_Liveness_23_23;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Liveness_24_24 = STATE_VARIABLE_Liveness_23_23;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goals_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

            ll_backend__liveness__update_liveness_conj_4_p_0(LiveInfo_5, Goals_52, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
            MR_Word Goal_53;

            succeeded = ll_backend__liveness__find_reachable_goal_2_p_0(Goals_80, &Goal_53);
            if (succeeded)
              ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_5, Goal_53, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
            else
              STATE_VARIABLE_Liveness_24_24 = STATE_VARIABLE_Liveness_23_23;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
            MR_Word Goal_81;

            succeeded = ll_backend__liveness__find_reachable_case_2_p_0(Cases_56, &Goal_81);
            if (succeeded)
              ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_5, Goal_81, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
            else
              STATE_VARIABLE_Liveness_24_24 = STATE_VARIABLE_Liveness_23_23;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
            MR_Word SubGoal_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
            MR_Word TermVar_72;
            MR_Word Var_76;

            succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_72 = ((MR_Word) ((MR_hl_field(3, Reason_71, (MR_Integer) 1))));
              Var_76 = ((MR_Unsigned) ((MR_hl_field(3, Reason_71, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_76 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word CompletedTermVars_73;
              MR_Word Var_77;

              Var_77 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_72);
              ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(LiveInfo_5, Var_77, &CompletedTermVars_73);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedTermVars_73, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
            }
            else
              ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_5, SubGoal_82, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
            MR_Word Then_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
            MR_Word Else_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
            MR_Word ElseGoalInfo_62 = ((MR_Word) ((MR_hl_field(0, Else_60, (MR_Integer) 1))));
            MR_Word ElseInstmapDelta_63;
            MR_Word CondGoalInfo_65;
            MR_Word CondInstmapDelta_66;
            MR_Word ThenGoalInfo_68;
            MR_Word ThenInstmapDelta_69;

            ElseInstmapDelta_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ElseGoalInfo_62);
            CondGoalInfo_65 = ((MR_Word) ((MR_hl_field(0, Cond_58, (MR_Integer) 1))));
            CondInstmapDelta_66 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondGoalInfo_65);
            ThenGoalInfo_68 = ((MR_Word) ((MR_hl_field(0, Then_59, (MR_Integer) 1))));
            ThenInstmapDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ThenGoalInfo_68);
            succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ElseInstmapDelta_63);
            if (succeeded)
              ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_5, Else_60, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_24_24);
            else
            {
              succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CondInstmapDelta_66);
              if (succeeded)
                succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ThenInstmapDelta_69);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Liveness_61_75;

                ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_5, Cond_58, STATE_VARIABLE_Liveness_23_23, &STATE_VARIABLE_Liveness_61_75);
                ll_backend__liveness__update_liveness_goal_4_p_0(LiveInfo_5, Then_59, STATE_VARIABLE_Liveness_61_75, &STATE_VARIABLE_Liveness_24_24);
              }
              else
                STATE_VARIABLE_Liveness_24_24 = STATE_VARIABLE_Liveness_23_23;
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
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_24_24, PostDeaths_12, &STATE_VARIABLE_Liveness_25_25);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths_13, STATE_VARIABLE_Liveness_25_25, &STATE_VARIABLE_Liveness_26_26);
  parse_tree__set_of_var__divide_by_set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_20, STATE_VARIABLE_Liveness_26_26, &OldLiveness_15, &NewLiveness0_16);
  Var_17 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_9);
  Var_88 = ((((MR_Unsigned) ((MR_hl_field(0, LiveInfo_5, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  Var_84 = ((MR_Word) ((MR_hl_field(0, LiveInfo_5, (MR_Integer) 2))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, LiveInfo_5, (MR_Integer) 3))));
  hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_84, Var_91, Var_88, Var_17, &CompletedNonLocals_18);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewLiveness0_16, CompletedNonLocals_18, &NewLiveness_19);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldLiveness_15, NewLiveness_19, STATE_VARIABLE_Liveness_21);
}

static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
  MR_Word LiveInfo_4,
  MR_Word Vars0_5,
  MR_Word * Vars_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, LiveInfo_4, (MR_Integer) 2))));
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, LiveInfo_4, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, LiveInfo_4, (MR_Integer) 3))));

  hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_7, Var_14, Var_11, Vars0_5, Vars_6);
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
      Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
      GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 1))));
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
      Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      GoalInfo_7 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 1))));
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
  MR_Word LiveInfo_1,
  MR_Word NonLocals_2,
  MR_Word Liveness0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Union_7 = STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word Goal1_22;
    MR_Word Liveness1_23;
    MR_Word NonLocalUnion_24;
    MR_Word Residue_25;
    MR_Word STATE_VARIABLE_Union_28_28;
    MR_Word GoalExpr_30;
    MR_Word GoalInfo0_31;
    MR_Word PostBirths0_32;
    MR_Word PostBirths_33;
    MR_Word GoalInfo_34;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_1, Goal0_17, &Goal1_22, Liveness0_3, &Liveness1_23);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness1_23, STATE_VARIABLE_Union_0_6, &STATE_VARIABLE_Union_28_28);
    ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(LiveInfo_1, NonLocals_2, Liveness0_3, Goals0_18, &Goals_20, STATE_VARIABLE_Union_28_28, STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_7, NonLocals_2, &NonLocalUnion_24);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalUnion_24, Liveness1_23, &Residue_25);
    GoalExpr_30 = ((MR_Word) ((MR_hl_field(0, Goal1_22, (MR_Integer) 0))));
    GoalInfo0_31 = ((MR_Word) ((MR_hl_field(0, Goal1_22, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_31, &PostBirths0_32);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_32, Residue_25, &PostBirths_33);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_33, GoalInfo0_31, &GoalInfo_34);
    {
      Goal_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_19, 0) = ((MR_Box) (GoalExpr_30));
      MR_hl_field(0, Goal_19, 1) = ((MR_Box) (GoalInfo_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word NonLocals_2,
  MR_Word Liveness0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Union_7 = STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word Case0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Case_19;
    MR_Word Cases_20;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 2))));
    MR_Word Goal1_25;
    MR_Word Liveness1_26;
    MR_Word NonLocalUnion_27;
    MR_Word Residue_28;
    MR_Word Goal_29;
    MR_Word STATE_VARIABLE_Union_32_32;
    MR_Word GoalExpr_34;
    MR_Word GoalInfo0_35;
    MR_Word PostBirths0_36;
    MR_Word PostBirths_37;
    MR_Word GoalInfo_38;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_1, Goal0_24, &Goal1_25, Liveness0_3, &Liveness1_26);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness1_26, STATE_VARIABLE_Union_0_6, &STATE_VARIABLE_Union_32_32);
    ll_backend__liveness__detect_liveness_in_cases_7_p_0(LiveInfo_1, NonLocals_2, Liveness0_3, Cases0_18, &Cases_20, STATE_VARIABLE_Union_32_32, STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_7, NonLocals_2, &NonLocalUnion_27);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalUnion_27, Liveness1_26, &Residue_28);
    GoalExpr_34 = ((MR_Word) ((MR_hl_field(0, Goal1_25, (MR_Integer) 0))));
    GoalInfo0_35 = ((MR_Word) ((MR_hl_field(0, Goal1_25, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_35, &PostBirths0_36);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_36, Residue_28, &PostBirths_37);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_37, GoalInfo0_35, &GoalInfo_38);
    {
      Goal_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_29, 0) = ((MR_Box) (GoalExpr_34));
      MR_hl_field(0, Goal_29, 1) = ((MR_Box) (GoalInfo_38));
    }
    {
      Case_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_19, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_19, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_19, 2) = ((MR_Box) (Goal_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_20));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
  MR_Word LiveInfo_1,
  MR_Word NonLocals_2,
  MR_Word Liveness0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Union_0_6,
  MR_Word * STATE_VARIABLE_Union_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Union_7 = STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word Goal1_22;
    MR_Word Liveness1_23;
    MR_Word NonLocalUnion_24;
    MR_Word Residue_25;
    MR_Word STATE_VARIABLE_Union_28_28;
    MR_Word GoalExpr_30;
    MR_Word GoalInfo0_31;
    MR_Word PostBirths0_32;
    MR_Word PostBirths_33;
    MR_Word GoalInfo_34;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_1, Goal0_17, &Goal1_22, Liveness0_3, &Liveness1_23);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness1_23, STATE_VARIABLE_Union_0_6, &STATE_VARIABLE_Union_28_28);
    ll_backend__liveness__detect_liveness_in_disj_7_p_0(LiveInfo_1, NonLocals_2, Liveness0_3, Goals0_18, &Goals_20, STATE_VARIABLE_Union_28_28, STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_Union_7, NonLocals_2, &NonLocalUnion_24);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalUnion_24, Liveness1_23, &Residue_25);
    GoalExpr_30 = ((MR_Word) ((MR_hl_field(0, Goal1_22, (MR_Integer) 0))));
    GoalInfo0_31 = ((MR_Word) ((MR_hl_field(0, Goal1_22, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_31, &PostBirths0_32);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_32, Residue_25, &PostBirths_33);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_33, GoalInfo0_31, &GoalInfo_34);
    {
      Goal_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_19, 0) = ((MR_Box) (GoalExpr_30));
      MR_hl_field(0, Goal_19, 1) = ((MR_Box) (GoalInfo_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
  MR_Word LiveInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Liveness_0_4,
  MR_Word * STATE_VARIABLE_Liveness_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Liveness_5 = STATE_VARIABLE_Liveness_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_Liveness_21_21;
    MR_Word GoalInfo_17;
    MR_Word InstmapDelta_18;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_1, Goal0_11, &Goal_13, STATE_VARIABLE_Liveness_0_4, &STATE_VARIABLE_Liveness_21_21);
    GoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
    InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_17);
    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_18);
    if (succeeded)
    {
      Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Liveness_5 = STATE_VARIABLE_Liveness_21_21;
    }
    else
      ll_backend__liveness__detect_liveness_in_conj_5_p_0(LiveInfo_1, Goals0_12, &Goals_14, STATE_VARIABLE_Liveness_21_21, STATE_VARIABLE_Liveness_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
  MR_Word LiveInfo_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word Liveness0_9,
  MR_Word * FinalLiveness_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
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

  ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(LiveInfo_6, GoalInfo0_12, &BaseNonLocals_13, &CompletedNonLocals_14);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness0_9, &NewVarsSet_15);
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
    ll_backend__liveness__find_value_giving_occurrences_5_p_0(NewVarsList_18, LiveInfo_6, InstMapDelta_16, Births0_19, &Births1_20);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, BaseNonLocals_13, &TypeInfos_21);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfos_21, Liveness0_9, &NewTypeInfos_22);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Births1_20, NewTypeInfos_22, &Births_17);
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_9, Births_17, FinalLiveness_10);
  switch (MR_tag((MR_Word) GoalExpr0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_80 = (MR_Word) ((MR_Word) (GoalExpr0_11));
        MR_Word SubGoal_81;
        MR_Word Liveness_111;
        MR_Word NonLocalLiveness_112;
        MR_Word GoalFinalLiveness_113;

        ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_6, SubGoal0_80, &SubGoal_81, Liveness0_9, &Liveness_111);
        GoalExpr_50 = (MR_Word) ((MR_Word) (SubGoal_81));
        PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_111, &NonLocalLiveness_112);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_112, Liveness0_9, &GoalFinalLiveness_113);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_113, *FinalLiveness_10, &PostDeaths_48);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_10, GoalFinalLiveness_113, &PostBirths_49);
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 0))))) {
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
            MR_Word ConjType_51 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
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
                  ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(LiveInfo_6, CompletedNonLocals_14, Liveness0_9, Goals0_52, &Goals_53, Union0_55, &Union_56);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Union_56, Liveness0_9, &Liveness_54);
                }
                break;
              case (MR_Integer) 0:
                ll_backend__liveness__detect_liveness_in_conj_5_p_0(LiveInfo_6, Goals0_52, &Goals_53, Liveness0_9, &Liveness_54);
                break;
            }
            {
              GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_50, 1) = (MR_Box) ((MR_Unsigned) (ConjType_51));
              MR_hl_field(3, GoalExpr_50, 2) = ((MR_Box) (Goals_53));
            }
            PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_54, &NonLocalLiveness_84);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_84, Liveness0_9, &GoalFinalLiveness_85);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_85, *FinalLiveness_10, &PostDeaths_48);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_10, GoalFinalLiveness_85, &PostBirths_49);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word Goals_96;
            MR_Word Union0_97;
            MR_Word Union_98;
            MR_Word Liveness_105;
            MR_Word NonLocalLiveness_106;
            MR_Word GoalFinalLiveness_107;

            Union0_97 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            ll_backend__liveness__detect_liveness_in_disj_7_p_0(LiveInfo_6, CompletedNonLocals_14, Liveness0_9, Goals0_95, &Goals_96, Union0_97, &Union_98);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Union_98, Liveness0_9, &Liveness_105);
            {
              GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_50, 1) = ((MR_Box) (Goals_96));
            }
            PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_105, &NonLocalLiveness_106);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_106, Liveness0_9, &GoalFinalLiveness_107);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_107, *FinalLiveness_10, &PostDeaths_48);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_10, GoalFinalLiveness_107, &PostBirths_49);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word Det_58 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
            MR_Word Cases_60;
            MR_Word Liveness_117;
            MR_Word NonLocalLiveness_118;
            MR_Word GoalFinalLiveness_119;

            ll_backend__liveness__detect_liveness_in_cases_7_p_0(LiveInfo_6, CompletedNonLocals_14, Liveness0_9, Cases0_59, &Cases_60, Liveness0_9, &Liveness_117);
            {
              GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_50, 1) = ((MR_Box) (Var_57));
              MR_hl_field(3, GoalExpr_50, 2) = (MR_Box) ((MR_Unsigned) (Det_58));
              MR_hl_field(3, GoalExpr_50, 3) = ((MR_Box) (Cases_60));
            }
            PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_117, &NonLocalLiveness_118);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_118, Liveness0_9, &GoalFinalLiveness_119);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_119, *FinalLiveness_10, &PostDeaths_48);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_10, GoalFinalLiveness_119, &PostBirths_49);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word SubGoal0_103 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word Liveness_114;
            MR_Word NonLocalLiveness_115;
            MR_Word GoalFinalLiveness_116;
            MR_Word TermVar_83;
            MR_Word Var_89;

            succeeded = ((((MR_tag((MR_Word) Reason_82)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_82, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_83 = ((MR_Word) ((MR_hl_field(3, Reason_82, (MR_Integer) 1))));
              Var_89 = ((MR_Unsigned) ((MR_hl_field(3, Reason_82, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_89 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14);
              if (succeeded)
              {
                GoalExpr_50 = (MR_Word) (MR_mkword(3, &ll_backend__liveness_scalar_common_2[2]));
                Liveness_114 = Liveness0_9;
              }
              else
              {
                MR_Word SubGoal_99;

                ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(LiveInfo_6, TermVar_83, SubGoal0_103, &SubGoal_99, Liveness0_9, &Liveness_114);
                {
                  GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, GoalExpr_50, 1) = ((MR_Box) (Reason_82));
                  MR_hl_field(3, GoalExpr_50, 2) = ((MR_Box) (SubGoal_99));
                }
              }
            }
            else
            {
              MR_Word SubGoal_101;

              ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_6, SubGoal0_103, &SubGoal_101, Liveness0_9, &Liveness_114);
              {
                GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_50, 1) = ((MR_Box) (Reason_82));
                MR_hl_field(3, GoalExpr_50, 2) = ((MR_Box) (SubGoal_101));
              }
            }
            PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_114, &NonLocalLiveness_115);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_115, Liveness0_9, &GoalFinalLiveness_116);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_116, *FinalLiveness_10, &PostDeaths_48);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_10, GoalFinalLiveness_116, &PostBirths_49);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word Cond0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word Then0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
            MR_Word Else0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 4))));
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
            MR_Word Liveness_108;
            MR_Word NonLocalLiveness_109;
            MR_Word GoalFinalLiveness_110;

            ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_6, Cond0_62, &Cond_65, Liveness0_9, &LivenessCond_66);
            CondInfo_68 = ((MR_Word) ((MR_hl_field(0, Cond_65, (MR_Integer) 1))));
            CondDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_68);
            succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(CondDelta_69);
            if (succeeded)
            {
              MR_Word _LivenessThen_72;

              LivenessThen_70 = LivenessCond_66;
              ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_6, Then0_63, &Then1_71, LivenessCond_66, &_LivenessThen_72);
            }
            else
              ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_6, Then0_63, &Then1_71, LivenessCond_66, &LivenessThen_70);
            ll_backend__liveness__detect_liveness_in_goal_5_p_0(LiveInfo_6, Else0_64, &Else1_73, Liveness0_9, &LivenessElse_74);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LivenessThen_70, LivenessElse_74, &Liveness_108);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_108, CompletedNonLocals_14, &ITENonLocalLiveness_75);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ITENonLocalLiveness_75, LivenessThen_70, &ResidueThen_76);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ITENonLocalLiveness_75, LivenessElse_74, &ResidueElse_77);
            ll_backend__liveness__add_liveness_after_goal_3_p_0(Then1_71, ResidueThen_76, &Then_78);
            ll_backend__liveness__add_liveness_after_goal_3_p_0(Else1_73, ResidueElse_77, &Else_79);
            {
              GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_50, 1) = ((MR_Box) (Vars_61));
              MR_hl_field(3, GoalExpr_50, 2) = ((MR_Box) (Cond_65));
              MR_hl_field(3, GoalExpr_50, 3) = ((MR_Box) (Then_78));
              MR_hl_field(3, GoalExpr_50, 4) = ((MR_Box) (Else_79));
            }
            PreDeaths_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            PreBirths_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedNonLocals_14, Liveness_108, &NonLocalLiveness_109);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalLiveness_109, Liveness0_9, &GoalFinalLiveness_110);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalFinalLiveness_110, *FinalLiveness_10, &PostDeaths_48);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FinalLiveness_10, GoalFinalLiveness_110, &PostBirths_49);
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
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_50));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_87));
  }
}

static void MR_CALL 
ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(
  MR_Word LiveInfo_5,
  MR_Word GoalInfo_6,
  MR_Word * NonLocals_7,
  MR_Word * CompletedNonLocals_8)
{
  MR_Word Var_9;
  MR_Word Var_13;
  MR_Word Var_16;

  *NonLocals_7 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_6);
  Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, LiveInfo_5, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  Var_9 = ((MR_Word) ((MR_hl_field(0, LiveInfo_5, (MR_Integer) 2))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, LiveInfo_5, (MR_Integer) 3))));
  hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_9, Var_16, Var_13, *NonLocals_7, CompletedNonLocals_8);
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
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarTable_16 = ((MR_Word) ((MR_hl_field(0, LiveInfo_2, (MR_Integer) 2))));
      MR_Word Type_17;
      MR_Word STATE_VARIABLE_ValueVars_25_25;
      MR_Word Inst_18;
      MR_Word ModuleInfo_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ValueVars_0_4;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_16, Var_11, &Type_17);
      succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_3, Var_11, &Inst_18);
      if (succeeded)
      {
        ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, LiveInfo_2, (MR_Integer) 0))));
        Var_24 = (MR_Word) ((MR_Unsigned) 0U);
        Var_23 = (MR_Integer) 1;
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (Var_24));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (Inst_18));
        }
        check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_19, Var_22, Type_17, &Var_37);
        succeeded = (Var_23 == Var_37);
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
  MR_Word AddedPostLiveness_5,
  MR_Word * Goal_6)
{
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal0_4, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_4, (MR_Integer) 1))));
  MR_Word PostBirths0_9;
  MR_Word PostBirths_10;
  MR_Word GoalInfo_11;

  hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_8, &PostBirths0_9);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostBirths0_9, AddedPostLiveness_5, &PostBirths_10);
  hlds__hlds_llds__goal_info_set_post_births_3_p_0(PostBirths_10, GoalInfo0_8, &GoalInfo_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(
  MR_Word LiveInfo_7,
  MR_Word TermVar_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Liveness_0_25,
  MR_Word * STATE_VARIABLE_Liveness_26)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word Conjuncts0_14;
  MR_Word Var_27;

  succeeded = ((((MR_tag((MR_Word) GoalExpr0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
    Conjuncts0_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
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
      TypeInfo_38_38 = (MR_Word) (&ll_backend__liveness_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (TermVar_8)), ((MR_Box) (Var_37)));
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
      MR_Word Var_39;
      MR_Word Var_43;
      MR_Word Var_46;

      Var_28 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_8);
      Var_43 = ((((MR_Unsigned) ((MR_hl_field(0, LiveInfo_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      Var_39 = ((MR_Word) ((MR_hl_field(0, LiveInfo_7, (MR_Integer) 2))));
      Var_46 = ((MR_Word) ((MR_hl_field(0, LiveInfo_7, (MR_Integer) 3))));
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_39, Var_46, Var_43, Var_28, &CompletedTermVars_18);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CompletedTermVars_18, STATE_VARIABLE_Liveness_0_25, STATE_VARIABLE_Liveness_26);
      {
        GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Conjuncts_16));
      }
      PreBirths_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      PostBirths_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      PreDeaths_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      PostDeaths_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(PreBirths_20, PostBirths_21, PreDeaths_22, PostDeaths_23, (MR_Word) ((MR_Unsigned) 0U), GoalInfo0_13, &GoalInfo_24);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_19));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_24));
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

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalLiveVars_0_3,
  MR_Word * STATE_VARIABLE_LocalLiveVars_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalLiveVars_4 = STATE_VARIABLE_LocalLiveVars_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_LocalLiveVars_36_36;
    MR_Word LHSVar_20;
    MR_Word RHSVars_22;
    MR_Word Unification_18;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    succeeded = ((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      Unification_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr_13, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) Unification_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        LHSVar_20 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 0))));
        RHSVars_22 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 2))));
        Var_31 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 4))));
        Var_33 = ((MR_Unsigned) ((MR_hl_field(0, Unification_18, (MR_Integer) 5))) & (MR_Integer) 1);
        Var_34 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 6))));
        succeeded = (Var_33 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_32 = ((MR_Unsigned) ((MR_hl_field(2, Var_31, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (Var_32 == (MR_Integer) 0);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_LocalLiveVars_35_35;

      succeeded = parse_tree__set_of_var__remove_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVars_22, STATE_VARIABLE_LocalLiveVars_0_3, &STATE_VARIABLE_LocalLiveVars_35_35);
      if (succeeded)
      {
        MR_Word PreBirths_24;
        MR_Word PostBirths_25;
        MR_Word PreDeaths_26;
        MR_Word PostDeaths_27;
        MR_Word GoalInfo_28;

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_20, STATE_VARIABLE_LocalLiveVars_35_35, &STATE_VARIABLE_LocalLiveVars_36_36);
        PreBirths_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_20);
        PostBirths_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        PreDeaths_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        PostDeaths_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVars_22);
        hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(PreBirths_24, PostBirths_25, PreDeaths_26, PostDeaths_27, (MR_Word) ((MR_Unsigned) 0U), GoalInfo0_14, &GoalInfo_28);
        {
          Goal_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal_10, 0) = ((MR_Box) (GoalExpr_13));
          MR_hl_field(0, Goal_10, 1) = ((MR_Box) (GoalInfo_28));
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
    ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_LocalLiveVars_36_36, STATE_VARIABLE_LocalLiveVars_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_9_p_0(
  MR_Word ModuleInfo_10,
  MR_String Message_11,
  MR_Word DebugThisPred_12,
  MR_Word PredId_13,
  MR_Word ProcInfo_14,
  MR_Word VarTable_15,
  MR_Word Goal_16)
{
  switch (DebugThisPred_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stream_18;
        MR_Word Globals_19;
        MR_Word OutInfo_20;
        MR_Word PredInfo_21;
        MR_Word TVarSet_22;
        MR_Word InstVarSet_23;
        MR_Word Var_31;

        mercury__io__output_stream_3_p_0(&Stream_18);
        mercury__io__write_string_4_p_0(Stream_18, Message_11);
        mercury__io__write_string_4_p_0(Stream_18, (MR_String) ":\n");
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_19);
        OutInfo_20 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_19, (MR_Integer) 1);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_13, &PredInfo_21);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &TVarSet_22);
        hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_14, &InstVarSet_23);
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (VarTable_15));
        }
        hlds__hlds_out__hlds_out_goal__write_goal_nl_12_p_0(OutInfo_20, Stream_18, ModuleInfo_10, Var_31, (MR_Integer) 1, TVarSet_22, InstVarSet_23, (MR_Unsigned) 0U, (MR_String) "\n", Goal_16);
      }
      break;
  }
}

void MR_CALL 
ll_backend__liveness__initial_liveness_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * STATE_VARIABLE_Liveness_19)
{
  MR_Word Vars_9;
  MR_Word Modes_10;
  MR_Word VarTable_11;
  MR_Word Globals_12;
  MR_Word GoalInfo_14;
  MR_Word NonLocals0_15;
  MR_Word RttiVarMaps_16;
  MR_Word TypeinfoLiveness_17;
  MR_Word NonLocals_18;
  MR_Word STATE_VARIABLE_Liveness_20_20;
  MR_Word STATE_VARIABLE_Liveness_21_21;
  MR_Word Var_22;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_7, &Vars_9);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_7, &Modes_10);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_7, &VarTable_11);
  STATE_VARIABLE_Liveness_20_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  ll_backend__liveness__initial_liveness_loop_6_p_0(ModuleInfo_5, VarTable_11, Vars_9, Modes_10, STATE_VARIABLE_Liveness_20_20, &STATE_VARIABLE_Liveness_21_21);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_12);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_7, &Var_22);
  GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
  NonLocals0_15 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_14);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_7, &RttiVarMaps_16);
  hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_6, Globals_12, &TypeinfoLiveness_17);
  hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(VarTable_11, RttiVarMaps_16, TypeinfoLiveness_17, NonLocals0_15, &NonLocals_18);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_21_21, NonLocals_18, STATE_VARIABLE_Liveness_19);
}

static void MR_CALL 
ll_backend__liveness__initial_liveness_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Liveness_0_5,
  MR_Word * STATE_VARIABLE_Liveness_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Liveness_6 = STATE_VARIABLE_Liveness_0_5;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.initial_liveness_loop\'/6", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.liveness.initial_liveness_loop\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Mode_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Modes_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word Type_37;
        MR_Word STATE_VARIABLE_Liveness_41_41;
        MR_Word Var_43;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Liveness_0_5;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_45, &Type_37);
        check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_34, Type_37, &Var_43);
        succeeded = ((MR_Integer) 0 == Var_43);
        if (succeeded)
          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_45, STATE_VARIABLE_Liveness_0_5, &STATE_VARIABLE_Liveness_41_41);
        else
          STATE_VARIABLE_Liveness_41_41 = STATE_VARIABLE_Liveness_0_5;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_44;
        next_value_of_HeadVar__4_4 = Modes_35;
        next_value_of_STATE_VARIABLE_Liveness_0_5 = STATE_VARIABLE_Liveness_41_41;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Liveness_0_5 = next_value_of_STATE_VARIABLE_Liveness_0_5;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_any_branch_end_reachable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__liveness____Unify____is_any_branch_end_reachable_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__liveness____Compare____is_any_branch_end_reachable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__liveness____Compare____is_any_branch_end_reachable_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____is_this_branch_end_reachable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__liveness____Unify____is_this_branch_end_reachable_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__liveness____Compare____is_this_branch_end_reachable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__liveness____Compare____is_this_branch_end_reachable_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__liveness____Unify____live_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__liveness____Compare____live_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__liveness__init(void)
{
}

void mercury__ll_backend__liveness__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__liveness__ll_backend__liveness__type_ctor_info_is_any_branch_end_reachable_0);
	MR_register_type_ctor_info(&ll_backend__liveness__ll_backend__liveness__type_ctor_info_is_this_branch_end_reachable_0);
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
