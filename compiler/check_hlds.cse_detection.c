/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version rotd-2026-07-26
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


// :- module check_hlds.cse_detection.
// :- implementation.

/*
INIT mercury__check_hlds__cse_detection__init
ENDINIT
*/

#include "check_hlds.cse_detection.mih"


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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.find_bind_var.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.switch_detection.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_classify.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[5];

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[5];

static const MR_DuArgLocn check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1];

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[4];

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[4];

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1;

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2;

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1];

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2];

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3];

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0;

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1;

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_ordinal_ordered_may_pull_cons_id_0[2];

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0[2];

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0[2];

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
  MR_Word RttiVarMaps_7,
  MR_Word LaterOldNewMap_8,
  MR_Word NewTvarMap_9,
  MR_Word Tvar_10,
  MR_Word STATE_VARIABLE_Renaming_0_17,
  MR_Word * STATE_VARIABLE_Renaming_18);

static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word FirstOldNewMap_7,
  MR_Word Tvar_8,
  MR_Word STATE_VARIABLE_NewTvarMap_0_14,
  MR_Word * STATE_VARIABLE_NewTvarMap_15);

static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_CseState_0_22,
  MR_Word * STATE_VARIABLE_CseState_23,
  MR_Word STATE_VARIABLE_CseInfo_0_24,
  MR_Word * STATE_VARIABLE_CseInfo_25);

static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word UnifyContext_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_4_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_6_p_0(
  MR_Word MaybeProgressStream_7,
  MR_Unsigned PassNum_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35);

static void MR_CALL 
check_hlds__cse_detection__print_very_verbose_msg_for_pred_7_p_0(
  MR_Word MaybeProgressStream_8,
  MR_Word VeryVerbose_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_String Msg_12);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Redo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcInfo_33);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0(
  MR_Word InstMap0_11,
  MR_Word QVars_12,
  MR_Word Cond0_13,
  MR_Word Then0_14,
  MR_Word Else0_15,
  MR_Word GoalInfo_16,
  MR_Word Vars_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_CseInfo_0_36,
  MR_Word * STATE_VARIABLE_CseInfo_37);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_loop_over_vars_9_p_0(
  MR_Word InstMap0_10,
  MR_Word SwitchVar_11,
  MR_Word CanFail_12,
  MR_Word Cases0_13,
  MR_Word GoalInfo_14,
  MR_Word Vars_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_CseInfo_0_29,
  MR_Word * STATE_VARIABLE_CseInfo_30);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_loop_over_vars_7_p_0(
  MR_Word InstMap0_8,
  MR_Word Goals0_9,
  MR_Word GoalInfo0_10,
  MR_Word Vars_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_CseInfo_0_23,
  MR_Word * STATE_VARIABLE_CseInfo_24);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_case_arms_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_5_p_0(
  MR_Word InstMap0_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_CseInfo_0_110,
  MR_Word * STATE_VARIABLE_CseInfo_111);

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(
  MR_Word InstMap0_7,
  MR_Word * InstMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_CseInfo_0_15,
  MR_Word * STATE_VARIABLE_CseInfo_16);

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseState_0_3,
  MR_Word * STATE_VARIABLE_CseState_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word UnifyGoal_6,
  MR_Word FirstOldNew_7,
  MR_Word LaterOldNew_8,
  MR_Word STATE_VARIABLE_CseInfo_0_26,
  MR_Word * STATE_VARIABLE_CseInfo_27);

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_branch_goals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_branch_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CseState_0_4,
  MR_Word * STATE_VARIABLE_CseState_5,
  MR_Word STATE_VARIABLE_CseInfo_0_6,
  MR_Word * STATE_VARIABLE_CseInfo_7);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][11];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_branch_goals_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0),
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__list__ti_list_1term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[5] = {
  (MR_String) "csei_module_info",
  (MR_String) "csei_var_table",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_redo",
  (MR_String) "csei_nopull_contexts"
};

static const MR_DuArgLocn check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 = {
  (MR_String) "cse_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_locns_cse_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = { &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 };

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1] = { &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 };

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_info_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_info_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_info",
  { check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0 },
  { check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0,

};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0 = {
  (MR_String) "before_candidate",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[4] = {
  (MR_String) "hc_goal",
  (MR_String) "hc_cons_id",
  (MR_String) "hc_first_old_new",
  (MR_String) "hc_later_old_new"
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1 = {
  (MR_String) "have_candidate",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2 = {
  (MR_String) "multiple_candidates",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1] = { &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1 };

static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_state_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_state_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_state",
  { check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0 },
  { check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0,

};

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0 = {
  (MR_String) "may_pull_cons_id",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1 = {
  (MR_String) "may_not_pull_cons_id",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_ordinal_ordered_may_pull_cons_id_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__enum_functor_desc_may_pull_cons_id_0_0
};

static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_may_pull_cons_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "may_pull_cons_id",
  { check_hlds__cse_detection__check_hlds__cse_detection__enum_name_ordered_may_pull_cons_id_0 },
  { check_hlds__cse_detection__check_hlds__cse_detection__enum_ordinal_ordered_may_pull_cons_id_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_may_pull_cons_id_0,

};

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(
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
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
              MR_Word SubResult1_6;

              hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                {
                  MR_Word SubResult3_12;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
                  succeeded = (SubResult3_12 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                }
              }
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_17_17;
          MR_Word TypeInfo_18_18;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_Word ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                TypeInfo_17_17 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                {
                  TypeInfo_18_18 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
  MR_Word RttiVarMaps_7,
  MR_Word LaterOldNewMap_8,
  MR_Word NewTvarMap_9,
  MR_Word Tvar_10,
  MR_Word STATE_VARIABLE_Renaming_0_17,
  MR_Word * STATE_VARIABLE_Renaming_18)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn0_12;
  MR_Word Old_13;
  MR_Word New_14;
  MR_Box conv0_New_14;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_7, Tvar_10, &TypeInfoLocn0_12);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(TypeInfoLocn0_12, &Old_13);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), LaterOldNewMap_8, ((MR_Box) (Old_13)), &conv0_New_14);
  if (succeeded)
  {
    New_14 = ((MR_Word) (conv0_New_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeInfoLocn_15;
    MR_Word NewTvar_16;
    MR_Box conv1_NewTvar_16;

    hlds__hlds_rtti__type_info_locn_set_var_3_p_0(New_14, TypeInfoLocn0_12, &TypeInfoLocn_15);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), NewTvarMap_9, ((MR_Box) (TypeInfoLocn_15)), &conv1_NewTvar_16);
    NewTvar_16 = ((MR_Word) (conv1_NewTvar_16));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), ((MR_Box) (NewTvar_16)), ((MR_Box) (Tvar_10)));
    if (succeeded)
      *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), ((MR_Box) (Tvar_10)), ((MR_Box) (NewTvar_16)), STATE_VARIABLE_Renaming_0_17, STATE_VARIABLE_Renaming_18);
  }
  else
    *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
}

static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word FirstOldNewMap_7,
  MR_Word Tvar_8,
  MR_Word STATE_VARIABLE_NewTvarMap_0_14,
  MR_Word * STATE_VARIABLE_NewTvarMap_15)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn0_10;
  MR_Word Old_11;
  MR_Word New_12;
  MR_Box conv0_New_12;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_6, Tvar_8, &TypeInfoLocn0_10);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(TypeInfoLocn0_10, &Old_11);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), FirstOldNewMap_7, ((MR_Box) (Old_11)), &conv0_New_12);
  if (succeeded)
  {
    New_12 = ((MR_Word) (conv0_New_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeInfoLocn_13;

    hlds__hlds_rtti__type_info_locn_set_var_3_p_0(New_12, TypeInfoLocn0_10, &TypeInfoLocn_13);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), ((MR_Box) (TypeInfoLocn_13)), ((MR_Box) (Tvar_8)), STATE_VARIABLE_NewTvarMap_0_14, STATE_VARIABLE_NewTvarMap_15);
  }
  else
    *STATE_VARIABLE_NewTvarMap_15 = STATE_VARIABLE_NewTvarMap_0_14;
}

static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_CseState_0_22,
  MR_Word * STATE_VARIABLE_CseState_23,
  MR_Word STATE_VARIABLE_CseInfo_0_24,
  MR_Word * STATE_VARIABLE_CseInfo_25)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_CseState_0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_CseState_0_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ConsId_15;
            MR_Word OldNewVars_16;
            MR_Word HoistedGoal_17;
            MR_Word RHS_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 1))));
            MR_Word UnifyMode_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 2))));
            MR_Word Unification0_43 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 3))));
            MR_Word UnifyContext_44 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 4))));
            MR_Word ArgVars_46;
            MR_Word Submodes_47;
            MR_Word Unification_50;
            MR_Word GoalExpr1_54;
            MR_Word GoalInfo1_63;
            MR_Word Context_64;
            MR_Word Subn_65;
            MR_Word Var_69;
            MR_Unsigned packed_word_0;

            ConsId_15 = ((MR_Word) ((MR_hl_field(1, Unification0_43, 1))));
            ArgVars_46 = ((MR_Word) ((MR_hl_field(1, Unification0_43, 2))));
            Submodes_47 = ((MR_Word) ((MR_hl_field(1, Unification0_43, 3))));
            packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, Unification0_43, 4)));
            {
              Unification_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Unification_50, 0) = ((MR_Box) (Var_9));
              MR_hl_field(1, Unification_50, 1) = ((MR_Box) (ConsId_15));
              MR_hl_field(1, Unification_50, 2) = ((MR_Box) (ArgVars_46));
              MR_hl_field(1, Unification_50, 3) = ((MR_Box) (Submodes_47));
              MR_hl_field(1, Unification_50, 4) = (MR_Box) (packed_word_0);
            }
            switch (MR_tag((MR_Word) RHS_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/9", (MR_String) "non-functor unify");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  GoalExpr1_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, GoalExpr1_54, 0) = ((MR_Box) (Var_9));
                  MR_hl_field(1, GoalExpr1_54, 1) = ((MR_Box) (RHS_41));
                  MR_hl_field(1, GoalExpr1_54, 2) = ((MR_Box) (UnifyMode_42));
                  MR_hl_field(1, GoalExpr1_54, 3) = ((MR_Box) (Unification_50));
                  MR_hl_field(1, GoalExpr1_54, 4) = ((MR_Box) (UnifyContext_44));
                }
                break;
            }
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 28, GoalInfo0_11, &GoalInfo1_63);
            Context_64 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo1_63);
            check_hlds__cse_detection__create_new_arg_vars_7_p_0(ArgVars_46, Context_64, UnifyContext_44, STATE_VARIABLE_CseInfo_0_24, STATE_VARIABLE_CseInfo_25, &OldNewVars_16, Goals_12);
            mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), OldNewVars_16, &Subn_65);
            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_69, 0) = ((MR_Box) (GoalExpr1_54));
              MR_hl_field(0, Var_69, 1) = ((MR_Box) (GoalInfo1_63));
            }
            hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subn_65, Var_69, &HoistedGoal_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_CseState_23 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HoistedGoal_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (ConsId_15));
              MR_hl_field(1, base, 2) = ((MR_Box) (OldNewVars_16));
              MR_hl_field(1, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_33;

            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_33, 0) = ((MR_Box) (GoalExpr0_10));
              MR_hl_field(0, Var_33, 1) = ((MR_Box) (GoalInfo0_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Goals_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_CseState_23 = (MR_Word) ((MR_Unsigned) 4U);
            *STATE_VARIABLE_CseInfo_25 = STATE_VARIABLE_CseInfo_0_24;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FirstOldNewVars_18 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_22, 2))));
        MR_Word LaterOldNewVars0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_22, 3))));
        MR_Word ConsId_37 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_22, 1))));
        MR_Word HoistedGoal_39 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CseState_0_22, 0))));
        MR_Word Goals0_20;
        MR_Word OldNewVars_36;
        MR_Word OC_75;
        MR_Word HoistedFunctor_78;
        MR_Word HoistedVars_79;
        MR_Word HoistedUnifyInfo_74;
        MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, HoistedGoal_39, 0))));

        succeeded = ((MR_tag((MR_Word) Var_97)) == (MR_Integer) 1);
        if (succeeded)
        {
          HoistedUnifyInfo_74 = ((MR_Word) ((MR_hl_field(1, Var_97, 3))));
          OC_75 = ((MR_Word) ((MR_hl_field(1, Var_97, 4))));
          succeeded = ((MR_tag((MR_Word) HoistedUnifyInfo_74)) == (MR_Integer) 1);
          if (succeeded)
          {
            HoistedFunctor_78 = ((MR_Word) ((MR_hl_field(1, HoistedUnifyInfo_74, 1))));
            HoistedVars_79 = ((MR_Word) ((MR_hl_field(1, HoistedUnifyInfo_74, 2))));
          }
        }
        if (succeeded)
        {
          MR_Word TypeInfo_40_100;
          MR_Word OldUnification_86 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 3))));
          MR_Word OldFunctor_89 = ((MR_Word) ((MR_hl_field(1, OldUnification_86, 1))));
          MR_Word OldVars_90 = ((MR_Word) ((MR_hl_field(1, OldUnification_86, 2))));
          MR_Integer HoistedVarsCount_94;
          MR_Integer OldVarsCount_95;
          MR_Word Context_96;

          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(HoistedFunctor_78, OldFunctor_89);
          if (succeeded)
          {
            TypeInfo_40_100 = (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]);
            mercury__list__length_2_p_0(TypeInfo_40_100, HoistedVars_79, &HoistedVarsCount_94);
            mercury__list__length_2_p_0(TypeInfo_40_100, OldVars_90, &OldVarsCount_95);
            succeeded = (HoistedVarsCount_94 == OldVarsCount_95);
            if (succeeded)
            {
              mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_40_100, TypeInfo_40_100, OldVars_90, HoistedVars_79, &OldNewVars_36);
              Context_96 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
              check_hlds__cse_detection__pair_subterms_4_p_0(OldNewVars_36, Context_96, OC_75, &Goals0_20);
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
            return;
          }
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word LaterOldNewVars_21;

          *Goals_12 = Goals0_20;
          {
            LaterOldNewVars_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LaterOldNewVars_21, 0) = ((MR_Box) (OldNewVars_36));
            MR_hl_field(1, LaterOldNewVars_21, 1) = ((MR_Box) (LaterOldNewVars0_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_CseState_23 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HoistedGoal_39));
            MR_hl_field(1, base, 1) = ((MR_Box) (ConsId_37));
            MR_hl_field(1, base, 2) = ((MR_Box) (FirstOldNewVars_18));
            MR_hl_field(1, base, 3) = ((MR_Box) (LaterOldNewVars_21));
          }
        }
        else
        {
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_30, 0) = ((MR_Box) (GoalExpr0_10));
            MR_hl_field(0, Var_30, 1) = ((MR_Box) (GoalInfo0_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Goals_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_CseState_23 = (MR_Word) ((MR_Unsigned) 4U);
        }
        *STATE_VARIABLE_CseInfo_25 = STATE_VARIABLE_CseInfo_0_24;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OldVar_7;
    MR_Word HoistedVar_8;
    MR_Word OldHoistedVars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Replacements1_13;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    OldVar_7 = ((MR_Word) ((MR_hl_field(0, Var_17, 0))));
    HoistedVar_8 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
    check_hlds__cse_detection__pair_subterms_4_p_0(OldHoistedVars_9, HeadVar__2_2, HeadVar__3_3, &Replacements1_13);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), ((MR_Box) (OldVar_7)), ((MR_Box) (HoistedVar_8)));
    if (succeeded)
      *HeadVar__4_4 = Replacements1_13;
    else
    {
      MR_Word MainCtxt_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_Word SubCtxt_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
      MR_Word Goal_16;
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (HoistedVar_8));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(OldVar_7, Var_18, HeadVar__2_2, MainCtxt_14, SubCtxt_15, &Goal_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (Replacements1_13));
      }
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word UnifyContext_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_5 = STATE_VARIABLE_CseInfo_0_4;
  }
  else
  {
    MR_Word HeadOldArgVar_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailOldArgVars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailReplacementGoals_20;
    MR_Word HeadReplacementGoal_21;
    MR_Word STATE_VARIABLE_CseInfo_1_25;
    MR_Word STATE_VARIABLE_OldNewVars_1_26;
    MR_Word VarTable0_27;
    MR_Word OldArgVarEntry_28;
    MR_String OldArgVarName_29;
    MR_Word OldArgVarType_30;
    MR_Word OldArgVarIsDummy_31;
    MR_Word ModuleInfo_32;
    MR_Word TypeCat_33;
    MR_String NewArgVarName_35;
    MR_Word NewArgVarEntry_36;
    MR_Word NewArgVar_37;
    MR_Word VarTable_38;
    MR_Word MainCtxt_39;
    MR_Word SubCtxt_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;

    check_hlds__cse_detection__create_new_arg_vars_7_p_0(TailOldArgVars_14, Context_2, UnifyContext_3, STATE_VARIABLE_CseInfo_0_4, &STATE_VARIABLE_CseInfo_1_25, &STATE_VARIABLE_OldNewVars_1_26, &TailReplacementGoals_20);
    VarTable0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_25, 1))));
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_27, HeadOldArgVar_13, &OldArgVarEntry_28);
    OldArgVarName_29 = ((MR_String) ((MR_hl_field(0, OldArgVarEntry_28, 0))));
    OldArgVarType_30 = ((MR_Word) ((MR_hl_field(0, OldArgVarEntry_28, 1))));
    OldArgVarIsDummy_31 = ((MR_Unsigned) ((MR_hl_field(0, OldArgVarEntry_28, 2))) & (MR_Integer) 1);
    ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_25, 0))));
    TypeCat_33 = hlds__type_classify__classify_type_2_f_0(ModuleInfo_32, OldArgVarType_30);
    succeeded = ((((MR_tag((MR_Word) TypeCat_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeCat_33, 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      succeeded = (strcmp(OldArgVarName_29, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
      NewArgVarName_35 = OldArgVarName_29;
    else
      NewArgVarName_35 = (MR_String) "";
    {
      NewArgVarEntry_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewArgVarEntry_36, 0) = ((MR_Box) (NewArgVarName_35));
      MR_hl_field(0, NewArgVarEntry_36, 1) = ((MR_Box) (OldArgVarType_30));
      MR_hl_field(0, NewArgVarEntry_36, 2) = (MR_Box) ((MR_Unsigned) (OldArgVarIsDummy_31));
    }
    parse_tree__var_table__add_var_entry_4_p_0(NewArgVarEntry_36, &NewArgVar_37, VarTable0_27, &VarTable_38);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (HeadOldArgVar_13));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (NewArgVar_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OldNewVars_1_26));
    }
    MainCtxt_39 = ((MR_Word) ((MR_hl_field(0, UnifyContext_3, 0))));
    SubCtxt_40 = ((MR_Word) ((MR_hl_field(0, UnifyContext_3, 1))));
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (NewArgVar_37));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(HeadOldArgVar_13, Var_42, Context_2, MainCtxt_39, SubCtxt_40, &HeadReplacementGoal_21);
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_25, 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_25, 2))));
    Var_54 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_25, 3))) & (MR_Integer) 1);
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_25, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CseInfo_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_38));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_54));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadReplacementGoal_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailReplacementGoals_20));
    }
  }
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_queued_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  check_hlds__cse_detection__detect_cse_in_proc_6_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Unsigned) 1U, PredId_5, ProcId_6, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
}

void MR_CALL 
check_hlds__cse_detection__detect_cse_in_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_Word PredIds_6;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &PredIds_6);
  check_hlds__cse_detection__detect_cse_in_preds_4_p_0(ProgressStream_4, PredIds_6, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_4_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredInfo_13;
      MR_Word STATE_VARIABLE_ModuleInfo_1_16;
      MR_Word ProcIds_17;
      MR_Word Globals_18;
      MR_Word VeryVerbose_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_10, &PredInfo_13);
      ProcIds_17 = hlds__hlds_pred__pred_info_will_codegen_proc_ids_1_f_0(PredInfo_13);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_3, &Globals_18);
      libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 132, &VeryVerbose_19);
      switch (VeryVerbose_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          if (!((ProcIds_17 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_String Var_28;

            Var_28 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_10);
            mercury__io__write_string_4_p_0(ProgressStream_1, (MR_String) "% Detecting common deconstructions for ");
            mercury__io__write_string_4_p_0(ProgressStream_1, Var_28);
            mercury__io__write_string_4_p_0(ProgressStream_1, (MR_String) "\n");
          }
          break;
      }
      check_hlds__cse_detection__detect_cse_in_procs_5_p_0(ProgressStream_1, PredId_10, ProcIds_17, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    else
    {
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (HeadVar__1_1));
      }
      check_hlds__cse_detection__detect_cse_in_proc_6_p_0(Var_18, (MR_Unsigned) 1U, HeadVar__2_2, ProcId_13, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_14;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_1_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_6_p_0(
  MR_Word MaybeProgressStream_7,
  MR_Unsigned PassNum_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word VeryVerbose_13;
    MR_Word PredInfo0_15;
    MR_Word ProcInfo0_16;
    MR_Word Redo_17;
    MR_Word ProcInfo1_18;
    MR_Word PredInfo1_19;
    MR_Word Statistics_20;
    MR_Word STATE_VARIABLE_ModuleInfo_1_41;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 132, &VeryVerbose_13);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_34, PredId_9, &PredInfo0_15);
    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_15, ProcId_10, &ProcInfo0_16);
    check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Redo_17, ProcInfo0_16, &ProcInfo1_18);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_10, ProcInfo1_18, PredInfo0_15, &PredInfo1_19);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_9, PredInfo1_19, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_1_41);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 688, &Statistics_20);
    if (!((MaybeProgressStream_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProgressStream_85 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_7, 0))));

      libs__file_util__maybe_report_stats_4_p_0(ProgressStream_85, Statistics_20);
    }
    switch (Redo_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_1_41;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcModeErrorMap0_21;
          MR_Word ModeSpecs_24;
          MR_Word ContainsErrors_25;
          MR_Word PredInfo2_29;
          MR_Word ProcInfo2_30;
          MR_Word SwitchDetectInfo_31;
          MR_Word ProcInfo_32;
          MR_Word PredInfo3_33;
          MR_Word STATE_VARIABLE_ModuleInfo_2_52;
          MR_Word STATE_VARIABLE_ModuleInfo_3_71;
          MR_Unsigned Var_80;
          MR_Word ProgressStream_86;
          MR_Word _ProcModeErrorMap_22;
          MR_Word _Changed_23;
          MR_Unsigned next_value_of_PassNum_8;
          MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_34;

          succeeded = (VeryVerbose_13 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (MaybeProgressStream_7 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              ProgressStream_86 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_7, 0))));
          }
          if (succeeded)
          {
            MR_String PredNameStr_87;

            PredNameStr_87 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_ModuleInfo_1_41, PredId_9);
            mercury__io__write_string_4_p_0(ProgressStream_86, (MR_String) "% ");
            mercury__io__write_string_4_p_0(ProgressStream_86, (MR_String) "Repeating mode check for");
            mercury__io__write_string_4_p_0(ProgressStream_86, (MR_String) " ");
            mercury__io__write_string_4_p_0(ProgressStream_86, PredNameStr_87);
            mercury__io__write_string_4_p_0(ProgressStream_86, (MR_String) "\n");
          }
          mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[0]), &ProcModeErrorMap0_21);
          check_hlds__modes__modecheck_proc_8_p_0(PredId_9, ProcId_10, STATE_VARIABLE_ModuleInfo_1_41, &STATE_VARIABLE_ModuleInfo_2_52, ProcModeErrorMap0_21, &_ProcModeErrorMap_22, &_Changed_23, &ModeSpecs_24);
          if (!((MaybeProgressStream_7 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_101 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_7, 0))));

            libs__file_util__maybe_report_stats_4_p_0(ProgressStream_101, Statistics_20);
          }
          ContainsErrors_25 = parse_tree__error_util__contains_errors_2_f_0(Globals_12, ModeSpecs_24);
          switch (ContainsErrors_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word DebugStream_28;

                if (!((MaybeProgressStream_7 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word ProgressStream_26 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_7, 0))));
                  MR_Word _DumpInfo_27;

                  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_26, STATE_VARIABLE_ModuleInfo_2_52, (MR_Integer) 46, (MR_String) "cse_repeat_modecheck", (MR_Word) ((MR_Unsigned) 0U), &_DumpInfo_27);
                }
                hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_2_52, &DebugStream_28);
                parse_tree__write_error_spec__write_diag_specs_5_p_0(DebugStream_28, Globals_12, ModeSpecs_24);
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/6", (MR_String) "mode check fails when repeated");
                  return;
                }
              }
              break;
          }
          check_hlds__cse_detection__print_very_verbose_msg_for_pred_7_p_0(MaybeProgressStream_7, VeryVerbose_13, STATE_VARIABLE_ModuleInfo_2_52, PredId_9, (MR_String) "Repeating switch detection for");
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_2_52, PredId_9, &PredInfo2_29);
          hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo2_29, ProcId_10, &ProcInfo2_30);
          SwitchDetectInfo_31 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(STATE_VARIABLE_ModuleInfo_2_52);
          check_hlds__switch_detection__detect_switches_in_proc_3_p_0(SwitchDetectInfo_31, ProcInfo2_30, &ProcInfo_32);
          hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_10, ProcInfo_32, PredInfo2_29, &PredInfo3_33);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_9, PredInfo3_33, STATE_VARIABLE_ModuleInfo_2_52, &STATE_VARIABLE_ModuleInfo_3_71);
          if (!((MaybeProgressStream_7 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_102 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_7, 0))));

            libs__file_util__maybe_report_stats_4_p_0(ProgressStream_102, Statistics_20);
          }
          check_hlds__cse_detection__print_very_verbose_msg_for_pred_7_p_0(MaybeProgressStream_7, VeryVerbose_13, STATE_VARIABLE_ModuleInfo_3_71, PredId_9, (MR_String) "Repeating common deconstruction detection for");
          Var_80 = (PassNum_8 + (MR_Unsigned) 1U);
          // direct tailcall eliminated
          ;
          next_value_of_PassNum_8 = Var_80;
          next_value_of_STATE_VARIABLE_ModuleInfo_0_34 = STATE_VARIABLE_ModuleInfo_3_71;
          PassNum_8 = next_value_of_PassNum_8;
          STATE_VARIABLE_ModuleInfo_0_34 = next_value_of_STATE_VARIABLE_ModuleInfo_0_34;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__print_very_verbose_msg_for_pred_7_p_0(
  MR_Word MaybeProgressStream_8,
  MR_Word VeryVerbose_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_String Msg_12)
{
  MR_bool succeeded = (VeryVerbose_9 == (MR_Integer) 1);
  MR_Word ProgressStream_14;

  if (succeeded)
  {
    succeeded = (MaybeProgressStream_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      ProgressStream_14 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_8, 0))));
  }
  if (succeeded)
  {
    MR_String PredNameStr_15;

    PredNameStr_15 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_10, PredId_11);
    mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "% ");
    mercury__io__write_string_4_p_0(ProgressStream_14, Msg_12);
    mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) " ");
    mercury__io__write_string_4_p_0(ProgressStream_14, PredNameStr_15);
    mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "\n");
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Redo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcInfo_33)
{
  MR_Word Goal0_8;
  MR_Word InstMap0_9;
  MR_Word VarTable0_10;
  MR_Word RttiVarMaps0_11;
  MR_Word CseInfo0_13;
  MR_Word Goal1_14;
  MR_Word CseInfo_15;
  MR_Word CseNoPullContexts_19;
  MR_Word NoPullContexts0_20;
  MR_Word NoPullContexts_21;
  MR_Word STATE_VARIABLE_ProcInfo_1_35;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &Goal0_8);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_0_32, &InstMap0_9);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &VarTable0_10);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &RttiVarMaps0_11);
  {
    CseInfo0_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CseInfo0_13, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, CseInfo0_13, 1) = ((MR_Box) (VarTable0_10));
    MR_hl_field(0, CseInfo0_13, 2) = ((MR_Box) (RttiVarMaps0_11));
    MR_hl_field(0, CseInfo0_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, CseInfo0_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_9, Goal0_8, &Goal1_14, CseInfo0_13, &CseInfo_15);
  *Redo_6 = ((MR_Unsigned) ((MR_hl_field(0, CseInfo_15, 3))) & (MR_Integer) 1);
  CseNoPullContexts_19 = ((MR_Word) ((MR_hl_field(0, CseInfo_15, 4))));
  hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(STATE_VARIABLE_ProcInfo_0_32, &NoPullContexts0_20);
  NoPullContexts_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), CseNoPullContexts_19, NoPullContexts0_20);
  hlds__hlds_pred__proc_info_set_cse_nopull_contexts_3_p_0(NoPullContexts_21, STATE_VARIABLE_ProcInfo_0_32, &STATE_VARIABLE_ProcInfo_1_35);
  switch (*Redo_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ProcInfo_33 = STATE_VARIABLE_ProcInfo_1_35;
      break;
    case (MR_Integer) 1:
      {
        MR_Word VarTable1_23 = ((MR_Word) ((MR_hl_field(0, CseInfo_15, 1))));
        MR_Word RttiVarMaps1_24 = ((MR_Word) ((MR_hl_field(0, CseInfo_15, 2))));
        MR_Word HeadVars_27;
        MR_Word Goal_29;
        MR_Word VarTable_30;
        MR_Word RttiVarMaps_31;
        MR_Word STATE_VARIABLE_ProcInfo_2_37;
        MR_Word STATE_VARIABLE_ProcInfo_3_38;
        MR_Word _Warnings_28;

        hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_1_35, &HeadVars_27);
        hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 0, HeadVars_27, &_Warnings_28, Goal1_14, &Goal_29, VarTable1_23, &VarTable_30, RttiVarMaps1_24, &RttiVarMaps_31);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_29, STATE_VARIABLE_ProcInfo_1_35, &STATE_VARIABLE_ProcInfo_2_37);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_30, STATE_VARIABLE_ProcInfo_2_37, &STATE_VARIABLE_ProcInfo_3_38);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_31, STATE_VARIABLE_ProcInfo_3_38, STATE_VARIABLE_ProcInfo_33);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Goals_12;
  MR_Word conv6_STATE_VARIABLE_CseState_23;
  MR_Word conv5_STATE_VARIABLE_CseInfo_25;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_Goals_12, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_CseState_23, ((MR_Word) (wrapper_arg_7)), &conv5_STATE_VARIABLE_CseInfo_25);
  *wrapper_arg_4 = ((MR_Box) (conv7_Goals_12));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_CseState_23));
  *wrapper_arg_8 = ((MR_Box) (conv5_STATE_VARIABLE_CseInfo_25));
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goals_12;
  MR_Word conv1_STATE_VARIABLE_CseState_23;
  MR_Word conv0_STATE_VARIABLE_CseInfo_25;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Goals_12, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_CseState_23, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_CseInfo_25);
  *wrapper_arg_4 = ((MR_Box) (conv2_Goals_12));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_CseState_23));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_CseInfo_25));
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0(
  MR_Word InstMap0_11,
  MR_Word QVars_12,
  MR_Word Cond0_13,
  MR_Word Then0_14,
  MR_Word Else0_15,
  MR_Word GoalInfo_16,
  MR_Word Vars_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_CseInfo_0_36,
  MR_Word * STATE_VARIABLE_CseInfo_37)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Vars_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Cond_35;
      MR_Word Then_58;
      MR_Word Else_59;
      MR_Word InstMap1_65;
      MR_Word STATE_VARIABLE_CseInfo_1_66;
      MR_Word STATE_VARIABLE_CseInfo_2_67;

      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(InstMap0_11, &InstMap1_65, Cond0_13, &Cond_35, STATE_VARIABLE_CseInfo_0_36, &STATE_VARIABLE_CseInfo_1_66);
      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap1_65, Then0_14, &Then_58, STATE_VARIABLE_CseInfo_1_66, &STATE_VARIABLE_CseInfo_2_67);
      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_11, Else0_15, &Else_59, STATE_VARIABLE_CseInfo_2_67, STATE_VARIABLE_CseInfo_37);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_18 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, base, 1) = ((MR_Box) (QVars_12));
        MR_hl_field(3, base, 2) = ((MR_Box) (Cond_35));
        MR_hl_field(3, base, 3) = ((MR_Box) (Then_58));
        MR_hl_field(3, base, 4) = ((MR_Box) (Else_59));
      }
    }
    else
    {
      MR_Word HeadVar_20 = ((MR_Word) ((MR_hl_field(1, Vars_17, 0))));
      MR_Word TailVars_21 = ((MR_Word) ((MR_hl_field(1, Vars_17, 1))));
      MR_Word UnifyGoal_23;
      MR_Word ConsId_24;
      MR_Word FirstOldNew_25;
      MR_Word LaterOldNew_26;
      MR_Word Goals_27;
      MR_Word STATE_VARIABLE_CseInfo_1_39;
      MR_Word TypeCtorInfo_42_128;
      MR_Word TypeCtorInfo_43_129;
      MR_Word CseState_69;
      MR_Word Goals0_94;
      MR_Word Goal_95;
      MR_Word Goals_96;
      MR_Word STATE_VARIABLE_CseState_1_102;
      MR_Word STATE_VARIABLE_CseInfo_1_103;
      MR_Word Var_107;
      MR_Word Goal0_116;
      MR_Word Goal_118;
      MR_Word Goals_119;
      MR_Word Var_124;
      MR_Word Var_127;
      MR_Word Var_130;
      MR_Box conv4_STATE_VARIABLE_CseState_1_102;
      MR_Box conv3_STATE_VARIABLE_CseInfo_1_103;
      MR_Box conv9_CseState_69;
      MR_Box conv8_STATE_VARIABLE_CseInfo_1_39;

      {
        Goals0_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals0_94, 0) = ((MR_Box) (Else0_15));
        MR_hl_field(1, Goals0_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      check_hlds__find_bind_var__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), HeadVar_20, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[6]), Then0_14, &Goal_95, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_STATE_VARIABLE_CseState_1_102, ((MR_Box) (STATE_VARIABLE_CseInfo_0_36)), &conv3_STATE_VARIABLE_CseInfo_1_103, &Var_107);
      STATE_VARIABLE_CseState_1_102 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_1_102));
      STATE_VARIABLE_CseInfo_1_103 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_1_103));
      succeeded = ((MR_Integer) 0 == Var_107);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_CseState_1_102)) == (MR_Integer) 1);
        if (succeeded)
        {
          Goal0_116 = ((MR_Word) ((MR_hl_field(1, Goals0_94, 0))));
          Var_124 = (MR_Word) (&check_hlds__cse_detection_scalar_common_2[7]);
          Var_127 = (MR_Integer) 0;
          TypeCtorInfo_42_128 = (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0);
          TypeCtorInfo_43_129 = (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0);
          check_hlds__find_bind_var__find_bind_var_9_p_0(TypeCtorInfo_42_128, TypeCtorInfo_43_129, HeadVar_20, Var_124, Goal0_116, &Goal_118, ((MR_Box) (STATE_VARIABLE_CseState_1_102)), &conv9_CseState_69, ((MR_Box) (STATE_VARIABLE_CseInfo_1_103)), &conv8_STATE_VARIABLE_CseInfo_1_39, &Var_130);
          CseState_69 = ((MR_Word) (conv9_CseState_69));
          STATE_VARIABLE_CseInfo_1_39 = ((MR_Word) (conv8_STATE_VARIABLE_CseInfo_1_39));
          succeeded = (Var_127 == Var_130);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) CseState_69)) == (MR_Integer) 1);
            if (succeeded)
            {
              UnifyGoal_23 = ((MR_Word) ((MR_hl_field(1, CseState_69, 0))));
              ConsId_24 = ((MR_Word) ((MR_hl_field(1, CseState_69, 1))));
              FirstOldNew_25 = ((MR_Word) ((MR_hl_field(1, CseState_69, 2))));
              LaterOldNew_26 = ((MR_Word) ((MR_hl_field(1, CseState_69, 3))));
              Goals_119 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = (LaterOldNew_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                {
                  Goals_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Goals_96, 0) = ((MR_Box) (Goal_118));
                  MR_hl_field(1, Goals_96, 1) = ((MR_Box) (Goals_119));
                }
                {
                  Goals_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Goals_27, 0) = ((MR_Box) (Goal_95));
                  MR_hl_field(1, Goals_27, 1) = ((MR_Box) (Goals_96));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Then_30;
        MR_Word Else_31;
        MR_Word HeadVarInst0_32;
        MR_Word Then1_28;
        MR_Word Else1_29;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word ModuleInfo_72;

        succeeded = (Goals_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Then1_28 = ((MR_Word) ((MR_hl_field(1, Goals_27, 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(1, Goals_27, 1))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Else1_29 = ((MR_Word) ((MR_hl_field(1, Var_42, 0))));
            Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, 1))));
            succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          Then_30 = Then1_28;
          Else_31 = Else1_29;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_ite_loop_over_vars\'/10", (MR_String) "common_deconstruct changes number of goals");
            return;
          }
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, HeadVar_20, &HeadVarInst0_32);
        ModuleInfo_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_39, 0))));
        succeeded = hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_72, HeadVarInst0_32);
        if (succeeded)
        {
          succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_72, HeadVarInst0_32);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word BoundFunctors_73;
            MR_Word MayPullConsId_74;

            succeeded = hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_72, HeadVarInst0_32, &BoundFunctors_73);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_72, BoundFunctors_73, ConsId_24, &MayPullConsId_74);
              succeeded = (MayPullConsId_74 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word IfGoalExpr_33;
          MR_Word IfGoal_34;
          MR_Word STATE_VARIABLE_CseInfo_2_46;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_64;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_23, FirstOldNew_25, LaterOldNew_26, STATE_VARIABLE_CseInfo_1_39, &STATE_VARIABLE_CseInfo_2_46);
          {
            IfGoalExpr_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, IfGoalExpr_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, IfGoalExpr_33, 1) = ((MR_Box) (QVars_12));
            MR_hl_field(3, IfGoalExpr_33, 2) = ((MR_Box) (Cond0_13));
            MR_hl_field(3, IfGoalExpr_33, 3) = ((MR_Box) (Then_30));
            MR_hl_field(3, IfGoalExpr_33, 4) = ((MR_Box) (Else_31));
          }
          {
            IfGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IfGoal_34, 0) = ((MR_Box) (IfGoalExpr_33));
            MR_hl_field(0, IfGoal_34, 1) = ((MR_Box) (GoalInfo_16));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (IfGoal_34));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (UnifyGoal_23));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_18 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_48));
          }
          Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_46, 0))));
          Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_46, 1))));
          Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_46, 2))));
          Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_46, 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_37 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_61));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_62));
            MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_64));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_5_54;
          MR_Word UnifyGoalInfo_80 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_23, 1))));
          MR_Word Context_81;
          MR_Word NoPullContexts0_82;
          MR_Word NoPullContexts_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word next_value_of_Vars_17;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_36;

          Context_81 = hlds__hlds_goal__goal_info_get_context_1_f_0(UnifyGoalInfo_80);
          Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_36, 0))));
          Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_36, 1))));
          Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_36, 2))));
          Var_87 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_36, 3))) & (MR_Integer) 1);
          NoPullContexts0_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_36, 4))));
          {
            NoPullContexts_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoPullContexts_83, 0) = ((MR_Box) (Context_81));
            MR_hl_field(1, NoPullContexts_83, 1) = ((MR_Box) (NoPullContexts0_82));
          }
          {
            STATE_VARIABLE_CseInfo_5_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_54, 0) = ((MR_Box) (Var_84));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_54, 1) = ((MR_Box) (Var_85));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_54, 2) = ((MR_Box) (Var_86));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_54, 3) = (MR_Box) ((MR_Unsigned) (Var_87));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_54, 4) = ((MR_Box) (NoPullContexts_83));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Vars_17 = TailVars_21;
          next_value_of_STATE_VARIABLE_CseInfo_0_36 = STATE_VARIABLE_CseInfo_5_54;
          Vars_17 = next_value_of_Vars_17;
          STATE_VARIABLE_CseInfo_0_36 = next_value_of_STATE_VARIABLE_CseInfo_0_36;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_Vars_17 = TailVars_21;

        // direct tailcall eliminated
        ;
        Vars_17 = next_value_of_Vars_17;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_loop_over_vars_9_p_0(
  MR_Word InstMap0_10,
  MR_Word SwitchVar_11,
  MR_Word CanFail_12,
  MR_Word Cases0_13,
  MR_Word GoalInfo_14,
  MR_Word Vars_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_CseInfo_0_29,
  MR_Word * STATE_VARIABLE_CseInfo_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Vars_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Cases_44;

      check_hlds__cse_detection__detect_cse_in_case_arms_5_p_0(InstMap0_10, Cases0_13, &Cases_44, STATE_VARIABLE_CseInfo_0_29, STATE_VARIABLE_CseInfo_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_16 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (SwitchVar_11));
        MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_12));
        MR_hl_field(3, base, 3) = ((MR_Box) (Cases_44));
      }
    }
    else
    {
      MR_Word HeadVar_18 = ((MR_Word) ((MR_hl_field(1, Vars_15, 0))));
      MR_Word TailVars_19 = ((MR_Word) ((MR_hl_field(1, Vars_15, 1))));
      MR_Word UnifyGoal_21;
      MR_Word ConsId_22;
      MR_Word FirstOldNew_23;
      MR_Word LaterOldNew_24;
      MR_Word Cases_25;
      MR_Word STATE_VARIABLE_CseInfo_1_31;
      MR_Word CseState0_51;
      MR_Word CseState_52;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), ((MR_Box) (HeadVar_18)), ((MR_Box) (SwitchVar_11)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        CseState0_51 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(Cases0_13, HeadVar_18, CseState0_51, &CseState_52, STATE_VARIABLE_CseInfo_0_29, &STATE_VARIABLE_CseInfo_1_31, &Cases_25);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) CseState_52)) == (MR_Integer) 1);
          if (succeeded)
          {
            UnifyGoal_21 = ((MR_Word) ((MR_hl_field(1, CseState_52, 0))));
            ConsId_22 = ((MR_Word) ((MR_hl_field(1, CseState_52, 1))));
            FirstOldNew_23 = ((MR_Word) ((MR_hl_field(1, CseState_52, 2))));
            LaterOldNew_24 = ((MR_Word) ((MR_hl_field(1, CseState_52, 3))));
            succeeded = (LaterOldNew_24 != (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadVarInst0_26;
        MR_Word ModuleInfo_55;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_10, HeadVar_18, &HeadVarInst0_26);
        ModuleInfo_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_31, 0))));
        succeeded = hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_55, HeadVarInst0_26);
        if (succeeded)
        {
          succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_55, HeadVarInst0_26);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word BoundFunctors_56;
            MR_Word MayPullConsId_57;

            succeeded = hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_55, HeadVarInst0_26, &BoundFunctors_56);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_55, BoundFunctors_56, ConsId_22, &MayPullConsId_57);
              succeeded = (MayPullConsId_57 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word SwitchGoalExpr_27;
          MR_Word SwitchGoal_28;
          MR_Word STATE_VARIABLE_CseInfo_2_32;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_21, FirstOldNew_23, LaterOldNew_24, STATE_VARIABLE_CseInfo_1_31, &STATE_VARIABLE_CseInfo_2_32);
          {
            SwitchGoalExpr_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SwitchGoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, SwitchGoalExpr_27, 1) = ((MR_Box) (SwitchVar_11));
            MR_hl_field(3, SwitchGoalExpr_27, 2) = (MR_Box) ((MR_Unsigned) (CanFail_12));
            MR_hl_field(3, SwitchGoalExpr_27, 3) = ((MR_Box) (Cases_25));
          }
          {
            SwitchGoal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SwitchGoal_28, 0) = ((MR_Box) (SwitchGoalExpr_27));
            MR_hl_field(0, SwitchGoal_28, 1) = ((MR_Box) (GoalInfo_14));
          }
          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (SwitchGoal_28));
            MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (UnifyGoal_21));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_35));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_16 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_34));
          }
          Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_32, 0))));
          Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_32, 1))));
          Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_32, 2))));
          Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_32, 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_30 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
            MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_5_40;
          MR_Word UnifyGoalInfo_63 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_21, 1))));
          MR_Word Context_64;
          MR_Word NoPullContexts0_65;
          MR_Word NoPullContexts_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word next_value_of_Vars_15;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_29;

          Context_64 = hlds__hlds_goal__goal_info_get_context_1_f_0(UnifyGoalInfo_63);
          Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_29, 0))));
          Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_29, 1))));
          Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_29, 2))));
          Var_70 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_29, 3))) & (MR_Integer) 1);
          NoPullContexts0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_29, 4))));
          {
            NoPullContexts_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoPullContexts_66, 0) = ((MR_Box) (Context_64));
            MR_hl_field(1, NoPullContexts_66, 1) = ((MR_Box) (NoPullContexts0_65));
          }
          {
            STATE_VARIABLE_CseInfo_5_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_40, 0) = ((MR_Box) (Var_67));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_40, 1) = ((MR_Box) (Var_68));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_40, 2) = ((MR_Box) (Var_69));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_40, 3) = (MR_Box) ((MR_Unsigned) (Var_70));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_40, 4) = ((MR_Box) (NoPullContexts_66));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Vars_15 = TailVars_19;
          next_value_of_STATE_VARIABLE_CseInfo_0_29 = STATE_VARIABLE_CseInfo_5_40;
          Vars_15 = next_value_of_Vars_15;
          STATE_VARIABLE_CseInfo_0_29 = next_value_of_STATE_VARIABLE_CseInfo_0_29;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_Vars_15 = TailVars_19;

        // direct tailcall eliminated
        ;
        Vars_15 = next_value_of_Vars_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_loop_over_vars_7_p_0(
  MR_Word InstMap0_8,
  MR_Word Goals0_9,
  MR_Word GoalInfo0_10,
  MR_Word Vars_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_CseInfo_0_23,
  MR_Word * STATE_VARIABLE_CseInfo_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Vars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goals_40;

      check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(InstMap0_8, Goals0_9, &Goals_40, STATE_VARIABLE_CseInfo_0_23, STATE_VARIABLE_CseInfo_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_12 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Goals_40));
      }
    }
    else
    {
      MR_Word HeadVar_14 = ((MR_Word) ((MR_hl_field(1, Vars_11, 0))));
      MR_Word TailVars_15 = ((MR_Word) ((MR_hl_field(1, Vars_11, 1))));
      MR_Word UnifyGoal_17;
      MR_Word ConsId_18;
      MR_Word FirstOldNew_19;
      MR_Word LaterOldNew_20;
      MR_Word Goals_21;
      MR_Word STATE_VARIABLE_CseInfo_1_25;
      MR_Word CseState_47;

      succeeded = check_hlds__cse_detection__common_deconstruct_branch_goals_7_p_0(HeadVar_14, Goals0_9, &Goals_21, (MR_Word) ((MR_Unsigned) 0U), &CseState_47, STATE_VARIABLE_CseInfo_0_23, &STATE_VARIABLE_CseInfo_1_25);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) CseState_47)) == (MR_Integer) 1);
        if (succeeded)
        {
          UnifyGoal_17 = ((MR_Word) ((MR_hl_field(1, CseState_47, 0))));
          ConsId_18 = ((MR_Word) ((MR_hl_field(1, CseState_47, 1))));
          FirstOldNew_19 = ((MR_Word) ((MR_hl_field(1, CseState_47, 2))));
          LaterOldNew_20 = ((MR_Word) ((MR_hl_field(1, CseState_47, 3))));
          succeeded = (LaterOldNew_20 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word HeadVarInst0_22;
        MR_Word ModuleInfo_50;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_8, HeadVar_14, &HeadVarInst0_22);
        ModuleInfo_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_1_25, 0))));
        succeeded = hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_50, HeadVarInst0_22);
        if (succeeded)
        {
          succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_50, HeadVarInst0_22);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word BoundFunctors_51;
            MR_Word MayPullConsId_52;

            succeeded = hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_50, HeadVarInst0_22, &BoundFunctors_51);
            if (succeeded)
            {
              check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(ModuleInfo_50, BoundFunctors_51, ConsId_18, &MayPullConsId_52);
              succeeded = (MayPullConsId_52 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_CseInfo_2_26;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_45;

          check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(UnifyGoal_17, FirstOldNew_19, LaterOldNew_20, STATE_VARIABLE_CseInfo_1_25, &STATE_VARIABLE_CseInfo_2_26);
          {
            Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_31, 1) = ((MR_Box) (Goals_21));
          }
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_31));
            MR_hl_field(0, Var_30, 1) = ((MR_Box) (GoalInfo0_10));
          }
          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (UnifyGoal_17));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_12 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_28));
          }
          Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_26, 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_26, 1))));
          Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_26, 2))));
          Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_2_26, 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CseInfo_24 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_42));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
            MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_45));
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_CseInfo_5_36;
          MR_Word UnifyGoalInfo_58 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_17, 1))));
          MR_Word Context_59;
          MR_Word NoPullContexts0_60;
          MR_Word NoPullContexts_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word next_value_of_Vars_11;
          MR_Word next_value_of_STATE_VARIABLE_CseInfo_0_23;

          Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(UnifyGoalInfo_58);
          Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_23, 0))));
          Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_23, 1))));
          Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_23, 2))));
          Var_65 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_23, 3))) & (MR_Integer) 1);
          NoPullContexts0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_23, 4))));
          {
            NoPullContexts_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoPullContexts_61, 0) = ((MR_Box) (Context_59));
            MR_hl_field(1, NoPullContexts_61, 1) = ((MR_Box) (NoPullContexts0_60));
          }
          {
            STATE_VARIABLE_CseInfo_5_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_36, 0) = ((MR_Box) (Var_62));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_36, 1) = ((MR_Box) (Var_63));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_36, 2) = ((MR_Box) (Var_64));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_36, 3) = (MR_Box) ((MR_Unsigned) (Var_65));
            MR_hl_field(0, STATE_VARIABLE_CseInfo_5_36, 4) = ((MR_Box) (NoPullContexts_61));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Vars_11 = TailVars_15;
          next_value_of_STATE_VARIABLE_CseInfo_0_23 = STATE_VARIABLE_CseInfo_5_36;
          Vars_11 = next_value_of_Vars_11;
          STATE_VARIABLE_CseInfo_0_23 = next_value_of_STATE_VARIABLE_CseInfo_0_23;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_Vars_11 = TailVars_15;

        // direct tailcall eliminated
        ;
        Vars_11 = next_value_of_Vars_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_case_arms_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_5 = STATE_VARIABLE_CseInfo_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_11, 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_11, 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_11, 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_CseInfo_1_22;

    check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_1, Goal0_18, &Goal_19, STATE_VARIABLE_CseInfo_0_4, &STATE_VARIABLE_CseInfo_1_22);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_13, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_13, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_13, 2) = ((MR_Box) (Goal_19));
    }
    check_hlds__cse_detection__detect_cse_in_case_arms_5_p_0(InstMap0_1, Cases0_12, &Cases_14, STATE_VARIABLE_CseInfo_1_22, STATE_VARIABLE_CseInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_14));
    }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CseInfo_0_4,
  MR_Word * STATE_VARIABLE_CseInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_5 = STATE_VARIABLE_CseInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_CseInfo_1_18;

    check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_1, Goal0_11, &Goal_13, STATE_VARIABLE_CseInfo_0_4, &STATE_VARIABLE_CseInfo_1_18);
    check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(InstMap0_1, Goals0_12, &Goals_14, STATE_VARIABLE_CseInfo_1_18, STATE_VARIABLE_CseInfo_5);
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
check_hlds__cse_detection__detect_cse_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_6 = STATE_VARIABLE_CseInfo_0_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Goal_18;
    MR_Word TailGoals_19;
    MR_Word STATE_VARIABLE_InstMap_1_26;
    MR_Word STATE_VARIABLE_CseInfo_1_27;
    MR_Word GoalInfo0_32;
    MR_Word InstMapDelta_33;
    MR_Word ConjGoals_21;
    MR_Word InnerConjType_20;
    MR_Word Var_29;

    check_hlds__cse_detection__detect_cse_in_goal_5_p_0(HeadVar__1_1, Goal0_14, &Goal_18, STATE_VARIABLE_CseInfo_0_5, &STATE_VARIABLE_CseInfo_1_27);
    GoalInfo0_32 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 1))));
    InstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_32);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_33, HeadVar__1_1, &STATE_VARIABLE_InstMap_1_26);
    check_hlds__cse_detection__detect_cse_in_conj_6_p_0(STATE_VARIABLE_InstMap_1_26, HeadVar__2_2, Goals0_15, &TailGoals_19, STATE_VARIABLE_CseInfo_1_27, STATE_VARIABLE_CseInfo_6);
    Var_29 = ((MR_Word) ((MR_hl_field(0, Goal_18, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      InnerConjType_20 = ((MR_Unsigned) ((MR_hl_field(3, Var_29, 1))) & (MR_Integer) 1);
      ConjGoals_21 = ((MR_Word) ((MR_hl_field(3, Var_29, 2))));
      succeeded = (HeadVar__2_2 == InnerConjType_20);
    }
    if (succeeded)
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_21, TailGoals_19);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_19));
      }
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_5_p_0(
  MR_Word InstMap0_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_CseInfo_0_110,
  MR_Word * STATE_VARIABLE_CseInfo_111)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));
  MR_Word GoalExpr_30;

  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_51 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word SubGoal_52;

        check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_6, SubGoal0_51, &SubGoal_52, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
        GoalExpr_30 = (MR_Word) ((MR_Word) (SubGoal_52));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_31 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 0))));
        MR_Word RHS0_32 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 1))));
        MR_Word Mode_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 2))));
        MR_Word Unify_34 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 3))));
        MR_Word UnifyContext_35 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 4))));

        switch (MR_tag((MR_Word) RHS0_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_30 = GoalExpr0_10;
              *STATE_VARIABLE_CseInfo_111 = STATE_VARIABLE_CseInfo_0_110;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word NonLocalVars_39 = ((MR_Word) ((MR_hl_field(2, RHS0_32, 1))));
              MR_Word VarsModes_40 = ((MR_Word) ((MR_hl_field(2, RHS0_32, 2))));
              MR_Word Det_41 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_32, 3))) & (MR_Integer) 7);
              MR_Word LambdaGoal0_42 = ((MR_Word) ((MR_hl_field(2, RHS0_32, 4))));
              MR_Word ModuleInfo_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_110, 0))));
              MR_Word InstMap1_44;
              MR_Word LambdaGoal_45;
              MR_Word RHS_46;
              MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(2, RHS0_32, 0)));

              hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_43, VarsModes_40, InstMap0_6, &InstMap1_44);
              check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap1_44, LambdaGoal0_42, &LambdaGoal_45, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
              {
                RHS_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_46, 0) = (MR_Box) (packed_word_4);
                MR_hl_field(2, RHS_46, 1) = ((MR_Box) (NonLocalVars_39));
                MR_hl_field(2, RHS_46, 2) = ((MR_Box) (VarsModes_40));
                MR_hl_field(2, RHS_46, 3) = (MR_Box) ((MR_Unsigned) (Det_41));
                MR_hl_field(2, RHS_46, 4) = ((MR_Box) (LambdaGoal_45));
              }
              {
                GoalExpr_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_30, 0) = ((MR_Box) (LHS_31));
                MR_hl_field(1, GoalExpr_30, 1) = ((MR_Box) (RHS_46));
                MR_hl_field(1, GoalExpr_30, 2) = ((MR_Box) (Mode_33));
                MR_hl_field(1, GoalExpr_30, 3) = ((MR_Box) (Unify_34));
                MR_hl_field(1, GoalExpr_30, 4) = ((MR_Box) (UnifyContext_35));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_30 = GoalExpr0_10;
        *STATE_VARIABLE_CseInfo_111 = STATE_VARIABLE_CseInfo_0_110;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_30 = GoalExpr0_10;
            *STATE_VARIABLE_CseInfo_111 = STATE_VARIABLE_CseInfo_0_110;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_84 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 1))) & (MR_Integer) 1);
            MR_Word Goals0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Goals_86;

            check_hlds__cse_detection__detect_cse_in_conj_6_p_0(InstMap0_6, ConjType_84, Goals0_85, &Goals_86, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_30, 1) = (MR_Box) ((MR_Unsigned) (ConjType_84));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (Goals_86));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));

            if ((Goals0_138 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              GoalExpr_30 = (MR_Word) (MR_mkword(3, &check_hlds__cse_detection_scalar_common_1[6]));
              *STATE_VARIABLE_CseInfo_111 = STATE_VARIABLE_CseInfo_0_110;
            }
            else
            {
              MR_Word NonLocals_89;
              MR_Word NonLocalVars_135;

              NonLocals_89 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
              NonLocalVars_135 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_89);
              check_hlds__cse_detection__detect_cse_in_disj_loop_over_vars_7_p_0(InstMap0_6, Goals0_138, GoalInfo_11, NonLocalVars_135, &GoalExpr_30, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word NonLocalVars_139;
            MR_Word CanFail_140 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 2))) & (MR_Integer) 1);
            MR_Word Cases0_141 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word NonLocals_142;

            NonLocals_142 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
            NonLocalVars_139 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_142);
            check_hlds__cse_detection__detect_cse_in_cases_loop_over_vars_9_p_0(InstMap0_6, Var_90, CanFail_140, Cases0_141, GoalInfo_11, NonLocalVars_139, &GoalExpr_30, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word SubGoal0_133 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));

            switch (MR_tag((MR_Word) Reason0_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_131;

                  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_6, SubGoal0_133, &SubGoal_131, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
                  {
                    GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason0_53));
                    MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_131));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_53, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_131;

                      check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_6, SubGoal0_133, &SubGoal_131, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
                      {
                        GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason0_53));
                        MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_131));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word SubGoalExpr0_58 = ((MR_Word) ((MR_hl_field(0, SubGoal0_133, 0))));
                      MR_Word SubGoalInfo0_59 = ((MR_Word) ((MR_hl_field(0, SubGoal0_133, 1))));
                      MR_Word SwitchVar_60;
                      MR_Word CanFail_61;
                      MR_Word Cases0_62;

                      succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_58, 0)))) == (MR_Integer) 4)));
                      if (succeeded)
                      {
                        SwitchVar_60 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_58, 1))));
                        CanFail_61 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_58, 2))) & (MR_Integer) 1);
                        Cases0_62 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_58, 3))));
                        {
                          MR_Word Cases_63;
                          MR_Word SubGoalExpr_64;
                          MR_Word SubGoal_127;

                          check_hlds__cse_detection__detect_cse_in_case_arms_5_p_0(InstMap0_6, Cases0_62, &Cases_63, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
                          {
                            SubGoalExpr_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, SubGoalExpr_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, SubGoalExpr_64, 1) = ((MR_Box) (SwitchVar_60));
                            MR_hl_field(3, SubGoalExpr_64, 2) = (MR_Box) ((MR_Unsigned) (CanFail_61));
                            MR_hl_field(3, SubGoalExpr_64, 3) = ((MR_Box) (Cases_63));
                          }
                          {
                            SubGoal_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, SubGoal_127, 0) = ((MR_Box) (SubGoalExpr_64));
                            MR_hl_field(0, SubGoal_127, 1) = ((MR_Box) (SubGoalInfo0_59));
                          }
                          {
                            GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason0_53));
                            MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_127));
                          }
                        }
                      }
                      else
                      {
                        MR_Word SubGoal_128;

                        check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_6, SubGoal0_133, &SubGoal_128, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
                        {
                          GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason0_53));
                          MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_128));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      GoalExpr_30 = GoalExpr0_10;
                      *STATE_VARIABLE_CseInfo_111 = STATE_VARIABLE_CseInfo_0_110;
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word QVars_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Cond0_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Then0_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Else0_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word NonLocalVars_143;
            MR_Word NonLocals_144;

            NonLocals_144 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
            NonLocalVars_143 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_144);
            check_hlds__cse_detection__detect_cse_in_ite_loop_over_vars_10_p_0(InstMap0_6, QVars_91, Cond0_92, Then0_93, Else0_94, GoalInfo_11, NonLocalVars_143, &GoalExpr_30, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word ShortHand_105;

            switch (MR_tag((MR_Word) ShortHand0_95)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal\'/5", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicGoalType_96 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_95, 0))) & (MR_Integer) 3);
                  MR_Word Outer_97 = ((MR_Word) ((MR_hl_field(1, ShortHand0_95, 1))));
                  MR_Word Inner_98 = ((MR_Word) ((MR_hl_field(1, ShortHand0_95, 2))));
                  MR_Word MaybeOutputVars_99 = ((MR_Word) ((MR_hl_field(1, ShortHand0_95, 3))));
                  MR_Word MainGoal0_100 = ((MR_Word) ((MR_hl_field(1, ShortHand0_95, 4))));
                  MR_Word OrElseGoals0_101 = ((MR_Word) ((MR_hl_field(1, ShortHand0_95, 5))));
                  MR_Word OrElseInners_102 = ((MR_Word) ((MR_hl_field(1, ShortHand0_95, 6))));
                  MR_Word MainGoal_103;
                  MR_Word OrElseGoals_104;
                  MR_Word STATE_VARIABLE_CseInfo_10_122;

                  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_6, MainGoal0_100, &MainGoal_103, STATE_VARIABLE_CseInfo_0_110, &STATE_VARIABLE_CseInfo_10_122);
                  check_hlds__cse_detection__detect_cse_in_independent_goals_5_p_0(InstMap0_6, OrElseGoals0_101, &OrElseGoals_104, STATE_VARIABLE_CseInfo_10_122, STATE_VARIABLE_CseInfo_111);
                  {
                    ShortHand_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_105, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType_96));
                    MR_hl_field(1, ShortHand_105, 1) = ((MR_Box) (Outer_97));
                    MR_hl_field(1, ShortHand_105, 2) = ((MR_Box) (Inner_98));
                    MR_hl_field(1, ShortHand_105, 3) = ((MR_Box) (MaybeOutputVars_99));
                    MR_hl_field(1, ShortHand_105, 4) = ((MR_Box) (MainGoal_103));
                    MR_hl_field(1, ShortHand_105, 5) = ((MR_Box) (OrElseGoals_104));
                    MR_hl_field(1, ShortHand_105, 6) = ((MR_Box) (OrElseInners_102));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_108 = ((MR_Word) ((MR_hl_field(2, ShortHand0_95, 0))));
                  MR_Word ResultVar_109 = ((MR_Word) ((MR_hl_field(2, ShortHand0_95, 1))));
                  MR_Word SubGoal0_145 = ((MR_Word) ((MR_hl_field(2, ShortHand0_95, 2))));
                  MR_Word SubGoal_146;

                  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_6, SubGoal0_145, &SubGoal_146, STATE_VARIABLE_CseInfo_0_110, STATE_VARIABLE_CseInfo_111);
                  {
                    ShortHand_105 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_105, 0) = ((MR_Box) (MaybeIO_108));
                    MR_hl_field(2, ShortHand_105, 1) = ((MR_Box) (ResultVar_109));
                    MR_hl_field(2, ShortHand_105, 2) = ((MR_Box) (SubGoal_146));
                  }
                }
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (ShortHand_105));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_6_p_0(
  MR_Word InstMap0_7,
  MR_Word * InstMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_CseInfo_0_15,
  MR_Word * STATE_VARIABLE_CseInfo_16)
{
  MR_Word GoalInfo0_13;
  MR_Word InstMapDelta_14;

  check_hlds__cse_detection__detect_cse_in_goal_5_p_0(InstMap0_7, Goal0_9, Goal_10, STATE_VARIABLE_CseInfo_0_15, STATE_VARIABLE_CseInfo_16);
  GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
  InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_14, InstMap0_7, InstMap_8);
}

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goals_12;
  MR_Word conv1_STATE_VARIABLE_CseState_23;
  MR_Word conv0_STATE_VARIABLE_CseInfo_25;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Goals_12, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_CseState_23, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_CseInfo_25);
  *wrapper_arg_4 = ((MR_Box) (conv2_Goals_12));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_CseState_23));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_CseInfo_25));
}

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CseState_0_3,
  MR_Word * STATE_VARIABLE_CseState_4,
  MR_Word STATE_VARIABLE_CseInfo_0_5,
  MR_Word * STATE_VARIABLE_CseInfo_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_6 = STATE_VARIABLE_CseInfo_0_5;
    *STATE_VARIABLE_CseState_4 = STATE_VARIABLE_CseState_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_20;
    MR_Word Cases_21;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_15, 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_15, 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_15, 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_CseState_1_35;
    MR_Word STATE_VARIABLE_CseInfo_1_36;
    MR_Word Var_48;
    MR_Box conv4_STATE_VARIABLE_CseState_1_35;
    MR_Box conv3_STATE_VARIABLE_CseInfo_1_36;

    check_hlds__find_bind_var__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), HeadVar__2_2, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[5]), Goal0_24, &Goal_25, ((MR_Box) (STATE_VARIABLE_CseState_0_3)), &conv4_STATE_VARIABLE_CseState_1_35, ((MR_Box) (STATE_VARIABLE_CseInfo_0_5)), &conv3_STATE_VARIABLE_CseInfo_1_36, &Var_48);
    STATE_VARIABLE_CseState_1_35 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_1_35));
    STATE_VARIABLE_CseInfo_1_36 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_1_36));
    succeeded = ((MR_Integer) 0 == Var_48);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_CseState_1_35)) == (MR_Integer) 1);
      if (succeeded)
      {
        {
          Case_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_20, 0) = ((MR_Box) (MainConsId_22));
          MR_hl_field(0, Case_20, 1) = ((MR_Box) (OtherConsIds_23));
          MR_hl_field(0, Case_20, 2) = ((MR_Box) (Goal_25));
        }
        succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(Cases0_16, HeadVar__2_2, STATE_VARIABLE_CseState_1_35, STATE_VARIABLE_CseState_4, STATE_VARIABLE_CseInfo_1_36, STATE_VARIABLE_CseInfo_6, &Cases_21);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_20));
            MR_hl_field(1, base, 1) = ((MR_Box) (Cases_21));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Integer) 1;
    else
    {
      MR_Word BoundFunctor_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word BoundFunctors_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word InstConsId_12 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, 0))));
      MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, 1))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(HeadVar__3_3, InstConsId_12);
      if (!(succeeded))
      {
        MR_Word SymName_14;
        MR_Integer Arity_15;
        MR_Word InstSymName_17;
        MR_Integer InstArity_18;
        MR_Word Var_20;
        MR_Word Var_21;

        succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_20 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));
          SymName_14 = ((MR_Word) ((MR_hl_field(0, Var_20, 0))));
          Arity_15 = ((MR_Integer) ((MR_hl_field(0, Var_20, 1))));
          succeeded = ((MR_tag((MR_Word) InstConsId_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_21 = (MR_Word) (MR_body((MR_Word) (InstConsId_12), (MR_Integer) 1));
            InstSymName_17 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
            InstArity_18 = ((MR_Integer) ((MR_hl_field(0, Var_21, 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_14, InstSymName_17);
            if (succeeded)
              succeeded = (Arity_15 == InstArity_18);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_6[0]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__cse_detection__compute_may_pull_cons_id_4_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (HeadVar__1_1));
        }
        succeeded = mercury__list__all_true_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_22, ArgInsts_13);
        if (succeeded)
          *HeadVar__4_4 = (MR_Integer) 0;
        else
          *HeadVar__4_4 = (MR_Integer) 1;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = BoundFunctors_9;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Renaming_18;

  check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Renaming_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Renaming_18));
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_NewTvarMap_15;

  check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NewTvarMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NewTvarMap_15));
}

static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
  MR_Word UnifyGoal_6,
  MR_Word FirstOldNew_7,
  MR_Word LaterOldNew_8,
  MR_Word STATE_VARIABLE_CseInfo_0_26,
  MR_Word * STATE_VARIABLE_CseInfo_27)
{
  MR_bool succeeded;
  MR_Word UnifyInfo_13;
  MR_Word Var_16;
  MR_Word ConsId_17;
  MR_Word DuCtor_22;
  MR_Word ModuleInfo_23;
  MR_Word VarTable_24;
  MR_Word Type_25;
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, UnifyGoal_6, 0))));

  succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 1);
  if (succeeded)
  {
    UnifyInfo_13 = ((MR_Word) ((MR_hl_field(1, Var_28, 3))));
    succeeded = ((MR_tag((MR_Word) UnifyInfo_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, UnifyInfo_13, 0))));
      ConsId_17 = ((MR_Word) ((MR_hl_field(1, UnifyInfo_13, 1))));
      succeeded = ((MR_tag((MR_Word) ConsId_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        DuCtor_22 = (MR_Word) (MR_body((MR_Word) (ConsId_17), (MR_Integer) 1));
        ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_26, 0))));
        VarTable_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_26, 1))));
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_24, Var_16, &Type_25);
        succeeded = hlds__type_util__cons_id_is_existq_cons_3_p_0(ModuleInfo_23, Type_25, DuCtor_22);
      }
    }
  }
  if (succeeded)
  {
    MR_Word LaterOldNew_37;
    MR_Word FirstOldNewMap_38;
    MR_Word LaterOldNewMap_39;
    MR_Word RttiVarMaps0_40;
    MR_Word VarTable0_41;
    MR_Word TvarsList_42;
    MR_Word NewTvarMap_43;
    MR_Word Renaming_44;
    MR_Word OldNew_45;
    MR_Word OldNewMap_46;
    MR_Word RttiVarMaps_47;
    MR_Word VarTable_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Box conv1_NewTvarMap_43;
    MR_Box conv3_Renaming_44;

    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_2[1]), LaterOldNew_8, &LaterOldNew_37);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), FirstOldNew_7, &FirstOldNewMap_38);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), LaterOldNew_37, &LaterOldNewMap_39);
    VarTable0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_26, 1))));
    RttiVarMaps0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_26, 2))));
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps0_40, &TvarsList_42);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (RttiVarMaps0_40));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (FirstOldNewMap_38));
    }
    Var_50 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[2]), Var_49, TvarsList_42, ((MR_Box) (Var_50)), &conv1_NewTvarMap_43);
    NewTvarMap_43 = ((MR_Word) (conv1_NewTvarMap_43));
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (RttiVarMaps0_40));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (LaterOldNewMap_39));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (NewTvarMap_43));
    }
    Var_52 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__cse_detection_scalar_common_2[3]), Var_51, TvarsList_42, ((MR_Box) (Var_52)), &conv3_Renaming_44);
    Renaming_44 = ((MR_Word) (conv3_Renaming_44));
    mercury__list__append_3_p_1((MR_Word) (&check_hlds__cse_detection_scalar_common_2[1]), FirstOldNew_7, LaterOldNew_37, &OldNew_45);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__cse_detection_scalar_common_1[1]), OldNew_45, &OldNewMap_46);
    Var_53 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__cse_detection_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    hlds__hlds_rtti__apply_renamings_and_subst_to_rtti_varmaps_5_p_0(Renaming_44, Var_53, OldNewMap_46, RttiVarMaps0_40, &RttiVarMaps_47);
    parse_tree__var_table__rename_vars_in_var_table_3_p_0(Renaming_44, VarTable0_41, &VarTable_48);
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_26, 0))));
    Var_60 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_26, 3))) & (MR_Integer) 1);
    Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CseInfo_0_26, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CseInfo_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
      MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_48));
      MR_hl_field(0, base, 2) = ((MR_Box) (RttiVarMaps_47));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_60));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_61));
    }
  }
  else
    *STATE_VARIABLE_CseInfo_27 = STATE_VARIABLE_CseInfo_0_26;
}

static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_branch_goals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goals_12;
  MR_Word conv1_STATE_VARIABLE_CseState_23;
  MR_Word conv0_STATE_VARIABLE_CseInfo_25;

  check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Goals_12, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_CseState_23, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_CseInfo_25);
  *wrapper_arg_4 = ((MR_Box) (conv2_Goals_12));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_CseState_23));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_CseInfo_25));
}

static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_branch_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CseState_0_4,
  MR_Word * STATE_VARIABLE_CseState_5,
  MR_Word STATE_VARIABLE_CseInfo_0_6,
  MR_Word * STATE_VARIABLE_CseInfo_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CseInfo_7 = STATE_VARIABLE_CseInfo_0_6;
    *STATE_VARIABLE_CseState_5 = STATE_VARIABLE_CseState_0_4;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_CseState_1_31;
    MR_Word STATE_VARIABLE_CseInfo_1_32;
    MR_Word Var_44;
    MR_Box conv4_STATE_VARIABLE_CseState_1_31;
    MR_Box conv3_STATE_VARIABLE_CseInfo_1_32;

    check_hlds__find_bind_var__find_bind_var_9_p_0((MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0), (MR_Word) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0), HeadVar__1_1, (MR_Word) (&check_hlds__cse_detection_scalar_common_2[4]), Goal0_16, &Goal_18, ((MR_Box) (STATE_VARIABLE_CseState_0_4)), &conv4_STATE_VARIABLE_CseState_1_31, ((MR_Box) (STATE_VARIABLE_CseInfo_0_6)), &conv3_STATE_VARIABLE_CseInfo_1_32, &Var_44);
    STATE_VARIABLE_CseState_1_31 = ((MR_Word) (conv4_STATE_VARIABLE_CseState_1_31));
    STATE_VARIABLE_CseInfo_1_32 = ((MR_Word) (conv3_STATE_VARIABLE_CseInfo_1_32));
    succeeded = ((MR_Integer) 0 == Var_44);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_CseState_1_31)) == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = check_hlds__cse_detection__common_deconstruct_branch_goals_7_p_0(HeadVar__1_1, Goals0_17, &Goals_19, STATE_VARIABLE_CseState_1_31, STATE_VARIABLE_CseState_5, STATE_VARIABLE_CseInfo_1_32, STATE_VARIABLE_CseInfo_7);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
            MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__cse_detection____Compare____cse_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__cse_detection____Compare____cse_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____may_pull_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__cse_detection____Unify____may_pull_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__cse_detection____Compare____may_pull_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__cse_detection____Compare____may_pull_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__cse_detection__init(void)
{
}

void mercury__check_hlds__cse_detection__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0);
  MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0);
  MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_may_pull_cons_id_0);
}

void mercury__check_hlds__cse_detection__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__cse_detection__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.cse_detection.
