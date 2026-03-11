/*
** Automatically generated from `det_infer_goal.m'
** by the Mercury compiler,
** version rotd-2026-03-11
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


// :- module check_hlds.det_infer_goal.
// :- implementation.

/*
INIT mercury__check_hlds__det_infer_goal__init
ENDINIT
*/

#include "check_hlds.det_infer_goal.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "check_hlds.det_check_goal.mih"
#include "check_hlds.det_check_switch.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_sort.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.opt_format_call.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s {
  MR_bool check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded;
  MR_Word check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__AnyBoundVars_60;
  MR_Word check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__MissingVars_63;
  jmp_buf check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__commit_0;
  MR_Word check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__MissingVar_73;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_infer_goal__list__pti_list_1__plain_check_hlds__det_infer_goal__type_ctor_info_failing_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_infer_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_cc_unify_context_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_0;

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_cc_unify_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_cc_unify_context_0_1[1];

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_cc_unify_context_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_cc_unify_context_0[2];

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_cc_unify_context_0[2];

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_context_0_0[1];

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_failing_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_failing_context_0[1];

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_failing_context_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_infer_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_0;

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_1;

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_2[2];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_2;

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_3[2];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_3;

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_4[2];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_4;

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_5[1];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_5;

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_6;

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_3[3];

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_failing_goal_0[4];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_failing_goal_0[7];

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_failing_goal_0[7];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_infer_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_pess_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_pess_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_pess_info_0_0[1];

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_pess_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_pess_info_0[1];

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_pess_info_0[1];

static const MR_EnumFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_0;

static const MR_EnumFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_ordinal_ordered_soln_context_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_name_ordered_soln_context_0[2];

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_soln_context_0[2];

static MR_bool MR_CALL 
check_hlds__det_infer_goal__IntroducedFrom__pred__det_infer_atomic_goal__1683__1_2_p_0(
  MR_Word GoalFailingContexts_18,
  MR_Word HeadVar__2_31);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____pess_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____pess_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____cc_unify_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____cc_unify_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__det_infer_goal__failing_context_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word FailingContext_7);

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0(
  MR_Word InstMap0_13,
  MR_Word SolnContext_14,
  MR_Word MaybePromiseEqvSolutionSets0_15,
  MR_Word GoalInfo_16,
  MR_Word Reason_17,
  MR_Word * Detism_18,
  MR_Word RightFailingContexts_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word Goal0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_DetInfo_0_116,
  MR_Word * STATE_VARIABLE_DetInfo_117);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_goal_10_p_0(
  MR_Word InstMap0_11,
  MR_Word STATE_VARIABLE_SolnContext_0_26,
  MR_Word MaybePromiseEqvSolutionSets_13,
  MR_Word * Detism_14,
  MR_Word RightFailingContexts_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28);

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_orelse_goals_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_orelse_goals_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CanFail_0_5,
  MR_Word * STATE_VARIABLE_CanFail_6,
  MR_Word STATE_VARIABLE_MaxSolns_0_7,
  MR_Word * STATE_VARIABLE_MaxSolns_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_DetInfo_0_11,
  MR_Word * STATE_VARIABLE_DetInfo_12);

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_atomic_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_atomic_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets0_14,
  MR_Word RightFailingContexts_15,
  MR_Word * Detism_16,
  MR_Word MainGoal0_17,
  MR_Word * MainGoal_18,
  MR_Word OrElseGoals0_19,
  MR_Word * OrElseGoals_20,
  MR_Word STATE_VARIABLE_DetInfo_0_30,
  MR_Word * STATE_VARIABLE_DetInfo_31);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_negation_9_p_0(
  MR_Word InstMap0_10,
  MR_Word MaybePromiseEqvSolutionSets_11,
  MR_Word GoalInfo_12,
  MR_Word * Detism_13,
  MR_Word * GoalFailingContexts_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_DetInfo_0_24,
  MR_Word * STATE_VARIABLE_DetInfo_25);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_if_then_else_14_p_0(
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word MaybePromiseEqvSolutionSets_17,
  MR_Word * Detism_18,
  MR_Word RightFailingContexts_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word Cond0_21,
  MR_Word * Cond_22,
  MR_Word Then0_23,
  MR_Word * Then_24,
  MR_Word Else0_25,
  MR_Word * Else_26,
  MR_Word STATE_VARIABLE_DetInfo_0_49,
  MR_Word * STATE_VARIABLE_DetInfo_50);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_switch_cases_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Detism_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_SwitchFailingContexts_0_9,
  MR_Word * STATE_VARIABLE_SwitchFailingContexts_10,
  MR_Word HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_Word STATE_VARIABLE_DetInfo_0_13,
  MR_Word * STATE_VARIABLE_DetInfo_14);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_switch_13_p_0(
  MR_Word InstMap0_14,
  MR_Word SolnContext_15,
  MR_Word MaybePromiseEqvSolutionSets_16,
  MR_Word GoalInfo_17,
  MR_Word Var_18,
  MR_Word SwitchCanFail_19,
  MR_Word * Detism_20,
  MR_Word RightFailingContexts_21,
  MR_Word * GoalFailingContexts_22,
  MR_Word Cases0_23,
  MR_Word * Cases_24,
  MR_Word STATE_VARIABLE_DetInfo_0_37,
  MR_Word * STATE_VARIABLE_DetInfo_38);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_disj_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * Detism_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_DisjFailingContexts_0_8,
  MR_Word * STATE_VARIABLE_DisjFailingContexts_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_DetInfo_0_12,
  MR_Word * STATE_VARIABLE_DetInfo_13);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_disj_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word GoalInfo_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word Goals0_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_par_conj_goals_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_6,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_par_conj_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word GoalInfo_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word Goals0_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_DetInfo_0_33,
  MR_Word * STATE_VARIABLE_DetInfo_34);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_conj_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_6,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_unify_13_p_0(
  MR_Word InstMap0_14,
  MR_Word SolnContext_15,
  MR_Word GoalInfo_16,
  MR_Word LHS_17,
  MR_Word Unify_18,
  MR_Word UnifyContext_19,
  MR_Word * Detism_20,
  MR_Word RightFailingContexts_21,
  MR_Word * GoalFailingContexts_22,
  MR_Word RHS0_23,
  MR_Word * RHS_24,
  MR_Word STATE_VARIABLE_DetInfo_0_82,
  MR_Word * STATE_VARIABLE_DetInfo_83);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_goal_expr_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word GoalInfo_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word GoalExpr0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_DetInfo_0_78,
  MR_Word * STATE_VARIABLE_DetInfo_79);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_goal_known_pruning_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word AddPruning_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word Goal0_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_DetInfo_0_52,
  MR_Word * STATE_VARIABLE_DetInfo_53);

static void MR_CALL 
check_hlds__det_infer_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word Attributes_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_44,
  MR_Word * STATE_VARIABLE_DetInfo_45);

static MR_String MR_CALL 
check_hlds__det_infer_goal__promise_solutions_kind_str_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_generic_call_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_generic_call_9_p_0(
  MR_Word SolnContext_10,
  MR_Word GoalInfo_11,
  MR_Word GenericCall_12,
  MR_Word CallDetism_13,
  MR_Word * Detism_14,
  MR_Word RightFailingContexts_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28);

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_call_11_p_0(
  MR_Word SolnContext_12,
  MR_Word GoalInfo_13,
  MR_Word PredId_14,
  MR_Word ArgVars_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Integer ProcId0_19,
  MR_Integer * ProcId_20,
  MR_Word STATE_VARIABLE_DetInfo_0_36,
  MR_Word * STATE_VARIABLE_DetInfo_37);

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadVar__3_3,
  MR_Integer CcProcId_11,
  MR_Integer * NonCcProcId_12);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_unify_canfail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_unify_examines_rep_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__det_infer_goal__det_check_for_noncanonical_type_11_p_0(
  MR_Word Var_12,
  MR_Word ExaminesRepresentation_13,
  MR_Word CanFail_14,
  MR_Word SolnContext_15,
  MR_Word FailingContextsA_16,
  MR_Word FailingContextsB_17,
  MR_Word GoalInfo_18,
  MR_Word GoalContext_19,
  MR_Word * NumSolns_20,
  MR_Word STATE_VARIABLE_DetInfo_0_35,
  MR_Word * STATE_VARIABLE_DetInfo_36);

static MR_Box MR_CALL 
check_hlds__det_infer_goal__failing_contexts_description_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__det_infer_goal__failing_contexts_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word FailingContexts_7);

static MR_Word MR_CALL 
check_hlds__det_infer_goal__noncanon_unify_verbose_would_require_0_f_0(void);

static MR_Word MR_CALL 
check_hlds__det_infer_goal__noncanon_unify_verbose_preamble_0_f_0(void);

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word DetInfo_3,
  MR_Word Type_4);

static void MR_CALL 
check_hlds__det_infer_goal__det_check_lambda_7_p_0(
  MR_Word DeclaredDetism_8,
  MR_Word InferredDetism_9,
  MR_Word Goal_10,
  MR_Word GoalInfo_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_DetInfo_0_26,
  MR_Word * STATE_VARIABLE_DetInfo_27);

static MR_bool MR_CALL 
check_hlds__det_infer_goal__some_goal_is_at_most_many_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____cc_unify_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____cc_unify_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____pess_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____pess_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____soln_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_infer_goal____Compare____soln_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_1[166][2];

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_2[2][1];

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_7[2][6];


struct check_hlds__det_infer_goal__vector_common_type_3_0_s {
  const MR_Word check_hlds__det_infer_goal__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__det_infer_goal__vector_common_type_3_0_s check_hlds__det_infer_goal_vector_common_3[4];

struct check_hlds__det_infer_goal__vector_common_type_6_0_s {
  const MR_Word check_hlds__det_infer_goal__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__det_infer_goal__vector_common_type_6_0_s check_hlds__det_infer_goal_vector_common_6[4];



static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_1[166][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "determinism error in lambda expression."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which requires all solutions."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs in a context"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: higher-order call to predicate with"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the procedure specification in this"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "missing"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is <determinism>"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the final"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "foreign clauses that have a"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has determinism erroneous, but also has"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "will_not_throw_exception"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to erroneous procedures."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This attribute cannot be applied"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "scope is"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "promise_equivalent_solution_sets"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "nested"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inside another."))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is the outer"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "arbitrary"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[60])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not nested"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inside a"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[71])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "scope it is nested inside"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "scope and the"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "overlap"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "on"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "lists"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: trace goal has determinism"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it should be either"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cc_multi."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: atomic goal has determinism"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be det or cc_multi."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In switch on variable"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[46])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unification for non-canonical type"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not guaranteed to succeed."))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to this unification"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[116]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Figuring out whether there is a solution"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the choice of concrete representation."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The success of this unification might depend on"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs in a context that"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[124]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "requires all solutions."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[126]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Finding all possible solutions"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[117])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The results of this unification might depend on"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "representation for each abstract value of this type."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "I must presume that there is more than one possible concrete"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Since the type has a user-defined equality predicate,"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(If that is really what you want, you must do it explicitly.)"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but I am not going to do that implicitly."))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "would require backtracking over all possible representations,"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Call to"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Unification of"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[149]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[151]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Fail goal"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[153]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[155]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "switch on"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "incomplete."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[158]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Negated goal"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[162]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The current implementation supports only single-solution non-failing parallel conjunctions."))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 186U) },
};

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__det_infer_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_infer_goal__list__pti_list_1__plain_check_hlds__det_infer_goal__type_ctor_info_failing_context_0)),
    ((MR_Box) (&check_hlds__det_infer_goal__list__pti_list_1__plain_check_hlds__det_infer_goal__type_ctor_info_failing_context_0))
  },
};

static /* final */ const MR_Box check_hlds__det_infer_goal_scalar_common_7[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__det_infer_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__det_infer_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct check_hlds__det_infer_goal__vector_common_type_3_0_s check_hlds__det_infer_goal_vector_common_3[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 0 },
};

static /* final */ const struct check_hlds__det_infer_goal__vector_common_type_6_0_s check_hlds__det_infer_goal_vector_common_6[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_infer_goal__list__pti_list_1__plain_check_hlds__det_infer_goal__type_ctor_info_failing_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_infer_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_cc_unify_context_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0) };

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_0 = {
  (MR_String) "ccuc_unify",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_cc_unify_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_1 = {
  (MR_String) "ccuc_switch",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_cc_unify_context_0_0[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_1 };

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_cc_unify_context_0_1[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_0 };

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_cc_unify_context_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_cc_unify_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_cc_unify_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_cc_unify_context_0[2] = {
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_1,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_cc_unify_context_0_0
};

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_cc_unify_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_cc_unify_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_infer_goal____Unify____cc_unify_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_infer_goal____Compare____cc_unify_context_0_0_10001)),
  (MR_String) "check_hlds.det_infer_goal",
  (MR_String) "cc_unify_context",
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_cc_unify_context_0 },
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_cc_unify_context_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_cc_unify_context_0,

};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_goal_0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_context_0_0 = {
  (MR_String) "failing_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_context_0_0[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_context_0_0 };

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_failing_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_failing_context_0[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_context_0_0 };

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_failing_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_infer_goal____Unify____failing_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_infer_goal____Compare____failing_context_0_0_10001)),
  (MR_String) "check_hlds.det_infer_goal",
  (MR_String) "failing_context",
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_failing_context_0 },
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_failing_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_failing_context_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_infer_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__det_infer_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_0 = {
  (MR_String) "incomplete_switch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_1 = {
  (MR_String) "fail_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_infer_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_infer_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_2 = {
  (MR_String) "test_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_3[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_infer_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_3 = {
  (MR_String) "deconstruct_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_4[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_4 = {
  (MR_String) "call_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_5[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0) };

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_5 = {
  (MR_String) "generic_call_goal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_failing_goal_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_6 = {
  (MR_String) "negated_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_0[2] = {
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_6
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_1[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_0 };

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_2[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_2 };

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_3[3] = {
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_5
};

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_failing_goal_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_failing_goal_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_failing_goal_0[7] = {
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_5,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_0,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_6,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_failing_goal_0_2
};

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_failing_goal_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_infer_goal____Unify____failing_goal_0_0_10001)),
  ((MR_Box) (check_hlds__det_infer_goal____Compare____failing_goal_0_0_10001)),
  (MR_String) "check_hlds.det_infer_goal",
  (MR_String) "failing_goal",
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_failing_goal_0 },
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_failing_goal_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_failing_goal_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_infer_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__det_infer_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_pess_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_infer_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_pess_info_0_0 = {
  (MR_String) "pess_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__field_types_pess_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_pess_info_0_0[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_pess_info_0_0 };

static const MR_DuPtagLayout check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_pess_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_stag_ordered_pess_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_pess_info_0[1] = { &check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_functor_desc_pess_info_0_0 };

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_pess_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_pess_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_infer_goal____Unify____pess_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_infer_goal____Compare____pess_info_0_0_10001)),
  (MR_String) "check_hlds.det_infer_goal",
  (MR_String) "pess_info",
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_name_ordered_pess_info_0 },
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__du_ptag_ordered_pess_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_pess_info_0,

};

static const MR_EnumFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_0 = {
  (MR_String) "all_solns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_1 = {
  (MR_String) "first_soln",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_ordinal_ordered_soln_context_0[2] = {
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_name_ordered_soln_context_0[2] = {
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_functor_desc_soln_context_0_1
};

static const MR_Integer check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_soln_context_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_soln_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_infer_goal____Unify____soln_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_infer_goal____Compare____soln_context_0_0_10001)),
  (MR_String) "check_hlds.det_infer_goal",
  (MR_String) "soln_context",
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_name_ordered_soln_context_0 },
  { check_hlds__det_infer_goal__check_hlds__det_infer_goal__enum_ordinal_ordered_soln_context_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_infer_goal__check_hlds__det_infer_goal__functor_number_map_soln_context_0,

};

static MR_bool MR_CALL 
check_hlds__det_infer_goal__IntroducedFrom__pred__det_infer_atomic_goal__1683__1_2_p_0(
  MR_Word GoalFailingContexts_18,
  MR_Word HeadVar__2_31)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[1]), ((MR_Box) (GoalFailingContexts_18)), ((MR_Box) (HeadVar__2_31)));
  return succeeded;
}

void MR_CALL 
check_hlds__det_infer_goal____Compare____soln_context_0_0(
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

MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____soln_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____pess_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____pess_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      check_hlds__det_infer_goal____Compare____failing_goal_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_8;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_13;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), &SubResult1_13, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                      succeeded = (SubResult1_13 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_13;
                      else
                        parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, ArgX2_14, ArgY2_15);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Integer ArgX2_19 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Integer ArgY2_20 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_18;

                      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_18, ArgX1_16, ArgY1_17);
                      succeeded = (SubResult1_18 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_18;
                      else
                      {
                        succeeded = (ArgX2_19 < ArgY2_20);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_19 > ArgY2_20);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      hlds__hlds_goal____Compare____generic_call_0_0(HeadVar__1_1, ArgX1_21, ArgY1_22);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = check_hlds__det_infer_goal____Unify____failing_goal_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_20 == CastX_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_28_28;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_28_28 = (MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_29_29;
          MR_Word TypeInfo_30_30;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            TypeInfo_29_29 = (MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            if (succeeded)
            {
              TypeInfo_30_30 = (MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_25_25;
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_10;
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_25_25 = (MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_11, ArgY2_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;
              MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_13, ArgY1_14);
                if (succeeded)
                  succeeded = (ArgX2_15 == ArgY2_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ArgX1_17, ArgY1_18);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____cc_unify_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    hlds__hlds_goal____Compare____unify_context_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____cc_unify_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__det_infer_goal__failing_context_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word FailingContext_7)
{
  MR_Word Msg_8;
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, FailingContext_7, 0))));
  MR_Word FailingGoal_10 = ((MR_Word) ((MR_hl_field(0, FailingContext_7, 1))));
  MR_Word Pieces_13;

  switch (MR_tag((MR_Word) FailingGoal_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(FailingGoal_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_51;
            MR_Word Var_56;
            MR_Word Var_57;

            Var_51 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[154])));
            Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[148])));
            Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_149;
            MR_Word Var_154;
            MR_Word Var_155;

            Var_149 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[161])));
            Var_155 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[148])));
            Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_155, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_149, Var_154);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, FailingGoal_10, 0))));
        MR_Word VarPiece_12;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_37;
        MR_Word Var_42;
        MR_Word Var_43;

        VarPiece_12 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, Var_11);
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (VarPiece_12));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[157])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
        Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[159])));
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[36])), Var_42);
        Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_37);
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[156])), Var_30);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarA_14 = ((MR_Word) ((MR_hl_field(2, FailingGoal_10, 0))));
        MR_Word VarB_15 = ((MR_Word) ((MR_hl_field(2, FailingGoal_10, 1))));
        MR_Word VarPieceA_16;
        MR_Word VarPieceB_17;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_82;
        MR_Word Var_83;

        VarPieceA_16 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, VarA_14);
        VarPieceB_17 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, VarB_15);
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (VarPieceA_16));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_70 = parse_tree__error_spec__color_as_subject_1_f_0(Var_71);
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (VarPieceB_17));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_79 = parse_tree__error_spec__color_as_subject_1_f_0(Var_80);
        Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[148])));
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_82);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[163])), Var_78);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_73);
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[150])), Var_69);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, FailingGoal_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, 2))));
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_99;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_163 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, 1))));
            MR_Word VarPiece_164;

            VarPiece_164 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, Var_163);
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) (VarPiece_164));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_96 = parse_tree__error_spec__color_as_subject_1_f_0(Var_97);
            {
              Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(3, Var_107, 1) = ((MR_Box) (ConsId_18));
            }
            {
              Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
              MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_105 = parse_tree__error_spec__color_as_subject_1_f_0(Var_106);
            Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[148])));
            Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
            Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_109);
            Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[152])), Var_104);
            Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_99);
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[150])), Var_95);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, 1))));
            MR_Word PredInfo_21;
            MR_String Name_22;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_127;
            MR_Word Var_128;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_19, &PredInfo_21);
            Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
            {
              Var_125 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_125, 0) = ((MR_Box) (Name_22));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_123 = parse_tree__error_spec__color_as_subject_1_f_0(Var_124);
            Var_128 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[148])));
            Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_128, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
            Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_127);
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[146])), Var_122);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GenericCall_23 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, 1))));
            MR_Word VarNameSrc_24;
            MR_Word GenericCallPieces_25;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_140;
            MR_Word Var_141;

            {
              VarNameSrc_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, VarNameSrc_24, 0) = ((MR_Box) (VarTable_6));
            }
            GenericCallPieces_25 = hlds__hlds_error_util__generic_call_to_pieces_3_f_0((MR_Integer) 1, VarNameSrc_24, GenericCall_23);
            {
              Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(1, Var_138, 1) = ((MR_Box) (GenericCallPieces_25));
            }
            Var_137 = parse_tree__error_spec__color_as_subject_1_f_0(Var_138);
            Var_141 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[148])));
            Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, Var_140);
          }
          break;
      }
      break;
  }
  {
    Msg_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg_8, 0) = ((MR_Box) (Context_9));
    MR_hl_field(0, Msg_8, 1) = ((MR_Box) (Pieces_13));
  }
  return Msg_8;
}

void MR_CALL 
check_hlds__det_infer_goal__det_infer_proc_goal_7_p_0(
  MR_Word InstMap0_8,
  MR_Word SolnContext_9,
  MR_Word * Detism_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_DetInfo_0_17,
  MR_Word * STATE_VARIABLE_DetInfo_18)
{
  MR_Word _GoalFailingContexts_16;

  check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_8, SolnContext_9, (MR_Word) ((MR_Unsigned) 0U), Detism_10, (MR_Word) ((MR_Unsigned) 0U), &_GoalFailingContexts_16, Goal0_11, Goal_12, STATE_VARIABLE_DetInfo_0_17, STATE_VARIABLE_DetInfo_18);
}

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_any_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_ground_in_instmap_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__AnyBoundVars_60, (env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__MissingVar_73);
  if ((env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded)
    check_hlds__det_infer_goal__det_infer_scope_12_p_0_5(env_ptr);
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0_7(
  void * env_ptr_arg)
{
  struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__commit_0) == 0)
    {
      parse_tree__set_of_var__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__MissingVars_63, &(env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__MissingVar_73, check_hlds__det_infer_goal__det_infer_scope_12_p_0_6, env_ptr);
      (env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_scope_12_p_0(
  MR_Word InstMap0_13,
  MR_Word SolnContext_14,
  MR_Word MaybePromiseEqvSolutionSets0_15,
  MR_Word GoalInfo_16,
  MR_Word Reason_17,
  MR_Word * Detism_18,
  MR_Word RightFailingContexts_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word Goal0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_DetInfo_0_116,
  MR_Word * STATE_VARIABLE_DetInfo_117)
{
  struct check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0_s env;

  switch (MR_tag((MR_Word) Reason_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_13, SolnContext_14, MaybePromiseEqvSolutionSets0_15, Detism_18, RightFailingContexts_19, GoalFailingContexts_20, Goal0_21, Goal_22, STATE_VARIABLE_DetInfo_0_116, STATE_VARIABLE_DetInfo_117);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(2, Reason_17, 0))));
        MR_Word Kind_25 = ((MR_Unsigned) ((MR_hl_field(2, Reason_17, 1))) & (MR_Integer) 3);
        MR_Word VarTable_26;
        MR_Word Context_27;
        MR_Word SolnContextToUse_28;
        MR_Word MaybePromiseEqvSolutionSets_29;
        MR_Word InstmapDelta_54;
        MR_Word ChangedVars_55;
        MR_Word ModuleInfo_56;
        MR_Word GroundBoundVars_58;
        MR_Word NonLocalVars_59;
        MR_Word BoundVars0_61;
        MR_Word BoundVars_62;
        MR_Word MissingVarList_64;
        MR_Word ExtraVars_77;
        MR_Word IgnoreExtraVars_78;
        MR_Word ExtraVarList_79;
        MR_Word STATE_VARIABLE_DetInfo_1_160;
        MR_Word Var_259;
        MR_Word Var_260;
        MR_Word Var_261;
        MR_Word STATE_VARIABLE_DetInfo_4_292;
        MR_Word Var_293;
        MR_Word STATE_VARIABLE_DetInfo_5_325;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, Reason_17, 1)));
        MR_Word _GroundAtStartVars_57;

        check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_116, &VarTable_26);
        Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        switch (Kind_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              SolnContextToUse_28 = SolnContext_14;
              if ((MaybePromiseEqvSolutionSets0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_118;

                {
                  Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_118, 0) = ((MR_Box) (Vars_24));
                  MR_hl_field(0, Var_118, 1) = ((MR_Box) (Context_27));
                }
                {
                  MaybePromiseEqvSolutionSets_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybePromiseEqvSolutionSets_29, 0) = ((MR_Box) (Var_118));
                }
                STATE_VARIABLE_DetInfo_1_160 = STATE_VARIABLE_DetInfo_0_116;
              }
              else
              {
                MR_Word PESSInfo_30 = ((MR_Word) ((MR_hl_field(1, MaybePromiseEqvSolutionSets0_15, 0))));
                MR_Word OuterVars_31 = ((MR_Word) ((MR_hl_field(0, PESSInfo_30, 0))));
                MR_Word OuterContext_32 = ((MR_Word) ((MR_hl_field(0, PESSInfo_30, 1))));
                MR_Word NestedPieces_33;
                MR_Word NestedSpec_36;
                MR_Word AllVars_37;
                MR_Word Var_129;
                MR_Word Var_130;
                MR_Word Var_155;
                MR_Word Var_156;
                MR_Word Var_157;
                MR_Word Var_158;
                MR_Word Var_161;
                MR_Word Var_162;
                MR_Word Var_163;

                Var_130 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[66])));
                Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[68])));
                NestedPieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[64])), Var_129);
                {
                  Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_156, 0) = ((MR_Box) (Context_27));
                  MR_hl_field(0, Var_156, 1) = ((MR_Box) (NestedPieces_33));
                }
                {
                  Var_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_158, 0) = ((MR_Box) (OuterContext_32));
                  MR_hl_field(0, Var_158, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[73])));
                }
                {
                  Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
                  MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
                  MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_157));
                }
                {
                  NestedSpec_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, NestedSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12"));
                  MR_hl_field(2, NestedSpec_36, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__det_infer_goal_scalar_common_2[1])));
                  MR_hl_field(2, NestedSpec_36, 2) = ((MR_Box) ((MR_Unsigned) 68U));
                  MR_hl_field(2, NestedSpec_36, 3) = ((MR_Box) (Var_155));
                }
                check_hlds__det_util__det_info_add_error_spec_3_p_0(NestedSpec_36, STATE_VARIABLE_DetInfo_0_116, &STATE_VARIABLE_DetInfo_1_160);
                Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), OuterVars_31, Vars_24);
                AllVars_37 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_161);
                Var_163 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_37);
                {
                  Var_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_162, 0) = ((MR_Box) (Var_163));
                  MR_hl_field(0, Var_162, 1) = ((MR_Box) (OuterContext_32));
                }
                {
                  MaybePromiseEqvSolutionSets_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybePromiseEqvSolutionSets_29, 0) = ((MR_Box) (Var_162));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              if ((MaybePromiseEqvSolutionSets0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArbitraryPieces_38;
                MR_Word ArbitrarySpec_39;
                MR_Word Var_174;
                MR_Word Var_175;

                Var_175 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[79])));
                Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[81])));
                ArbitraryPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[77])), Var_174);
                {
                  ArbitrarySpec_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ArbitrarySpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12"));
                  MR_hl_field(0, ArbitrarySpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, ArbitrarySpec_39, 2) = ((MR_Box) ((MR_Unsigned) 68U));
                  MR_hl_field(0, ArbitrarySpec_39, 3) = ((MR_Box) (Context_27));
                  MR_hl_field(0, ArbitrarySpec_39, 4) = ((MR_Box) (ArbitraryPieces_38));
                }
                check_hlds__det_util__det_info_add_error_spec_3_p_0(ArbitrarySpec_39, STATE_VARIABLE_DetInfo_0_116, &STATE_VARIABLE_DetInfo_1_160);
              }
              else
              {
                MR_Word OldVars_40;
                MR_Word PromiseContext_41;
                MR_Word OverlapVars_42;
                MR_Word OverlapVarList_43;
                MR_Word Var_196 = ((MR_Word) ((MR_hl_field(1, MaybePromiseEqvSolutionSets0_15, 0))));
                MR_Word Var_197;
                MR_Word Var_198;

                OldVars_40 = ((MR_Word) ((MR_hl_field(0, Var_196, 0))));
                PromiseContext_41 = ((MR_Word) ((MR_hl_field(0, Var_196, 1))));
                Var_197 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVars_40);
                Var_198 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
                OverlapVars_42 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_197, Var_198);
                OverlapVarList_43 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OverlapVars_42);
                if ((OverlapVarList_43 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_DetInfo_1_160 = STATE_VARIABLE_DetInfo_0_116;
                else
                {
                  MR_Word TailOverlapVars_45 = ((MR_Word) ((MR_hl_field(1, OverlapVarList_43, 1))));
                  MR_Word OverlapVarPieces_46;
                  MR_Word OverlapVarDotPieces_47;
                  MR_String OverlapVarStr_48;
                  MR_Word OverlapPieces_51;
                  MR_Word OverlapSpec_53;
                  MR_Word Var_199;
                  MR_Word Var_222;
                  MR_Word Var_223;
                  MR_Word Var_228;
                  MR_Word Var_229;
                  MR_Word Var_232;
                  MR_Word Var_233;
                  MR_Word Var_235;
                  MR_Word Var_253;
                  MR_Word Var_254;
                  MR_Word Var_255;
                  MR_Word Var_256;
                  MR_Word _HeadOverlapVar_44;

                  {
                    Var_199 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_199, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_7[0]));
                    MR_hl_field(0, Var_199, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_scope_12_p_0_1));
                    MR_hl_field(0, Var_199, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_199, 3) = ((MR_Box) (VarTable_26));
                  }
                  OverlapVarPieces_46 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_199, OverlapVarList_43);
                  OverlapVarDotPieces_47 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[9])), OverlapVarPieces_46);
                  if ((TailOverlapVars_45 == (MR_Word) ((MR_Unsigned) 0U)))
                    OverlapVarStr_48 = (MR_String) "the variable";
                  else
                    OverlapVarStr_48 = (MR_String) "the following variables:";
                  Var_223 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[90])));
                  {
                    Var_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_233, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(3, Var_233, 1) = ((MR_Box) (OverlapVarStr_48));
                  }
                  {
                    Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_232, 0) = ((MR_Box) (Var_233));
                    MR_hl_field(1, Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_229, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[91])));
                    MR_hl_field(1, Var_229, 1) = ((MR_Box) (Var_232));
                  }
                  Var_235 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OverlapVarDotPieces_47, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
                  Var_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_229, Var_235);
                  Var_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_223, Var_228);
                  OverlapPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[88])), Var_222);
                  {
                    Var_254 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_254, 0) = ((MR_Box) (Context_27));
                    MR_hl_field(0, Var_254, 1) = ((MR_Box) (OverlapPieces_51));
                  }
                  {
                    Var_256 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_256, 0) = ((MR_Box) (PromiseContext_41));
                    MR_hl_field(0, Var_256, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[73])));
                  }
                  {
                    Var_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_255, 0) = ((MR_Box) (Var_256));
                    MR_hl_field(1, Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_253 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_253, 0) = ((MR_Box) (Var_254));
                    MR_hl_field(1, Var_253, 1) = ((MR_Box) (Var_255));
                  }
                  {
                    OverlapSpec_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, OverlapSpec_53, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12"));
                    MR_hl_field(2, OverlapSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, OverlapSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 68U));
                    MR_hl_field(2, OverlapSpec_53, 3) = ((MR_Box) (Var_253));
                  }
                  check_hlds__det_util__det_info_add_error_spec_3_p_0(OverlapSpec_53, STATE_VARIABLE_DetInfo_0_116, &STATE_VARIABLE_DetInfo_1_160);
                }
              }
              MaybePromiseEqvSolutionSets_29 = (MR_Word) ((MR_Unsigned) 0U);
              SolnContextToUse_28 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 0:
            {
              SolnContextToUse_28 = (MR_Integer) 1;
              MaybePromiseEqvSolutionSets_29 = MaybePromiseEqvSolutionSets0_15;
              STATE_VARIABLE_DetInfo_1_160 = STATE_VARIABLE_DetInfo_0_116;
            }
            break;
        }
        InstmapDelta_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_16);
        hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta_54, &ChangedVars_55);
        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_1_160, &ModuleInfo_56);
        {
          Var_259 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_259, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_4[1]));
          MR_hl_field(0, Var_259, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_scope_12_p_0_2));
          MR_hl_field(0, Var_259, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_259, 3) = ((MR_Box) (ModuleInfo_56));
          MR_hl_field(0, Var_259, 4) = ((MR_Box) (VarTable_26));
          MR_hl_field(0, Var_259, 5) = ((MR_Box) (InstMap0_13));
        }
        parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_259, ChangedVars_55, &_GroundAtStartVars_57, &GroundBoundVars_58);
        NonLocalVars_59 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
        {
          Var_260 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_260, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_7[1]));
          MR_hl_field(0, Var_260, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_scope_12_p_0_3));
          MR_hl_field(0, Var_260, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_260, 3) = ((MR_Box) (ModuleInfo_56));
          MR_hl_field(0, Var_260, 4) = ((MR_Box) (InstMap0_13));
        }
        (env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__AnyBoundVars_60 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_260, NonLocalVars_59);
        BoundVars0_61 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GroundBoundVars_58, (env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__AnyBoundVars_60);
        BoundVars_62 = hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_26, BoundVars0_61);
        Var_261 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BoundVars_62, Var_261, &(env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__MissingVars_63);
        MissingVarList_64 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__MissingVars_63);
        if ((MissingVarList_64 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_DetInfo_4_292 = STATE_VARIABLE_DetInfo_1_160;
        else
        {
          MR_Word TailMissingVars_66 = ((MR_Word) ((MR_hl_field(1, MissingVarList_64, 1))));
          MR_Word MissingVarPieces_67;
          MR_Word MissingVarDotPieces_68;
          MR_String MissingKindStr_69;
          MR_String MissingListStr_70;
          MR_String Binds_74;
          MR_Word MissingPieces_75;
          MR_Word MissingSpec_76;
          MR_Word Var_262;
          MR_Word Var_269;
          MR_Word Var_272;
          MR_Word Var_273;
          MR_Word Var_278;
          MR_Word Var_279;
          MR_Word Var_280;
          MR_Word Var_281;
          MR_Word Var_282;
          MR_Word Var_283;
          MR_Word Var_285;
          MR_Word _HeadMissingVar_65;

          {
            Var_262 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_262, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_7[0]));
            MR_hl_field(0, Var_262, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_scope_12_p_0_4));
            MR_hl_field(0, Var_262, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_262, 3) = ((MR_Box) (VarTable_26));
          }
          MissingVarPieces_67 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_262, MissingVarList_64);
          MissingVarDotPieces_68 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[9])), MissingVarPieces_67);
          MissingKindStr_69 = check_hlds__det_infer_goal__promise_solutions_kind_str_1_f_0(Kind_25);
          if ((TailMissingVars_66 == (MR_Word) ((MR_Unsigned) 0U)))
            MissingListStr_70 = (MR_String) "a variable that is not listed:";
          else
            MissingListStr_70 = (MR_String) "some variables that are not listed:";
          check_hlds__det_infer_goal__det_infer_scope_12_p_0_7(&env);
          if ((env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded)
            Binds_74 = (MR_String) "may constrain";
          else
            Binds_74 = (MR_String) "binds";
          {
            Var_273 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_273, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_273, 1) = ((MR_Box) (MissingKindStr_69));
          }
          {
            Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_272, 0) = ((MR_Box) (Var_273));
            MR_hl_field(1, Var_272, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[94])));
          }
          {
            Var_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_269, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[92])));
            MR_hl_field(1, Var_269, 1) = ((MR_Box) (Var_272));
          }
          {
            Var_281 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_281, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_281, 1) = ((MR_Box) (Binds_74));
          }
          {
            Var_283 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_283, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_283, 1) = ((MR_Box) (MissingListStr_70));
          }
          {
            Var_282 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_282, 0) = ((MR_Box) (Var_283));
            MR_hl_field(1, Var_282, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_280 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_280, 0) = ((MR_Box) (Var_281));
            MR_hl_field(1, Var_280, 1) = ((MR_Box) (Var_282));
          }
          Var_279 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_280);
          Var_285 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MissingVarDotPieces_68, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
          Var_278 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_279, Var_285);
          MissingPieces_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_269, Var_278);
          {
            MissingSpec_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MissingSpec_76, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12"));
            MR_hl_field(0, MissingSpec_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, MissingSpec_76, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(0, MissingSpec_76, 3) = ((MR_Box) (Context_27));
            MR_hl_field(0, MissingSpec_76, 4) = ((MR_Box) (MissingPieces_75));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(MissingSpec_76, STATE_VARIABLE_DetInfo_1_160, &STATE_VARIABLE_DetInfo_4_292);
        }
        Var_293 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_293, BoundVars_62, &ExtraVars_77);
        check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(STATE_VARIABLE_DetInfo_4_292, &IgnoreExtraVars_78);
        ExtraVarList_79 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_77);
        if ((ExtraVarList_79 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_DetInfo_5_325 = STATE_VARIABLE_DetInfo_4_292;
        else
        {
          MR_Word TailExtraVars_81 = ((MR_Word) ((MR_hl_field(1, ExtraVarList_79, 1))));
          MR_Word ExtraVarPieces_82;
          MR_Word Var_294;
          MR_Word _HeadExtraVar_80;

          {
            Var_294 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_294, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_7[0]));
            MR_hl_field(0, Var_294, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_scope_12_p_0_8));
            MR_hl_field(0, Var_294, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_294, 3) = ((MR_Box) (VarTable_26));
          }
          ExtraVarPieces_82 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_infer_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_294, ExtraVarList_79);
          switch (IgnoreExtraVars_78) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_DetInfo_5_325 = STATE_VARIABLE_DetInfo_4_292;
              break;
            case (MR_Integer) 0:
              {
                MR_Word ExtraVarDotPieces_83;
                MR_String ExtraKindStr_84;
                MR_String ExtraListStr_85;
                MR_Word ExtraPieces_88;
                MR_Word ExtraSpec_89;
                MR_Word Var_301;
                MR_Word Var_304;
                MR_Word Var_305;
                MR_Word Var_310;
                MR_Word Var_311;
                MR_Word Var_312;
                MR_Word Var_315;
                MR_Word Var_316;
                MR_Word Var_318;

                ExtraVarDotPieces_83 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[9])), ExtraVarPieces_82);
                ExtraKindStr_84 = check_hlds__det_infer_goal__promise_solutions_kind_str_1_f_0(Kind_25);
                if ((TailExtraVars_81 == (MR_Word) ((MR_Unsigned) 0U)))
                  ExtraListStr_85 = (MR_String) "an extra variable:";
                else
                  ExtraListStr_85 = (MR_String) "some extra variables:";
                {
                  Var_305 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_305, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_305, 1) = ((MR_Box) (ExtraKindStr_84));
                }
                {
                  Var_304 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_304, 0) = ((MR_Box) (Var_305));
                  MR_hl_field(1, Var_304, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[94])));
                }
                {
                  Var_301 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_301, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[92])));
                  MR_hl_field(1, Var_301, 1) = ((MR_Box) (Var_304));
                }
                {
                  Var_316 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_316, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_316, 1) = ((MR_Box) (ExtraListStr_85));
                }
                {
                  Var_315 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_315, 0) = ((MR_Box) (Var_316));
                  MR_hl_field(1, Var_315, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_312 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_312, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[95])));
                  MR_hl_field(1, Var_312, 1) = ((MR_Box) (Var_315));
                }
                Var_311 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_312);
                Var_318 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExtraVarDotPieces_83, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
                Var_310 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_311, Var_318);
                ExtraPieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_301, Var_310);
                {
                  ExtraSpec_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ExtraSpec_89, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12"));
                  MR_hl_field(0, ExtraSpec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, ExtraSpec_89, 2) = ((MR_Box) ((MR_Unsigned) 68U));
                  MR_hl_field(0, ExtraSpec_89, 3) = ((MR_Box) (Context_27));
                  MR_hl_field(0, ExtraSpec_89, 4) = ((MR_Box) (ExtraPieces_88));
                }
                check_hlds__det_util__det_info_add_error_spec_3_p_0(ExtraSpec_89, STATE_VARIABLE_DetInfo_4_292, &STATE_VARIABLE_DetInfo_5_325);
              }
              break;
          }
        }
        check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_13, SolnContextToUse_28, MaybePromiseEqvSolutionSets_29, Detism_18, RightFailingContexts_19, GoalFailingContexts_20, Goal0_21, Goal_22, STATE_VARIABLE_DetInfo_5_325, STATE_VARIABLE_DetInfo_117);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_17, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_13, SolnContext_14, MaybePromiseEqvSolutionSets0_15, Detism_18, RightFailingContexts_19, GoalFailingContexts_20, Goal0_21, Goal_22, STATE_VARIABLE_DetInfo_0_116, STATE_VARIABLE_DetInfo_117);
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_DetInfo_10_370;

            check_hlds__det_util__det_info_set_has_req_scope_2_p_0(STATE_VARIABLE_DetInfo_0_116, &STATE_VARIABLE_DetInfo_10_370);
            check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_13, SolnContext_14, MaybePromiseEqvSolutionSets0_15, Detism_18, RightFailingContexts_19, GoalFailingContexts_20, Goal0_21, Goal_22, STATE_VARIABLE_DetInfo_10_370, STATE_VARIABLE_DetInfo_117);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word FromGroundTermKind_115 = ((MR_Unsigned) ((MR_hl_field(3, Reason_17, 2))) & (MR_Integer) 3);
            MR_Word Var_114;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, Reason_17, 2)));

            switch (FromGroundTermKind_115) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Goal_22 = Goal0_21;
                  *Detism_18 = (MR_Integer) 0;
                  *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_DetInfo_117 = STATE_VARIABLE_DetInfo_0_116;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_13, SolnContext_14, MaybePromiseEqvSolutionSets0_15, Detism_18, RightFailingContexts_19, GoalFailingContexts_20, Goal0_21, Goal_22, STATE_VARIABLE_DetInfo_0_116, STATE_VARIABLE_DetInfo_117);
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12", (MR_String) "from_ground_term_initial");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Detism0_95;
            MR_Word STATE_VARIABLE_DetInfo_7_327;
            MR_Word Detism1_96;

            check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_13, SolnContext_14, MaybePromiseEqvSolutionSets0_15, &Detism0_95, RightFailingContexts_19, GoalFailingContexts_20, Goal0_21, Goal_22, STATE_VARIABLE_DetInfo_0_116, &STATE_VARIABLE_DetInfo_7_327);
            switch (Detism0_95) {
              default:
                (env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                {
                  Detism1_96 = (MR_Integer) 4;
                  (env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  Detism1_96 = (MR_Integer) 0;
                  (env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  Detism1_96 = (MR_Integer) 0;
                  (env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                }
                break;
            }
            if ((env).check_hlds__det_infer_goal__det_infer_scope_12_p_0_env_0__succeeded)
            {
              *Detism_18 = Detism1_96;
              *STATE_VARIABLE_DetInfo_117 = STATE_VARIABLE_DetInfo_7_327;
            }
            else
            {
              MR_String DetismStr_97;
              MR_Word Pieces_98;
              MR_Word Spec_99;
              MR_Word Var_332;
              MR_Word Var_333;
              MR_Word Var_334;
              MR_Word Var_335;
              MR_Word Var_340;
              MR_Word Var_345;
              MR_Word Var_346;
              MR_Word Var_351;
              MR_Word Var_356;
              MR_Word Var_357;
              MR_Word Context_378;

              *Detism_18 = Detism0_95;
              Context_378 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
              DetismStr_97 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(*Detism_18);
              {
                Var_335 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_335, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_335, 1) = ((MR_Box) (DetismStr_97));
              }
              {
                Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_334, 0) = ((MR_Box) (Var_335));
                MR_hl_field(1, Var_334, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[7])));
              }
              Var_333 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_334);
              Var_346 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[101])));
              Var_357 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[105])));
              Var_356 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_357, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
              Var_351 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[103])), Var_356);
              Var_345 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_346, Var_351);
              Var_340 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[99])), Var_345);
              Var_332 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_333, Var_340);
              Pieces_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[97])), Var_332);
              {
                Spec_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12"));
                MR_hl_field(0, Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 68U));
                MR_hl_field(0, Spec_99, 3) = ((MR_Box) (Context_378));
                MR_hl_field(0, Spec_99, 4) = ((MR_Box) (Pieces_98));
              }
              check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_99, STATE_VARIABLE_DetInfo_7_327, STATE_VARIABLE_DetInfo_117);
            }
          }
          break;
        case (MR_Integer) 8:
          {
            check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_13, SolnContext_14, MaybePromiseEqvSolutionSets0_15, Detism_18, RightFailingContexts_19, GoalFailingContexts_20, Goal0_21, Goal_22, STATE_VARIABLE_DetInfo_0_116, STATE_VARIABLE_DetInfo_117);
            switch (*Detism_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
                {
                }
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_scope\'/12", (MR_String) "Loop control scope with strange determinism");
                  return;
                }
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_goal_10_p_0(
  MR_Word InstMap0_11,
  MR_Word STATE_VARIABLE_SolnContext_0_26,
  MR_Word MaybePromiseEqvSolutionSets_13,
  MR_Word * Detism_14,
  MR_Word RightFailingContexts_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28)
{
  MR_bool succeeded;
  MR_Word GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_17, 1))));
  MR_Word NonLocalVars_22;
  MR_Word InstmapDelta_23;
  MR_Word AddPruning_25;
  MR_Word STATE_VARIABLE_SolnContext_1_30;
  MR_Word Purity_24;
  MR_Word Var_29;

  NonLocalVars_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_21);
  InstmapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_21);
  succeeded = check_hlds__det_util__det_no_output_vars_4_p_0(STATE_VARIABLE_DetInfo_0_27, InstMap0_11, InstmapDelta_23, NonLocalVars_22);
  if (succeeded)
  {
    Purity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_21);
    succeeded = (Purity_24 == (MR_Integer) 2);
    if (succeeded)
    {
      Var_29 = (MR_Integer) 3;
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_21, Var_29);
      succeeded = !(succeeded);
    }
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    AddPruning_25 = (MR_Integer) 1;
    STATE_VARIABLE_SolnContext_1_30 = (MR_Integer) 1;
  }
  else
  {
    AddPruning_25 = (MR_Integer) 0;
    STATE_VARIABLE_SolnContext_1_30 = STATE_VARIABLE_SolnContext_0_26;
  }
  check_hlds__det_infer_goal__det_infer_goal_known_pruning_11_p_0(InstMap0_11, STATE_VARIABLE_SolnContext_1_30, MaybePromiseEqvSolutionSets_13, AddPruning_25, Detism_14, RightFailingContexts_15, GoalFailingContexts_16, Goal0_17, Goal_18, STATE_VARIABLE_DetInfo_0_27, STATE_VARIABLE_DetInfo_28);
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_orelse_goals_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__det_infer_goal__IntroducedFrom__pred__det_infer_atomic_goal__1683__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_orelse_goals_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CanFail_0_5,
  MR_Word * STATE_VARIABLE_CanFail_6,
  MR_Word STATE_VARIABLE_MaxSolns_0_7,
  MR_Word * STATE_VARIABLE_MaxSolns_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_DetInfo_0_11,
  MR_Word * STATE_VARIABLE_DetInfo_12)
{
  MR_bool succeeded;

  if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_12 = STATE_VARIABLE_DetInfo_0_11;
    *STATE_VARIABLE_MaxSolns_8 = STATE_VARIABLE_MaxSolns_0_7;
    *STATE_VARIABLE_CanFail_6 = STATE_VARIABLE_CanFail_0_5;
  }
  else
  {
    MR_Word Goal0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 0))));
    MR_Word Goals0_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 1))));
    MR_Word Goal_34;
    MR_Word Goals_35;
    MR_Word FirstDetism_37;
    MR_Word FirstCanFail_38;
    MR_Word FirstMaxSolns_39;
    MR_Word STATE_VARIABLE_DetInfo_1_46;
    MR_Word STATE_VARIABLE_CanFail_1_47;
    MR_Word STATE_VARIABLE_MaxSolns_1_48;
    MR_Word GoalFailingContexts_49;
    MR_Word STATE_VARIABLE_DetInfo_1_56;

    check_hlds__det_infer_goal__det_infer_goal_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, &FirstDetism_37, HeadVar__4_4, &GoalFailingContexts_49, Goal0_32, &Goal_34, STATE_VARIABLE_DetInfo_0_11, &STATE_VARIABLE_DetInfo_1_56);
    switch (FirstDetism_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
        {
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_5[0]));
            MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_orelse_goals_12_p_0_1));
            MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_57, 3) = ((MR_Box) (GoalFailingContexts_49));
            MR_hl_field(0, Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
          STATE_VARIABLE_DetInfo_1_46 = STATE_VARIABLE_DetInfo_1_56;
        }
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo0_51 = ((MR_Word) ((MR_hl_field(0, Goal0_32, 1))));
          MR_Word Context_52;
          MR_String DetismStr_53;
          MR_Word Pieces_54;
          MR_Word Spec_55;
          MR_Word Var_62;
          MR_Word Var_63;

          Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_51);
          DetismStr_53 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(FirstDetism_37);
          {
            Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_63, 1) = ((MR_Box) (DetismStr_53));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[109])));
          }
          {
            Pieces_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[106])));
            MR_hl_field(1, Pieces_54, 1) = ((MR_Box) (Var_62));
          }
          {
            Spec_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_atomic_goal\'/9"));
            MR_hl_field(0, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(0, Spec_55, 3) = ((MR_Box) (Context_52));
            MR_hl_field(0, Spec_55, 4) = ((MR_Box) (Pieces_54));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_55, STATE_VARIABLE_DetInfo_1_56, &STATE_VARIABLE_DetInfo_1_46);
        }
        break;
    }
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_37, &FirstCanFail_38, &FirstMaxSolns_39);
    parse_tree__prog_detism__det_switch_canfail_3_p_0(STATE_VARIABLE_CanFail_0_5, FirstCanFail_38, &STATE_VARIABLE_CanFail_1_47);
    parse_tree__prog_detism__det_switch_maxsoln_3_p_0(STATE_VARIABLE_MaxSolns_0_7, FirstMaxSolns_39, &STATE_VARIABLE_MaxSolns_1_48);
    check_hlds__det_infer_goal__det_infer_orelse_goals_12_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_CanFail_1_47, STATE_VARIABLE_CanFail_6, STATE_VARIABLE_MaxSolns_1_48, STATE_VARIABLE_MaxSolns_8, Goals0_33, &Goals_35, STATE_VARIABLE_DetInfo_1_46, STATE_VARIABLE_DetInfo_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_35));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_infer_atomic_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__det_infer_goal__IntroducedFrom__pred__det_infer_atomic_goal__1683__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_atomic_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets0_14,
  MR_Word RightFailingContexts_15,
  MR_Word * Detism_16,
  MR_Word MainGoal0_17,
  MR_Word * MainGoal_18,
  MR_Word OrElseGoals0_19,
  MR_Word * OrElseGoals_20,
  MR_Word STATE_VARIABLE_DetInfo_0_30,
  MR_Word * STATE_VARIABLE_DetInfo_31)
{
  MR_bool succeeded;
  MR_Word MainDetism_22;
  MR_Word STATE_VARIABLE_DetInfo_1_32;
  MR_Word GoalFailingContexts_33;
  MR_Word STATE_VARIABLE_DetInfo_1_40;

  check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets0_14, &MainDetism_22, RightFailingContexts_15, &GoalFailingContexts_33, MainGoal0_17, MainGoal_18, STATE_VARIABLE_DetInfo_0_30, &STATE_VARIABLE_DetInfo_1_40);
  switch (MainDetism_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
    case (MR_Integer) 0:
    case (MR_Integer) 6:
      {
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_5[0]));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_atomic_11_p_0_1));
          MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_41, 3) = ((MR_Box) (GoalFailingContexts_33));
          MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
        STATE_VARIABLE_DetInfo_1_32 = STATE_VARIABLE_DetInfo_1_40;
      }
      break;
    case (MR_Integer) 5:
    case (MR_Integer) 7:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 1:
      {
        MR_Word GoalInfo0_35 = ((MR_Word) ((MR_hl_field(0, MainGoal0_17, 1))));
        MR_Word Context_36;
        MR_String DetismStr_37;
        MR_Word Pieces_38;
        MR_Word Spec_39;
        MR_Word Var_46;
        MR_Word Var_47;

        Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_35);
        DetismStr_37 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(MainDetism_22);
        {
          Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_47, 1) = ((MR_Box) (DetismStr_37));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[109])));
        }
        {
          Pieces_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[106])));
          MR_hl_field(1, Pieces_38, 1) = ((MR_Box) (Var_46));
        }
        {
          Spec_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_atomic_goal\'/9"));
          MR_hl_field(0, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 68U));
          MR_hl_field(0, Spec_39, 3) = ((MR_Box) (Context_36));
          MR_hl_field(0, Spec_39, 4) = ((MR_Box) (Pieces_38));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_39, STATE_VARIABLE_DetInfo_1_40, &STATE_VARIABLE_DetInfo_1_32);
      }
      break;
  }
  if ((OrElseGoals0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *OrElseGoals_20 = (MR_Word) ((MR_Unsigned) 0U);
    *Detism_16 = MainDetism_22;
    *STATE_VARIABLE_DetInfo_31 = STATE_VARIABLE_DetInfo_1_32;
  }
  else
  {
    MR_Word MainCanFail_25;
    MR_Word MainMaxSolns_26;
    MR_Word CanFail_27;
    MR_Word MaxSolns0_28;
    MR_Word MaxSolns_29;

    parse_tree__prog_data__determinism_components_3_p_0(MainDetism_22, &MainCanFail_25, &MainMaxSolns_26);
    check_hlds__det_infer_goal__det_infer_orelse_goals_12_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets0_14, RightFailingContexts_15, MainCanFail_25, &CanFail_27, MainMaxSolns_26, &MaxSolns0_28, OrElseGoals0_19, OrElseGoals_20, STATE_VARIABLE_DetInfo_1_32, STATE_VARIABLE_DetInfo_31);
    MaxSolns_29 = ((&check_hlds__det_infer_goal_vector_common_6[0 + MaxSolns0_28]))->check_hlds__det_infer_goal__vector_common_type_6_0__vct_6_f_0;
    parse_tree__prog_data__determinism_components_3_p_1(Detism_16, CanFail_27, MaxSolns_29);
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_negation_9_p_0(
  MR_Word InstMap0_10,
  MR_Word MaybePromiseEqvSolutionSets_11,
  MR_Word GoalInfo_12,
  MR_Word * Detism_13,
  MR_Word * GoalFailingContexts_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_DetInfo_0_24,
  MR_Word * STATE_VARIABLE_DetInfo_25)
{
  MR_Word NegDetism_18;
  MR_Word MaybeDetism_20;
  MR_Word CanFail_21;
  MR_Word _NegatedFailingContexts_19;
  MR_Word Var_22;

  check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_10, (MR_Integer) 1, MaybePromiseEqvSolutionSets_11, &NegDetism_18, (MR_Word) ((MR_Unsigned) 0U), &_NegatedFailingContexts_19, Goal0_15, Goal_16, STATE_VARIABLE_DetInfo_0_24, STATE_VARIABLE_DetInfo_25);
  parse_tree__prog_detism__det_negation_det_2_p_0(NegDetism_18, &MaybeDetism_20);
  if ((MaybeDetism_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_negation\'/9", (MR_String) "inappropriate determinism inside a negation");
      return;
    }
  else
    *Detism_13 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_20, 0))));
  parse_tree__prog_data__determinism_components_3_p_0(*Detism_13, &CanFail_21, &Var_22);
  switch (CanFail_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_23;
        MR_Word Var_31;

        Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (Context_23));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_if_then_else_14_p_0(
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word MaybePromiseEqvSolutionSets_17,
  MR_Word * Detism_18,
  MR_Word RightFailingContexts_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word Cond0_21,
  MR_Word * Cond_22,
  MR_Word Then0_23,
  MR_Word * Then_24,
  MR_Word Else0_25,
  MR_Word * Else_26,
  MR_Word STATE_VARIABLE_DetInfo_0_49,
  MR_Word * STATE_VARIABLE_DetInfo_50)
{
  MR_bool succeeded;
  MR_Word InstMap1_30;
  MR_Word ThenDetism_31;
  MR_Word ThenFailingContexts_32;
  MR_Word ThenCanFail_33;
  MR_Word ThenMaxSoln_34;
  MR_Word CondSolnContext_35;
  MR_Word CondDetism_36;
  MR_Word CondCanFail_38;
  MR_Word CondMaxSoln_39;
  MR_Word ElseDetism_40;
  MR_Word ElseFailingContexts_41;
  MR_Word ElseCanFail_42;
  MR_Word ElseMaxSoln_43;
  MR_Word STATE_VARIABLE_DetInfo_1_55;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_DetInfo_2_61;
  MR_Word _CondFailingContexts_37;

  hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond0_21, InstMap0_15, &InstMap1_30);
  check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap1_30, SolnContext_16, MaybePromiseEqvSolutionSets_17, &ThenDetism_31, RightFailingContexts_19, &ThenFailingContexts_32, Then0_23, Then_24, STATE_VARIABLE_DetInfo_0_49, &STATE_VARIABLE_DetInfo_1_55);
  parse_tree__prog_data__determinism_components_3_p_0(ThenDetism_31, &ThenCanFail_33, &ThenMaxSoln_34);
  succeeded = (ThenCanFail_33 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (SolnContext_16 == (MR_Integer) 1);
  if (succeeded)
    CondSolnContext_35 = (MR_Integer) 1;
  else
    CondSolnContext_35 = (MR_Integer) 0;
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), ThenFailingContexts_32, RightFailingContexts_19);
  check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_15, CondSolnContext_35, MaybePromiseEqvSolutionSets_17, &CondDetism_36, Var_60, &_CondFailingContexts_37, Cond0_21, Cond_22, STATE_VARIABLE_DetInfo_1_55, &STATE_VARIABLE_DetInfo_2_61);
  parse_tree__prog_data__determinism_components_3_p_0(CondDetism_36, &CondCanFail_38, &CondMaxSoln_39);
  check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap0_15, SolnContext_16, MaybePromiseEqvSolutionSets_17, &ElseDetism_40, RightFailingContexts_19, &ElseFailingContexts_41, Else0_25, Else_26, STATE_VARIABLE_DetInfo_2_61, STATE_VARIABLE_DetInfo_50);
  parse_tree__prog_data__determinism_components_3_p_0(ElseDetism_40, &ElseCanFail_42, &ElseMaxSoln_43);
  switch (CondCanFail_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (CondMaxSoln_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word CTMaxSoln_46;
            MR_Word MaxSoln_47;
            MR_Word CanFail_48;

            parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(CondMaxSoln_39, ThenMaxSoln_34, &CTMaxSoln_46);
            parse_tree__prog_detism__det_switch_maxsoln_3_p_0(CTMaxSoln_46, ElseMaxSoln_43, &MaxSoln_47);
            parse_tree__prog_detism__det_switch_canfail_3_p_0(ThenCanFail_33, ElseCanFail_42, &CanFail_48);
            parse_tree__prog_data__determinism_components_3_p_1(Detism_18, CanFail_48, MaxSoln_47);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word MaybeNegDetism_44;
            MR_Word NegDetism_45;

            parse_tree__prog_detism__det_negation_det_2_p_0(CondDetism_36, &MaybeNegDetism_44);
            if ((MaybeNegDetism_44 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_if_then_else\'/14", (MR_String) "cannot find determinism of negated condition");
                return;
              }
            else
              NegDetism_45 = ((MR_Word) ((MR_hl_field(1, MaybeNegDetism_44, 0))));
            parse_tree__prog_detism__det_conjunction_detism_3_p_0(NegDetism_45, ElseDetism_40, Detism_18);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      parse_tree__prog_detism__det_conjunction_detism_3_p_0(CondDetism_36, ThenDetism_31, Detism_18);
      break;
  }
  *GoalFailingContexts_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), ThenFailingContexts_32, ElseFailingContexts_41);
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_switch_cases_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Detism_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_SwitchFailingContexts_0_9,
  MR_Word * STATE_VARIABLE_SwitchFailingContexts_10,
  MR_Word HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_Word STATE_VARIABLE_DetInfo_0_13,
  MR_Word * STATE_VARIABLE_DetInfo_14)
{
  if ((HeadVar__11_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__prog_data__determinism_components_3_p_1(Detism_7, HeadVar__5_5, HeadVar__6_6);
    *STATE_VARIABLE_DetInfo_14 = STATE_VARIABLE_DetInfo_0_13;
    *STATE_VARIABLE_SwitchFailingContexts_10 = STATE_VARIABLE_SwitchFailingContexts_0_9;
  }
  else
  {
    MR_Word Case0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__11_11, 0))));
    MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__11_11, 1))));
    MR_Word Case_40;
    MR_Word Cases_41;
    MR_Word MainConsId_43 = ((MR_Word) ((MR_hl_field(0, Case0_38, 0))));
    MR_Word OtherConsIds_44 = ((MR_Word) ((MR_hl_field(0, Case0_38, 1))));
    MR_Word Goal0_45 = ((MR_Word) ((MR_hl_field(0, Case0_38, 2))));
    MR_Word ModuleInfo0_46;
    MR_Word VarTable_47;
    MR_Word VarType_48;
    MR_Word InstMap1_49;
    MR_Word ModuleInfo_50;
    MR_Word FirstDetism_53;
    MR_Word GoalFailingContexts_54;
    MR_Word Goal_55;
    MR_Word FirstCanFail_56;
    MR_Word FirstMaxSolns_57;
    MR_Word STATE_VARIABLE_DetInfo_1_64;
    MR_Word STATE_VARIABLE_DetInfo_2_73;
    MR_Word STATE_VARIABLE_CanFail_1_74;
    MR_Word STATE_VARIABLE_MaxSolns_1_75;
    MR_Word STATE_VARIABLE_SwitchFailingContexts_1_76;

    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_13, &ModuleInfo0_46);
    check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_13, &VarTable_47);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_47, HeadVar__4_4, &VarType_48);
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__4_4, VarType_48, MainConsId_43, OtherConsIds_44, HeadVar__1_1, &InstMap1_49, ModuleInfo0_46, &ModuleInfo_50);
    check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_50, STATE_VARIABLE_DetInfo_0_13, &STATE_VARIABLE_DetInfo_1_64);
    check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap1_49, HeadVar__2_2, HeadVar__3_3, &FirstDetism_53, HeadVar__8_8, &GoalFailingContexts_54, Goal0_45, &Goal_55, STATE_VARIABLE_DetInfo_1_64, &STATE_VARIABLE_DetInfo_2_73);
    {
      Case_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_40, 0) = ((MR_Box) (MainConsId_43));
      MR_hl_field(0, Case_40, 1) = ((MR_Box) (OtherConsIds_44));
      MR_hl_field(0, Case_40, 2) = ((MR_Box) (Goal_55));
    }
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_53, &FirstCanFail_56, &FirstMaxSolns_57);
    parse_tree__prog_detism__det_switch_canfail_3_p_0(HeadVar__5_5, FirstCanFail_56, &STATE_VARIABLE_CanFail_1_74);
    parse_tree__prog_detism__det_switch_maxsoln_3_p_0(HeadVar__6_6, FirstMaxSolns_57, &STATE_VARIABLE_MaxSolns_1_75);
    check_hlds__det_infer_goal__det_infer_switch_cases_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_CanFail_1_74, STATE_VARIABLE_MaxSolns_1_75, Detism_7, HeadVar__8_8, STATE_VARIABLE_SwitchFailingContexts_0_9, &STATE_VARIABLE_SwitchFailingContexts_1_76, Cases0_39, &Cases_41, STATE_VARIABLE_DetInfo_2_73, STATE_VARIABLE_DetInfo_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__12_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_40));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_41));
    }
    *STATE_VARIABLE_SwitchFailingContexts_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), GoalFailingContexts_54, STATE_VARIABLE_SwitchFailingContexts_1_76);
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_switch_13_p_0(
  MR_Word InstMap0_14,
  MR_Word SolnContext_15,
  MR_Word MaybePromiseEqvSolutionSets_16,
  MR_Word GoalInfo_17,
  MR_Word Var_18,
  MR_Word SwitchCanFail_19,
  MR_Word * Detism_20,
  MR_Word RightFailingContexts_21,
  MR_Word * GoalFailingContexts_22,
  MR_Word Cases0_23,
  MR_Word * Cases_24,
  MR_Word STATE_VARIABLE_DetInfo_0_37,
  MR_Word * STATE_VARIABLE_DetInfo_38)
{
  MR_bool succeeded;
  MR_Word CasesDetism_26;
  MR_Word GoalFailingContexts0_27;
  MR_Word CasesCanFail_28;
  MR_Word CasesSolns_29;
  MR_Word SwitchSolnContext_30;
  MR_Word SwitchSolns_32;
  MR_Word CanFail_33;
  MR_Word NumSolns_34;
  MR_Word STATE_VARIABLE_DetInfo_1_42;

  check_hlds__det_infer_goal__det_infer_switch_cases_14_p_0(InstMap0_14, SolnContext_15, MaybePromiseEqvSolutionSets_16, Var_18, (MR_Integer) 1, (MR_Integer) 0, &CasesDetism_26, RightFailingContexts_21, (MR_Word) ((MR_Unsigned) 0U), &GoalFailingContexts0_27, Cases0_23, Cases_24, STATE_VARIABLE_DetInfo_0_37, &STATE_VARIABLE_DetInfo_1_42);
  parse_tree__prog_data__determinism_components_3_p_0(CasesDetism_26, &CasesCanFail_28, &CasesSolns_29);
  succeeded = (CasesCanFail_28 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (SolnContext_15 == (MR_Integer) 1);
  if (succeeded)
    SwitchSolnContext_30 = (MR_Integer) 1;
  else
    SwitchSolnContext_30 = (MR_Integer) 0;
  check_hlds__det_infer_goal__det_check_for_noncanonical_type_11_p_0(Var_18, (MR_Integer) 1, SwitchCanFail_19, SwitchSolnContext_30, GoalFailingContexts0_27, RightFailingContexts_21, GoalInfo_17, (MR_Word) ((MR_Unsigned) 0U), &SwitchSolns_32, STATE_VARIABLE_DetInfo_1_42, STATE_VARIABLE_DetInfo_38);
  parse_tree__prog_detism__det_conjunction_canfail_3_p_0(SwitchCanFail_19, CasesCanFail_28, &CanFail_33);
  parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(SwitchSolns_32, CasesSolns_29, &NumSolns_34);
  parse_tree__prog_data__determinism_components_3_p_1(Detism_20, CanFail_33, NumSolns_34);
  switch (SwitchCanFail_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SwitchContext_35;
        MR_Word FailingContext_36;
        MR_Word Var_45;

        SwitchContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_18));
        }
        {
          FailingContext_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FailingContext_36, 0) = ((MR_Box) (SwitchContext_35));
          MR_hl_field(0, FailingContext_36, 1) = ((MR_Box) (Var_45));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_22 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_36));
          MR_hl_field(1, base, 1) = ((MR_Box) (GoalFailingContexts0_27));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_22 = GoalFailingContexts0_27;
      break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_disj_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * Detism_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_DisjFailingContexts_0_8,
  MR_Word * STATE_VARIABLE_DisjFailingContexts_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_DetInfo_0_12,
  MR_Word * STATE_VARIABLE_DetInfo_13)
{
  MR_bool succeeded;

  if ((HeadVar__10_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__prog_data__determinism_components_3_p_1(Detism_6, HeadVar__4_4, HeadVar__5_5);
    *STATE_VARIABLE_DetInfo_13 = STATE_VARIABLE_DetInfo_0_12;
    *STATE_VARIABLE_DisjFailingContexts_9 = STATE_VARIABLE_DisjFailingContexts_0_8;
  }
  else
  {
    MR_Word Goal0_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, 0))));
    MR_Word Goals0_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, 1))));
    MR_Word Goal_37;
    MR_Word Goals_38;
    MR_Word FirstDetism_40;
    MR_Word GoalFailingContexts_41;
    MR_Word FirstCanFail_42;
    MR_Word FirstMaxSolns_43;
    MR_Word GoalInfo_45;
    MR_Word AdjFirstMaxSolns_46;
    MR_Word STATE_VARIABLE_DetInfo_1_53;
    MR_Word STATE_VARIABLE_CanFail_1_55;
    MR_Word STATE_VARIABLE_MaxSolns_1_56;
    MR_Word STATE_VARIABLE_MaxSolns_2_57;
    MR_Word STATE_VARIABLE_DisjFailingContexts_1_58;
    MR_Word Var_54;

    check_hlds__det_infer_goal__det_infer_goal_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, &FirstDetism_40, HeadVar__7_7, &GoalFailingContexts_41, Goal0_35, &Goal_37, STATE_VARIABLE_DetInfo_0_12, &STATE_VARIABLE_DetInfo_1_53);
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_40, &FirstCanFail_42, &FirstMaxSolns_43);
    GoalInfo_45 = ((MR_Word) ((MR_hl_field(0, Goal_37, 1))));
    succeeded = (HeadVar__5_5 != (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (FirstMaxSolns_43 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_54 = (MR_Integer) 7;
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_45, Var_54);
      }
    }
    if (succeeded)
      AdjFirstMaxSolns_46 = (MR_Integer) 1;
    else
      AdjFirstMaxSolns_46 = FirstMaxSolns_43;
    parse_tree__prog_detism__det_disjunction_canfail_3_p_0(HeadVar__4_4, FirstCanFail_42, &STATE_VARIABLE_CanFail_1_55);
    parse_tree__prog_detism__det_disjunction_maxsoln_3_p_0(HeadVar__5_5, AdjFirstMaxSolns_46, &STATE_VARIABLE_MaxSolns_1_56);
    succeeded = (HeadVar__2_2 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (STATE_VARIABLE_MaxSolns_1_56 == (MR_Integer) 3);
    if (succeeded)
      STATE_VARIABLE_MaxSolns_2_57 = (MR_Integer) 2;
    else
      STATE_VARIABLE_MaxSolns_2_57 = STATE_VARIABLE_MaxSolns_1_56;
    check_hlds__det_infer_goal__det_infer_disj_goals_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, STATE_VARIABLE_CanFail_1_55, STATE_VARIABLE_MaxSolns_2_57, Detism_6, HeadVar__7_7, STATE_VARIABLE_DisjFailingContexts_0_8, &STATE_VARIABLE_DisjFailingContexts_1_58, Goals0_36, &Goals_38, STATE_VARIABLE_DetInfo_1_53, STATE_VARIABLE_DetInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__11_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_37));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_38));
    }
    *STATE_VARIABLE_DisjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), GoalFailingContexts_41, STATE_VARIABLE_DisjFailingContexts_1_58);
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_disj_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word GoalInfo_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word Goals0_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28)
{
  MR_Word GoalFailingContexts0_22;

  check_hlds__det_infer_goal__det_infer_disj_goals_13_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, (MR_Integer) 0, (MR_Integer) 0, Detism_16, RightFailingContexts_17, (MR_Word) ((MR_Unsigned) 0U), &GoalFailingContexts0_22, Goals0_19, Goals_20, STATE_VARIABLE_DetInfo_0_27, STATE_VARIABLE_DetInfo_28);
  if ((*Goals_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_23;
    MR_Word FailingContext_24;

    Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
    {
      FailingContext_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FailingContext_24, 0) = ((MR_Box) (Context_23));
      MR_hl_field(0, FailingContext_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalFailingContexts_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (GoalFailingContexts0_22));
    }
  }
  else
    *GoalFailingContexts_18 = GoalFailingContexts0_22;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_par_conj_goals_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_6,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11)
{
  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Integer) 0;
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_11 = STATE_VARIABLE_DetInfo_0_10;
    *STATE_VARIABLE_ConjFailingContexts_7 = STATE_VARIABLE_ConjFailingContexts_0_6;
  }
  else
  {
    MR_Word Goal0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 0))));
    MR_Word Goals0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 1))));
    MR_Word Goal_30;
    MR_Word Goals_31;
    MR_Word HeadDetism_33;
    MR_Word GoalFailingContexts_34;
    MR_Word HeadCanFail_35;
    MR_Word HeadMaxSolns_36;
    MR_Word TailDetism_37;
    MR_Word TailCanFail_38;
    MR_Word TailMaxSolns_39;
    MR_Word MaxSolns_40;
    MR_Word CanFail_41;
    MR_Word STATE_VARIABLE_DetInfo_1_46;
    MR_Word STATE_VARIABLE_ConjFailingContexts_1_47;

    check_hlds__det_infer_goal__det_infer_goal_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, &HeadDetism_33, HeadVar__5_5, &GoalFailingContexts_34, Goal0_28, &Goal_30, STATE_VARIABLE_DetInfo_0_10, &STATE_VARIABLE_DetInfo_1_46);
    parse_tree__prog_data__determinism_components_3_p_0(HeadDetism_33, &HeadCanFail_35, &HeadMaxSolns_36);
    check_hlds__det_infer_goal__det_infer_par_conj_goals_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, &TailDetism_37, HeadVar__5_5, STATE_VARIABLE_ConjFailingContexts_0_6, &STATE_VARIABLE_ConjFailingContexts_1_47, Goals0_29, &Goals_31, STATE_VARIABLE_DetInfo_1_46, STATE_VARIABLE_DetInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_31));
    }
    parse_tree__prog_data__determinism_components_3_p_0(TailDetism_37, &TailCanFail_38, &TailMaxSolns_39);
    parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(HeadMaxSolns_36, TailMaxSolns_39, &MaxSolns_40);
    parse_tree__prog_detism__det_conjunction_canfail_3_p_0(HeadCanFail_35, TailCanFail_38, &CanFail_41);
    parse_tree__prog_data__determinism_components_3_p_1(HeadVar__4_4, CanFail_41, MaxSolns_40);
    *STATE_VARIABLE_ConjFailingContexts_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), GoalFailingContexts_34, STATE_VARIABLE_ConjFailingContexts_1_47);
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_par_conj_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word GoalInfo_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word Goals0_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_DetInfo_0_33,
  MR_Word * STATE_VARIABLE_DetInfo_34)
{
  MR_bool succeeded;
  MR_Word CanFail_22;
  MR_Word MaxSoln_23;
  MR_Word STATE_VARIABLE_DetInfo_1_36;

  check_hlds__det_infer_goal__det_infer_par_conj_goals_11_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, Detism_16, RightFailingContexts_17, (MR_Word) ((MR_Unsigned) 0U), GoalFailingContexts_18, Goals0_19, Goals_20, STATE_VARIABLE_DetInfo_0_33, &STATE_VARIABLE_DetInfo_1_36);
  parse_tree__prog_data__determinism_components_3_p_0(*Detism_16, &CanFail_22, &MaxSoln_23);
  succeeded = (CanFail_22 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (MaxSoln_23 != (MR_Integer) 3);
  if (succeeded)
    *STATE_VARIABLE_DetInfo_34 = STATE_VARIABLE_DetInfo_1_36;
  else
  {
    MR_Word Context_24;
    MR_String First_25;
    MR_Word Pieces_27;
    MR_Word GoalMsgGroups_29;
    MR_Word SortedGoalMsgGroups_30;
    MR_Word SortedGoalMsgs_31;
    MR_Word Spec_32;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_DetInfo_2_48;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;

    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
    switch (CanFail_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        First_25 = (MR_String) "Error: parallel conjunct may fail.";
        break;
      case (MR_Integer) 1:
        switch (MaxSoln_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            First_25 = (MR_String) "Error: parallel conjunct may have multiple solutions.";
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_par_conj\'/11", (MR_String) "strange determinism error for parallel conjunction");
              return;
            }
            break;
        }
        break;
    }
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (First_25));
    }
    {
      Pieces_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_27, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Pieces_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[165])));
    }
    check_hlds__det_check_goal__det_diagnose_conj_7_p_0(InstMap0_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, *Goals_20, &GoalMsgGroups_29, STATE_VARIABLE_DetInfo_1_36, &STATE_VARIABLE_DetInfo_2_48);
    parse_tree__error_sort__sort_error_msg_groups_2_p_0(GoalMsgGroups_29, &SortedGoalMsgGroups_30);
    SortedGoalMsgs_31 = parse_tree__error_sort__flatten_error_msg_groups_1_f_0(SortedGoalMsgGroups_30);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (Context_24));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (Pieces_27));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_53, SortedGoalMsgs_31);
    {
      Spec_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_par_conj\'/11"));
      MR_hl_field(2, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(2, Spec_32, 3) = ((MR_Box) (Var_52));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_32, STATE_VARIABLE_DetInfo_2_48, STATE_VARIABLE_DetInfo_34);
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_conj_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_6,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11)
{
  MR_bool succeeded;

  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Integer) 0;
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_11 = STATE_VARIABLE_DetInfo_0_10;
    *STATE_VARIABLE_ConjFailingContexts_7 = STATE_VARIABLE_ConjFailingContexts_0_6;
  }
  else
  {
    MR_Word Goal0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 0))));
    MR_Word Goals0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 1))));
    MR_Word Goal_30;
    MR_Word Goals_31;
    MR_Word InstMap1_33;
    MR_Word TailDetism_34;
    MR_Word TailCanFail_35;
    MR_Word HeadSolnContext_37;
    MR_Word GoalRightFailingContexts_38;
    MR_Word HeadDetism_39;
    MR_Word GoalFailingContexts_40;
    MR_Word STATE_VARIABLE_ConjFailingContexts_1_45;
    MR_Word STATE_VARIABLE_DetInfo_1_46;
    MR_Word _TailMaxSolns_36;

    hlds__goal_util__apply_goal_instmap_delta_3_p_0(Goal0_28, HeadVar__1_1, &InstMap1_33);
    check_hlds__det_infer_goal__det_infer_conj_11_p_0(InstMap1_33, HeadVar__2_2, HeadVar__3_3, &TailDetism_34, HeadVar__5_5, STATE_VARIABLE_ConjFailingContexts_0_6, &STATE_VARIABLE_ConjFailingContexts_1_45, Goals0_29, &Goals_31, STATE_VARIABLE_DetInfo_0_10, &STATE_VARIABLE_DetInfo_1_46);
    parse_tree__prog_data__determinism_components_3_p_0(TailDetism_34, &TailCanFail_35, &_TailMaxSolns_36);
    succeeded = (TailCanFail_35 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (HeadVar__2_2 == (MR_Integer) 1);
    if (succeeded)
      HeadSolnContext_37 = (MR_Integer) 1;
    else
      HeadSolnContext_37 = (MR_Integer) 0;
    GoalRightFailingContexts_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), STATE_VARIABLE_ConjFailingContexts_1_45, HeadVar__5_5);
    check_hlds__det_infer_goal__det_infer_goal_10_p_0(HeadVar__1_1, HeadSolnContext_37, HeadVar__3_3, &HeadDetism_39, GoalRightFailingContexts_38, &GoalFailingContexts_40, Goal0_28, &Goal_30, STATE_VARIABLE_DetInfo_1_46, STATE_VARIABLE_DetInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_31));
    }
    parse_tree__prog_detism__det_conjunction_detism_3_p_0(HeadDetism_39, TailDetism_34, HeadVar__4_4);
    *STATE_VARIABLE_ConjFailingContexts_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), GoalFailingContexts_40, STATE_VARIABLE_ConjFailingContexts_1_45);
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_unify_13_p_0(
  MR_Word InstMap0_14,
  MR_Word SolnContext_15,
  MR_Word GoalInfo_16,
  MR_Word LHS_17,
  MR_Word Unify_18,
  MR_Word UnifyContext_19,
  MR_Word * Detism_20,
  MR_Word RightFailingContexts_21,
  MR_Word * GoalFailingContexts_22,
  MR_Word RHS0_23,
  MR_Word * RHS_24,
  MR_Word STATE_VARIABLE_DetInfo_0_82,
  MR_Word * STATE_VARIABLE_DetInfo_83)
{
  MR_bool succeeded;
  MR_Word UnifyCanFail_46;
  MR_Word ExaminesRepresentation_47;
  MR_Word UnifyNumSolns_48;
  MR_Word STATE_VARIABLE_DetInfo_2_97;
  MR_Word Var_99;

  switch (MR_tag((MR_Word) RHS0_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *RHS_24 = RHS0_23;
        STATE_VARIABLE_DetInfo_2_97 = STATE_VARIABLE_DetInfo_0_82;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocalVars_31 = ((MR_Word) ((MR_hl_field(2, RHS0_23, 1))));
        MR_Word ArgVarsModes_32 = ((MR_Word) ((MR_hl_field(2, RHS0_23, 2))));
        MR_Word LambdaDeclaredDet_33 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_23, 3))) & (MR_Integer) 7);
        MR_Word Goal0_34 = ((MR_Word) ((MR_hl_field(2, RHS0_23, 4))));
        MR_Word LambdaSolnContext_36;
        MR_Word ModuleInfo_37;
        MR_Word InstMap1_38;
        MR_Word LambdaInferredDet_39;
        MR_Word Goal_41;
        MR_Word STATE_VARIABLE_DetInfo_1_96;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, RHS0_23, 0)));
        MR_Word Var_118;
        MR_Word Var_35;
        MR_Word _LambdaFailingContexts_40;

        parse_tree__prog_data__determinism_components_3_p_0(LambdaDeclaredDet_33, &Var_35, &Var_118);
        succeeded = ((MR_Integer) 2 == Var_118);
        if (succeeded)
          LambdaSolnContext_36 = (MR_Integer) 1;
        else
          LambdaSolnContext_36 = (MR_Integer) 0;
        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_82, &ModuleInfo_37);
        hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_37, ArgVarsModes_32, InstMap0_14, &InstMap1_38);
        check_hlds__det_infer_goal__det_infer_goal_10_p_0(InstMap1_38, LambdaSolnContext_36, (MR_Word) ((MR_Unsigned) 0U), &LambdaInferredDet_39, (MR_Word) ((MR_Unsigned) 0U), &_LambdaFailingContexts_40, Goal0_34, &Goal_41, STATE_VARIABLE_DetInfo_0_82, &STATE_VARIABLE_DetInfo_1_96);
        check_hlds__det_infer_goal__det_check_lambda_7_p_0(LambdaDeclaredDet_33, LambdaInferredDet_39, Goal_41, GoalInfo_16, InstMap1_38, STATE_VARIABLE_DetInfo_1_96, &STATE_VARIABLE_DetInfo_2_97);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *RHS_24 = base;
          MR_hl_field(2, base, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(2, base, 1) = ((MR_Box) (NonLocalVars_31));
          MR_hl_field(2, base, 2) = ((MR_Box) (ArgVarsModes_32));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (LambdaDeclaredDet_33));
          MR_hl_field(2, base, 4) = ((MR_Box) (Goal_41));
        }
      }
      break;
  }
  check_hlds__det_infer_goal__det_infer_unify_canfail_2_p_0(Unify_18, &UnifyCanFail_46);
  check_hlds__det_infer_goal__det_infer_unify_examines_rep_2_p_0(Unify_18, &ExaminesRepresentation_47);
  Var_99 = (MR_Word) (MR_mkword(1, (MR_Word) (UnifyContext_19)));
  check_hlds__det_infer_goal__det_check_for_noncanonical_type_11_p_0(LHS_17, ExaminesRepresentation_47, UnifyCanFail_46, SolnContext_15, RightFailingContexts_21, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_16, Var_99, &UnifyNumSolns_48, STATE_VARIABLE_DetInfo_2_97, STATE_VARIABLE_DetInfo_83);
  parse_tree__prog_data__determinism_components_3_p_1(Detism_20, UnifyCanFail_46, UnifyNumSolns_48);
  switch (UnifyCanFail_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_49;

        Context_49 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        switch (MR_tag((MR_Word) Unify_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_unify\'/13", (MR_String) "can_fail construct");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, Unify_18, 0))));
              MR_Word FailingGoal_110;
              MR_Word ConsId_111 = ((MR_Word) ((MR_hl_field(1, Unify_18, 1))));
              MR_Word FailingContext_112;

              {
                FailingGoal_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, FailingGoal_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, FailingGoal_110, 1) = ((MR_Box) (Var_75));
                MR_hl_field(3, FailingGoal_110, 2) = ((MR_Box) (ConsId_111));
              }
              {
                FailingContext_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FailingContext_112, 0) = ((MR_Box) (Context_49));
                MR_hl_field(0, FailingContext_112, 1) = ((MR_Box) (FailingGoal_110));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalFailingContexts_22 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_112));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_unify\'/13", (MR_String) "can_fail assign");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unify_18, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var1_80 = ((MR_Word) ((MR_hl_field(3, Unify_18, 1))));
                  MR_Word Var2_81 = ((MR_Word) ((MR_hl_field(3, Unify_18, 2))));
                  MR_Word FailingGoal_113;
                  MR_Word FailingContext_114;

                  {
                    FailingGoal_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, FailingGoal_113, 0) = ((MR_Box) (Var1_80));
                    MR_hl_field(2, FailingGoal_113, 1) = ((MR_Box) (Var2_81));
                  }
                  {
                    FailingContext_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FailingContext_114, 0) = ((MR_Box) (Context_49));
                    MR_hl_field(0, FailingContext_114, 1) = ((MR_Box) (FailingGoal_113));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalFailingContexts_22 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_114));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word FailingGoal_63;
                  MR_Word FailingContext_74;

                  switch (MR_tag((MR_Word) *RHS_24)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word RHSVar_62 = ((MR_Word) ((MR_hl_field(0, *RHS_24, 0))));

                        {
                          FailingGoal_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, FailingGoal_63, 0) = ((MR_Box) (LHS_17));
                          MR_hl_field(2, FailingGoal_63, 1) = ((MR_Box) (RHSVar_62));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ConsId_64 = ((MR_Word) ((MR_hl_field(1, *RHS_24, 0))));

                        {
                          FailingGoal_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, FailingGoal_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, FailingGoal_63, 1) = ((MR_Box) (LHS_17));
                          MR_hl_field(3, FailingGoal_63, 2) = ((MR_Box) (ConsId_64));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_unify\'/13", (MR_String) "complicated_unify but no fail context");
                        return;
                      }
                      break;
                  }
                  {
                    FailingContext_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FailingContext_74, 0) = ((MR_Box) (Context_49));
                    MR_hl_field(0, FailingContext_74, 1) = ((MR_Box) (FailingGoal_63));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalFailingContexts_22 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_74));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_22 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_goal_expr_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word GoalInfo_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word GoalExpr0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_DetInfo_0_78,
  MR_Word * STATE_VARIABLE_DetInfo_79)
{
  switch (MR_tag((MR_Word) GoalExpr0_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_19));
        MR_Word Goal_60;

        check_hlds__det_infer_goal__det_infer_negation_9_p_0(InstMap0_12, MaybePromiseEqvSolutionSets_14, GoalInfo_15, Detism_16, GoalFailingContexts_18, Goal0_59, &Goal_60, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        *GoalExpr_20 = (MR_Word) ((MR_Word) (Goal_60));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_22 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_19, 0))));
        MR_Word RHS0_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_19, 1))));
        MR_Word Mode_24 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_19, 2))));
        MR_Word Unify_25 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_19, 3))));
        MR_Word UnifyContext_26 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_19, 4))));
        MR_Word RHS_27;

        check_hlds__det_infer_goal__det_infer_unify_13_p_0(InstMap0_12, SolnContext_13, GoalInfo_15, LHS_22, Unify_25, UnifyContext_26, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, RHS0_23, &RHS_27, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHS_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_27));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_24));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unify_25));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_26));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_19, 0))));
        MR_Integer ProcId0_29 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_19, 1))));
        MR_Word ArgVars_30 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_19, 2))));
        MR_Word Builtin_31 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_19, 3))) & (MR_Integer) 1);
        MR_Word Name_32 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_19, 5))));
        MR_Integer ProcId_33;
        MR_Word UnifyContext_108 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_19, 4))));

        check_hlds__det_infer_goal__det_infer_call_11_p_0(SolnContext_13, GoalInfo_15, PredId_28, ArgVars_30, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, ProcId0_29, &ProcId_33, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_20 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_28));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_33));
          MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_30));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_31));
          MR_hl_field(2, base, 4) = ((MR_Box) (UnifyContext_108));
          MR_hl_field(2, base, 5) = ((MR_Box) (Name_32));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_19, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 1))));
            MR_Word CallDetism_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_19, 5))) & (MR_Integer) 7);

            check_hlds__det_infer_goal__det_infer_generic_call_9_p_0(SolnContext_13, GoalInfo_15, GenericCall_34, CallDetism_38, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            *GoalExpr_20 = GoalExpr0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 1))));
            MR_Word PredId_110 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 2))));
            MR_Integer ProcId_111 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_19, 3))));

            check_hlds__det_infer_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(Attributes_39, PredId_110, ProcId_111, GoalInfo_15, SolnContext_13, RightFailingContexts_17, Detism_16, GoalFailingContexts_18, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            *GoalExpr_20 = GoalExpr0_19;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_43 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_19, 1))) & (MR_Integer) 1);
            MR_Word Goals0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 2))));
            MR_Word Goals_45;

            switch (ConjType_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__det_infer_goal__det_infer_par_conj_11_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, GoalInfo_15, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, Goals0_44, &Goals_45, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                break;
              case (MR_Integer) 0:
                check_hlds__det_infer_goal__det_infer_conj_11_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, Detism_16, RightFailingContexts_17, (MR_Word) ((MR_Unsigned) 0U), GoalFailingContexts_18, Goals0_44, &Goals_45, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_20 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_43));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_45));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_113 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 1))));
            MR_Word Goals_114;

            check_hlds__det_infer_goal__det_infer_disj_11_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, GoalInfo_15, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, Goals0_113, &Goals_114, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_20 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_114));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 1))));
            MR_Word SwitchCanFail_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_19, 2))) & (MR_Integer) 1);
            MR_Word Cases0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 3))));
            MR_Word Cases_51;
            MR_Word STATE_VARIABLE_DetInfo_8_88;

            switch (SwitchCanFail_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__det_util__det_info_set_has_incomplete_switch_2_p_0(STATE_VARIABLE_DetInfo_0_78, &STATE_VARIABLE_DetInfo_8_88);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_DetInfo_8_88 = STATE_VARIABLE_DetInfo_0_78;
                break;
            }
            check_hlds__det_infer_goal__det_infer_switch_13_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, GoalInfo_15, Var_46, SwitchCanFail_47, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, Cases0_48, &Cases_51, STATE_VARIABLE_DetInfo_8_88, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_20 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_46));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_47));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_51));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 1))));
            MR_Word Goal0_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 2))));
            MR_Word Goal_118;

            check_hlds__det_infer_goal__det_infer_scope_12_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, GoalInfo_15, Reason_61, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, Goal0_117, &Goal_118, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_20 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_61));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goal_118));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 1))));
            MR_Word Cond0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 2))));
            MR_Word Then0_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 3))));
            MR_Word Else0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 4))));
            MR_Word Cond_56;
            MR_Word Then_57;
            MR_Word Else_58;

            check_hlds__det_infer_goal__det_infer_if_then_else_14_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, Cond0_53, &Cond_56, Then0_54, &Then_57, Else0_55, &Else_58, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_20 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_52));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_56));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_57));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_58));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_19, 1))));
            MR_Word ShortHand_71;

            switch (MR_tag((MR_Word) ShortHand0_62)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_goal_expr\'/11", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_63 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_62, 0))) & (MR_Integer) 3);
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 1))));
                  MR_Word Outer_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 2))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;
                  MR_Word Vars_119 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 3))));

                  check_hlds__det_infer_goal__det_infer_atomic_11_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, RightFailingContexts_17, Detism_16, MainGoal0_66, &MainGoal_69, OrElseGoals0_67, &OrElseGoals_70, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                  *GoalFailingContexts_18 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_63));
                    MR_hl_field(1, ShortHand_71, 1) = ((MR_Box) (Inner_64));
                    MR_hl_field(1, ShortHand_71, 2) = ((MR_Box) (Outer_65));
                    MR_hl_field(1, ShortHand_71, 3) = ((MR_Box) (Vars_119));
                    MR_hl_field(1, ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(1, ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(1, ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 0))));
                  MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 1))));
                  MR_Word TryGoal0_74 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 2))));
                  MR_Word TryGoal_75;

                  check_hlds__det_infer_goal__det_infer_goal_known_pruning_11_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, (MR_Integer) 0, Detism_16, RightFailingContexts_17, GoalFailingContexts_18, TryGoal0_74, &TryGoal_75, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_71, 0) = ((MR_Box) (MaybeIO_72));
                    MR_hl_field(2, ShortHand_71, 1) = ((MR_Box) (ResultVar_73));
                    MR_hl_field(2, ShortHand_71, 2) = ((MR_Box) (TryGoal_75));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_20 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_71));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_goal_known_pruning_11_p_0(
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word AddPruning_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word Goal0_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_DetInfo_0_52,
  MR_Word * STATE_VARIABLE_DetInfo_53)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_19, 0))));
  MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(0, Goal0_19, 1))));
  MR_Word InstmapDelta_24;
  MR_Word Prune_29;
  MR_Word InternalDetism0_30;
  MR_Word GoalExpr1_31;
  MR_Word InternalCanFail_32;
  MR_Word InternalSolns0_33;
  MR_Word InternalSolns_34;
  MR_Word Solns_35;
  MR_Word GoalInfo_36;
  MR_Word FinalInternalSolns_44;
  MR_Word FinalInternalDetism_46;
  MR_Word GoalExpr_51;
  MR_Word ScopeReason_25;
  MR_Word CondInfo_39;
  MR_Word CondDetism_42;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_63;
  MR_Word Var_43;

  InstmapDelta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_23);
  succeeded = ((((MR_tag((MR_Word) GoalExpr0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_22, 0)))) == (MR_Integer) 5)));
  if (succeeded)
  {
    ScopeReason_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_22, 1))));
    if (((MR_tag((MR_Word) ScopeReason_25)) == (MR_Integer) 2))
    {
      MR_Word PromiseEqvSolnsKind_28 = ((MR_Unsigned) ((MR_hl_field(2, ScopeReason_25, 1))) & (MR_Integer) 3);

      switch (PromiseEqvSolnsKind_28) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
    }
    else
    if (((((MR_tag((MR_Word) ScopeReason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ScopeReason_25, 0)))) == (MR_Integer) 4))))
    {
      MR_Word Var_54 = ((MR_Unsigned) ((MR_hl_field(3, ScopeReason_25, 1))) & (MR_Integer) 1);

      succeeded = (Var_54 == (MR_Integer) 1);
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    Prune_29 = (MR_Integer) 1;
  else
    Prune_29 = AddPruning_15;
  check_hlds__det_infer_goal__det_infer_goal_expr_11_p_0(InstMap0_12, SolnContext_13, MaybePromiseEqvSolutionSets_14, GoalInfo0_23, &InternalDetism0_30, RightFailingContexts_17, GoalFailingContexts_18, GoalExpr0_22, &GoalExpr1_31, STATE_VARIABLE_DetInfo_0_52, STATE_VARIABLE_DetInfo_53);
  parse_tree__prog_data__determinism_components_3_p_0(InternalDetism0_30, &InternalCanFail_32, &InternalSolns0_33);
  succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_24);
  if (succeeded)
    InternalSolns_34 = (MR_Integer) 0;
  else
    InternalSolns_34 = InternalSolns0_33;
  switch (InternalSolns_34) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
    succeeded = (Prune_29 == (MR_Integer) 1);
  if (succeeded)
    Solns_35 = (MR_Integer) 1;
  else
  {
    succeeded = (InternalSolns_34 == (MR_Integer) 3);
    if (succeeded)
      succeeded = (SolnContext_13 == (MR_Integer) 1);
    if (succeeded)
      Solns_35 = (MR_Integer) 2;
    else
      Solns_35 = InternalSolns_34;
  }
  parse_tree__prog_data__determinism_components_3_p_1(Detism_16, InternalCanFail_32, Solns_35);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(*Detism_16, GoalInfo0_23, &GoalInfo_36);
  succeeded = ((((MR_tag((MR_Word) GoalExpr1_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_31, 0)))) == (MR_Integer) 6)));
  if (succeeded)
  {
    Var_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_31, 2))));
    CondInfo_39 = ((MR_Word) ((MR_hl_field(0, Var_57, 1))));
    CondDetism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_39);
    Var_58 = (MR_Integer) 3;
    parse_tree__prog_data__determinism_components_3_p_0(CondDetism_42, &Var_43, &Var_63);
    succeeded = (Var_58 == Var_63);
    if (succeeded)
      succeeded = (Solns_35 != (MR_Integer) 3);
  }
  if (succeeded)
    FinalInternalSolns_44 = (MR_Integer) 3;
  else
  {
    MR_Word ConjGoals_45;
    MR_Word Var_59;

    succeeded = (Solns_35 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) GoalExpr1_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_31, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_59 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr1_31, 1))) & (MR_Integer) 1);
        ConjGoals_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_31, 2))));
        succeeded = (Var_59 == (MR_Integer) 0);
        if (succeeded)
          succeeded = check_hlds__det_infer_goal__some_goal_is_at_most_many_1_p_0(ConjGoals_45);
      }
    }
    if (succeeded)
      FinalInternalSolns_44 = (MR_Integer) 3;
    else
      FinalInternalSolns_44 = InternalSolns_34;
  }
  parse_tree__prog_data__determinism_components_3_p_1(&FinalInternalDetism_46, InternalCanFail_32, FinalInternalSolns_44);
  succeeded = (*Detism_16 != FinalInternalDetism_46);
  if (succeeded)
  {
    succeeded = ((((MR_tag((MR_Word) GoalExpr1_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_31, 0)))) == (MR_Integer) 3)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) GoalExpr1_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_31, 0)))) == (MR_Integer) 5)));
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word InnerInfo_50;
    MR_Word Var_62;

    hlds__hlds_goal__goal_info_set_determinism_3_p_0(FinalInternalDetism_46, GoalInfo0_23, &InnerInfo_50);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (GoalExpr1_31));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (InnerInfo_50));
    }
    {
      GoalExpr_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, GoalExpr_51, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[3])));
      MR_hl_field(3, GoalExpr_51, 2) = ((MR_Box) (Var_62));
    }
  }
  else
    GoalExpr_51 = GoalExpr1_31;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_51));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_36));
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word Attributes_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_44,
  MR_Word * STATE_VARIABLE_DetInfo_45)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word ProcInfo_24;
  MR_Word MaybeDetism_25;
  MR_Word Var_23;

  check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_44, &ModuleInfo_22);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_22, PredId_13, ProcId_14, &Var_23, &ProcInfo_24);
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_24, &MaybeDetism_25);
  if ((MaybeDetism_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcPieces_42;
    MR_Word Pieces_43;
    MR_Word Var_134;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Spec_173;
    MR_Word Context_174;

    Context_174 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
    {
      Var_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_134, 0) = ((MR_Box) (PredId_13));
      MR_hl_field(0, Var_134, 1) = ((MR_Box) (ProcId_14));
    }
    ProcPieces_42 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_22, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), Var_134);
    Var_152 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[38])));
    Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_152, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[44])));
    Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[36])), Var_151);
    Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_42, Var_146);
    Pieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[34])), Var_145);
    {
      Spec_173 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_173, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_foreign_proc\'/11"));
      MR_hl_field(0, Spec_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_173, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(0, Spec_173, 3) = ((MR_Box) (Context_174));
      MR_hl_field(0, Spec_173, 4) = ((MR_Box) (Pieces_43));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_173, STATE_VARIABLE_DetInfo_0_44, STATE_VARIABLE_DetInfo_45);
    *Detism_19 = (MR_Integer) 6;
    *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Detism0_26 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_25, 0))));
    MR_Word CanFail_27;
    MR_Word NumSolns0_28;
    MR_Word NumSolns_39;
    MR_Word STATE_VARIABLE_DetInfo_1_92;
    MR_Word Var_46;

    parse_tree__prog_data__determinism_components_3_p_0(Detism0_26, &CanFail_27, &NumSolns0_28);
    Var_46 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_12);
    succeeded = (Var_46 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Detism0_26 == (MR_Integer) 6);
    if (succeeded)
    {
      MR_Word ProcContext_29;
      MR_Word WillNotThrowProcPieces_30;
      MR_Word WillNotThrowPieces_31;
      MR_Word WillNotThrowSpec_32;
      MR_Word Var_52;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_72;
      MR_Word Var_77;
      MR_Word Var_78;

      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_24, &ProcContext_29);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (PredId_13));
        MR_hl_field(0, Var_52, 1) = ((MR_Box) (ProcId_14));
      }
      WillNotThrowProcPieces_30 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_22, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_2[0])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), Var_52);
      Var_67 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[52])));
      Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[58])));
      Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[54])), Var_77);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_72);
      Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[50])), Var_66);
      Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WillNotThrowProcPieces_30, Var_58);
      WillNotThrowPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[46])), Var_57);
      {
        WillNotThrowSpec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WillNotThrowSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_foreign_proc\'/11"));
        MR_hl_field(0, WillNotThrowSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, WillNotThrowSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(0, WillNotThrowSpec_32, 3) = ((MR_Box) (ProcContext_29));
        MR_hl_field(0, WillNotThrowSpec_32, 4) = ((MR_Box) (WillNotThrowPieces_31));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(WillNotThrowSpec_32, STATE_VARIABLE_DetInfo_0_44, &STATE_VARIABLE_DetInfo_1_92);
    }
    else
      STATE_VARIABLE_DetInfo_1_92 = STATE_VARIABLE_DetInfo_0_44;
    succeeded = (NumSolns0_28 == (MR_Integer) 2);
    if (succeeded)
      succeeded = (SolnContext_17 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word GoalContext_33;
      MR_Word VarTable_34;
      MR_Word WrongContextPredPieces_35;
      MR_Word WrongContextFirstPieces_36;
      MR_Word ContextMsgs_37;
      MR_Word Spec_38;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_String Var_108;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_125;
      MR_Word Var_126;

      GoalContext_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
      check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_1_92, &VarTable_34);
      WrongContextPredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_22, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_13);
      Var_108 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Detism0_26);
      {
        Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
      }
      {
        Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[22])));
        MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
      }
      Var_111 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[26])));
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
      Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, Var_110);
      Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WrongContextPredPieces_35, Var_102);
      WrongContextFirstPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[21])), Var_101);
      ContextMsgs_37 = check_hlds__det_infer_goal__failing_contexts_description_3_f_0(ModuleInfo_22, VarTable_34, RightFailingContexts_18);
      {
        Var_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_126, 0) = ((MR_Box) (GoalContext_33));
        MR_hl_field(0, Var_126, 1) = ((MR_Box) (WrongContextFirstPieces_36));
      }
      {
        Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
        MR_hl_field(1, Var_125, 1) = ((MR_Box) (ContextMsgs_37));
      }
      {
        Spec_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_foreign_proc\'/11"));
        MR_hl_field(2, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(2, Spec_38, 3) = ((MR_Box) (Var_125));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_38, STATE_VARIABLE_DetInfo_1_92, STATE_VARIABLE_DetInfo_45);
      NumSolns_39 = (MR_Integer) 3;
    }
    else
    {
      NumSolns_39 = NumSolns0_28;
      *STATE_VARIABLE_DetInfo_45 = STATE_VARIABLE_DetInfo_1_92;
    }
    parse_tree__prog_data__determinism_components_3_p_1(Detism_19, CanFail_27, NumSolns_39);
    switch (CanFail_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_40;
          MR_Word FailingContext_41;
          MR_Word Var_128;

          Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
          {
            Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_128, 1) = ((MR_Box) (PredId_13));
            MR_hl_field(3, Var_128, 2) = ((MR_Box) (ProcId_14));
          }
          {
            FailingContext_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FailingContext_41, 0) = ((MR_Box) (Context_40));
            MR_hl_field(0, FailingContext_41, 1) = ((MR_Box) (Var_128));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalFailingContexts_20 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_41));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static MR_String MR_CALL 
check_hlds__det_infer_goal__promise_solutions_kind_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "promise_equivalent_solution_sets";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "arbitrary";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "promise_equivalent_solutions";
      break;
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_generic_call_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Msg_8;

  conv0_Msg_8 = check_hlds__det_infer_goal__failing_context_description_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Msg_8));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_generic_call_9_p_0(
  MR_Word SolnContext_10,
  MR_Word GoalInfo_11,
  MR_Word GenericCall_12,
  MR_Word CallDetism_13,
  MR_Word * Detism_14,
  MR_Word RightFailingContexts_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28)
{
  MR_bool succeeded;
  MR_Word CanFail_18;
  MR_Word NumSolns_19;
  MR_Word Context_20;

  parse_tree__prog_data__determinism_components_3_p_0(CallDetism_13, &CanFail_18, &NumSolns_19);
  Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
  succeeded = (NumSolns_19 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (SolnContext_10 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word VarTable_21;
    MR_Word FirstPieces_22;
    MR_Word ModuleInfo_23;
    MR_Word ContextMsgs_24;
    MR_Word Spec_25;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_61;

    check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_27, &VarTable_21);
    Var_37 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(CallDetism_13);
    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[28])));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[27])));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[26])));
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
    FirstPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_39);
    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_27, &ModuleInfo_23);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_4[0]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_generic_call_9_p_0_1));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (ModuleInfo_23));
      MR_hl_field(0, Var_61, 4) = ((MR_Box) (VarTable_21));
    }
    ContextMsgs_24 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_61, RightFailingContexts_15);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (Context_20));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (FirstPieces_22));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (ContextMsgs_24));
    }
    {
      Spec_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_generic_call\'/9"));
      MR_hl_field(2, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(2, Spec_25, 3) = ((MR_Box) (Var_54));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_25, STATE_VARIABLE_DetInfo_0_27, STATE_VARIABLE_DetInfo_28);
    parse_tree__prog_data__determinism_components_3_p_1(Detism_14, CanFail_18, (MR_Integer) 3);
  }
  else
  {
    *Detism_14 = CallDetism_13;
    *STATE_VARIABLE_DetInfo_28 = STATE_VARIABLE_DetInfo_0_27;
  }
  switch (CanFail_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FailingContext_26;
        MR_Word Var_58;

        {
          Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_58, 1) = ((MR_Box) (GenericCall_12));
        }
        {
          FailingContext_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FailingContext_26, 0) = ((MR_Box) (Context_20));
          MR_hl_field(0, FailingContext_26, 1) = ((MR_Box) (Var_58));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_26));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_16 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static MR_Box MR_CALL 
check_hlds__det_infer_goal__det_infer_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Msg_8;

  conv0_Msg_8 = check_hlds__det_infer_goal__failing_context_description_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Msg_8));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_call_11_p_0(
  MR_Word SolnContext_12,
  MR_Word GoalInfo_13,
  MR_Word PredId_14,
  MR_Word ArgVars_15,
  MR_Word * Detism_16,
  MR_Word RightFailingContexts_17,
  MR_Word * GoalFailingContexts_18,
  MR_Integer ProcId0_19,
  MR_Integer * ProcId_20,
  MR_Word STATE_VARIABLE_DetInfo_0_36,
  MR_Word * STATE_VARIABLE_DetInfo_37)
{
  MR_bool succeeded;
  MR_Word CalleePredInfo_22;
  MR_Word Detism0_23;
  MR_Word CanFail_24;
  MR_Word NumSolns_25;
  MR_Word STATE_VARIABLE_DetInfo_1_38;

  check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(STATE_VARIABLE_DetInfo_0_36, PredId_14, ProcId0_19, &CalleePredInfo_22, &Detism0_23);
  succeeded = check_hlds__simplify__opt_format_call__is_format_call_2_p_0(CalleePredInfo_22, ArgVars_15);
  if (succeeded)
    check_hlds__det_util__det_info_set_has_format_call_2_p_0(STATE_VARIABLE_DetInfo_0_36, &STATE_VARIABLE_DetInfo_1_38);
  else
    STATE_VARIABLE_DetInfo_1_38 = STATE_VARIABLE_DetInfo_0_36;
  parse_tree__prog_data__determinism_components_3_p_0(Detism0_23, &CanFail_24, &NumSolns_25);
  succeeded = (NumSolns_25 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (SolnContext_12 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer ProcIdPrime_26;
    MR_Word ModuleInfo_79;
    MR_Word PredInfo_80;
    MR_Word ProcTable_81;
    MR_Word ProcIdsInfos_82;

    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_1_38, &ModuleInfo_79);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_79, PredId_14, &PredInfo_80);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_80, &ProcTable_81);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_81, &ProcIdsInfos_82);
    succeeded = check_hlds__det_infer_goal__det_find_matching_non_cc_mode_procs_5_p_0(ModuleInfo_79, PredInfo_80, ProcIdsInfos_82, ProcId0_19, &ProcIdPrime_26);
    if (succeeded)
    {
      *ProcId_20 = ProcIdPrime_26;
      parse_tree__prog_data__determinism_components_3_p_1(Detism_16, CanFail_24, (MR_Integer) 3);
      *STATE_VARIABLE_DetInfo_37 = STATE_VARIABLE_DetInfo_1_38;
    }
    else
    {
      MR_Word ModuleInfo_27;
      MR_Word GoalContext_28;
      MR_Word VarTable_29;
      MR_Word PredPieces_30;
      MR_Word FirstPieces_31;
      MR_Word ContextMsgs_32;
      MR_Word Spec_33;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_String Var_55;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_85;

      check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_1_38, &ModuleInfo_27);
      GoalContext_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
      check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_1_38, &VarTable_29);
      PredPieces_30 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_27, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_14);
      Var_55 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Detism0_23);
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[22])));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
      }
      Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[26])));
      Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_57);
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_30, Var_49);
      FirstPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[21])), Var_48);
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_85, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_4[0]));
        MR_hl_field(0, Var_85, 1) = ((MR_Box) (check_hlds__det_infer_goal__det_infer_call_11_p_0_1));
        MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_85, 3) = ((MR_Box) (ModuleInfo_27));
        MR_hl_field(0, Var_85, 4) = ((MR_Box) (VarTable_29));
      }
      ContextMsgs_32 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_85, RightFailingContexts_17);
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_73, 0) = ((MR_Box) (GoalContext_28));
        MR_hl_field(0, Var_73, 1) = ((MR_Box) (FirstPieces_31));
      }
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) (ContextMsgs_32));
      }
      {
        Spec_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_infer_call\'/11"));
        MR_hl_field(2, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(2, Spec_33, 3) = ((MR_Box) (Var_72));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_33, STATE_VARIABLE_DetInfo_1_38, STATE_VARIABLE_DetInfo_37);
      *ProcId_20 = ProcId0_19;
      parse_tree__prog_data__determinism_components_3_p_1(Detism_16, CanFail_24, (MR_Integer) 3);
    }
  }
  else
  {
    *ProcId_20 = ProcId0_19;
    *Detism_16 = Detism0_23;
    *STATE_VARIABLE_DetInfo_37 = STATE_VARIABLE_DetInfo_1_38;
  }
  switch (CanFail_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_34;
        MR_Word FailingContext_35;
        MR_Word Var_76;

        Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (PredId_14));
          MR_hl_field(3, Var_76, 2) = ((MR_Box) (*ProcId_20));
        }
        {
          FailingContext_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FailingContext_35, 0) = ((MR_Box) (Context_34));
          MR_hl_field(0, FailingContext_35, 1) = ((MR_Box) (Var_76));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_35));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_18 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadVar__3_3,
  MR_Integer CcProcId_11,
  MR_Integer * NonCcProcId_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer ProcId_8;
    MR_Word ProcInfo_9;
    MR_Word ProcIdsInfos_10;
    MR_Word Var_16;
    MR_Word Detism_13;
    MR_Word MaxSoln_15;
    MR_Word _CanFail_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      ProcIdsInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      ProcId_8 = ((MR_Integer) ((MR_hl_field(0, Var_16, 0))));
      ProcInfo_9 = ((MR_Word) ((MR_hl_field(0, Var_16, 1))));
      succeeded = (ProcId_8 != CcProcId_11);
      if (succeeded)
      {
        hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_9, &Detism_13);
        parse_tree__prog_data__determinism_components_3_p_0(Detism_13, &_CanFail_14, &MaxSoln_15);
        succeeded = (MaxSoln_15 == (MR_Integer) 3);
        if (succeeded)
          succeeded = check_hlds__mode_comparison__modes_are_identical_bar_cc_4_p_0(ModuleInfo_6, PredInfo_7, CcProcId_11, ProcId_8);
      }
      if (succeeded)
      {
        *NonCcProcId_12 = ProcId_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = ProcIdsInfos_10;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_unify_canfail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 4))) >> 1)) & (MR_Integer) 1);
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_infer_unify_examines_rep_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_infer_goal__det_check_for_noncanonical_type_11_p_0(
  MR_Word Var_12,
  MR_Word ExaminesRepresentation_13,
  MR_Word CanFail_14,
  MR_Word SolnContext_15,
  MR_Word FailingContextsA_16,
  MR_Word FailingContextsB_17,
  MR_Word GoalInfo_18,
  MR_Word GoalContext_19,
  MR_Word * NumSolns_20,
  MR_Word STATE_VARIABLE_DetInfo_0_35,
  MR_Word * STATE_VARIABLE_DetInfo_36)
{
  MR_bool succeeded = (ExaminesRepresentation_13 == (MR_Integer) 1);
  MR_Word VarTable_22;
  MR_Word Type_23;

  if (succeeded)
  {
    check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_35, &VarTable_22);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, Var_12, &Type_23);
    succeeded = check_hlds__det_infer_goal__det_type_has_user_defined_equality_pred_2_p_0(STATE_VARIABLE_DetInfo_0_35, Type_23);
  }
  if (succeeded)
  {
    switch (CanFail_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_24;
          MR_Word Pieces0_26;
          MR_Word Pieces1_29;
          MR_Word VerbosePieces_30;
          MR_Word Spec_31;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_90;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;

          Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
          if ((GoalContext_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word VarPiece_25;
            MR_Word Var_39;

            VarPiece_25 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_22, Var_12);
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (VarPiece_25));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[111])));
            }
            {
              Pieces0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces0_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[110])));
              MR_hl_field(1, Pieces0_26, 1) = ((MR_Box) (Var_39));
            }
          }
          else
          {
            MR_Word UnifyContext_27 = (MR_Word) (MR_body((MR_Word) (GoalContext_19), (MR_Integer) 1));
            MR_Word _LastContextWord_28;

            hlds__hlds_error_util__unify_context_to_pieces_4_p_0(UnifyContext_27, &_LastContextWord_28, (MR_Word) ((MR_Unsigned) 0U), &Pieces0_26);
          }
          {
            Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 30U));
            MR_hl_field(3, Var_59, 1) = ((MR_Box) (Type_23));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[113])));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
          }
          Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
          Var_67 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[115])));
          Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
          Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[36])), Var_66);
          Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_61);
          Pieces1_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[112])), Var_53);
          Var_75 = check_hlds__det_infer_goal__noncanon_unify_verbose_preamble_0_f_0();
          Var_90 = check_hlds__det_infer_goal__noncanon_unify_verbose_would_require_0_f_0();
          Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[123])), Var_90);
          VerbosePieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_76);
          Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_26, Pieces1_29);
          {
            Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
          }
          {
            Var_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_100, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, Var_100, 1) = ((MR_Box) (VerbosePieces_30));
          }
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
            MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
          }
          {
            Var_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_95, 0) = ((MR_Box) (Context_24));
            MR_hl_field(2, Var_95, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_check_for_noncanonical_type\'/11"));
            MR_hl_field(2, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(2, Spec_31, 3) = ((MR_Box) (Var_94));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_31, STATE_VARIABLE_DetInfo_0_35, STATE_VARIABLE_DetInfo_36);
        }
        break;
      case (MR_Integer) 1:
        switch (SolnContext_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleInfo_33;
              MR_Word ContextMsgs_34;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_130;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_159;
              MR_Word Var_160;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_169;
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word Context_183;
              MR_Word Pieces0_185;
              MR_Word Pieces1_188;
              MR_Word VerbosePieces_189;
              MR_Word Spec_190;

              Context_183 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              if ((GoalContext_19 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_107;
                MR_Word VarPiece_176;

                VarPiece_176 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_22, Var_12);
                {
                  Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_107, 0) = ((MR_Box) (VarPiece_176));
                  MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[111])));
                }
                {
                  Pieces0_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces0_185, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[110])));
                  MR_hl_field(1, Pieces0_185, 1) = ((MR_Box) (Var_107));
                }
              }
              else
              {
                MR_Word UnifyContext_178 = (MR_Word) (MR_body((MR_Word) (GoalContext_19), (MR_Integer) 1));
                MR_Word Var_32;
                MR_Word _LastContextWord_177;

                hlds__hlds_error_util__unify_context_first_to_pieces_6_p_0((MR_Integer) 0, &Var_32, UnifyContext_178, &_LastContextWord_177, (MR_Word) ((MR_Unsigned) 0U), &Pieces0_185);
              }
              {
                Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 30U));
                MR_hl_field(3, Var_128, 1) = ((MR_Box) (Type_23));
              }
              {
                Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
                MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_infer_goal_scalar_common_1[113])));
                MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
              }
              Var_123 = parse_tree__error_spec__color_as_subject_1_f_0(Var_124);
              Var_136 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[127])));
              Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
              Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[125])), Var_135);
              Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_130);
              Pieces1_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[112])), Var_122);
              Var_144 = check_hlds__det_infer_goal__noncanon_unify_verbose_preamble_0_f_0();
              Var_159 = check_hlds__det_infer_goal__noncanon_unify_verbose_would_require_0_f_0();
              Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[132])), Var_159);
              VerbosePieces_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_144, Var_145);
              check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_35, &ModuleInfo_33);
              Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), FailingContextsA_16, FailingContextsB_17);
              ContextMsgs_34 = check_hlds__det_infer_goal__failing_contexts_description_3_f_0(ModuleInfo_33, VarTable_22, Var_160);
              Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_185, Pieces1_188);
              {
                Var_168 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_168, 0) = ((MR_Box) (Var_169));
              }
              {
                Var_171 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_171, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(2, Var_171, 1) = ((MR_Box) (VerbosePieces_189));
              }
              {
                Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
                MR_hl_field(1, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_167, 0) = ((MR_Box) (Var_168));
                MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_170));
              }
              {
                Var_166 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_166, 0) = ((MR_Box) (Context_183));
                MR_hl_field(2, Var_166, 1) = ((MR_Box) (Var_167));
              }
              {
                Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
                MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_165, ContextMsgs_34);
              {
                Spec_190 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_190, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_check_for_noncanonical_type\'/11"));
                MR_hl_field(2, Spec_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, Spec_190, 2) = ((MR_Box) ((MR_Unsigned) 68U));
                MR_hl_field(2, Spec_190, 3) = ((MR_Box) (Var_164));
              }
              check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_190, STATE_VARIABLE_DetInfo_0_35, STATE_VARIABLE_DetInfo_36);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DetInfo_36 = STATE_VARIABLE_DetInfo_0_35;
            break;
        }
        break;
    }
    switch (SolnContext_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *NumSolns_20 = (MR_Integer) 3;
        break;
      case (MR_Integer) 1:
        *NumSolns_20 = (MR_Integer) 2;
        break;
    }
  }
  else
  {
    *NumSolns_20 = (MR_Integer) 1;
    *STATE_VARIABLE_DetInfo_36 = STATE_VARIABLE_DetInfo_0_35;
  }
}

static MR_Box MR_CALL 
check_hlds__det_infer_goal__failing_contexts_description_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Msg_8;

  conv0_Msg_8 = check_hlds__det_infer_goal__failing_context_description_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Msg_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__det_infer_goal__failing_contexts_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word FailingContexts_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&check_hlds__det_infer_goal_scalar_common_4[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (check_hlds__det_infer_goal__failing_contexts_description_3_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_8, 4) = ((MR_Box) (VarTable_6));
  }
  HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_8, FailingContexts_7);
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
check_hlds__det_infer_goal__noncanon_unify_verbose_would_require_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[144]));
}

static MR_Word MR_CALL 
check_hlds__det_infer_goal__noncanon_unify_verbose_preamble_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[138]));
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word DetInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_5;
  MR_Word Var_6;

  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_3, &ModuleInfo_5);
  succeeded = hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_4, &Var_6);
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal__det_check_lambda_7_p_0(
  MR_Word DeclaredDetism_8,
  MR_Word InferredDetism_9,
  MR_Word Goal_10,
  MR_Word GoalInfo_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_DetInfo_0_26,
  MR_Word * STATE_VARIABLE_DetInfo_27)
{
  MR_Word Cmp_14;

  parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_8, InferredDetism_9, &Cmp_14);
  switch (Cmp_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 0:
      {
        MR_Word PredProcId_15;
        MR_Word Context_16;
        MR_Word ModuleInfo_17;
        MR_Word ProcColonPieces_18;
        MR_String DeclaredStr_19;
        MR_String InferredStr_20;
        MR_Word DeclaredPieces_21;
        MR_Word InferredPieces_22;
        MR_Word Pieces_23;
        MR_Word GoalMsgs_24;
        MR_Word Spec_25;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_62;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_73;
        MR_Word STATE_VARIABLE_DetInfo_1_77;
        MR_Word Var_81;
        MR_Word Var_82;

        check_hlds__det_util__det_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_DetInfo_0_26, &PredProcId_15);
        Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_26, &ModuleInfo_17);
        ProcColonPieces_18 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_17, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_2[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[5])), PredProcId_15);
        DeclaredStr_19 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_8);
        InferredStr_20 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(InferredDetism_9);
        {
          Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (DeclaredStr_19));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[7])));
        }
        DeclaredPieces_21 = parse_tree__error_spec__color_as_correct_1_f_0(Var_36);
        {
          Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_43, 1) = ((MR_Box) (InferredStr_20));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[9])));
        }
        InferredPieces_22 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_42);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InferredPieces_22, (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[12])));
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[19])), Var_73);
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DeclaredPieces_21, Var_68);
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[17])), Var_67);
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[15])), Var_62);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcColonPieces_18, Var_53);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_infer_goal_scalar_common_1[11])), Var_52);
        check_hlds__det_check_goal__det_diagnose_goal_get_msgs_6_p_0(InstMap0_12, DeclaredDetism_8, Goal_10, &GoalMsgs_24, STATE_VARIABLE_DetInfo_0_26, &STATE_VARIABLE_DetInfo_1_77);
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_82, 0) = ((MR_Box) (Context_16));
          MR_hl_field(0, Var_82, 1) = ((MR_Box) (Pieces_23));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) (GoalMsgs_24));
        }
        {
          Spec_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_infer_goal.det_check_lambda\'/7"));
          MR_hl_field(2, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 68U));
          MR_hl_field(2, Spec_25, 3) = ((MR_Box) (Var_81));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_25, STATE_VARIABLE_DetInfo_1_77, STATE_VARIABLE_DetInfo_27);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_DetInfo_27 = STATE_VARIABLE_DetInfo_0_26;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_DetInfo_27 = STATE_VARIABLE_DetInfo_0_26;
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal__some_goal_is_at_most_many_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ConjGoal_2;
    MR_Word ConjGoals_3;
    MR_Word ConjGoalInfo_5;
    MR_Word ConjGoalDetism_6;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ConjGoal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      ConjGoals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      ConjGoalInfo_5 = ((MR_Word) ((MR_hl_field(0, ConjGoal_2, 1))));
      ConjGoalDetism_6 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ConjGoalInfo_5);
      Var_8 = (MR_Integer) 3;
      parse_tree__prog_data__determinism_components_3_p_0(ConjGoalDetism_6, &Var_7, &Var_9);
      succeeded = (Var_8 == Var_9);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = ConjGoals_3;

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

void MR_CALL 
check_hlds__det_infer_goal__det_get_soln_context_2_p_0(
  MR_Word DeclaredDetism_3,
  MR_Word * SolnContext_4)
{
  MR_Word SolnCount_6;
  MR_Word Var_5;

  parse_tree__prog_data__determinism_components_3_p_0(DeclaredDetism_3, &Var_5, &SolnCount_6);
  *SolnContext_4 = ((&check_hlds__det_infer_goal_vector_common_3[0 + SolnCount_6]))->check_hlds__det_infer_goal__vector_common_type_3_0__vct_3_f_0;
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____cc_unify_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_infer_goal____Unify____cc_unify_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____cc_unify_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_infer_goal____Compare____cc_unify_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_infer_goal____Unify____failing_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_infer_goal____Compare____failing_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____failing_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_infer_goal____Unify____failing_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____failing_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_infer_goal____Compare____failing_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____pess_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_infer_goal____Unify____pess_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____pess_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_infer_goal____Compare____pess_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_infer_goal____Unify____soln_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_infer_goal____Unify____soln_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_infer_goal____Compare____soln_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_infer_goal____Compare____soln_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__det_infer_goal__init(void)
{
}

void mercury__check_hlds__det_infer_goal__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_cc_unify_context_0);
  MR_register_type_ctor_info(&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_context_0);
  MR_register_type_ctor_info(&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_failing_goal_0);
  MR_register_type_ctor_info(&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_pess_info_0);
  MR_register_type_ctor_info(&check_hlds__det_infer_goal__check_hlds__det_infer_goal__type_ctor_info_soln_context_0);
}

void mercury__check_hlds__det_infer_goal__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_infer_goal__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_infer_goal.
