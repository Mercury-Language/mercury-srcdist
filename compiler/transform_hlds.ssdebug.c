/*
** Automatically generated from `ssdebug.m'
** by the Mercury compiler,
** version rotd-2024-12-03
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


// :- module transform_hlds.ssdebug.
// :- implementation.

/*
INIT mercury__transform_hlds__ssdebug__init
ENDINIT
*/

#include "transform_hlds.ssdebug.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1041__1_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14);

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(
  MR_Word SSTraceLevel_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredProcId_9,
  MR_Word PredInfo_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * STATE_VARIABLE_ProcInfo_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21);

static MR_bool MR_CALL 
transform_hlds__ssdebug__all_args_fully_input_or_output_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * STATE_VARIABLE_ProcInfo_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_50,
  MR_Word * STATE_VARIABLE_ProcInfo_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53);

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word Detism_3);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64);

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
  MR_Word Detism_3);

static MR_bool MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVars_6,
  MR_Word ArgModes_7,
  MR_Word * OutputVars_8);

static void MR_CALL 
transform_hlds__ssdebug__get_stripped_headvars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * FullHeadVars_8,
  MR_Word * HeadVars_9,
  MR_Word * ArgModes_10);

static MR_bool MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_46,
  MR_Word * STATE_VARIABLE_ProcInfo_47,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49);

static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_16_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * OutVar_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10,
  MR_Word STATE_VARIABLE_PredInfo_0_11,
  MR_Word * STATE_VARIABLE_PredInfo_12,
  MR_Word STATE_VARIABLE_VarTable_0_13,
  MR_Word * STATE_VARIABLE_VarTable_14,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_15,
  MR_Word * STATE_VARIABLE_BoundVarDescs_16);

static void MR_CALL 
transform_hlds__ssdebug__make_var_value_16_p_0(
  MR_Word InstMap_17,
  MR_Word VarToInspect_18,
  MR_Word Renaming_19,
  MR_Word * VarDesc_20,
  MR_Integer VarPos_21,
  MR_Word * Goals_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcInfo_49,
  MR_Word STATE_VARIABLE_PredInfo_0_50,
  MR_Word * STATE_VARIABLE_PredInfo_51,
  MR_Word STATE_VARIABLE_VarTable_0_52,
  MR_Word * STATE_VARIABLE_VarTable_53,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_54,
  MR_Word * STATE_VARIABLE_BoundVarDescs_55);

static MR_Word MR_CALL 
transform_hlds__ssdebug__list_var_value_type_0_f_0(void);

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_5_p_0(
  MR_Word SSTraceLevel_6,
  MR_Word * Goal_7,
  MR_Word * LevelVar_8,
  MR_Word STATE_VARIABLE_VarTable_0_11,
  MR_Word * STATE_VARIABLE_VarTable_12);

static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word * Goals_9,
  MR_Word * ProcIdVar_10,
  MR_Word STATE_VARIABLE_VarTable_0_30,
  MR_Word * STATE_VARIABLE_VarTable_31);

static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_4_p_0(
  MR_Word ModuleInfo_5,
  MR_String ProcName_6,
  MR_Word ArgVars_7,
  MR_Word * HandleEventGoal_8);

static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_9_p_0(
  MR_Word ConjGoals_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_PredInfo_0_26,
  MR_Word VarTable_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_27,
  MR_Word * STATE_VARIABLE_ProcInfo_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
transform_hlds__ssdebug__make_switch_goal_4_p_0(
  MR_Word SwitchVar_5,
  MR_Word DoRetryGoal_6,
  MR_Word DoNotRetryGoal_7,
  MR_Word * SwitchGoal_8);

static void MR_CALL 
transform_hlds__ssdebug__make_recursive_call_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word HeadVars_11,
  MR_Word * Goal_12);

static void MR_CALL 
transform_hlds__ssdebug__make_retry_var_4_p_0(
  MR_String VarName_5,
  MR_Word * RetryVar_6,
  MR_Word STATE_VARIABLE_VarTable_0_12,
  MR_Word * STATE_VARIABLE_VarTable_13);

static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
  MR_Word OutputVars_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_7_p_0(
  MR_Word OutputVars_8,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word * UnifyGoal_10,
  MR_Word * Renaming_11,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22);

static void MR_CALL 
transform_hlds__ssdebug__create_proxy_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_20,
  MR_Word * STATE_VARIABLE_PredInfo_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_VarTable_0_18,
  MR_Word * STATE_VARIABLE_VarTable_19,
  MR_Word STATE_VARIABLE_ProxyMap_0_20,
  MR_Word * STATE_VARIABLE_ProxyMap_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ProxyMap_0_17,
  MR_Word * STATE_VARIABLE_ProxyMap_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(
  MR_Word STATE_VARIABLE_Goal_0_76,
  MR_Word * STATE_VARIABLE_Goal_77,
  MR_Word STATE_VARIABLE_VarTable_0_78,
  MR_Word * STATE_VARIABLE_VarTable_79,
  MR_Word STATE_VARIABLE_ProxyMap_0_80,
  MR_Word * STATE_VARIABLE_ProxyMap_81,
  MR_Word STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * STATE_VARIABLE_ModuleInfo_83);

static void MR_CALL 
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_23,
  MR_Word * STATE_VARIABLE_VarTable_24);

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(
  MR_Word PredId_7,
  MR_Word * MaybeNewPredId_8,
  MR_Word STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * STATE_VARIABLE_ProxyMap_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProxyMap_0_11,
  MR_Word * STATE_VARIABLE_ProxyMap_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[3][9];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[2][11];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_7[1][7];




static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_3[0])),
    ((MR_Box) ((MR_String) "[|]"))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "list")) },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ssdebug__transform_hlds__ssdebug__type_ctor_info_proxy_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ssdebug____Unify____proxy_map_0_0_10001)),
  ((MR_Box) (transform_hlds__ssdebug____Compare____proxy_map_0_0_10001)),
  (MR_String) "transform_hlds.ssdebug",
  (MR_String) "proxy_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1041__1_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_5, LambdaHeadVar__2_13);
  if (succeeded)
  {
    *LambdaHeadVar__3_14 = LambdaHeadVar__1_12;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(
  MR_Word SSTraceLevel_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_bool succeeded;

  switch (SSTraceLevel_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 0))));
        MR_Word PredInfo_25;
        MR_Word ArgTypes_26;
        MR_Word ArgModes_27;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_23, &PredInfo_25);
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_25, &ArgTypes_26);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &ArgModes_27);
        succeeded = transform_hlds__ssdebug__all_args_fully_input_or_output_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, ArgTypes_26, ArgModes_27);
        if (succeeded)
        {
          MR_Word Determinism_28;
          MR_Word PredId_29;
          MR_Integer ProcId_30;

          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Determinism_28);
          PredId_29 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 0))));
          ProcId_30 = ((MR_Integer) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 1))));
          switch (Determinism_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 4:
            case (MR_Integer) 0:
              transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(SSTraceLevel_7, PredId_29, ProcId_30, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 5:
            case (MR_Integer) 1:
              transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(SSTraceLevel_7, PredId_29, ProcId_30, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 6:
              {
                MR_Word OrigBodyGoal_31;
                MR_Word _FullHeadVars_32;
                MR_Word HeadVars_33;
                MR_Word ProcIdGoals_35;
                MR_Word ProcIdVar_36;
                MR_Word InitInstMap_37;
                MR_Word CallArgListVar_38;
                MR_Word CallArgListGoals_39;
                MR_Word ConstructLevelGoal_41;
                MR_Word LevelVar_42;
                MR_Word HandleEventCallGoal_43;
                MR_Word BodyGoals_44;
                MR_Word STATE_VARIABLE_PredInfo_33_45;
                MR_Word STATE_VARIABLE_VarTable_34_46;
                MR_Word STATE_VARIABLE_VarTable_35_47;
                MR_Word Var_49;
                MR_Word STATE_VARIABLE_ModuleInfo_38_50;
                MR_Word STATE_VARIABLE_ProcInfo_39_51;
                MR_Word STATE_VARIABLE_PredInfo_40_52;
                MR_Word STATE_VARIABLE_VarTable_41_53;
                MR_Word Var_54;
                MR_Word STATE_VARIABLE_VarTable_43_55;
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word PredFormArity_75;
                MR_Word FullArgModes_76;
                MR_Integer NumExtraArgs_77;
                MR_Word _ArgModes_34;
                MR_Word _BoundVarDescsAtCall_40;

                hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_29, &STATE_VARIABLE_PredInfo_33_45);
                hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &OrigBodyGoal_31);
                hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &STATE_VARIABLE_VarTable_34_46);
                hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_PredInfo_33_45, &PredFormArity_75);
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &_FullHeadVars_32);
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &FullArgModes_76);
                NumExtraArgs_77 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), PredFormArity_75, _FullHeadVars_32);
                mercury__list__det_drop_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), NumExtraArgs_77, _FullHeadVars_32, &HeadVars_33);
                mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_77, FullArgModes_76, &_ArgModes_34);
                transform_hlds__ssdebug__make_proc_id_construction_6_p_0(STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_PredInfo_33_45, &ProcIdGoals_35, &ProcIdVar_36, STATE_VARIABLE_VarTable_34_46, &STATE_VARIABLE_VarTable_35_47);
                hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ProcInfo_0_14, &InitInstMap_37);
                Var_49 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
                Var_54 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
                transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, InitInstMap_37, HeadVars_33, Var_49, &CallArgListVar_38, &CallArgListGoals_39, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_38_50, STATE_VARIABLE_ProcInfo_0_14, &STATE_VARIABLE_ProcInfo_39_51, STATE_VARIABLE_PredInfo_33_45, &STATE_VARIABLE_PredInfo_40_52, STATE_VARIABLE_VarTable_35_47, &STATE_VARIABLE_VarTable_41_53, Var_54, &_BoundVarDescsAtCall_40);
                transform_hlds__ssdebug__make_level_construction_5_p_0(SSTraceLevel_7, &ConstructLevelGoal_41, &LevelVar_42, STATE_VARIABLE_VarTable_41_53, &STATE_VARIABLE_VarTable_43_55);
                {
                  Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_59, 0) = ((MR_Box) (LevelVar_42));
                  MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_58, 0) = ((MR_Box) (CallArgListVar_38));
                  MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_57, 0) = ((MR_Box) (ProcIdVar_36));
                  MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
                }
                transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_38_50, (MR_String) "handle_event_call", Var_57, &HandleEventCallGoal_43);
                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (ConstructLevelGoal_41));
                  MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_67, 0) = ((MR_Box) (HandleEventCallGoal_43));
                  MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_70, 0) = ((MR_Box) (OrigBodyGoal_31));
                  MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
                  MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
                  MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
                  MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
                }
                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (CallArgListGoals_39));
                  MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
                }
                {
                  Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_61, 0) = ((MR_Box) (ProcIdGoals_35));
                  MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
                }
                BodyGoals_44 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_61);
                transform_hlds__ssdebug__commit_goal_changes_9_p_0(BodyGoals_44, PredId_29, ProcId_30, STATE_VARIABLE_PredInfo_40_52, STATE_VARIABLE_VarTable_43_55, STATE_VARIABLE_ProcInfo_39_51, STATE_VARIABLE_ProcInfo_15, STATE_VARIABLE_ModuleInfo_38_50, STATE_VARIABLE_ModuleInfo_17);
              }
              break;
            case (MR_Integer) 7:
              transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(SSTraceLevel_7, PredId_29, ProcId_30, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(SSTraceLevel_7, PredId_29, ProcId_30, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
          }
        }
        else
        {
          *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
          *STATE_VARIABLE_ProcInfo_15 = STATE_VARIABLE_ProcInfo_0_14;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ProcInfo_15 = STATE_VARIABLE_ProcInfo_0_14;
        *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 0))));
        MR_Word PredInfo_13;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_11, &PredInfo_13);
        succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_13);
        if (succeeded)
          transform_hlds__ssdebug__ssdebug_process_proc_7_p_0(SSTraceLevel_7, PredProcId_8, PredInfo_13, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
        else
        {
          *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
          *STATE_VARIABLE_ProcInfo_15 = STATE_VARIABLE_ProcInfo_0_14;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredProcId_9,
  MR_Word PredInfo_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * STATE_VARIABLE_ProcInfo_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_bool succeeded;
  MR_Word ArgTypes_13;
  MR_Word ArgModes_14;

  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_10, &ArgTypes_13);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &ArgModes_14);
  succeeded = transform_hlds__ssdebug__all_args_fully_input_or_output_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, ArgTypes_13, ArgModes_14);
  if (succeeded)
  {
    MR_Word Determinism_15;
    MR_Word PredId_16;
    MR_Integer ProcId_17;

    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &Determinism_15);
    PredId_16 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 0))));
    ProcId_17 = ((MR_Integer) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 1))));
    switch (Determinism_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 0:
        transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(SSTraceLevel_8, PredId_16, ProcId_17, STATE_VARIABLE_ProcInfo_0_18, STATE_VARIABLE_ProcInfo_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 1:
        transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(SSTraceLevel_8, PredId_16, ProcId_17, STATE_VARIABLE_ProcInfo_0_18, STATE_VARIABLE_ProcInfo_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
        break;
      case (MR_Integer) 6:
        {
          MR_Word OrigBodyGoal_22;
          MR_Word _FullHeadVars_23;
          MR_Word HeadVars_24;
          MR_Word ProcIdGoals_26;
          MR_Word ProcIdVar_27;
          MR_Word InitInstMap_28;
          MR_Word CallArgListVar_29;
          MR_Word CallArgListGoals_30;
          MR_Word ConstructLevelGoal_32;
          MR_Word LevelVar_33;
          MR_Word HandleEventCallGoal_34;
          MR_Word BodyGoals_35;
          MR_Word STATE_VARIABLE_PredInfo_33_36;
          MR_Word STATE_VARIABLE_VarTable_34_37;
          MR_Word STATE_VARIABLE_VarTable_35_38;
          MR_Word Var_40;
          MR_Word STATE_VARIABLE_ModuleInfo_38_41;
          MR_Word STATE_VARIABLE_ProcInfo_39_42;
          MR_Word STATE_VARIABLE_PredInfo_40_43;
          MR_Word STATE_VARIABLE_VarTable_41_44;
          MR_Word Var_45;
          MR_Word STATE_VARIABLE_VarTable_43_46;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word PredFormArity_66;
          MR_Word FullArgModes_67;
          MR_Integer NumExtraArgs_68;
          MR_Word _ArgModes_25;
          MR_Word _BoundVarDescsAtCall_31;

          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_16, &STATE_VARIABLE_PredInfo_33_36);
          hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &OrigBodyGoal_22);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &STATE_VARIABLE_VarTable_34_37);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_PredInfo_33_36, &PredFormArity_66);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &_FullHeadVars_23);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &FullArgModes_67);
          NumExtraArgs_68 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), PredFormArity_66, _FullHeadVars_23);
          mercury__list__det_drop_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), NumExtraArgs_68, _FullHeadVars_23, &HeadVars_24);
          mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_68, FullArgModes_67, &_ArgModes_25);
          transform_hlds__ssdebug__make_proc_id_construction_6_p_0(STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_PredInfo_33_36, &ProcIdGoals_26, &ProcIdVar_27, STATE_VARIABLE_VarTable_34_37, &STATE_VARIABLE_VarTable_35_38);
          hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ProcInfo_0_18, &InitInstMap_28);
          Var_40 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
          Var_45 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
          transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, InitInstMap_28, HeadVars_24, Var_40, &CallArgListVar_29, &CallArgListGoals_30, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_38_41, STATE_VARIABLE_ProcInfo_0_18, &STATE_VARIABLE_ProcInfo_39_42, STATE_VARIABLE_PredInfo_33_36, &STATE_VARIABLE_PredInfo_40_43, STATE_VARIABLE_VarTable_35_38, &STATE_VARIABLE_VarTable_41_44, Var_45, &_BoundVarDescsAtCall_31);
          transform_hlds__ssdebug__make_level_construction_5_p_0(SSTraceLevel_8, &ConstructLevelGoal_32, &LevelVar_33, STATE_VARIABLE_VarTable_41_44, &STATE_VARIABLE_VarTable_43_46);
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (LevelVar_33));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (CallArgListVar_29));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (ProcIdVar_27));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
          }
          transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_38_41, (MR_String) "handle_event_call", Var_48, &HandleEventCallGoal_34);
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (ConstructLevelGoal_32));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (HandleEventCallGoal_34));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (OrigBodyGoal_22));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (CallArgListGoals_30));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (ProcIdGoals_26));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
          }
          BodyGoals_35 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_52);
          transform_hlds__ssdebug__commit_goal_changes_9_p_0(BodyGoals_35, PredId_16, ProcId_17, STATE_VARIABLE_PredInfo_40_43, STATE_VARIABLE_VarTable_43_46, STATE_VARIABLE_ProcInfo_39_42, STATE_VARIABLE_ProcInfo_19, STATE_VARIABLE_ModuleInfo_38_41, STATE_VARIABLE_ModuleInfo_21);
        }
        break;
      case (MR_Integer) 7:
        transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(SSTraceLevel_8, PredId_16, ProcId_17, STATE_VARIABLE_ProcInfo_0_18, STATE_VARIABLE_ProcInfo_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(SSTraceLevel_8, PredId_16, ProcId_17, STATE_VARIABLE_ProcInfo_0_18, STATE_VARIABLE_ProcInfo_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
    *STATE_VARIABLE_ProcInfo_19 = STATE_VARIABLE_ProcInfo_0_18;
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__all_args_fully_input_or_output_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ssdebug.all_args_fully_input_or_output\'/3", (MR_String) "list length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ssdebug.all_args_fully_input_or_output\'/3", (MR_String) "list length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Mode_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        succeeded = check_hlds__mode_test__mode_is_fully_input_3_p_0(ModuleInfo_1, Var_21, Mode_18);
        if (!(succeeded))
          succeeded = check_hlds__mode_test__mode_is_fully_output_3_p_0(ModuleInfo_1, Var_21, Mode_18);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_20;
          next_value_of_HeadVar__3_3 = Modes_19;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * STATE_VARIABLE_ProcInfo_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40)
{
  MR_Word OrigBodyGoal_15;
  MR_Word FullHeadVars_16;
  MR_Word HeadVars_17;
  MR_Word ProcIdGoals_19;
  MR_Word ProcIdVar_20;
  MR_Word InitInstMap_21;
  MR_Word CallArgListGoals_23;
  MR_Word ConstructLevelGoal_25;
  MR_Word LevelVar_26;
  MR_Word HandleEventCallGoal_27;
  MR_Word FailArgListVar_28;
  MR_Word RetryVar_29;
  MR_Word HandleEventFailGoal_30;
  MR_Word RecursiveGoal_31;
  MR_Word SwitchGoal_32;
  MR_Word ProcDetism_33;
  MR_Word FailDisjunct_34;
  MR_Word DisjGoal_35;
  MR_Word BodyGoals_36;
  MR_Word STATE_VARIABLE_PredInfo_41_41;
  MR_Word STATE_VARIABLE_VarTable_42_42;
  MR_Word STATE_VARIABLE_VarTable_43_43;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_ModuleInfo_46_46;
  MR_Word STATE_VARIABLE_ProcInfo_47_47;
  MR_Word STATE_VARIABLE_PredInfo_48_48;
  MR_Word STATE_VARIABLE_VarTable_49_49;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_VarTable_51_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_VarTable_58_58;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word PredFormArity_90;
  MR_Word FullArgModes_91;
  MR_Integer NumExtraArgs_92;
  MR_Word SSDBModule_95;
  MR_Word TypeCtor_96;
  MR_Word RetryType_97;
  MR_Word RetryVarEntry_98;
  MR_Word Var_99;
  MR_Word GoalInfo0_104;
  MR_Word GoalInfo0_106;
  MR_Word GoalInfo1_107;
  MR_Word _ArgModes_18;
  MR_Word _BoundVarDescsAtCall_24;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, PredId_9, &STATE_VARIABLE_PredInfo_41_41);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_37, &OrigBodyGoal_15);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_37, &STATE_VARIABLE_VarTable_42_42);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_PredInfo_41_41, &PredFormArity_90);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_37, &FullHeadVars_16);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_37, &FullArgModes_91);
  NumExtraArgs_92 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), PredFormArity_90, FullHeadVars_16);
  mercury__list__det_drop_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), NumExtraArgs_92, FullHeadVars_16, &HeadVars_17);
  mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_92, FullArgModes_91, &_ArgModes_18);
  transform_hlds__ssdebug__make_proc_id_construction_6_p_0(STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_PredInfo_41_41, &ProcIdGoals_19, &ProcIdVar_20, STATE_VARIABLE_VarTable_42_42, &STATE_VARIABLE_VarTable_43_43);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ProcInfo_0_37, &InitInstMap_21);
  Var_45 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_50 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, InitInstMap_21, HeadVars_17, Var_45, &FailArgListVar_28, &CallArgListGoals_23, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_46_46, STATE_VARIABLE_ProcInfo_0_37, &STATE_VARIABLE_ProcInfo_47_47, STATE_VARIABLE_PredInfo_41_41, &STATE_VARIABLE_PredInfo_48_48, STATE_VARIABLE_VarTable_43_43, &STATE_VARIABLE_VarTable_49_49, Var_50, &_BoundVarDescsAtCall_24);
  transform_hlds__ssdebug__make_level_construction_5_p_0(SSTraceLevel_8, &ConstructLevelGoal_25, &LevelVar_26, STATE_VARIABLE_VarTable_49_49, &STATE_VARIABLE_VarTable_51_51);
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (LevelVar_26));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (FailArgListVar_28));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_46_46, (MR_String) "handle_event_call", Var_53, &HandleEventCallGoal_27);
  SSDBModule_95 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (SSDBModule_95));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
  }
  {
    TypeCtor_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_96, 0) = ((MR_Box) (Var_99));
    MR_hl_field(0, TypeCtor_96, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_96, (MR_Word) ((MR_Unsigned) 0U), &RetryType_97);
  {
    RetryVarEntry_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RetryVarEntry_98, 0) = ((MR_Box) ((MR_String) "DoRetry"));
    MR_hl_field(0, RetryVarEntry_98, 1) = ((MR_Box) (RetryType_97));
    MR_hl_field(0, RetryVarEntry_98, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(RetryVarEntry_98, &RetryVar_29, STATE_VARIABLE_VarTable_51_51, &STATE_VARIABLE_VarTable_58_58);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (RetryVar_29));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (FailArgListVar_28));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_46_46, (MR_String) "handle_event_fail", Var_60, &HandleEventFailGoal_30);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_48_48, STATE_VARIABLE_ModuleInfo_46_46, PredId_9, ProcId_10, FullHeadVars_16, &RecursiveGoal_31);
  Var_64 = hlds__make_goal__fail_goal_0_f_0();
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryVar_29, RecursiveGoal_31, Var_64, &SwitchGoal_32);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &ProcDetism_33);
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (SwitchGoal_32));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (HandleEventFailGoal_30));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_65, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_65, 2) = ((MR_Box) (Var_67));
  }
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_106);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_106, &GoalInfo1_107);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(ProcDetism_33, GoalInfo1_107, &GoalInfo0_104);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, GoalInfo0_104, &Var_70);
  {
    FailDisjunct_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FailDisjunct_34, 0) = ((MR_Box) (Var_65));
    MR_hl_field(0, FailDisjunct_34, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (FailDisjunct_34));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (OrigBodyGoal_15));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_71, 1) = ((MR_Box) (Var_72));
  }
  Var_75 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_33);
  {
    DisjGoal_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DisjGoal_35, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, DisjGoal_35, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (ConstructLevelGoal_25));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (HandleEventCallGoal_27));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (DisjGoal_35));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (CallArgListGoals_23));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (ProcIdGoals_19));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
  }
  BodyGoals_36 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_76);
  transform_hlds__ssdebug__commit_goal_changes_9_p_0(BodyGoals_36, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_48_48, STATE_VARIABLE_VarTable_58_58, STATE_VARIABLE_ProcInfo_47_47, STATE_VARIABLE_ProcInfo_38, STATE_VARIABLE_ModuleInfo_46_46, STATE_VARIABLE_ModuleInfo_40);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_50,
  MR_Word * STATE_VARIABLE_ProcInfo_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53)
{
  MR_Word OrigBodyGoal_15;
  MR_Word FullHeadVars_16;
  MR_Word HeadVars_17;
  MR_Word ProcIdGoals_19;
  MR_Word ProcIdVar_20;
  MR_Word InitInstMap_21;
  MR_Word BoundVarDescsAtCall_24;
  MR_Word ConstructLevelGoal_25;
  MR_Word LevelVar_26;
  MR_Word HandleEventCallGoal_27;
  MR_Word FinalInstMap_28;
  MR_Word ExitArgListVar_29;
  MR_Word ExitArgListGoals_30;
  MR_Word ProcDetism_32;
  MR_Word ExitDisjunct_34;
  MR_Word HandleEventRedoGoal_35;
  MR_Word RedoDisjunct_36;
  MR_Word ExitOrRedoGoal_37;
  MR_Word CallExitRedoDisjunctGoals_38;
  MR_Word CallExitRedoDisjunct_39;
  MR_Word FailArgListVar_40;
  MR_Word FailArgListGoals_41;
  MR_Word RetryVar_42;
  MR_Word HandleEventFailGoal_43;
  MR_Word RecursiveGoal_44;
  MR_Word SwitchFailPortGoal_45;
  MR_Word FailDisjunctGoals_46;
  MR_Word FailDisjunct_47;
  MR_Word BodyDisj_48;
  MR_Word BodyGoals_49;
  MR_Word STATE_VARIABLE_PredInfo_54_54;
  MR_Word STATE_VARIABLE_VarTable_55_55;
  MR_Word STATE_VARIABLE_VarTable_56_56;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_ModuleInfo_59_59;
  MR_Word STATE_VARIABLE_ProcInfo_60_60;
  MR_Word STATE_VARIABLE_PredInfo_61_61;
  MR_Word STATE_VARIABLE_VarTable_62_62;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_VarTable_64_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_ModuleInfo_72_72;
  MR_Word STATE_VARIABLE_ProcInfo_73_73;
  MR_Word STATE_VARIABLE_PredInfo_74_74;
  MR_Word STATE_VARIABLE_VarTable_75_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_Word STATE_VARIABLE_VarTable_117_117;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_132;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word _ArgModes_18;
  MR_Word _BoundVarDescsAtExit_31;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_52, PredId_9, &STATE_VARIABLE_PredInfo_54_54);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_50, &OrigBodyGoal_15);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_50, &STATE_VARIABLE_VarTable_55_55);
  transform_hlds__ssdebug__get_stripped_headvars_5_p_0(STATE_VARIABLE_PredInfo_54_54, STATE_VARIABLE_ProcInfo_0_50, &FullHeadVars_16, &HeadVars_17, &_ArgModes_18);
  transform_hlds__ssdebug__make_proc_id_construction_6_p_0(STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_PredInfo_54_54, &ProcIdGoals_19, &ProcIdVar_20, STATE_VARIABLE_VarTable_55_55, &STATE_VARIABLE_VarTable_56_56);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ProcInfo_0_50, &InitInstMap_21);
  Var_58 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_63 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, InitInstMap_21, HeadVars_17, Var_58, &FailArgListVar_40, &FailArgListGoals_41, STATE_VARIABLE_ModuleInfo_0_52, &STATE_VARIABLE_ModuleInfo_59_59, STATE_VARIABLE_ProcInfo_0_50, &STATE_VARIABLE_ProcInfo_60_60, STATE_VARIABLE_PredInfo_54_54, &STATE_VARIABLE_PredInfo_61_61, STATE_VARIABLE_VarTable_56_56, &STATE_VARIABLE_VarTable_62_62, Var_63, &BoundVarDescsAtCall_24);
  transform_hlds__ssdebug__make_level_construction_5_p_0(SSTraceLevel_8, &ConstructLevelGoal_25, &LevelVar_26, STATE_VARIABLE_VarTable_62_62, &STATE_VARIABLE_VarTable_64_64);
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (LevelVar_26));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (FailArgListVar_40));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_59_59, (MR_String) "handle_event_call_nondet", Var_66, &HandleEventCallGoal_27);
  hlds__goal_util__update_instmap_3_p_0(OrigBodyGoal_15, InitInstMap_21, &FinalInstMap_28);
  Var_71 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, FinalInstMap_28, HeadVars_17, Var_71, &ExitArgListVar_29, &ExitArgListGoals_30, STATE_VARIABLE_ModuleInfo_59_59, &STATE_VARIABLE_ModuleInfo_72_72, STATE_VARIABLE_ProcInfo_60_60, &STATE_VARIABLE_ProcInfo_73_73, STATE_VARIABLE_PredInfo_61_61, &STATE_VARIABLE_PredInfo_74_74, STATE_VARIABLE_VarTable_64_64, &STATE_VARIABLE_VarTable_75_75, BoundVarDescsAtCall_24, &_BoundVarDescsAtExit_31);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_73_73, &ProcDetism_32);
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (ExitArgListVar_29));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_72_72, (MR_String) "handle_event_exit_nondet", Var_77, &ExitDisjunct_34);
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_72_72, (MR_String) "handle_event_redo_nondet", Var_77, &HandleEventRedoGoal_35);
  Var_88 = hlds__make_goal__fail_goal_0_f_0();
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (HandleEventRedoGoal_35));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_84, 2) = ((MR_Box) (Var_86));
  }
  Var_90 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0((MR_Integer) 7);
  {
    RedoDisjunct_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RedoDisjunct_36, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, RedoDisjunct_36, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (RedoDisjunct_36));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (ExitDisjunct_34));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_92, 1) = ((MR_Box) (Var_93));
  }
  Var_96 = transform_hlds__ssdebug__impure_goal_info_1_f_0((MR_Integer) 3);
  {
    ExitOrRedoGoal_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExitOrRedoGoal_37, 0) = ((MR_Box) (Var_92));
    MR_hl_field(0, ExitOrRedoGoal_37, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (ConstructLevelGoal_25));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (HandleEventCallGoal_27));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (OrigBodyGoal_15));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (ExitOrRedoGoal_37));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (ExitArgListGoals_30));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (FailArgListGoals_41));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
  }
  CallExitRedoDisjunctGoals_38 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_98);
  {
    Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_113, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_113, 2) = ((MR_Box) (CallExitRedoDisjunctGoals_38));
  }
  Var_115 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_32);
  {
    CallExitRedoDisjunct_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallExitRedoDisjunct_39, 0) = ((MR_Box) (Var_113));
    MR_hl_field(0, CallExitRedoDisjunct_39, 1) = ((MR_Box) (Var_115));
  }
  transform_hlds__ssdebug__make_retry_var_4_p_0((MR_String) "DoRetry", &RetryVar_42, STATE_VARIABLE_VarTable_75_75, &STATE_VARIABLE_VarTable_117_117);
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (RetryVar_42));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (FailArgListVar_40));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_72_72, (MR_String) "handle_event_fail_nondet", Var_119, &HandleEventFailGoal_43);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_74_74, STATE_VARIABLE_ModuleInfo_72_72, PredId_9, ProcId_10, FullHeadVars_16, &RecursiveGoal_44);
  Var_123 = hlds__make_goal__fail_goal_0_f_0();
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryVar_42, RecursiveGoal_44, Var_123, &SwitchFailPortGoal_45);
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (HandleEventFailGoal_43));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (SwitchFailPortGoal_45));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (FailArgListGoals_41));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
  }
  FailDisjunctGoals_46 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_124);
  {
    Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_132, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_132, 2) = ((MR_Box) (FailDisjunctGoals_46));
  }
  Var_134 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(ProcDetism_32);
  {
    FailDisjunct_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FailDisjunct_47, 0) = ((MR_Box) (Var_132));
    MR_hl_field(0, FailDisjunct_47, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (FailDisjunct_47));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (CallExitRedoDisjunct_39));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
  }
  {
    Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_135, 1) = ((MR_Box) (Var_136));
  }
  Var_139 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_32);
  {
    BodyDisj_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BodyDisj_48, 0) = ((MR_Box) (Var_135));
    MR_hl_field(0, BodyDisj_48, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (BodyDisj_48));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  BodyGoals_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ProcIdGoals_19, Var_140);
  transform_hlds__ssdebug__commit_goal_changes_9_p_0(BodyGoals_49, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_74_74, STATE_VARIABLE_VarTable_117_117, STATE_VARIABLE_ProcInfo_73_73, STATE_VARIABLE_ProcInfo_51, STATE_VARIABLE_ModuleInfo_72_72, STATE_VARIABLE_ModuleInfo_53);
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word Detism_3)
{
  MR_Word GoalInfo_4;
  MR_Word GoalInfo0_5;
  MR_Word GoalInfo0_7;
  MR_Word GoalInfo1_8;

  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_7);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_7, &GoalInfo1_8);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_3, GoalInfo1_8, &GoalInfo0_5);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, GoalInfo0_5, &GoalInfo_4);
  return GoalInfo_4;
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64)
{
  MR_Word OrigBodyGoal_15;
  MR_Word FullHeadVars_16;
  MR_Word HeadVars_17;
  MR_Word ArgModes_18;
  MR_Word ProcIdGoals_19;
  MR_Word ProcIdVar_20;
  MR_Word InitInstMap_21;
  MR_Word CallArgListVar_22;
  MR_Word CallArgListGoals_23;
  MR_Word BoundVarDescsAtCall_24;
  MR_Word ConstructLevelGoal_25;
  MR_Word LevelVar_26;
  MR_Word HandleEventCallGoal_27;
  MR_Word OutputVars_28;
  MR_Word RenamedBodyGoal_29;
  MR_Word AssignOutputsGoal_30;
  MR_Word Renaming_31;
  MR_Word FinalInstMap_32;
  MR_Word ExitArgListVar_33;
  MR_Word ExitArgListGoals_34;
  MR_Word RetryAVar_36;
  MR_Word HandleEventExitGoal_37;
  MR_Word RecursiveGoal_38;
  MR_Word FailArgListVar_39;
  MR_Word FailArgListGoals_40;
  MR_Word RetryBVar_42;
  MR_Word HandleEventFailGoal_43;
  MR_Word ProcDetism_44;
  MR_Word ImpureGoalInfo_45;
  MR_Word Solns_47;
  MR_Word CondGoal_48;
  MR_Word SwitchExitPortGoal_50;
  MR_Word GoalsThen_51;
  MR_Word ThenGoal_52;
  MR_Word SwitchFailPortGoal_53;
  MR_Word GoalsElse_54;
  MR_Word ElseGoal_55;
  MR_Word OrigGoalInfo_57;
  MR_Word IteGoalInfo_58;
  MR_Word IteGoal_59;
  MR_Word BodyGoals_60;
  MR_Word STATE_VARIABLE_PredInfo_65_65;
  MR_Word STATE_VARIABLE_VarTable_66_66;
  MR_Word STATE_VARIABLE_VarTable_67_67;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_ModuleInfo_70_70;
  MR_Word STATE_VARIABLE_ProcInfo_71_71;
  MR_Word STATE_VARIABLE_PredInfo_72_72;
  MR_Word STATE_VARIABLE_VarTable_73_73;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_VarTable_75_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_VarTable_81_81;
  MR_Word STATE_VARIABLE_ModuleInfo_83_83;
  MR_Word STATE_VARIABLE_ProcInfo_84_84;
  MR_Word STATE_VARIABLE_PredInfo_85_85;
  MR_Word STATE_VARIABLE_VarTable_86_86;
  MR_Word STATE_VARIABLE_VarTable_88_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word STATE_VARIABLE_ModuleInfo_96_96;
  MR_Word STATE_VARIABLE_ProcInfo_97_97;
  MR_Word STATE_VARIABLE_PredInfo_98_98;
  MR_Word STATE_VARIABLE_VarTable_99_99;
  MR_Word STATE_VARIABLE_VarTable_101_101;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_117;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_128;
  MR_Word Var_130;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word _BoundVarDescsAtExit_35;
  MR_Word _BoundVarDescsAtFail_41;
  MR_Word _CanFail_46;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_63, PredId_9, &STATE_VARIABLE_PredInfo_65_65);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_61, &OrigBodyGoal_15);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_61, &STATE_VARIABLE_VarTable_66_66);
  transform_hlds__ssdebug__get_stripped_headvars_5_p_0(STATE_VARIABLE_PredInfo_65_65, STATE_VARIABLE_ProcInfo_0_61, &FullHeadVars_16, &HeadVars_17, &ArgModes_18);
  transform_hlds__ssdebug__make_proc_id_construction_6_p_0(STATE_VARIABLE_ModuleInfo_0_63, STATE_VARIABLE_PredInfo_65_65, &ProcIdGoals_19, &ProcIdVar_20, STATE_VARIABLE_VarTable_66_66, &STATE_VARIABLE_VarTable_67_67);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_63, STATE_VARIABLE_ProcInfo_0_61, &InitInstMap_21);
  Var_69 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_74 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, InitInstMap_21, HeadVars_17, Var_69, &CallArgListVar_22, &CallArgListGoals_23, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_ProcInfo_0_61, &STATE_VARIABLE_ProcInfo_71_71, STATE_VARIABLE_PredInfo_65_65, &STATE_VARIABLE_PredInfo_72_72, STATE_VARIABLE_VarTable_67_67, &STATE_VARIABLE_VarTable_73_73, Var_74, &BoundVarDescsAtCall_24);
  transform_hlds__ssdebug__make_level_construction_5_p_0(SSTraceLevel_8, &ConstructLevelGoal_25, &LevelVar_26, STATE_VARIABLE_VarTable_73_73, &STATE_VARIABLE_VarTable_75_75);
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (LevelVar_26));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (CallArgListVar_22));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_70_70, (MR_String) "handle_event_call", Var_77, &HandleEventCallGoal_27);
  transform_hlds__ssdebug__get_output_args_4_p_0(STATE_VARIABLE_ModuleInfo_70_70, HeadVars_17, ArgModes_18, &OutputVars_28);
  transform_hlds__ssdebug__rename_outputs_7_p_0(OutputVars_28, OrigBodyGoal_15, &RenamedBodyGoal_29, &AssignOutputsGoal_30, &Renaming_31, STATE_VARIABLE_VarTable_75_75, &STATE_VARIABLE_VarTable_81_81);
  hlds__goal_util__update_instmap_3_p_0(OrigBodyGoal_15, InitInstMap_21, &FinalInstMap_32);
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, FinalInstMap_32, HeadVars_17, Renaming_31, &ExitArgListVar_33, &ExitArgListGoals_34, STATE_VARIABLE_ModuleInfo_70_70, &STATE_VARIABLE_ModuleInfo_83_83, STATE_VARIABLE_ProcInfo_71_71, &STATE_VARIABLE_ProcInfo_84_84, STATE_VARIABLE_PredInfo_72_72, &STATE_VARIABLE_PredInfo_85_85, STATE_VARIABLE_VarTable_81_81, &STATE_VARIABLE_VarTable_86_86, BoundVarDescsAtCall_24, &_BoundVarDescsAtExit_35);
  transform_hlds__ssdebug__make_retry_var_4_p_0((MR_String) "DoRetryA", &RetryAVar_36, STATE_VARIABLE_VarTable_86_86, &STATE_VARIABLE_VarTable_88_88);
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (RetryAVar_36));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (ExitArgListVar_33));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_83_83, (MR_String) "handle_event_exit", Var_90, &HandleEventExitGoal_37);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_85_85, STATE_VARIABLE_ModuleInfo_83_83, PredId_9, ProcId_10, FullHeadVars_16, &RecursiveGoal_38);
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, InitInstMap_21, (MR_Word) ((MR_Unsigned) 0U), Renaming_31, &FailArgListVar_39, &FailArgListGoals_40, STATE_VARIABLE_ModuleInfo_83_83, &STATE_VARIABLE_ModuleInfo_96_96, STATE_VARIABLE_ProcInfo_84_84, &STATE_VARIABLE_ProcInfo_97_97, STATE_VARIABLE_PredInfo_85_85, &STATE_VARIABLE_PredInfo_98_98, STATE_VARIABLE_VarTable_88_88, &STATE_VARIABLE_VarTable_99_99, BoundVarDescsAtCall_24, &_BoundVarDescsAtFail_41);
  transform_hlds__ssdebug__make_retry_var_4_p_0((MR_String) "DoRetryB", &RetryBVar_42, STATE_VARIABLE_VarTable_99_99, &STATE_VARIABLE_VarTable_101_101);
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (RetryBVar_42));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (FailArgListVar_39));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_104));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_96_96, (MR_String) "handle_event_fail", Var_103, &HandleEventFailGoal_43);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_97_97, &ProcDetism_44);
  ImpureGoalInfo_45 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_44);
  parse_tree__prog_data__determinism_components_3_p_0(ProcDetism_44, &_CanFail_46, &Solns_47);
  switch (Solns_47) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      {
        MR_Word RenamedOutputVars_49;

        mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), OutputVars_28, Renaming_31, &RenamedOutputVars_49);
        transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(RenamedOutputVars_49, RenamedBodyGoal_29, &CondGoal_48);
      }
      break;
    case (MR_Integer) 1:
      CondGoal_48 = RenamedBodyGoal_29;
      break;
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_process_proc_semi\'/7", (MR_String) "zero solutions");
        return;
      }
      break;
  }
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryAVar_36, RecursiveGoal_38, AssignOutputsGoal_30, &SwitchExitPortGoal_50);
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (HandleEventExitGoal_37));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (SwitchExitPortGoal_50));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_113));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (ExitArgListGoals_34));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
  }
  GoalsThen_51 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_109);
  {
    Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_117, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_117, 2) = ((MR_Box) (GoalsThen_51));
  }
  {
    ThenGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ThenGoal_52, 0) = ((MR_Box) (Var_117));
    MR_hl_field(0, ThenGoal_52, 1) = ((MR_Box) (ImpureGoalInfo_45));
  }
  Var_119 = hlds__make_goal__fail_goal_0_f_0();
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryBVar_42, RecursiveGoal_38, Var_119, &SwitchFailPortGoal_53);
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (HandleEventFailGoal_43));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (SwitchFailPortGoal_53));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (FailArgListGoals_40));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  GoalsElse_54 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_120);
  {
    Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_128, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_128, 2) = ((MR_Box) (GoalsElse_54));
  }
  {
    ElseGoal_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ElseGoal_55, 0) = ((MR_Box) (Var_128));
    MR_hl_field(0, ElseGoal_55, 1) = ((MR_Box) (ImpureGoalInfo_45));
  }
  OrigGoalInfo_57 = ((MR_Word) ((MR_hl_field(0, OrigBodyGoal_15, (MR_Integer) 1))));
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(ProcDetism_44, OrigGoalInfo_57, &IteGoalInfo_58);
  {
    Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_130, 2) = ((MR_Box) (CondGoal_48));
    MR_hl_field(3, Var_130, 3) = ((MR_Box) (ThenGoal_52));
    MR_hl_field(3, Var_130, 4) = ((MR_Box) (ElseGoal_55));
  }
  {
    IteGoal_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IteGoal_59, 0) = ((MR_Box) (Var_130));
    MR_hl_field(0, IteGoal_59, 1) = ((MR_Box) (IteGoalInfo_58));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (ConstructLevelGoal_25));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (HandleEventCallGoal_27));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (IteGoal_59));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_137));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (CallArgListGoals_23));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) (ProcIdGoals_19));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_133));
  }
  BodyGoals_60 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_132);
  transform_hlds__ssdebug__commit_goal_changes_9_p_0(BodyGoals_60, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_98_98, STATE_VARIABLE_VarTable_101_101, STATE_VARIABLE_ProcInfo_97_97, STATE_VARIABLE_ProcInfo_62, STATE_VARIABLE_ModuleInfo_96_96, STATE_VARIABLE_ModuleInfo_64);
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
  MR_Word Detism_3)
{
  MR_Word GoalInfo_4;
  MR_Word GoalInfo0_5;
  MR_Word GoalInfo1_6;

  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_5);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_5, &GoalInfo1_6);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_3, GoalInfo1_6, &GoalInfo_4);
  return GoalInfo_4;
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_14;

  succeeded = transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1041__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_14);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVars_6,
  MR_Word ArgModes_7,
  MR_Word * OutputVars_8)
{
  MR_bool succeeded;
  MR_Word F_9;

  {
    F_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, F_9, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_7[0]));
    MR_hl_field(0, F_9, 1) = ((MR_Box) (transform_hlds__ssdebug__get_output_args_4_p_0_1));
    MR_hl_field(0, F_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, F_9, 3) = ((MR_Box) (ModuleInfo_5));
  }
  *OutputVars_8 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), F_9, HeadVars_6, ArgModes_7);
}

static void MR_CALL 
transform_hlds__ssdebug__get_stripped_headvars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * FullHeadVars_8,
  MR_Word * HeadVars_9,
  MR_Word * ArgModes_10)
{
  MR_Word PredFormArity_11;
  MR_Word FullArgModes_12;
  MR_Integer NumExtraArgs_13;

  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_6, &PredFormArity_11);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_7, FullHeadVars_8);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_7, &FullArgModes_12);
  NumExtraArgs_13 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), PredFormArity_11, *FullHeadVars_8);
  mercury__list__det_drop_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), NumExtraArgs_13, *FullHeadVars_8, HeadVars_9);
  mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_13, FullArgModes_12, ArgModes_10);
}

static MR_bool MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_14;

  succeeded = transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1041__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_14);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_46,
  MR_Word * STATE_VARIABLE_ProcInfo_47,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49)
{
  MR_bool succeeded;
  MR_Word OrigBodyGoal_15;
  MR_Word FullHeadVars_16;
  MR_Word HeadVars_17;
  MR_Word ArgModes_18;
  MR_Word ProcIdGoals_19;
  MR_Word ProcIdVar_20;
  MR_Word InitInstMap_21;
  MR_Word CallArgListVar_22;
  MR_Word CallArgListGoals_23;
  MR_Word BoundVarDescsAtCall_24;
  MR_Word ConstructLevelGoal_25;
  MR_Word LevelVar_26;
  MR_Word HandleEventCallGoal_27;
  MR_Word OutputVars_28;
  MR_Word RenamedBodyGoal_29;
  MR_Word AssignOutputsGoal_30;
  MR_Word Renaming_31;
  MR_Word ProcDetism_32;
  MR_Word CanFail_33;
  MR_Word ScopedRenamedBodyGoal_36;
  MR_Word FinalInstMap_37;
  MR_Word ExitArgListVar_38;
  MR_Word ExitArgListGoals_39;
  MR_Word RetryVar_41;
  MR_Word HandleEventExitGoal_42;
  MR_Word RecursiveGoal_43;
  MR_Word SwitchGoal_44;
  MR_Word BodyGoals_45;
  MR_Word STATE_VARIABLE_PredInfo_50_50;
  MR_Word STATE_VARIABLE_VarTable_51_51;
  MR_Word STATE_VARIABLE_VarTable_52_52;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_ModuleInfo_55_55;
  MR_Word STATE_VARIABLE_ProcInfo_56_56;
  MR_Word STATE_VARIABLE_PredInfo_57_57;
  MR_Word STATE_VARIABLE_VarTable_58_58;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_VarTable_60_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word STATE_VARIABLE_VarTable_66_66;
  MR_Word STATE_VARIABLE_ModuleInfo_68_68;
  MR_Word STATE_VARIABLE_ProcInfo_69_69;
  MR_Word STATE_VARIABLE_PredInfo_70_70;
  MR_Word STATE_VARIABLE_VarTable_71_71;
  MR_Word STATE_VARIABLE_VarTable_73_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word PredFormArity_100;
  MR_Word FullArgModes_101;
  MR_Integer NumExtraArgs_102;
  MR_Word F_105;
  MR_Word _Solns_34;
  MR_Word _BoundVarDescsAtExit_40;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_48, PredId_9, &STATE_VARIABLE_PredInfo_50_50);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &OrigBodyGoal_15);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &STATE_VARIABLE_VarTable_51_51);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_PredInfo_50_50, &PredFormArity_100);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &FullHeadVars_16);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &FullArgModes_101);
  NumExtraArgs_102 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), PredFormArity_100, FullHeadVars_16);
  mercury__list__det_drop_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), NumExtraArgs_102, FullHeadVars_16, &HeadVars_17);
  mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_102, FullArgModes_101, &ArgModes_18);
  transform_hlds__ssdebug__make_proc_id_construction_6_p_0(STATE_VARIABLE_ModuleInfo_0_48, STATE_VARIABLE_PredInfo_50_50, &ProcIdGoals_19, &ProcIdVar_20, STATE_VARIABLE_VarTable_51_51, &STATE_VARIABLE_VarTable_52_52);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_48, STATE_VARIABLE_ProcInfo_0_46, &InitInstMap_21);
  Var_54 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_59 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, InitInstMap_21, HeadVars_17, Var_54, &CallArgListVar_22, &CallArgListGoals_23, STATE_VARIABLE_ModuleInfo_0_48, &STATE_VARIABLE_ModuleInfo_55_55, STATE_VARIABLE_ProcInfo_0_46, &STATE_VARIABLE_ProcInfo_56_56, STATE_VARIABLE_PredInfo_50_50, &STATE_VARIABLE_PredInfo_57_57, STATE_VARIABLE_VarTable_52_52, &STATE_VARIABLE_VarTable_58_58, Var_59, &BoundVarDescsAtCall_24);
  transform_hlds__ssdebug__make_level_construction_5_p_0(SSTraceLevel_8, &ConstructLevelGoal_25, &LevelVar_26, STATE_VARIABLE_VarTable_58_58, &STATE_VARIABLE_VarTable_60_60);
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (LevelVar_26));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (CallArgListVar_22));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_55_55, (MR_String) "handle_event_call", Var_62, &HandleEventCallGoal_27);
  {
    F_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, F_105, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_7[0]));
    MR_hl_field(0, F_105, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0_1));
    MR_hl_field(0, F_105, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, F_105, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_55_55));
  }
  OutputVars_28 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), F_105, HeadVars_17, ArgModes_18);
  transform_hlds__ssdebug__rename_outputs_7_p_0(OutputVars_28, OrigBodyGoal_15, &RenamedBodyGoal_29, &AssignOutputsGoal_30, &Renaming_31, STATE_VARIABLE_VarTable_60_60, &STATE_VARIABLE_VarTable_66_66);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_56_56, &ProcDetism_32);
  parse_tree__prog_data__determinism_components_3_p_0(ProcDetism_32, &CanFail_33, &_Solns_34);
  switch (CanFail_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RenamedOutputVars_35;

        mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), OutputVars_28, Renaming_31, &RenamedOutputVars_35);
        transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(RenamedOutputVars_35, RenamedBodyGoal_29, &ScopedRenamedBodyGoal_36);
      }
      break;
    case (MR_Integer) 1:
      ScopedRenamedBodyGoal_36 = RenamedBodyGoal_29;
      break;
  }
  hlds__goal_util__update_instmap_3_p_0(OrigBodyGoal_15, InitInstMap_21, &FinalInstMap_37);
  transform_hlds__ssdebug__make_arg_list_16_p_0((MR_Integer) 0, FinalInstMap_37, HeadVars_17, Renaming_31, &ExitArgListVar_38, &ExitArgListGoals_39, STATE_VARIABLE_ModuleInfo_55_55, &STATE_VARIABLE_ModuleInfo_68_68, STATE_VARIABLE_ProcInfo_56_56, &STATE_VARIABLE_ProcInfo_69_69, STATE_VARIABLE_PredInfo_57_57, &STATE_VARIABLE_PredInfo_70_70, STATE_VARIABLE_VarTable_66_66, &STATE_VARIABLE_VarTable_71_71, BoundVarDescsAtCall_24, &_BoundVarDescsAtExit_40);
  transform_hlds__ssdebug__make_retry_var_4_p_0((MR_String) "DoRetry", &RetryVar_41, STATE_VARIABLE_VarTable_71_71, &STATE_VARIABLE_VarTable_73_73);
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (RetryVar_41));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (ExitArgListVar_38));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (ProcIdVar_20));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
  }
  transform_hlds__ssdebug__make_handle_event_4_p_0(STATE_VARIABLE_ModuleInfo_68_68, (MR_String) "handle_event_exit", Var_75, &HandleEventExitGoal_42);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_70_70, STATE_VARIABLE_ModuleInfo_68_68, PredId_9, ProcId_10, FullHeadVars_16, &RecursiveGoal_43);
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryVar_41, RecursiveGoal_43, AssignOutputsGoal_30, &SwitchGoal_44);
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (ConstructLevelGoal_25));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (HandleEventCallGoal_27));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (ScopedRenamedBodyGoal_36));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (HandleEventExitGoal_42));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (SwitchGoal_44));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (ExitArgListGoals_39));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (CallArgListGoals_23));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (ProcIdGoals_19));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  BodyGoals_45 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_79);
  transform_hlds__ssdebug__commit_goal_changes_9_p_0(BodyGoals_45, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_70_70, STATE_VARIABLE_VarTable_73_73, STATE_VARIABLE_ProcInfo_69_69, STATE_VARIABLE_ProcInfo_47, STATE_VARIABLE_ModuleInfo_68_68, STATE_VARIABLE_ModuleInfo_49);
}

static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_16_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * OutVar_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10,
  MR_Word STATE_VARIABLE_PredInfo_0_11,
  MR_Word * STATE_VARIABLE_PredInfo_12,
  MR_Word STATE_VARIABLE_VarTable_0_13,
  MR_Word * STATE_VARIABLE_VarTable_14,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_15,
  MR_Word * STATE_VARIABLE_BoundVarDescs_16)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Goal_21;
    MR_Word OutVarEntry_27;
    MR_Word ListTypeSymName_28;
    MR_Word ListTypeCtor_29;
    MR_Word ConsId_30;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    Var_43 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
    {
      OutVarEntry_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OutVarEntry_27, 0) = ((MR_Box) ((MR_String) "EmptyVarList"));
      MR_hl_field(0, OutVarEntry_27, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, OutVarEntry_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(OutVarEntry_27, OutVar_5, STATE_VARIABLE_VarTable_0_13, STATE_VARIABLE_VarTable_14);
    Var_46 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    {
      ListTypeSymName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ListTypeSymName_28, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, ListTypeSymName_28, 1) = ((MR_Box) ((MR_String) "list"));
    }
    {
      ListTypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ListTypeCtor_29, 0) = ((MR_Box) (ListTypeSymName_28));
      MR_hl_field(0, ListTypeCtor_29, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    Var_51 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_String) "[]"));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) (ListTypeCtor_29));
    }
    ConsId_30 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_49)));
    hlds__make_goal__construct_functor_4_p_0(*OutVar_5, ConsId_30, (MR_Word) ((MR_Unsigned) 0U), &Goal_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_21));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_BoundVarDescs_16 = STATE_VARIABLE_BoundVarDescs_0_15;
    *STATE_VARIABLE_PredInfo_12 = STATE_VARIABLE_PredInfo_0_11;
    *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_0_9;
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
  }
  else
  {
    MR_Word ProgVar_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ProgVars_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer Pos_67 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
    MR_Word OutVar0_68;
    MR_Word Goals0_69;
    MR_Word ProgVarType_70;
    MR_Word STATE_VARIABLE_ModuleInfo_90_90;
    MR_Word STATE_VARIABLE_ProcInfo_91_91;
    MR_Word STATE_VARIABLE_PredInfo_92_92;
    MR_Word STATE_VARIABLE_VarTable_93_93;
    MR_Word STATE_VARIABLE_BoundVarDescs_94_94;

    transform_hlds__ssdebug__make_arg_list_16_p_0(Pos_67, HeadVar__2_2, ProgVars_58, HeadVar__4_4, &OutVar0_68, &Goals0_69, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_ProcInfo_0_9, &STATE_VARIABLE_ProcInfo_91_91, STATE_VARIABLE_PredInfo_0_11, &STATE_VARIABLE_PredInfo_92_92, STATE_VARIABLE_VarTable_0_13, &STATE_VARIABLE_VarTable_93_93, STATE_VARIABLE_BoundVarDescs_0_15, &STATE_VARIABLE_BoundVarDescs_94_94);
    parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_93_93, ProgVar_57, &ProgVarType_70);
    {
      MR_Word Var_121;

      Var_121 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ProgVarType_70, Var_121);
    }
    if (!(succeeded))
    {
      MR_Word Var_122;

      Var_122 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ProgVarType_70, Var_122);
    }
    if (succeeded)
    {
      *OutVar_5 = OutVar0_68;
      *HeadVar__6_6 = Goals0_69;
      *STATE_VARIABLE_BoundVarDescs_16 = STATE_VARIABLE_BoundVarDescs_94_94;
      *STATE_VARIABLE_VarTable_14 = STATE_VARIABLE_VarTable_93_93;
      *STATE_VARIABLE_PredInfo_12 = STATE_VARIABLE_PredInfo_92_92;
      *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_91_91;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_90_90;
    }
    else
    {
      MR_Word ValueGoals_72;
      MR_Word VarDesc_73;
      MR_Word OutVarEntry_74;
      MR_Word ListTypeSymName_75;
      MR_Word ListTypeCtor_76;
      MR_Word ConsId_77;
      MR_Word Goal_78;
      MR_Word STATE_VARIABLE_VarTable_98_98;
      MR_Word Var_101;
      MR_Word Var_104;
      MR_Word Var_107;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word ExistingVarDesc_71;
      MR_Box conv0_ExistingVarDesc_71;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), STATE_VARIABLE_BoundVarDescs_94_94, ((MR_Box) (ProgVar_57)), &conv0_ExistingVarDesc_71);
      if (succeeded)
      {
        ExistingVarDesc_71 = ((MR_Word) (conv0_ExistingVarDesc_71));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ValueGoals_72 = (MR_Word) ((MR_Unsigned) 0U);
        VarDesc_73 = ExistingVarDesc_71;
        *STATE_VARIABLE_BoundVarDescs_16 = STATE_VARIABLE_BoundVarDescs_94_94;
        STATE_VARIABLE_VarTable_98_98 = STATE_VARIABLE_VarTable_93_93;
        *STATE_VARIABLE_PredInfo_12 = STATE_VARIABLE_PredInfo_92_92;
        *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_91_91;
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_90_90;
      }
      else
        transform_hlds__ssdebug__make_var_value_16_p_0(HeadVar__2_2, ProgVar_57, HeadVar__4_4, &VarDesc_73, HeadVar__1_1, &ValueGoals_72, STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_ModuleInfo_8, STATE_VARIABLE_ProcInfo_91_91, STATE_VARIABLE_ProcInfo_10, STATE_VARIABLE_PredInfo_92_92, STATE_VARIABLE_PredInfo_12, STATE_VARIABLE_VarTable_93_93, &STATE_VARIABLE_VarTable_98_98, STATE_VARIABLE_BoundVarDescs_94_94, STATE_VARIABLE_BoundVarDescs_16);
      Var_101 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
      {
        OutVarEntry_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OutVarEntry_74, 0) = ((MR_Box) ((MR_String) "FullListVar"));
        MR_hl_field(0, OutVarEntry_74, 1) = ((MR_Box) (Var_101));
        MR_hl_field(0, OutVarEntry_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      parse_tree__var_table__add_var_entry_4_p_0(OutVarEntry_74, OutVar_5, STATE_VARIABLE_VarTable_98_98, STATE_VARIABLE_VarTable_14);
      Var_104 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
      {
        ListTypeSymName_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ListTypeSymName_75, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, ListTypeSymName_75, 1) = ((MR_Box) ((MR_String) "list"));
      }
      {
        ListTypeCtor_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ListTypeCtor_76, 0) = ((MR_Box) (ListTypeSymName_75));
        MR_hl_field(0, ListTypeCtor_76, 1) = ((MR_Box) ((MR_Integer) 1));
      }
      {
        Var_107 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_107, 0) = ((MR_Box) (MR_mkword(1, &transform_hlds__ssdebug_scalar_common_1[2])));
        MR_hl_field(0, Var_107, 1) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_107, 2) = ((MR_Box) (ListTypeCtor_76));
      }
      ConsId_77 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_107)));
      {
        Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_114, 0) = ((MR_Box) (OutVar0_68));
        MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_113, 0) = ((MR_Box) (VarDesc_73));
        MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
      }
      hlds__make_goal__construct_functor_4_p_0(*OutVar_5, ConsId_77, Var_113, &Goal_78);
      {
        Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_117, 0) = ((MR_Box) (Goal_78));
        MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ValueGoals_72, Var_117);
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_69, Var_116);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_var_value_16_p_0(
  MR_Word InstMap_17,
  MR_Word VarToInspect_18,
  MR_Word Renaming_19,
  MR_Word * VarDesc_20,
  MR_Integer VarPos_21,
  MR_Word * Goals_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcInfo_49,
  MR_Word STATE_VARIABLE_PredInfo_0_50,
  MR_Word * STATE_VARIABLE_PredInfo_51,
  MR_Word STATE_VARIABLE_VarTable_0_52,
  MR_Word * STATE_VARIABLE_VarTable_53,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_54,
  MR_Word * STATE_VARIABLE_BoundVarDescs_55)
{
  MR_bool succeeded;
  MR_Word SSDBModule_28;
  MR_Word VarValueTypeCtor_29;
  MR_Word VarValueType_30;
  MR_String VarName_31;
  MR_Word ConstructVarName_32;
  MR_Word VarNameVar_33;
  MR_Word ConstructVarPos_34;
  MR_Word VarPosVar_35;
  MR_Word VarValueTypeIsDummy_36;
  MR_Word VarDescEntry_37;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_VarTable_61_61;
  MR_Word STATE_VARIABLE_VarTable_63_63;
  MR_Word STATE_VARIABLE_VarTable_65_65;

  SSDBModule_28 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (SSDBModule_28));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_String) "var_value"));
  }
  {
    VarValueTypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarValueTypeCtor_29, 0) = ((MR_Box) (Var_56));
    MR_hl_field(0, VarValueTypeCtor_29, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type_construct__construct_type_3_p_0(VarValueTypeCtor_29, (MR_Word) ((MR_Unsigned) 0U), &VarValueType_30);
  VarName_31 = parse_tree__var_table__var_table_entry_name_2_f_0(STATE_VARIABLE_VarTable_0_52, VarToInspect_18);
  hlds__make_goal__make_string_const_construction_alloc_6_p_0(VarName_31, (MR_String) "VarName", &ConstructVarName_32, &VarNameVar_33, STATE_VARIABLE_VarTable_0_52, &STATE_VARIABLE_VarTable_61_61);
  hlds__make_goal__make_int_const_construction_alloc_6_p_0(VarPos_21, (MR_String) "VarPos", &ConstructVarPos_34, &VarPosVar_35, STATE_VARIABLE_VarTable_61_61, &STATE_VARIABLE_VarTable_63_63);
  VarValueTypeIsDummy_36 = check_hlds__type_util__is_type_a_dummy_2_f_0(STATE_VARIABLE_ModuleInfo_0_46, VarValueType_30);
  {
    VarDescEntry_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarDescEntry_37, 0) = ((MR_Box) ((MR_String) "VarDesc"));
    MR_hl_field(0, VarDescEntry_37, 1) = ((MR_Box) (VarValueType_30));
    MR_hl_field(0, VarDescEntry_37, 2) = (MR_Box) ((MR_Unsigned) (VarValueTypeIsDummy_36));
  }
  parse_tree__var_table__add_var_entry_4_p_0(VarDescEntry_37, VarDesc_20, STATE_VARIABLE_VarTable_63_63, &STATE_VARIABLE_VarTable_65_65);
  succeeded = hlds__instmap__var_is_ground_in_instmap_4_p_0(STATE_VARIABLE_ModuleInfo_0_46, STATE_VARIABLE_VarTable_65_65, InstMap_17, VarToInspect_18);
  if (succeeded)
  {
    MR_Word Context_38;
    MR_Word MerType_39;
    MR_Word TypeInfoVar_40;
    MR_Word TypeInfoGoals0_41;
    MR_Word ConsId_42;
    MR_Word ConstructVarGoal_43;
    MR_Word TypeInfoGoals_45;
    MR_Word STATE_VARIABLE_ProcInfo_66_66;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;

    hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_65_65, STATE_VARIABLE_ProcInfo_0_48, &STATE_VARIABLE_ProcInfo_66_66);
    Context_38 = mercury__term_context__dummy_context_0_f_0();
    parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_65_65, VarToInspect_18, &MerType_39);
    check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(MerType_39, Context_38, &TypeInfoVar_40, &TypeInfoGoals0_41, STATE_VARIABLE_ModuleInfo_0_46, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_PredInfo_0_50, STATE_VARIABLE_PredInfo_51, STATE_VARIABLE_ProcInfo_66_66, STATE_VARIABLE_ProcInfo_49);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(*STATE_VARIABLE_ProcInfo_49, STATE_VARIABLE_VarTable_53);
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (SSDBModule_28));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_String) "bound_head_var"));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_71, 2) = ((MR_Box) (VarValueTypeCtor_29));
    }
    ConsId_42 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_71)));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), Renaming_19);
    if (succeeded)
    {
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;

      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (VarToInspect_18));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_77, 0) = ((MR_Box) (VarPosVar_35));
        MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (VarNameVar_33));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (TypeInfoVar_40));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
      }
      hlds__make_goal__construct_functor_4_p_0(*VarDesc_20, ConsId_42, Var_75, &ConstructVarGoal_43);
    }
    else
    {
      MR_Word RenamedVar_44;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Box conv0_RenamedVar_44;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), Renaming_19, ((MR_Box) (VarToInspect_18)), &conv0_RenamedVar_44);
      RenamedVar_44 = ((MR_Word) (conv0_RenamedVar_44));
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (RenamedVar_44));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (VarPosVar_35));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (VarNameVar_33));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (TypeInfoVar_40));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
      }
      hlds__make_goal__construct_functor_4_p_0(*VarDesc_20, ConsId_42, Var_80, &ConstructVarGoal_43);
    }
    hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, Renaming_19, TypeInfoGoals0_41, &TypeInfoGoals_45);
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (ConstructVarPos_34));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (TypeInfoGoals_45));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (ConstructVarName_32));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (ConstructVarGoal_43));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_86, Var_88);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), ((MR_Box) (VarToInspect_18)), ((MR_Box) (*VarDesc_20)), STATE_VARIABLE_BoundVarDescs_0_54, STATE_VARIABLE_BoundVarDescs_55);
  }
  else
  {
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word ConsId_101;
    MR_Word ConstructVarGoal_102;

    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (SSDBModule_28));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_String) "unbound_head_var"));
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(0, Var_91, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_91, 2) = ((MR_Box) (VarValueTypeCtor_29));
    }
    ConsId_101 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_91)));
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (VarPosVar_35));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (VarNameVar_33));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
    }
    hlds__make_goal__construct_functor_4_p_0(*VarDesc_20, ConsId_101, Var_95, &ConstructVarGoal_102);
    {
      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_99, 0) = ((MR_Box) (ConstructVarGoal_102));
      MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (ConstructVarPos_34));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_22 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConstructVarName_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_98));
    }
    *STATE_VARIABLE_BoundVarDescs_55 = STATE_VARIABLE_BoundVarDescs_0_54;
    *STATE_VARIABLE_VarTable_53 = STATE_VARIABLE_VarTable_65_65;
    *STATE_VARIABLE_PredInfo_51 = STATE_VARIABLE_PredInfo_0_50;
    *STATE_VARIABLE_ProcInfo_49 = STATE_VARIABLE_ProcInfo_0_48;
    *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
  }
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__list_var_value_type_0_f_0(void)
{
  MR_Word ListVarValueType_2;
  MR_Word SSDBModule_3;
  MR_Word VarValueTypeCtor_4;
  MR_Word VarValueType_5;
  MR_Word ListTypeCtor_6;
  MR_Word Var_7;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_15;

  SSDBModule_3 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (SSDBModule_3));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) ((MR_String) "var_value"));
  }
  {
    VarValueTypeCtor_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarValueTypeCtor_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, VarValueTypeCtor_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type_construct__construct_type_3_p_0(VarValueTypeCtor_4, (MR_Word) ((MR_Unsigned) 0U), &VarValueType_5);
  Var_12 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_String) "list"));
  }
  {
    ListTypeCtor_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ListTypeCtor_6, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, ListTypeCtor_6, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (VarValueType_5));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_type_construct__construct_type_3_p_0(ListTypeCtor_6, Var_15, &ListVarValueType_2);
  return ListVarValueType_2;
}

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_5_p_0(
  MR_Word SSTraceLevel_6,
  MR_Word * Goal_7,
  MR_Word * LevelVar_8,
  MR_Word STATE_VARIABLE_VarTable_0_11,
  MR_Word * STATE_VARIABLE_VarTable_12)
{
  MR_Word ConsId_10;
  MR_Word Var_13;
  MR_Word Var_36;
  MR_Word Var_39;

  switch (SSTraceLevel_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word DataCtor_17;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_24;

        Var_18 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          DataCtor_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DataCtor_17, 0) = ((MR_Box) (Var_18));
          MR_hl_field(1, DataCtor_17, 1) = ((MR_Box) ((MR_String) "deep"));
        }
        Var_24 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
        }
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (DataCtor_17));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) (Var_21));
        }
        ConsId_10 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_19)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DataCtor_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_34;

        Var_28 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          DataCtor_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DataCtor_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, DataCtor_27, 1) = ((MR_Box) ((MR_String) "shallow"));
        }
        Var_34 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_34));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
        }
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (DataCtor_27));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) (Var_31));
        }
        ConsId_10 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_29)));
      }
      break;
  }
  Var_39 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_goal__make_const_construction_alloc_8_p_0(ConsId_10, Var_13, (MR_Integer) 1, (MR_String) "Level", Goal_7, LevelVar_8, STATE_VARIABLE_VarTable_0_11, STATE_VARIABLE_VarTable_12);
}

static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word * Goals_9,
  MR_Word * ProcIdVar_10,
  MR_Word STATE_VARIABLE_VarTable_0_30,
  MR_Word * STATE_VARIABLE_VarTable_31)
{
  MR_bool succeeded;
  MR_Word Origin_12;
  MR_Word OrigPredInfo_16;
  MR_Word SymModuleName_17;
  MR_String ModuleName_18;
  MR_String PredName_19;
  MR_Word ConstructModuleName_20;
  MR_Word ModuleNameVar_21;
  MR_Word ConstructPredName_22;
  MR_Word PredNameVar_23;
  MR_Word SSDBModule_24;
  MR_Word TypeCtor_25;
  MR_Word ConsId_26;
  MR_Word ProcIdType_27;
  MR_Word ProcIdVarEntry_28;
  MR_Word ConstructProcIdGoal_29;
  MR_Word STATE_VARIABLE_VarTable_34_34;
  MR_Word STATE_VARIABLE_VarTable_36_36;
  MR_Word Var_37;
  MR_Word Var_40;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word OrigPredId_15;
  MR_Word Var_32;

  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &Origin_12);
  succeeded = ((MR_tag((MR_Word) Origin_12)) == (MR_Integer) 2);
  if (succeeded)
  {
    Var_32 = ((MR_Word) ((MR_hl_field(2, Origin_12, (MR_Integer) 0))));
    OrigPredId_15 = ((MR_Word) ((MR_hl_field(2, Origin_12, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, OrigPredId_15, &OrigPredInfo_16);
  else
    OrigPredInfo_16 = PredInfo_8;
  SymModuleName_17 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_16);
  ModuleName_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymModuleName_17);
  PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(OrigPredInfo_16);
  hlds__make_goal__make_string_const_construction_alloc_6_p_0(ModuleName_18, (MR_String) "ModuleName", &ConstructModuleName_20, &ModuleNameVar_21, STATE_VARIABLE_VarTable_0_30, &STATE_VARIABLE_VarTable_34_34);
  hlds__make_goal__make_string_const_construction_alloc_6_p_0(PredName_19, (MR_String) "PredName", &ConstructPredName_22, &PredNameVar_23, STATE_VARIABLE_VarTable_34_34, &STATE_VARIABLE_VarTable_36_36);
  SSDBModule_24 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (SSDBModule_24));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_String) "ssdb_proc_id"));
  }
  {
    TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_25, 0) = ((MR_Box) (Var_37));
    MR_hl_field(0, TypeCtor_25, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) (TypeCtor_25));
  }
  ConsId_26 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_40)));
  parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_25, (MR_Word) ((MR_Unsigned) 0U), &ProcIdType_27);
  {
    ProcIdVarEntry_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcIdVarEntry_28, 0) = ((MR_Box) ((MR_String) "ProcId"));
    MR_hl_field(0, ProcIdVarEntry_28, 1) = ((MR_Box) (ProcIdType_27));
    MR_hl_field(0, ProcIdVarEntry_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(ProcIdVarEntry_28, ProcIdVar_10, STATE_VARIABLE_VarTable_36_36, STATE_VARIABLE_VarTable_31);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (PredNameVar_23));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (ModuleNameVar_21));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  hlds__make_goal__construct_functor_4_p_0(*ProcIdVar_10, ConsId_26, Var_48, &ConstructProcIdGoal_29);
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (ConstructProcIdGoal_29));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (ConstructPredName_22));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Goals_9 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ConstructModuleName_20));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_51));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_4_p_0(
  MR_Word ModuleInfo_5,
  MR_String ProcName_6,
  MR_Word ArgVars_7,
  MR_Word * HandleEventGoal_8)
{
  MR_Word SSDBModule_9;
  MR_Word Context_11;
  MR_Word Var_14;

  SSDBModule_9 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  Context_11 = mercury__term_context__dummy_context_0_f_0();
  Var_14 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_5, (MR_Integer) 0, SSDBModule_9, ProcName_6, (MR_Word) ((MR_Unsigned) 0U), ArgVars_7, Var_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_11, HandleEventGoal_8);
}

static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_9_p_0(
  MR_Word ConjGoals_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_PredInfo_0_26,
  MR_Word VarTable_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_27,
  MR_Word * STATE_VARIABLE_ProcInfo_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_Word ConjDetism_17;
  MR_Word ConjGoalInfo_18;
  MR_Word Conj_19;
  MR_Word OrigGoalInfo_21;
  MR_Word ProcDetism_22;
  MR_Word ScopeGoalInfo_23;
  MR_Word Purity_24;
  MR_Word Goal_25;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_ProcInfo_36_36;
  MR_Word STATE_VARIABLE_ProcInfo_37_37;
  MR_Word STATE_VARIABLE_ProcInfo_39_39;
  MR_Word STATE_VARIABLE_ModuleInfo_42_42;
  MR_Word STATE_VARIABLE_PredInfo_43_43;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_PredInfo_45_45;
  MR_Word GoalInfo0_46;
  MR_Word GoalInfo1_47;

  hlds__hlds_goal__goal_list_determinism_2_p_0(ConjGoals_10, &ConjDetism_17);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_46);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_46, &GoalInfo1_47);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(ConjDetism_17, GoalInfo1_47, &ConjGoalInfo_18);
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_31, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_31, 2) = ((MR_Box) (ConjGoals_10));
  }
  {
    Conj_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Conj_19, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, Conj_19, 1) = ((MR_Box) (ConjGoalInfo_18));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_27, &Var_33);
  OrigGoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_27, &ProcDetism_22);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(ProcDetism_22, OrigGoalInfo_21, &ScopeGoalInfo_23);
  Purity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(OrigGoalInfo_21);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_35, 1) = (MR_Box) ((MR_Unsigned) (Purity_24));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_35));
    MR_hl_field(3, Var_34, 2) = ((MR_Box) (Conj_19));
  }
  {
    Goal_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_25, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, Goal_25, 1) = ((MR_Box) (ScopeGoalInfo_23));
  }
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_14, STATE_VARIABLE_ProcInfo_0_27, &STATE_VARIABLE_ProcInfo_36_36);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_25, STATE_VARIABLE_ProcInfo_36_36, &STATE_VARIABLE_ProcInfo_37_37);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_37_37, &STATE_VARIABLE_ProcInfo_39_39);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_39_39, STATE_VARIABLE_ProcInfo_28, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_42_42);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_12, *STATE_VARIABLE_ProcInfo_28, STATE_VARIABLE_PredInfo_0_26, &STATE_VARIABLE_PredInfo_43_43);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (ProcId_12));
  }
  check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_42_42, Var_44, STATE_VARIABLE_PredInfo_43_43, &STATE_VARIABLE_PredInfo_45_45);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, STATE_VARIABLE_PredInfo_45_45, STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ModuleInfo_30);
}

static void MR_CALL 
transform_hlds__ssdebug__make_switch_goal_4_p_0(
  MR_Word SwitchVar_5,
  MR_Word DoRetryGoal_6,
  MR_Word DoNotRetryGoal_7,
  MR_Word * SwitchGoal_8)
{
  MR_Word SSDBModule_9;
  MR_Word RetryTypeSymName_10;
  MR_Word RetryTypeCtor_11;
  MR_Word ConsIdDoRetry_12;
  MR_Word ConsIdDoNotRetry_13;
  MR_Word CaseDoRetry_14;
  MR_Word CaseDoNotRetry_15;
  MR_Word SwitchGoalExpr_16;
  MR_Word RetryGoalInfo_17;
  MR_Word NoRetryGoalInfo_18;
  MR_Word RetryDetism_19;
  MR_Word NoRetryDetism_20;
  MR_Word SwitchDetism_21;
  MR_Word GoalInfo0_22;
  MR_Word GoalInfo1_23;
  MR_Word GoalInfo_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_38;
  MR_Word Var_39;

  SSDBModule_9 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    RetryTypeSymName_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RetryTypeSymName_10, 0) = ((MR_Box) (SSDBModule_9));
    MR_hl_field(1, RetryTypeSymName_10, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
  }
  {
    RetryTypeCtor_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RetryTypeCtor_11, 0) = ((MR_Box) (RetryTypeSymName_10));
    MR_hl_field(0, RetryTypeCtor_11, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (SSDBModule_9));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_String) "do_retry"));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) (RetryTypeCtor_11));
  }
  ConsIdDoRetry_12 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_27)));
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (SSDBModule_9));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_String) "do_not_retry"));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) (RetryTypeCtor_11));
  }
  ConsIdDoNotRetry_13 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_31)));
  {
    CaseDoRetry_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CaseDoRetry_14, 0) = ((MR_Box) (ConsIdDoRetry_12));
    MR_hl_field(0, CaseDoRetry_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CaseDoRetry_14, 2) = ((MR_Box) (DoRetryGoal_6));
  }
  {
    CaseDoNotRetry_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CaseDoNotRetry_15, 0) = ((MR_Box) (ConsIdDoNotRetry_13));
    MR_hl_field(0, CaseDoNotRetry_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CaseDoNotRetry_15, 2) = ((MR_Box) (DoNotRetryGoal_7));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (CaseDoNotRetry_15));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (CaseDoRetry_14));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  {
    SwitchGoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchGoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, SwitchGoalExpr_16, 1) = ((MR_Box) (SwitchVar_5));
    MR_hl_field(3, SwitchGoalExpr_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, SwitchGoalExpr_16, 3) = ((MR_Box) (Var_38));
  }
  RetryGoalInfo_17 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(DoRetryGoal_6);
  NoRetryGoalInfo_18 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(DoNotRetryGoal_7);
  RetryDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(RetryGoalInfo_17);
  NoRetryDetism_20 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(NoRetryGoalInfo_18);
  parse_tree__prog_detism__det_switch_detism_3_p_0(RetryDetism_19, NoRetryDetism_20, &SwitchDetism_21);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_22);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(SwitchDetism_21, GoalInfo0_22, &GoalInfo1_23);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo1_23, &GoalInfo_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *SwitchGoal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SwitchGoalExpr_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_24));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_recursive_call_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word HeadVars_11,
  MR_Word * Goal_12)
{
  MR_String PredName_13;
  MR_Word ModuleName_14;
  MR_Word SymName_15;
  MR_Word BuiltIn_16;
  MR_Word GoalExpr_17;
  MR_Word ProcInfo_18;
  MR_Word BodyGoal0_19;
  MR_Word GoalInfoHG0_20;
  MR_Word Determinism_21;
  MR_Word GoalInfoHG_22;

  PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
  ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
  {
    SymName_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_15, 0) = ((MR_Box) (ModuleName_14));
    MR_hl_field(1, SymName_15, 1) = ((MR_Box) (PredName_13));
  }
  BuiltIn_16 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_8, PredId_9, PredId_9, ProcId_10);
  {
    GoalExpr_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_17, 0) = ((MR_Box) (PredId_9));
    MR_hl_field(2, GoalExpr_17, 1) = ((MR_Box) (ProcId_10));
    MR_hl_field(2, GoalExpr_17, 2) = ((MR_Box) (HeadVars_11));
    MR_hl_field(2, GoalExpr_17, 3) = (MR_Box) ((MR_Unsigned) (BuiltIn_16));
    MR_hl_field(2, GoalExpr_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_17, 5) = ((MR_Box) (SymName_15));
  }
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_7, ProcId_10, &ProcInfo_18);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_18, &BodyGoal0_19);
  GoalInfoHG0_20 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(BodyGoal0_19);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_18, &Determinism_21);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_21, GoalInfoHG0_20, &GoalInfoHG_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfoHG_22));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_retry_var_4_p_0(
  MR_String VarName_5,
  MR_Word * RetryVar_6,
  MR_Word STATE_VARIABLE_VarTable_0_12,
  MR_Word * STATE_VARIABLE_VarTable_13)
{
  MR_Word SSDBModule_8;
  MR_Word TypeCtor_9;
  MR_Word RetryType_10;
  MR_Word RetryVarEntry_11;
  MR_Word Var_14;

  SSDBModule_8 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (SSDBModule_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
  }
  {
    TypeCtor_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_9, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, TypeCtor_9, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_9, (MR_Word) ((MR_Unsigned) 0U), &RetryType_10);
  {
    RetryVarEntry_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RetryVarEntry_11, 0) = ((MR_Box) (VarName_5));
    MR_hl_field(0, RetryVarEntry_11, 1) = ((MR_Box) (RetryType_10));
    MR_hl_field(0, RetryVarEntry_11, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(RetryVarEntry_11, RetryVar_6, STATE_VARIABLE_VarTable_0_12, STATE_VARIABLE_VarTable_13);
}

static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
  MR_Word OutputVars_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word Reason_9;
  MR_Word Var_11;

  {
    Reason_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Reason_9, 0) = ((MR_Box) (OutputVars_4));
    MR_hl_field(2, Reason_9, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (Reason_9));
    MR_hl_field(3, Var_11, 2) = ((MR_Box) (Goal0_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_8));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_7_p_0(
  MR_Word OutputVars_8,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word * UnifyGoal_10,
  MR_Word * Renaming_11,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22)
{
  MR_Word GoalInfo0_13;
  MR_Word InstMapDelta_14;
  MR_Word UnifyGoals_15;
  MR_Word UnifyGoalInfo0_17;
  MR_Word UnifyGoalInfo_18;
  MR_Word _NewVars_16;

  GoalInfo0_13 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(STATE_VARIABLE_Goal_0_19);
  InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
  hlds__goal_util__create_renaming_7_p_0(OutputVars_8, InstMapDelta_14, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22, &UnifyGoals_15, &_NewVars_16, Renaming_11);
  hlds__hlds_goal__goal_info_init_1_p_0(&UnifyGoalInfo0_17);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, UnifyGoalInfo0_17, &UnifyGoalInfo_18);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(UnifyGoals_15, UnifyGoalInfo_18, UnifyGoal_10);
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*Renaming_11, STATE_VARIABLE_Goal_0_19, STATE_VARIABLE_Goal_20);
}

static void MR_CALL 
transform_hlds__ssdebug__create_proxy_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_20,
  MR_Word * STATE_VARIABLE_PredInfo_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_Word Args_12;
  MR_Word SymName_13;
  MR_Word CallExpr_14;
  MR_Word GoalInfo0_16;
  MR_Word Detism_17;
  MR_Word GoalInfo_18;
  MR_Word Goal_19;
  MR_Word STATE_VARIABLE_ProcInfo_24_24;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_ProcInfo_28_28;
  MR_Word STATE_VARIABLE_ProcInfo_30_30;
  MR_Word STATE_VARIABLE_ProcInfo_32_32;

  hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_20, ProcId_8, &STATE_VARIABLE_ProcInfo_24_24);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &Args_12);
  hlds__hlds_pred__pred_info_get_sym_name_2_p_0(STATE_VARIABLE_PredInfo_0_20, &SymName_13);
  {
    CallExpr_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, CallExpr_14, 0) = ((MR_Box) (PredId_7));
    MR_hl_field(2, CallExpr_14, 1) = ((MR_Box) (ProcId_8));
    MR_hl_field(2, CallExpr_14, 2) = ((MR_Box) (Args_12));
    MR_hl_field(2, CallExpr_14, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, CallExpr_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, CallExpr_14, 5) = ((MR_Box) (SymName_13));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &Var_27);
  GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Var_27, (MR_Integer) 1))));
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &Detism_17);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_17, GoalInfo0_16, &GoalInfo_18);
  {
    Goal_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_19, 0) = ((MR_Box) (CallExpr_14));
    MR_hl_field(0, Goal_19, 1) = ((MR_Box) (GoalInfo_18));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_19, STATE_VARIABLE_ProcInfo_24_24, &STATE_VARIABLE_ProcInfo_28_28);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_28_28, &STATE_VARIABLE_ProcInfo_30_30);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_30_30, &STATE_VARIABLE_ProcInfo_32_32, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, STATE_VARIABLE_ProcInfo_32_32, STATE_VARIABLE_PredInfo_0_20, STATE_VARIABLE_PredInfo_21);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_VarTable_0_18,
  MR_Word * STATE_VARIABLE_VarTable_19,
  MR_Word STATE_VARIABLE_ProxyMap_0_20,
  MR_Word * STATE_VARIABLE_ProxyMap_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_Word MainConsId_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 0))));
  MR_Word OtherConsIds_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 1))));
  MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 2))));
  MR_Word Goal_17;

  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Goal0_16, &Goal_17, STATE_VARIABLE_VarTable_0_18, STATE_VARIABLE_VarTable_19, STATE_VARIABLE_ProxyMap_0_20, STATE_VARIABLE_ProxyMap_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_17));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ProxyMap_0_17,
  MR_Word * STATE_VARIABLE_ProxyMap_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  MR_Word PredInfo_12;
  MR_Word VarTable0_13;
  MR_Word Goal0_14;
  MR_Word Goal_15;
  MR_Word VarTable_16;
  MR_Word STATE_VARIABLE_ProcInfo_21_21;
  MR_Word STATE_VARIABLE_ModuleInfo_23_23;
  MR_Word STATE_VARIABLE_ProcInfo_24_24;
  MR_Word STATE_VARIABLE_ProcInfo_25_25;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_19, PredId_7, ProcId_8, &PredInfo_12, &STATE_VARIABLE_ProcInfo_21_21);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_21_21, &VarTable0_13);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_21_21, &Goal0_14);
  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Goal0_14, &Goal_15, VarTable0_13, &VarTable_16, STATE_VARIABLE_ProxyMap_0_17, STATE_VARIABLE_ProxyMap_18, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_23_23);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_16, STATE_VARIABLE_ProcInfo_21_21, &STATE_VARIABLE_ProcInfo_24_24);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_15, STATE_VARIABLE_ProcInfo_24_24, &STATE_VARIABLE_ProcInfo_25_25);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_7, ProcId_8, PredInfo_12, STATE_VARIABLE_ProcInfo_25_25, STATE_VARIABLE_ModuleInfo_23_23, STATE_VARIABLE_ModuleInfo_20);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_Case_10;
  MR_Word conv16_STATE_VARIABLE_VarTable_19;
  MR_Word conv15_STATE_VARIABLE_ProxyMap_21;
  MR_Word conv14_STATE_VARIABLE_ModuleInfo_23;

  transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(((MR_Word) (wrapper_arg_1)), &conv17_Case_10, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_VarTable_19, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_ProxyMap_21, ((MR_Word) (wrapper_arg_7)), &conv14_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_2 = ((MR_Box) (conv17_Case_10));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_VarTable_19));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_ProxyMap_21));
  *wrapper_arg_8 = ((MR_Box) (conv14_STATE_VARIABLE_ModuleInfo_23));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Goal_77;
  MR_Word conv9_STATE_VARIABLE_VarTable_79;
  MR_Word conv8_STATE_VARIABLE_ProxyMap_81;
  MR_Word conv7_STATE_VARIABLE_ModuleInfo_83;

  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv10_STATE_VARIABLE_Goal_77, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_VarTable_79, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_ProxyMap_81, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_ModuleInfo_83);
  *wrapper_arg_2 = ((MR_Box) (conv10_STATE_VARIABLE_Goal_77));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_VarTable_79));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_ProxyMap_81));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_ModuleInfo_83));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Goal_77;
  MR_Word conv2_STATE_VARIABLE_VarTable_79;
  MR_Word conv1_STATE_VARIABLE_ProxyMap_81;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_83;

  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Goal_77, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarTable_79, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ProxyMap_81, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_ModuleInfo_83);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Goal_77));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarTable_79));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ProxyMap_81));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_83));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(
  MR_Word STATE_VARIABLE_Goal_0_76,
  MR_Word * STATE_VARIABLE_Goal_77,
  MR_Word STATE_VARIABLE_VarTable_0_78,
  MR_Word * STATE_VARIABLE_VarTable_79,
  MR_Word STATE_VARIABLE_ProxyMap_0_80,
  MR_Word * STATE_VARIABLE_ProxyMap_81,
  MR_Word STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * STATE_VARIABLE_ModuleInfo_83)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_76, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_76, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_65 = (MR_Word) ((MR_Word) (GoalExpr0_13));
        MR_Word SubGoal_66;
        MR_Word GoalExpr_149;

        transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(SubGoal0_65, &SubGoal_66, STATE_VARIABLE_VarTable_0_78, STATE_VARIABLE_VarTable_79, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
        GoalExpr_149 = (MR_Word) ((MR_Word) (SubGoal_66));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_77 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_149));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification0_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 3))));
        MR_Word ShroudedPredProcId_27;
        MR_Word ConsId0_21;

        succeeded = ((MR_tag((MR_Word) Unification0_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          ConsId0_21 = ((MR_Word) ((MR_hl_field(0, Unification0_18, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) ConsId0_21)) == (MR_Integer) 2);
          if (succeeded)
            ShroudedPredProcId_27 = (MR_Word) (MR_body((MR_Word) (ConsId0_21), (MR_Integer) 2));
        }
        if (succeeded)
        {
          MR_Word PredProcId_28;
          MR_Word PredId_29;
          MR_Integer ProcId_30;
          MR_Word MaybeNewPredId_31;

          PredProcId_28 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_27);
          PredId_29 = ((MR_Word) ((MR_hl_field(0, PredProcId_28, (MR_Integer) 0))));
          ProcId_30 = ((MR_Integer) ((MR_hl_field(0, PredProcId_28, (MR_Integer) 1))));
          transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(PredId_29, &MaybeNewPredId_31, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
          if ((MaybeNewPredId_31 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
          else
          {
            MR_Word NewPredId_32 = ((MR_Word) ((MR_hl_field(1, MaybeNewPredId_31, (MR_Integer) 0))));
            MR_Word NewPredProcId_33;
            MR_Word NewShroundPredProcId_34;
            MR_Word ConsId_35;
            MR_Word Unification_36;
            MR_Word GoalExpr_37;
            MR_Word Var_154;
            MR_Word Var_156;
            MR_Word Var_157;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_165;

            {
              NewPredProcId_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NewPredProcId_33, 0) = ((MR_Box) (NewPredId_32));
              MR_hl_field(0, NewPredProcId_33, 1) = ((MR_Box) (ProcId_30));
            }
            NewShroundPredProcId_34 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(NewPredProcId_33);
            ConsId_35 = (MR_Word) (MR_mkword(2, (MR_Word) (NewShroundPredProcId_34)));
            Var_154 = ((MR_Word) ((MR_hl_field(0, Unification0_18, (MR_Integer) 0))));
            Var_156 = ((MR_Word) ((MR_hl_field(0, Unification0_18, (MR_Integer) 2))));
            Var_157 = ((MR_Word) ((MR_hl_field(0, Unification0_18, (MR_Integer) 3))));
            Var_158 = ((MR_Word) ((MR_hl_field(0, Unification0_18, (MR_Integer) 4))));
            Var_159 = ((MR_Unsigned) ((MR_hl_field(0, Unification0_18, (MR_Integer) 5))) & (MR_Integer) 1);
            Var_160 = ((MR_Word) ((MR_hl_field(0, Unification0_18, (MR_Integer) 6))));
            {
              Unification_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Unification_36, 0) = ((MR_Box) (Var_154));
              MR_hl_field(0, Unification_36, 1) = ((MR_Box) (ConsId_35));
              MR_hl_field(0, Unification_36, 2) = ((MR_Box) (Var_156));
              MR_hl_field(0, Unification_36, 3) = ((MR_Box) (Var_157));
              MR_hl_field(0, Unification_36, 4) = ((MR_Box) (Var_158));
              MR_hl_field(0, Unification_36, 5) = (MR_Box) ((MR_Unsigned) (Var_159));
              MR_hl_field(0, Unification_36, 6) = ((MR_Box) (Var_160));
            }
            Var_161 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 0))));
            Var_162 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 1))));
            Var_163 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 2))));
            Var_165 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 4))));
            {
              GoalExpr_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, GoalExpr_37, 0) = ((MR_Box) (Var_161));
              MR_hl_field(1, GoalExpr_37, 1) = ((MR_Box) (Var_162));
              MR_hl_field(1, GoalExpr_37, 2) = ((MR_Box) (Var_163));
              MR_hl_field(1, GoalExpr_37, 3) = ((MR_Box) (Unification_36));
              MR_hl_field(1, GoalExpr_37, 4) = ((MR_Box) (Var_165));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_37));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
        }
        else
        {
          *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
          *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
        }
        *STATE_VARIABLE_VarTable_79 = STATE_VARIABLE_VarTable_0_78;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Args_38 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_13, (MR_Integer) 2))));
        MR_Word Builtin_39 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_13, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Context_40 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_13, (MR_Integer) 4))));
        MR_Word PredId_139 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_13, (MR_Integer) 0))));
        MR_Integer ProcId_140 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_13, (MR_Integer) 1))));

        switch (Builtin_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
              *STATE_VARIABLE_VarTable_79 = STATE_VARIABLE_VarTable_0_78;
              *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
              *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Goal_89_89;
              MR_Word MaybeNewPredId_133;

              transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(PredId_139, &MaybeNewPredId_133, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
              if ((MaybeNewPredId_133 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Goal_89_89 = STATE_VARIABLE_Goal_0_76;
              else
              {
                MR_Word NewPredInfo_42;
                MR_Word NewModuleName_43;
                MR_String NewPredName_44;
                MR_Word NewSymName_45;
                MR_Word NewPredId_129 = ((MR_Word) ((MR_hl_field(1, MaybeNewPredId_133, (MR_Integer) 0))));
                MR_Word GoalExpr_130;

                hlds__hlds_module__module_info_pred_info_3_p_0(*STATE_VARIABLE_ModuleInfo_83, NewPredId_129, &NewPredInfo_42);
                NewModuleName_43 = hlds__hlds_pred__pred_info_module_1_f_0(NewPredInfo_42);
                NewPredName_44 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo_42);
                {
                  NewSymName_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewSymName_45, 0) = ((MR_Box) (NewModuleName_43));
                  MR_hl_field(1, NewSymName_45, 1) = ((MR_Box) (NewPredName_44));
                }
                {
                  GoalExpr_130 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, GoalExpr_130, 0) = ((MR_Box) (NewPredId_129));
                  MR_hl_field(2, GoalExpr_130, 1) = ((MR_Box) (ProcId_140));
                  MR_hl_field(2, GoalExpr_130, 2) = ((MR_Box) (Args_38));
                  MR_hl_field(2, GoalExpr_130, 3) = (MR_Box) ((MR_Unsigned) (Builtin_39));
                  MR_hl_field(2, GoalExpr_130, 4) = ((MR_Box) (Context_40));
                  MR_hl_field(2, GoalExpr_130, 5) = ((MR_Box) (NewSymName_45));
                }
                {
                  STATE_VARIABLE_Goal_89_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Goal_89_89, 0) = ((MR_Box) (GoalExpr_130));
                  MR_hl_field(0, STATE_VARIABLE_Goal_89_89, 1) = ((MR_Box) (GoalInfo0_14));
                }
              }
              transform_hlds__ssdebug__insert_context_update_call_5_p_0(*STATE_VARIABLE_ModuleInfo_83, STATE_VARIABLE_Goal_89_89, STATE_VARIABLE_Goal_77, STATE_VARIABLE_VarTable_0_78, STATE_VARIABLE_VarTable_79);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            transform_hlds__ssdebug__insert_context_update_call_5_p_0(STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_Goal_0_76, STATE_VARIABLE_Goal_77, STATE_VARIABLE_VarTable_0_78, STATE_VARIABLE_VarTable_79);
            *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
            *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
            *STATE_VARIABLE_VarTable_79 = STATE_VARIABLE_VarTable_0_78;
            *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
            *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_58 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Goals_60;
            MR_Word GoalExpr_144;
            MR_Box conv6_STATE_VARIABLE_VarTable_79;
            MR_Box conv5_STATE_VARIABLE_ProxyMap_81;
            MR_Box conv4_STATE_VARIABLE_ModuleInfo_83;

            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[2]), Goals0_59, &Goals_60, ((MR_Box) (STATE_VARIABLE_VarTable_0_78)), &conv6_STATE_VARIABLE_VarTable_79, ((MR_Box) (STATE_VARIABLE_ProxyMap_0_80)), &conv5_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_82)), &conv4_STATE_VARIABLE_ModuleInfo_83);
            *STATE_VARIABLE_VarTable_79 = ((MR_Word) (conv6_STATE_VARIABLE_VarTable_79));
            *STATE_VARIABLE_ProxyMap_81 = ((MR_Word) (conv5_STATE_VARIABLE_ProxyMap_81));
            *STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_83));
            {
              GoalExpr_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_144, 1) = (MR_Box) ((MR_Unsigned) (ConjType_58));
              MR_hl_field(3, GoalExpr_144, 2) = ((MR_Box) (Goals_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_144));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_145;
            MR_Word Goals0_146 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Goals_147;
            MR_Box conv13_STATE_VARIABLE_VarTable_79;
            MR_Box conv12_STATE_VARIABLE_ProxyMap_81;
            MR_Box conv11_STATE_VARIABLE_ModuleInfo_83;

            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[3]), Goals0_146, &Goals_147, ((MR_Box) (STATE_VARIABLE_VarTable_0_78)), &conv13_STATE_VARIABLE_VarTable_79, ((MR_Box) (STATE_VARIABLE_ProxyMap_0_80)), &conv12_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_82)), &conv11_STATE_VARIABLE_ModuleInfo_83);
            *STATE_VARIABLE_VarTable_79 = ((MR_Word) (conv13_STATE_VARIABLE_VarTable_79));
            *STATE_VARIABLE_ProxyMap_81 = ((MR_Word) (conv12_STATE_VARIABLE_ProxyMap_81));
            *STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_83));
            {
              GoalExpr_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_145, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_145, 1) = ((MR_Box) (Goals_147));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_145));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word CanFail_62 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Cases_64;
            MR_Word GoalExpr_148;
            MR_Box conv20_STATE_VARIABLE_VarTable_79;
            MR_Box conv19_STATE_VARIABLE_ProxyMap_81;
            MR_Box conv18_STATE_VARIABLE_ModuleInfo_83;

            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[4]), Cases0_63, &Cases_64, ((MR_Box) (STATE_VARIABLE_VarTable_0_78)), &conv20_STATE_VARIABLE_VarTable_79, ((MR_Box) (STATE_VARIABLE_ProxyMap_0_80)), &conv19_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_82)), &conv18_STATE_VARIABLE_ModuleInfo_83);
            *STATE_VARIABLE_VarTable_79 = ((MR_Word) (conv20_STATE_VARIABLE_VarTable_79));
            *STATE_VARIABLE_ProxyMap_81 = ((MR_Word) (conv19_STATE_VARIABLE_ProxyMap_81));
            *STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) (conv18_STATE_VARIABLE_ModuleInfo_83));
            {
              GoalExpr_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_148, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_148, 1) = ((MR_Box) (Var_61));
              MR_hl_field(3, GoalExpr_148, 2) = (MR_Box) ((MR_Unsigned) (CanFail_62));
              MR_hl_field(3, GoalExpr_148, 3) = ((MR_Box) (Cases_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_148));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word GoalExpr_150;
            MR_Word SubGoal0_151 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word SubGoal_152;

            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(SubGoal0_151, &SubGoal_152, STATE_VARIABLE_VarTable_0_78, STATE_VARIABLE_VarTable_79, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
            {
              GoalExpr_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_150, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_150, 1) = ((MR_Box) (Reason_67));
              MR_hl_field(3, GoalExpr_150, 2) = ((MR_Box) (SubGoal_152));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_150));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Cond0_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Then0_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Else0_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 4))));
            MR_Word Cond_72;
            MR_Word Then_73;
            MR_Word Else_74;
            MR_Word STATE_VARIABLE_VarTable_117_117;
            MR_Word STATE_VARIABLE_ProxyMap_118_118;
            MR_Word STATE_VARIABLE_ModuleInfo_119_119;
            MR_Word STATE_VARIABLE_VarTable_120_120;
            MR_Word STATE_VARIABLE_ProxyMap_121_121;
            MR_Word STATE_VARIABLE_ModuleInfo_122_122;
            MR_Word GoalExpr_153;

            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Cond0_69, &Cond_72, STATE_VARIABLE_VarTable_0_78, &STATE_VARIABLE_VarTable_117_117, STATE_VARIABLE_ProxyMap_0_80, &STATE_VARIABLE_ProxyMap_118_118, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_119_119);
            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Then0_70, &Then_73, STATE_VARIABLE_VarTable_117_117, &STATE_VARIABLE_VarTable_120_120, STATE_VARIABLE_ProxyMap_118_118, &STATE_VARIABLE_ProxyMap_121_121, STATE_VARIABLE_ModuleInfo_119_119, &STATE_VARIABLE_ModuleInfo_122_122);
            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Else0_71, &Else_74, STATE_VARIABLE_VarTable_120_120, STATE_VARIABLE_VarTable_79, STATE_VARIABLE_ProxyMap_121_121, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_122_122, STATE_VARIABLE_ModuleInfo_83);
            {
              GoalExpr_153 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_153, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_153, 1) = ((MR_Box) (Vars_68));
              MR_hl_field(3, GoalExpr_153, 2) = ((MR_Box) (Cond_72));
              MR_hl_field(3, GoalExpr_153, 3) = ((MR_Box) (Then_73));
              MR_hl_field(3, GoalExpr_153, 4) = ((MR_Box) (Else_74));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_153));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_first_pass_in_goal\'/8", (MR_String) "unexpected shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_23,
  MR_Word * STATE_VARIABLE_VarTable_24)
{
  MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word Context_12;
  MR_String FileName_13;
  MR_Integer LineNumber_14;
  MR_Word MakeFileName_15;
  MR_Word FileNameVar_16;
  MR_Word MakeLineNumber_17;
  MR_Word LineNumberVar_18;
  MR_Word ArgVars_19;
  MR_Word InstMapDelta_21;
  MR_Word SetContextGoal_22;
  MR_Word STATE_VARIABLE_VarTable_26_26;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;

  Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
  FileName_13 = ((MR_String) ((MR_hl_field(0, Context_12, (MR_Integer) 0))));
  LineNumber_14 = ((MR_Integer) ((MR_hl_field(0, Context_12, (MR_Integer) 1))));
  hlds__make_goal__make_string_const_construction_alloc_6_p_0(FileName_13, (MR_String) "FileName", &MakeFileName_15, &FileNameVar_16, STATE_VARIABLE_VarTable_0_23, &STATE_VARIABLE_VarTable_26_26);
  hlds__make_goal__make_int_const_construction_alloc_6_p_0(LineNumber_14, (MR_String) "LineNumber", &MakeLineNumber_17, &LineNumberVar_18, STATE_VARIABLE_VarTable_26_26, STATE_VARIABLE_VarTable_24);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (LineNumberVar_18));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ArgVars_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_19, 0) = ((MR_Box) (FileNameVar_16));
    MR_hl_field(1, ArgVars_19, 1) = ((MR_Box) (Var_29));
  }
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_21);
  Var_32 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_6, (MR_Integer) 0, Var_32, (MR_String) "set_context", (MR_Word) ((MR_Unsigned) 0U), ArgVars_19, InstMapDelta_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_12, &SetContextGoal_22);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Goal0_7));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (SetContextGoal_22));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MakeLineNumber_17));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (MakeFileName_15));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_38, GoalInfo_11, Goal_8);
}

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_PredInfo_21;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_23;

  transform_hlds__ssdebug__create_proxy_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredInfo_21, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredInfo_21));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_23));
}

static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(
  MR_Word PredId_7,
  MR_Word * MaybeNewPredId_8,
  MR_Word STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * STATE_VARIABLE_ProxyMap_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_bool succeeded;
  MR_Word MaybeNewPredId0_11;
  MR_Box conv0_MaybeNewPredId0_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[0]), STATE_VARIABLE_ProxyMap_0_15, ((MR_Box) (PredId_7)), &conv0_MaybeNewPredId0_11);
  if (succeeded)
  {
    MaybeNewPredId0_11 = ((MR_Word) (conv0_MaybeNewPredId0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *MaybeNewPredId_8 = MaybeNewPredId0_11;
    *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_0_17;
    *STATE_VARIABLE_ProxyMap_16 = STATE_VARIABLE_ProxyMap_0_15;
  }
  else
  {
    MR_Word PredInfo_12;
    MR_Word PredModule_13;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_17, PredId_7, &PredInfo_12);
    PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(PredModule_13);
    if (succeeded)
    {
      MR_Word NewPredId_14;
      MR_Word ProcIds_23;
      MR_Word ModuleName_24;
      MR_String Name_25;
      MR_Word PredOrFunc_26;
      MR_Word Transform_27;
      MR_String ProxyName_28;
      MR_Word Origin_29;
      MR_Word NewOrigin_30;
      MR_Word PredTable0_31;
      MR_Word PredTable_32;
      MR_Word STATE_VARIABLE_PredInfo_24_34;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_PredInfo_27_36;
      MR_Word STATE_VARIABLE_ModuleInfo_28_37;
      MR_Word STATE_VARIABLE_PredInfo_29_38;
      MR_Word STATE_VARIABLE_PredInfo_30_39;
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_PredInfo_32_41;
      MR_Box conv4_STATE_VARIABLE_PredInfo_27_36;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_28_37;

      hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), PredInfo_12, &STATE_VARIABLE_PredInfo_24_34);
      ProcIds_23 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_24_34);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[2]));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1));
        MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_35, 3) = ((MR_Box) (PredId_7));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_35, ProcIds_23, ((MR_Box) (STATE_VARIABLE_PredInfo_24_34)), &conv4_STATE_VARIABLE_PredInfo_27_36, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17)), &conv3_STATE_VARIABLE_ModuleInfo_28_37);
      STATE_VARIABLE_PredInfo_27_36 = ((MR_Word) (conv4_STATE_VARIABLE_PredInfo_27_36));
      STATE_VARIABLE_ModuleInfo_28_37 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_28_37));
      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_28_37, &ModuleName_24);
      hlds__hlds_pred__pred_info_set_module_name_3_p_0(ModuleName_24, STATE_VARIABLE_PredInfo_27_36, &STATE_VARIABLE_PredInfo_29_38);
      Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_29_38);
      PredOrFunc_26 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_29_38);
      {
        Transform_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Transform_27, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(3, Transform_27, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
      }
      hlds__pred_name__make_transformed_pred_name_3_p_0(Name_25, Transform_27, &ProxyName_28);
      hlds__hlds_pred__pred_info_set_name_3_p_0(ProxyName_28, STATE_VARIABLE_PredInfo_29_38, &STATE_VARIABLE_PredInfo_30_39);
      hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_30_39, &Origin_29);
      {
        Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_40, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
      }
      {
        NewOrigin_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, NewOrigin_30, 0) = ((MR_Box) (Var_40));
        MR_hl_field(2, NewOrigin_30, 1) = ((MR_Box) (Origin_29));
        MR_hl_field(2, NewOrigin_30, 2) = ((MR_Box) (PredId_7));
      }
      hlds__hlds_pred__pred_info_set_origin_3_p_0(NewOrigin_30, STATE_VARIABLE_PredInfo_30_39, &STATE_VARIABLE_PredInfo_32_41);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_28_37, &PredTable0_31);
      hlds__pred_table__predicate_table_insert_4_p_0(STATE_VARIABLE_PredInfo_32_41, &NewPredId_14, PredTable0_31, &PredTable_32);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_32, STATE_VARIABLE_ModuleInfo_28_37, STATE_VARIABLE_ModuleInfo_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeNewPredId_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NewPredId_14));
      }
    }
    else
    {
      *MaybeNewPredId_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_0_17;
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[0]), ((MR_Box) (PredId_7)), ((MR_Box) (*MaybeNewPredId_8)), STATE_VARIABLE_ProxyMap_0_15, STATE_VARIABLE_ProxyMap_16);
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProxyMap_18;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

  transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProxyMap_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProxyMap_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProxyMap_0_11,
  MR_Word * STATE_VARIABLE_ProxyMap_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word PredInfo_9;
  MR_Word ProcIds_10;
  MR_Word Var_15;
  MR_Box conv3_STATE_VARIABLE_ProxyMap_12;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_14;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_13, PredId_6, &PredInfo_9);
  ProcIds_10 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_9);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (PredId_6));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_15, ProcIds_10, ((MR_Box) (STATE_VARIABLE_ProxyMap_0_11)), &conv3_STATE_VARIABLE_ProxyMap_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13)), &conv2_STATE_VARIABLE_ModuleInfo_14);
  *STATE_VARIABLE_ProxyMap_12 = ((MR_Word) (conv3_STATE_VARIABLE_ProxyMap_12));
  *STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_14));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ProcInfo_15;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_17;

  transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ProcInfo_15, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ProcInfo_15));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_17));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ProcInfo_15;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_17;

  transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ProcInfo_15, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ProcInfo_15));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_17));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProxyMap_12;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_14;

  transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProxyMap_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProxyMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_14));
}

void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_5_p_0(
  MR_Word SSTraceLevel_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  switch (SSTraceLevel_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_ModuleInfo_16_16;
        MR_Word Var_17;
        MR_Word Var_19;
        MR_Word PredIds_20;
        MR_Word Var_23;
        MR_Box conv3__ProxyMap_21;
        MR_Box conv2_STATE_VARIABLE_ModuleInfo_16_16;

        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &PredIds_20);
        Var_23 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[0]));
        mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[1]), PredIds_20, ((MR_Box) (Var_23)), &conv3__ProxyMap_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv2_STATE_VARIABLE_ModuleInfo_16_16);
        STATE_VARIABLE_ModuleInfo_16_16 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_16_16));
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0]));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_2));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (SSTraceLevel_6));
        }
        {
          Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_19));
        }
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_17, STATE_VARIABLE_ModuleInfo_16_16, STATE_VARIABLE_ModuleInfo_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_13;
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0]));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_3));
          MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_15, 3) = ((MR_Box) (SSTraceLevel_6));
        }
        {
          Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_15));
        }
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_13, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ssdebug____Unify____proxy_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ssdebug____Compare____proxy_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__ssdebug__init(void)
{
}

void mercury__transform_hlds__ssdebug__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ssdebug__transform_hlds__ssdebug__type_ctor_info_proxy_map_0);
}

void mercury__transform_hlds__ssdebug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ssdebug__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ssdebug.
