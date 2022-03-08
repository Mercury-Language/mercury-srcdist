/*
** Automatically generated from `ssdebug.m'
** by the Mercury compiler,
** version rotd-2022-03-08
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.pred_name.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s {
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
  MR_bool transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_32;
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46;
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_58;
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72;
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1057__1_3_f_0(
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
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(
  MR_Word SSTraceLevel_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_38,
  MR_Word * STATE_VARIABLE_ProcInfo_39,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_51,
  MR_Word * STATE_VARIABLE_ProcInfo_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54);

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word Detism_3);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_62,
  MR_Word * STATE_VARIABLE_ProcInfo_63,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65);

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
  MR_Word Detism_3);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_47,
  MR_Word * STATE_VARIABLE_ProcInfo_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50);

static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_18_p_0(
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
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_VarTypes_0_15,
  MR_Word * STATE_VARIABLE_VarTypes_16,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_17,
  MR_Word * STATE_VARIABLE_BoundVarDescs_18);

static void MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0(
  MR_Word InstMap_19,
  MR_Word VarToInspect_20,
  MR_Word Renaming_21,
  MR_Word * VarDesc_22,
  MR_Integer VarPos_23,
  MR_Word * Goals_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * STATE_VARIABLE_ProcInfo_50,
  MR_Word STATE_VARIABLE_PredInfo_0_51,
  MR_Word * STATE_VARIABLE_PredInfo_52,
  MR_Word STATE_VARIABLE_VarSet_0_53,
  MR_Word * STATE_VARIABLE_VarSet_54,
  MR_Word STATE_VARIABLE_VarTypes_0_55,
  MR_Word * STATE_VARIABLE_VarTypes_56,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_57,
  MR_Word * STATE_VARIABLE_BoundVarDescs_58);

static MR_Word MR_CALL 
transform_hlds__ssdebug__list_var_value_type_0_f_0(void);

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word * Goal_9,
  MR_Word * LevelVar_10,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15,
  MR_Word STATE_VARIABLE_VarTypes_0_16,
  MR_Word * STATE_VARIABLE_VarTypes_17);

static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word * Goals_11,
  MR_Word * ProcIdVar_12,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34);

static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_9_p_0(
  MR_String HandleTypeString_10,
  MR_Word ArgVars_11,
  MR_Word * HandleEventGoal_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24);

static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_10_p_0(
  MR_Word ConjGoals_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word STATE_VARIABLE_PredInfo_0_28,
  MR_Word STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * STATE_VARIABLE_ProcInfo_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word VarSet_17,
  MR_Word VarTypes_18);

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
transform_hlds__ssdebug__make_retry_var_6_p_0(
  MR_String VarName_7,
  MR_Word * RetryVar_8,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15,
  MR_Word STATE_VARIABLE_VarTypes_0_16,
  MR_Word * STATE_VARIABLE_VarTypes_17);

static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
  MR_Word OutputVars_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_9_p_0(
  MR_Word OutputVars_10,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word * UnifyGoal_12,
  MR_Word * Renaming_13,
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25,
  MR_Word STATE_VARIABLE_VarTypes_0_26,
  MR_Word * STATE_VARIABLE_VarTypes_27);

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
  MR_Word STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * STATE_VARIABLE_ProcInfo_19,
  MR_Word STATE_VARIABLE_ProxyMap_0_20,
  MR_Word * STATE_VARIABLE_ProxyMap_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * STATE_VARIABLE_ProxyMap_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

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
  MR_Word STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * STATE_VARIABLE_ProcInfo_79,
  MR_Word STATE_VARIABLE_ProxyMap_0_80,
  MR_Word * STATE_VARIABLE_ProxyMap_81,
  MR_Word STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * STATE_VARIABLE_ModuleInfo_83);

static void MR_CALL 
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * STATE_VARIABLE_ProcInfo_26);

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

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[8][1];

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
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_3[5])),
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

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[8][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "FileName"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "LineNumber"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "ModuleName"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "PredName"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "Level"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "list"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "VarName"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "VarPos"))
  },
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
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



static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1057__1_3_f_0(
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
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46 = ((MR_Word) ((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46));
  transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46);
  if (!((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
    (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46);
  (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
  if ((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
    transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), &(env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46, (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_32, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72 = ((MR_Word) ((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72));
  transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(env_ptr);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72);
  if (!((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
    (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72);
  (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
  if ((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
    transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(env_ptr);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), &(env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72, (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_58, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7, env_ptr);
      (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_TRUE;
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
  struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s env;

  (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16 = STATE_VARIABLE_ModuleInfo_0_16;
  switch (SSTraceLevel_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word PredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 0))));
        MR_Integer ProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 1))));

        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &(env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_32);
        transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(&env);
        (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
        if ((env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
        {
          MR_Word Determinism_33;

          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Determinism_33);
          switch (Determinism_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 4:
            case (MR_Integer) 0:
              transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(SSTraceLevel_7, PredId_30, ProcId_31, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 5:
            case (MR_Integer) 1:
              transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(SSTraceLevel_7, PredId_30, ProcId_31, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 6:
              transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(SSTraceLevel_7, PredId_30, ProcId_31, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 7:
              transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(SSTraceLevel_7, PredId_30, ProcId_31, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(SSTraceLevel_7, PredId_30, ProcId_31, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
          }
        }
        else
        {
          *STATE_VARIABLE_ModuleInfo_17 = (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
          *STATE_VARIABLE_ProcInfo_15 = STATE_VARIABLE_ProcInfo_0_14;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ProcInfo_15 = STATE_VARIABLE_ProcInfo_0_14;
        *STATE_VARIABLE_ModuleInfo_17 = (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 0))));
        MR_Word PredInfo_13;
        MR_Integer _ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 1))));

        hlds__hlds_module__module_info_pred_info_3_p_0((env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, PredId_11, &PredInfo_13);
        (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_13);
        if ((env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
        {
          MR_Word PredId_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 0))));
          MR_Integer ProcId_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 1))));

          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &(env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_58);
          transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(&env);
          (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
          if ((env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
          {
            MR_Word Determinism_59;

            hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Determinism_59);
            switch (Determinism_59) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 0:
                transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(SSTraceLevel_7, PredId_56, ProcId_57, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 1:
                transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(SSTraceLevel_7, PredId_56, ProcId_57, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 6:
                transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(SSTraceLevel_7, PredId_56, ProcId_57, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 7:
                transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(SSTraceLevel_7, PredId_56, ProcId_57, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(SSTraceLevel_7, PredId_56, ProcId_57, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15, (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
                break;
            }
          }
          else
          {
            *STATE_VARIABLE_ModuleInfo_17 = (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
            *STATE_VARIABLE_ProcInfo_15 = STATE_VARIABLE_ProcInfo_0_14;
          }
        }
        else
        {
          *STATE_VARIABLE_ModuleInfo_17 = (env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
          *STATE_VARIABLE_ProcInfo_15 = STATE_VARIABLE_ProcInfo_0_14;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33)
{
  MR_Word OrigBodyGoal_16;
  MR_Word _FullHeadVars_17;
  MR_Word HeadVars_18;
  MR_Word ProcIdGoals_20;
  MR_Word ProcIdVar_21;
  MR_Word InitInstMap_22;
  MR_Word CallArgListVar_23;
  MR_Word CallArgListGoals_24;
  MR_Word ConstructLevelGoal_26;
  MR_Word LevelVar_27;
  MR_Word HandleEventCallGoal_28;
  MR_Word BodyGoals_29;
  MR_Word STATE_VARIABLE_PredInfo_34_34;
  MR_Word STATE_VARIABLE_VarSet_35_35;
  MR_Word STATE_VARIABLE_VarTypes_36_36;
  MR_Word STATE_VARIABLE_VarSet_37_37;
  MR_Word STATE_VARIABLE_VarTypes_38_38;
  MR_Word Var_40;
  MR_Word STATE_VARIABLE_ModuleInfo_41_41;
  MR_Word STATE_VARIABLE_ProcInfo_42_42;
  MR_Word STATE_VARIABLE_PredInfo_43_43;
  MR_Word STATE_VARIABLE_VarSet_44_44;
  MR_Word STATE_VARIABLE_VarTypes_45_45;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_VarSet_47_47;
  MR_Word STATE_VARIABLE_VarTypes_48_48;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_ModuleInfo_51_51;
  MR_Word STATE_VARIABLE_VarSet_52_52;
  MR_Word STATE_VARIABLE_VarTypes_53_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Integer PredArity_78;
  MR_Word FullArgModes_79;
  MR_Integer NumHeadVars_80;
  MR_Integer NumToDrop_81;
  MR_Word _ArgModes_19;
  MR_Word _BoundVarDescsAtCall_25;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredId_9, &STATE_VARIABLE_PredInfo_34_34);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_30, &OrigBodyGoal_16);
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_30, &STATE_VARIABLE_VarSet_35_35);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_30, &STATE_VARIABLE_VarTypes_36_36);
  PredArity_78 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(STATE_VARIABLE_PredInfo_34_34);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_30, &_FullHeadVars_17);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_30, &FullArgModes_79);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), _FullHeadVars_17, &NumHeadVars_80);
  NumToDrop_81 = (MR_Integer) ((MR_Unsigned) NumHeadVars_80 - (MR_Unsigned) PredArity_78);
  mercury__list__det_drop_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), NumToDrop_81, _FullHeadVars_17, &HeadVars_18);
  mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumToDrop_81, FullArgModes_79, &_ArgModes_19);
  transform_hlds__ssdebug__make_proc_id_construction_8_p_0(STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_PredInfo_34_34, &ProcIdGoals_20, &ProcIdVar_21, STATE_VARIABLE_VarSet_35_35, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarTypes_36_36, &STATE_VARIABLE_VarTypes_38_38);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ProcInfo_0_30, &InitInstMap_22);
  Var_40 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_46 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, InitInstMap_22, HeadVars_18, Var_40, &CallArgListVar_23, &CallArgListGoals_24, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_41_41, STATE_VARIABLE_ProcInfo_0_30, &STATE_VARIABLE_ProcInfo_42_42, STATE_VARIABLE_PredInfo_34_34, &STATE_VARIABLE_PredInfo_43_43, STATE_VARIABLE_VarSet_37_37, &STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarTypes_38_38, &STATE_VARIABLE_VarTypes_45_45, Var_46, &_BoundVarDescsAtCall_25);
  transform_hlds__ssdebug__make_level_construction_7_p_0(SSTraceLevel_8, &ConstructLevelGoal_26, &LevelVar_27, STATE_VARIABLE_VarSet_44_44, &STATE_VARIABLE_VarSet_47_47, STATE_VARIABLE_VarTypes_45_45, &STATE_VARIABLE_VarTypes_48_48);
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (LevelVar_27));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (CallArgListVar_23));
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_54));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", Var_50, &HandleEventCallGoal_28, STATE_VARIABLE_ModuleInfo_41_41, &STATE_VARIABLE_ModuleInfo_51_51, STATE_VARIABLE_VarSet_47_47, &STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarTypes_48_48, &STATE_VARIABLE_VarTypes_53_53);
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ConstructLevelGoal_26));
    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (HandleEventCallGoal_28));
    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (OrigBodyGoal_16));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CallArgListGoals_24));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ProcIdGoals_20));
    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
  }
  BodyGoals_29 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_57);
  transform_hlds__ssdebug__commit_goal_changes_10_p_0(BodyGoals_29, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_43_43, STATE_VARIABLE_ProcInfo_42_42, STATE_VARIABLE_ProcInfo_31, STATE_VARIABLE_ModuleInfo_51_51, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarTypes_53_53);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_38,
  MR_Word * STATE_VARIABLE_ProcInfo_39,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  MR_Word OrigBodyGoal_16;
  MR_Word FullHeadVars_17;
  MR_Word HeadVars_18;
  MR_Word ProcIdGoals_20;
  MR_Word ProcIdVar_21;
  MR_Word InitInstMap_22;
  MR_Word CallArgListGoals_24;
  MR_Word ConstructLevelGoal_26;
  MR_Word LevelVar_27;
  MR_Word HandleEventCallGoal_28;
  MR_Word FailArgListVar_29;
  MR_Word RetryVar_30;
  MR_Word HandleEventFailGoal_31;
  MR_Word RecursiveGoal_32;
  MR_Word SwitchGoal_33;
  MR_Word ProcDetism_34;
  MR_Word FailDisjunct_35;
  MR_Word DisjGoal_36;
  MR_Word BodyGoals_37;
  MR_Word STATE_VARIABLE_PredInfo_42_42;
  MR_Word STATE_VARIABLE_VarSet_43_43;
  MR_Word STATE_VARIABLE_VarTypes_44_44;
  MR_Word STATE_VARIABLE_VarSet_45_45;
  MR_Word STATE_VARIABLE_VarTypes_46_46;
  MR_Word Var_48;
  MR_Word STATE_VARIABLE_ModuleInfo_49_49;
  MR_Word STATE_VARIABLE_ProcInfo_50_50;
  MR_Word STATE_VARIABLE_PredInfo_51_51;
  MR_Word STATE_VARIABLE_VarSet_52_52;
  MR_Word STATE_VARIABLE_VarTypes_53_53;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_VarSet_55_55;
  MR_Word STATE_VARIABLE_VarTypes_56_56;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_ModuleInfo_59_59;
  MR_Word STATE_VARIABLE_VarSet_60_60;
  MR_Word STATE_VARIABLE_VarTypes_61_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_VarSet_66_66;
  MR_Word STATE_VARIABLE_VarTypes_67_67;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_ModuleInfo_70_70;
  MR_Word STATE_VARIABLE_VarSet_71_71;
  MR_Word STATE_VARIABLE_VarTypes_72_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word _ArgModes_19;
  MR_Word _BoundVarDescsAtCall_25;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, PredId_9, &STATE_VARIABLE_PredInfo_42_42);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_38, &OrigBodyGoal_16);
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_38, &STATE_VARIABLE_VarSet_43_43);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_38, &STATE_VARIABLE_VarTypes_44_44);
  transform_hlds__ssdebug__get_stripped_headvars_5_p_0(STATE_VARIABLE_PredInfo_42_42, STATE_VARIABLE_ProcInfo_0_38, &FullHeadVars_17, &HeadVars_18, &_ArgModes_19);
  transform_hlds__ssdebug__make_proc_id_construction_8_p_0(STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_PredInfo_42_42, &ProcIdGoals_20, &ProcIdVar_21, STATE_VARIABLE_VarSet_43_43, &STATE_VARIABLE_VarSet_45_45, STATE_VARIABLE_VarTypes_44_44, &STATE_VARIABLE_VarTypes_46_46);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ProcInfo_0_38, &InitInstMap_22);
  Var_48 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_54 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, InitInstMap_22, HeadVars_18, Var_48, &FailArgListVar_29, &CallArgListGoals_24, STATE_VARIABLE_ModuleInfo_0_40, &STATE_VARIABLE_ModuleInfo_49_49, STATE_VARIABLE_ProcInfo_0_38, &STATE_VARIABLE_ProcInfo_50_50, STATE_VARIABLE_PredInfo_42_42, &STATE_VARIABLE_PredInfo_51_51, STATE_VARIABLE_VarSet_45_45, &STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarTypes_46_46, &STATE_VARIABLE_VarTypes_53_53, Var_54, &_BoundVarDescsAtCall_25);
  transform_hlds__ssdebug__make_level_construction_7_p_0(SSTraceLevel_8, &ConstructLevelGoal_26, &LevelVar_27, STATE_VARIABLE_VarSet_52_52, &STATE_VARIABLE_VarSet_55_55, STATE_VARIABLE_VarTypes_53_53, &STATE_VARIABLE_VarTypes_56_56);
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (LevelVar_27));
    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (FailArgListVar_29));
    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_62));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", Var_58, &HandleEventCallGoal_28, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_59_59, STATE_VARIABLE_VarSet_55_55, &STATE_VARIABLE_VarSet_60_60, STATE_VARIABLE_VarTypes_56_56, &STATE_VARIABLE_VarTypes_61_61);
  transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &RetryVar_30, STATE_VARIABLE_VarSet_60_60, &STATE_VARIABLE_VarSet_66_66, STATE_VARIABLE_VarTypes_61_61, &STATE_VARIABLE_VarTypes_67_67);
  {
    Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (RetryVar_30));
    MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (FailArgListVar_29));
    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_73));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", Var_69, &HandleEventFailGoal_31, STATE_VARIABLE_ModuleInfo_59_59, &STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_VarSet_66_66, &STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_VarTypes_67_67, &STATE_VARIABLE_VarTypes_72_72);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_51_51, STATE_VARIABLE_ModuleInfo_70_70, PredId_9, ProcId_10, FullHeadVars_17, &RecursiveGoal_32);
  Var_76 = hlds__make_goal__fail_goal_0_f_0();
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryVar_30, RecursiveGoal_32, Var_76, &SwitchGoal_33);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &ProcDetism_34);
  {
    Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (SwitchGoal_33));
    MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (HandleEventFailGoal_31));
    MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_77, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (Var_79));
  }
  Var_82 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(ProcDetism_34);
  {
    FailDisjunct_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FailDisjunct_35, 0) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(0), FailDisjunct_35, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (FailDisjunct_35));
    MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (OrigBodyGoal_16));
    MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
  }
  Var_87 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_34);
  {
    DisjGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), DisjGoal_36, 0) = ((MR_Box) (Var_83));
    MR_hl_field(MR_mktag(0), DisjGoal_36, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (ConstructLevelGoal_26));
    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (HandleEventCallGoal_28));
    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (DisjGoal_36));
    MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (CallArgListGoals_24));
    MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (ProcIdGoals_20));
    MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
  }
  BodyGoals_37 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_88);
  transform_hlds__ssdebug__commit_goal_changes_10_p_0(BodyGoals_37, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_51_51, STATE_VARIABLE_ProcInfo_50_50, STATE_VARIABLE_ProcInfo_39, STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_VarTypes_72_72);
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_51,
  MR_Word * STATE_VARIABLE_ProcInfo_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54)
{
  MR_Word OrigBodyGoal_16;
  MR_Word FullHeadVars_17;
  MR_Word HeadVars_18;
  MR_Word ProcIdGoals_20;
  MR_Word ProcIdVar_21;
  MR_Word InitInstMap_22;
  MR_Word BoundVarDescsAtCall_25;
  MR_Word ConstructLevelGoal_26;
  MR_Word LevelVar_27;
  MR_Word HandleEventCallGoal_28;
  MR_Word FinalInstMap_29;
  MR_Word ExitArgListVar_30;
  MR_Word ExitArgListGoals_31;
  MR_Word ProcDetism_33;
  MR_Word ExitDisjunct_35;
  MR_Word HandleEventRedoGoal_36;
  MR_Word RedoDisjunct_37;
  MR_Word ExitOrRedoGoal_38;
  MR_Word CallExitRedoDisjunctGoals_39;
  MR_Word CallExitRedoDisjunct_40;
  MR_Word FailArgListVar_41;
  MR_Word FailArgListGoals_42;
  MR_Word RetryVar_43;
  MR_Word HandleEventFailGoal_44;
  MR_Word RecursiveGoal_45;
  MR_Word SwitchFailPortGoal_46;
  MR_Word FailDisjunctGoals_47;
  MR_Word FailDisjunct_48;
  MR_Word BodyDisj_49;
  MR_Word BodyGoals_50;
  MR_Word STATE_VARIABLE_PredInfo_55_55;
  MR_Word STATE_VARIABLE_VarSet_56_56;
  MR_Word STATE_VARIABLE_VarTypes_57_57;
  MR_Word STATE_VARIABLE_VarSet_58_58;
  MR_Word STATE_VARIABLE_VarTypes_59_59;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_ModuleInfo_62_62;
  MR_Word STATE_VARIABLE_ProcInfo_63_63;
  MR_Word STATE_VARIABLE_PredInfo_64_64;
  MR_Word STATE_VARIABLE_VarSet_65_65;
  MR_Word STATE_VARIABLE_VarTypes_66_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_VarSet_68_68;
  MR_Word STATE_VARIABLE_VarTypes_69_69;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_ModuleInfo_72_72;
  MR_Word STATE_VARIABLE_VarSet_73_73;
  MR_Word STATE_VARIABLE_VarTypes_74_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_ModuleInfo_80_80;
  MR_Word STATE_VARIABLE_ProcInfo_81_81;
  MR_Word STATE_VARIABLE_PredInfo_82_82;
  MR_Word STATE_VARIABLE_VarSet_83_83;
  MR_Word STATE_VARIABLE_VarTypes_84_84;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_ModuleInfo_87_87;
  MR_Word STATE_VARIABLE_VarSet_88_88;
  MR_Word STATE_VARIABLE_VarTypes_89_89;
  MR_Word Var_90;
  MR_Word STATE_VARIABLE_ModuleInfo_94_94;
  MR_Word STATE_VARIABLE_VarSet_95_95;
  MR_Word STATE_VARIABLE_VarTypes_96_96;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_105;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_111;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_128;
  MR_Word Var_130;
  MR_Word STATE_VARIABLE_VarSet_132_132;
  MR_Word STATE_VARIABLE_VarTypes_133_133;
  MR_Word Var_135;
  MR_Word STATE_VARIABLE_ModuleInfo_136_136;
  MR_Word STATE_VARIABLE_VarSet_137_137;
  MR_Word STATE_VARIABLE_VarTypes_138_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_151;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word _ArgModes_19;
  MR_Word _BoundVarDescsAtExit_32;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_53, PredId_9, &STATE_VARIABLE_PredInfo_55_55);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_51, &OrigBodyGoal_16);
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_51, &STATE_VARIABLE_VarSet_56_56);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_51, &STATE_VARIABLE_VarTypes_57_57);
  transform_hlds__ssdebug__get_stripped_headvars_5_p_0(STATE_VARIABLE_PredInfo_55_55, STATE_VARIABLE_ProcInfo_0_51, &FullHeadVars_17, &HeadVars_18, &_ArgModes_19);
  transform_hlds__ssdebug__make_proc_id_construction_8_p_0(STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_PredInfo_55_55, &ProcIdGoals_20, &ProcIdVar_21, STATE_VARIABLE_VarSet_56_56, &STATE_VARIABLE_VarSet_58_58, STATE_VARIABLE_VarTypes_57_57, &STATE_VARIABLE_VarTypes_59_59);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_ProcInfo_0_51, &InitInstMap_22);
  Var_61 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_67 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, InitInstMap_22, HeadVars_18, Var_61, &FailArgListVar_41, &FailArgListGoals_42, STATE_VARIABLE_ModuleInfo_0_53, &STATE_VARIABLE_ModuleInfo_62_62, STATE_VARIABLE_ProcInfo_0_51, &STATE_VARIABLE_ProcInfo_63_63, STATE_VARIABLE_PredInfo_55_55, &STATE_VARIABLE_PredInfo_64_64, STATE_VARIABLE_VarSet_58_58, &STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_VarTypes_59_59, &STATE_VARIABLE_VarTypes_66_66, Var_67, &BoundVarDescsAtCall_25);
  transform_hlds__ssdebug__make_level_construction_7_p_0(SSTraceLevel_8, &ConstructLevelGoal_26, &LevelVar_27, STATE_VARIABLE_VarSet_65_65, &STATE_VARIABLE_VarSet_68_68, STATE_VARIABLE_VarTypes_66_66, &STATE_VARIABLE_VarTypes_69_69);
  {
    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (LevelVar_27));
    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (FailArgListVar_41));
    MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_75));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call_nondet", Var_71, &HandleEventCallGoal_28, STATE_VARIABLE_ModuleInfo_62_62, &STATE_VARIABLE_ModuleInfo_72_72, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_VarTypes_69_69, &STATE_VARIABLE_VarTypes_74_74);
  hlds__goal_util__update_instmap_3_p_0(OrigBodyGoal_16, InitInstMap_22, &FinalInstMap_29);
  Var_79 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, FinalInstMap_29, HeadVars_18, Var_79, &ExitArgListVar_30, &ExitArgListGoals_31, STATE_VARIABLE_ModuleInfo_72_72, &STATE_VARIABLE_ModuleInfo_80_80, STATE_VARIABLE_ProcInfo_63_63, &STATE_VARIABLE_ProcInfo_81_81, STATE_VARIABLE_PredInfo_64_64, &STATE_VARIABLE_PredInfo_82_82, STATE_VARIABLE_VarSet_73_73, &STATE_VARIABLE_VarSet_83_83, STATE_VARIABLE_VarTypes_74_74, &STATE_VARIABLE_VarTypes_84_84, BoundVarDescsAtCall_25, &_BoundVarDescsAtExit_32);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_81_81, &ProcDetism_33);
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (ExitArgListVar_30));
    MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_90));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit_nondet", Var_86, &ExitDisjunct_35, STATE_VARIABLE_ModuleInfo_80_80, &STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_VarSet_83_83, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_VarTypes_84_84, &STATE_VARIABLE_VarTypes_89_89);
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_redo_nondet", Var_86, &HandleEventRedoGoal_36, STATE_VARIABLE_ModuleInfo_87_87, &STATE_VARIABLE_ModuleInfo_94_94, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_95_95, STATE_VARIABLE_VarTypes_89_89, &STATE_VARIABLE_VarTypes_96_96);
  Var_103 = hlds__make_goal__fail_goal_0_f_0();
  {
    Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
    MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (HandleEventRedoGoal_36));
    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_99, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_99, 2) = ((MR_Box) (Var_101));
  }
  Var_105 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0((MR_Integer) 7);
  {
    RedoDisjunct_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), RedoDisjunct_37, 0) = ((MR_Box) (Var_99));
    MR_hl_field(MR_mktag(0), RedoDisjunct_37, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (RedoDisjunct_37));
    MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (ExitDisjunct_35));
    MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (Var_108));
  }
  Var_111 = transform_hlds__ssdebug__impure_goal_info_1_f_0((MR_Integer) 3);
  {
    ExitOrRedoGoal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ExitOrRedoGoal_38, 0) = ((MR_Box) (Var_107));
    MR_hl_field(MR_mktag(0), ExitOrRedoGoal_38, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (ConstructLevelGoal_26));
    MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (HandleEventCallGoal_28));
    MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (OrigBodyGoal_16));
    MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ExitOrRedoGoal_38));
    MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (ExitArgListGoals_31));
    MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
    MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
  }
  {
    Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
    MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
  }
  {
    Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
    MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (FailArgListGoals_42));
    MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
  }
  CallExitRedoDisjunctGoals_39 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_113);
  {
    Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_128, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_128, 2) = ((MR_Box) (CallExitRedoDisjunctGoals_39));
  }
  Var_130 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_33);
  {
    CallExitRedoDisjunct_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CallExitRedoDisjunct_40, 0) = ((MR_Box) (Var_128));
    MR_hl_field(MR_mktag(0), CallExitRedoDisjunct_40, 1) = ((MR_Box) (Var_130));
  }
  transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &RetryVar_43, STATE_VARIABLE_VarSet_95_95, &STATE_VARIABLE_VarSet_132_132, STATE_VARIABLE_VarTypes_96_96, &STATE_VARIABLE_VarTypes_133_133);
  {
    Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (RetryVar_43));
    MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (FailArgListVar_41));
    MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_139));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail_nondet", Var_135, &HandleEventFailGoal_44, STATE_VARIABLE_ModuleInfo_94_94, &STATE_VARIABLE_ModuleInfo_136_136, STATE_VARIABLE_VarSet_132_132, &STATE_VARIABLE_VarSet_137_137, STATE_VARIABLE_VarTypes_133_133, &STATE_VARIABLE_VarTypes_138_138);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_82_82, STATE_VARIABLE_ModuleInfo_136_136, PredId_9, ProcId_10, FullHeadVars_17, &RecursiveGoal_45);
  Var_142 = hlds__make_goal__fail_goal_0_f_0();
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryVar_43, RecursiveGoal_45, Var_142, &SwitchFailPortGoal_46);
  {
    Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (HandleEventFailGoal_44));
    MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (SwitchFailPortGoal_46));
    MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
    MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
    MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (FailArgListGoals_42));
    MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
  }
  FailDisjunctGoals_47 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_143);
  {
    Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_151, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_151, 2) = ((MR_Box) (FailDisjunctGoals_47));
  }
  Var_153 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(ProcDetism_33);
  {
    FailDisjunct_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FailDisjunct_48, 0) = ((MR_Box) (Var_151));
    MR_hl_field(MR_mktag(0), FailDisjunct_48, 1) = ((MR_Box) (Var_153));
  }
  {
    Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (FailDisjunct_48));
    MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (CallExitRedoDisjunct_40));
    MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_156));
  }
  {
    Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (Var_155));
  }
  Var_158 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_33);
  {
    BodyDisj_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), BodyDisj_49, 0) = ((MR_Box) (Var_154));
    MR_hl_field(MR_mktag(0), BodyDisj_49, 1) = ((MR_Box) (Var_158));
  }
  {
    Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (BodyDisj_49));
    MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  BodyGoals_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ProcIdGoals_20, Var_159);
  transform_hlds__ssdebug__commit_goal_changes_10_p_0(BodyGoals_50, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_82_82, STATE_VARIABLE_ProcInfo_81_81, STATE_VARIABLE_ProcInfo_52, STATE_VARIABLE_ModuleInfo_136_136, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_VarSet_137_137, STATE_VARIABLE_VarTypes_138_138);
}

static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
  MR_Word Detism_3)
{
  MR_Word GoalInfo_4;
  MR_Word GoalInfo0_5;
  MR_Word GoalInfo0_9;
  MR_Word GoalInfo1_10;

  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_9);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_9, &GoalInfo1_10);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_3, GoalInfo1_10, &GoalInfo0_5);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, GoalInfo0_5, &GoalInfo_4);
  return GoalInfo_4;
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_62,
  MR_Word * STATE_VARIABLE_ProcInfo_63,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65)
{
  MR_Word OrigBodyGoal_16;
  MR_Word FullHeadVars_17;
  MR_Word HeadVars_18;
  MR_Word ArgModes_19;
  MR_Word ProcIdGoals_20;
  MR_Word ProcIdVar_21;
  MR_Word InitInstMap_22;
  MR_Word CallArgListVar_23;
  MR_Word CallArgListGoals_24;
  MR_Word BoundVarDescsAtCall_25;
  MR_Word ConstructLevelGoal_26;
  MR_Word LevelVar_27;
  MR_Word HandleEventCallGoal_28;
  MR_Word OutputVars_29;
  MR_Word RenamedBodyGoal_30;
  MR_Word AssignOutputsGoal_31;
  MR_Word Renaming_32;
  MR_Word FinalInstMap_33;
  MR_Word ExitArgListVar_34;
  MR_Word ExitArgListGoals_35;
  MR_Word RetryAVar_37;
  MR_Word HandleEventExitGoal_38;
  MR_Word RecursiveGoal_39;
  MR_Word FailArgListVar_40;
  MR_Word FailArgListGoals_41;
  MR_Word RetryBVar_43;
  MR_Word HandleEventFailGoal_44;
  MR_Word ProcDetism_45;
  MR_Word ImpureGoalInfo_46;
  MR_Word Solns_48;
  MR_Word CondGoal_49;
  MR_Word SwitchExitPortGoal_51;
  MR_Word GoalsThen_52;
  MR_Word ThenGoal_53;
  MR_Word SwitchFailPortGoal_54;
  MR_Word GoalsElse_55;
  MR_Word ElseGoal_56;
  MR_Word OrigGoalInfo_58;
  MR_Word IteGoalInfo_59;
  MR_Word IteGoal_60;
  MR_Word BodyGoals_61;
  MR_Word STATE_VARIABLE_PredInfo_66_66;
  MR_Word STATE_VARIABLE_VarSet_67_67;
  MR_Word STATE_VARIABLE_VarTypes_68_68;
  MR_Word STATE_VARIABLE_VarSet_69_69;
  MR_Word STATE_VARIABLE_VarTypes_70_70;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_ModuleInfo_73_73;
  MR_Word STATE_VARIABLE_ProcInfo_74_74;
  MR_Word STATE_VARIABLE_PredInfo_75_75;
  MR_Word STATE_VARIABLE_VarSet_76_76;
  MR_Word STATE_VARIABLE_VarTypes_77_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_VarSet_79_79;
  MR_Word STATE_VARIABLE_VarTypes_80_80;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_ModuleInfo_83_83;
  MR_Word STATE_VARIABLE_VarSet_84_84;
  MR_Word STATE_VARIABLE_VarTypes_85_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_VarSet_89_89;
  MR_Word STATE_VARIABLE_VarTypes_90_90;
  MR_Word STATE_VARIABLE_ModuleInfo_92_92;
  MR_Word STATE_VARIABLE_ProcInfo_93_93;
  MR_Word STATE_VARIABLE_PredInfo_94_94;
  MR_Word STATE_VARIABLE_VarSet_95_95;
  MR_Word STATE_VARIABLE_VarTypes_96_96;
  MR_Word STATE_VARIABLE_VarSet_98_98;
  MR_Word STATE_VARIABLE_VarTypes_99_99;
  MR_Word Var_101;
  MR_Word STATE_VARIABLE_ModuleInfo_102_102;
  MR_Word STATE_VARIABLE_VarSet_103_103;
  MR_Word STATE_VARIABLE_VarTypes_104_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word STATE_VARIABLE_ModuleInfo_110_110;
  MR_Word STATE_VARIABLE_ProcInfo_111_111;
  MR_Word STATE_VARIABLE_PredInfo_112_112;
  MR_Word STATE_VARIABLE_VarSet_113_113;
  MR_Word STATE_VARIABLE_VarTypes_114_114;
  MR_Word STATE_VARIABLE_VarSet_116_116;
  MR_Word STATE_VARIABLE_VarTypes_117_117;
  MR_Word Var_119;
  MR_Word STATE_VARIABLE_ModuleInfo_120_120;
  MR_Word STATE_VARIABLE_VarSet_121_121;
  MR_Word STATE_VARIABLE_VarTypes_122_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_136;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_147;
  MR_Word Var_149;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_159;
  MR_Word Var_160;
  MR_Word _BoundVarDescsAtExit_36;
  MR_Word _BoundVarDescsAtFail_42;
  MR_Word _CanFail_47;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_64, PredId_9, &STATE_VARIABLE_PredInfo_66_66);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_62, &OrigBodyGoal_16);
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_62, &STATE_VARIABLE_VarSet_67_67);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_62, &STATE_VARIABLE_VarTypes_68_68);
  transform_hlds__ssdebug__get_stripped_headvars_5_p_0(STATE_VARIABLE_PredInfo_66_66, STATE_VARIABLE_ProcInfo_0_62, &FullHeadVars_17, &HeadVars_18, &ArgModes_19);
  transform_hlds__ssdebug__make_proc_id_construction_8_p_0(STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_PredInfo_66_66, &ProcIdGoals_20, &ProcIdVar_21, STATE_VARIABLE_VarSet_67_67, &STATE_VARIABLE_VarSet_69_69, STATE_VARIABLE_VarTypes_68_68, &STATE_VARIABLE_VarTypes_70_70);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ProcInfo_0_62, &InitInstMap_22);
  Var_72 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_78 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, InitInstMap_22, HeadVars_18, Var_72, &CallArgListVar_23, &CallArgListGoals_24, STATE_VARIABLE_ModuleInfo_0_64, &STATE_VARIABLE_ModuleInfo_73_73, STATE_VARIABLE_ProcInfo_0_62, &STATE_VARIABLE_ProcInfo_74_74, STATE_VARIABLE_PredInfo_66_66, &STATE_VARIABLE_PredInfo_75_75, STATE_VARIABLE_VarSet_69_69, &STATE_VARIABLE_VarSet_76_76, STATE_VARIABLE_VarTypes_70_70, &STATE_VARIABLE_VarTypes_77_77, Var_78, &BoundVarDescsAtCall_25);
  transform_hlds__ssdebug__make_level_construction_7_p_0(SSTraceLevel_8, &ConstructLevelGoal_26, &LevelVar_27, STATE_VARIABLE_VarSet_76_76, &STATE_VARIABLE_VarSet_79_79, STATE_VARIABLE_VarTypes_77_77, &STATE_VARIABLE_VarTypes_80_80);
  {
    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (LevelVar_27));
    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (CallArgListVar_23));
    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_86));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", Var_82, &HandleEventCallGoal_28, STATE_VARIABLE_ModuleInfo_73_73, &STATE_VARIABLE_ModuleInfo_83_83, STATE_VARIABLE_VarSet_79_79, &STATE_VARIABLE_VarSet_84_84, STATE_VARIABLE_VarTypes_80_80, &STATE_VARIABLE_VarTypes_85_85);
  transform_hlds__ssdebug__get_output_args_4_p_0(STATE_VARIABLE_ModuleInfo_83_83, HeadVars_18, ArgModes_19, &OutputVars_29);
  transform_hlds__ssdebug__rename_outputs_9_p_0(OutputVars_29, OrigBodyGoal_16, &RenamedBodyGoal_30, &AssignOutputsGoal_31, &Renaming_32, STATE_VARIABLE_VarSet_84_84, &STATE_VARIABLE_VarSet_89_89, STATE_VARIABLE_VarTypes_85_85, &STATE_VARIABLE_VarTypes_90_90);
  hlds__goal_util__update_instmap_3_p_0(OrigBodyGoal_16, InitInstMap_22, &FinalInstMap_33);
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, FinalInstMap_33, HeadVars_18, Renaming_32, &ExitArgListVar_34, &ExitArgListGoals_35, STATE_VARIABLE_ModuleInfo_83_83, &STATE_VARIABLE_ModuleInfo_92_92, STATE_VARIABLE_ProcInfo_74_74, &STATE_VARIABLE_ProcInfo_93_93, STATE_VARIABLE_PredInfo_75_75, &STATE_VARIABLE_PredInfo_94_94, STATE_VARIABLE_VarSet_89_89, &STATE_VARIABLE_VarSet_95_95, STATE_VARIABLE_VarTypes_90_90, &STATE_VARIABLE_VarTypes_96_96, BoundVarDescsAtCall_25, &_BoundVarDescsAtExit_36);
  transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryA", &RetryAVar_37, STATE_VARIABLE_VarSet_95_95, &STATE_VARIABLE_VarSet_98_98, STATE_VARIABLE_VarTypes_96_96, &STATE_VARIABLE_VarTypes_99_99);
  {
    Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (RetryAVar_37));
    MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (ExitArgListVar_34));
    MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
  }
  {
    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_105));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", Var_101, &HandleEventExitGoal_38, STATE_VARIABLE_ModuleInfo_92_92, &STATE_VARIABLE_ModuleInfo_102_102, STATE_VARIABLE_VarSet_98_98, &STATE_VARIABLE_VarSet_103_103, STATE_VARIABLE_VarTypes_99_99, &STATE_VARIABLE_VarTypes_104_104);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_94_94, STATE_VARIABLE_ModuleInfo_102_102, PredId_9, ProcId_10, FullHeadVars_17, &RecursiveGoal_39);
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, InitInstMap_22, (MR_Word) ((MR_Unsigned) 0U), Renaming_32, &FailArgListVar_40, &FailArgListGoals_41, STATE_VARIABLE_ModuleInfo_102_102, &STATE_VARIABLE_ModuleInfo_110_110, STATE_VARIABLE_ProcInfo_93_93, &STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_PredInfo_94_94, &STATE_VARIABLE_PredInfo_112_112, STATE_VARIABLE_VarSet_103_103, &STATE_VARIABLE_VarSet_113_113, STATE_VARIABLE_VarTypes_104_104, &STATE_VARIABLE_VarTypes_114_114, BoundVarDescsAtCall_25, &_BoundVarDescsAtFail_42);
  transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryB", &RetryBVar_43, STATE_VARIABLE_VarSet_113_113, &STATE_VARIABLE_VarSet_116_116, STATE_VARIABLE_VarTypes_114_114, &STATE_VARIABLE_VarTypes_117_117);
  {
    Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (RetryBVar_43));
    MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (FailArgListVar_40));
    MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_123));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", Var_119, &HandleEventFailGoal_44, STATE_VARIABLE_ModuleInfo_110_110, &STATE_VARIABLE_ModuleInfo_120_120, STATE_VARIABLE_VarSet_116_116, &STATE_VARIABLE_VarSet_121_121, STATE_VARIABLE_VarTypes_117_117, &STATE_VARIABLE_VarTypes_122_122);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_111_111, &ProcDetism_45);
  ImpureGoalInfo_46 = transform_hlds__ssdebug__impure_goal_info_1_f_0(ProcDetism_45);
  parse_tree__prog_data__determinism_components_3_p_0(ProcDetism_45, &_CanFail_47, &Solns_48);
  switch (Solns_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      {
        MR_Word RenamedOutputVars_50;

        mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), OutputVars_29, Renaming_32, &RenamedOutputVars_50);
        transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(RenamedOutputVars_50, RenamedBodyGoal_30, &CondGoal_49);
      }
      break;
    case (MR_Integer) 1:
      CondGoal_49 = RenamedBodyGoal_30;
      break;
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_process_proc_semi\'/7", (MR_String) "zero solutions");
        return;
      }
      break;
  }
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryAVar_37, RecursiveGoal_39, AssignOutputsGoal_31, &SwitchExitPortGoal_51);
  {
    Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (HandleEventExitGoal_38));
    MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (SwitchExitPortGoal_51));
    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
    MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
    MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
  }
  {
    Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (ExitArgListGoals_35));
    MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
  }
  GoalsThen_52 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_128);
  {
    Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_136, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_136, 2) = ((MR_Box) (GoalsThen_52));
  }
  {
    ThenGoal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ThenGoal_53, 0) = ((MR_Box) (Var_136));
    MR_hl_field(MR_mktag(0), ThenGoal_53, 1) = ((MR_Box) (ImpureGoalInfo_46));
  }
  Var_138 = hlds__make_goal__fail_goal_0_f_0();
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryBVar_43, RecursiveGoal_39, Var_138, &SwitchFailPortGoal_54);
  {
    Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (HandleEventFailGoal_44));
    MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (SwitchFailPortGoal_54));
    MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
    MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_141));
    MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
  }
  {
    Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (FailArgListGoals_41));
    MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_140));
  }
  GoalsElse_55 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_139);
  {
    Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_147, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_147, 2) = ((MR_Box) (GoalsElse_55));
  }
  {
    ElseGoal_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ElseGoal_56, 0) = ((MR_Box) (Var_147));
    MR_hl_field(MR_mktag(0), ElseGoal_56, 1) = ((MR_Box) (ImpureGoalInfo_46));
  }
  OrigGoalInfo_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigBodyGoal_16, (MR_Integer) 1))));
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(ProcDetism_45, OrigGoalInfo_58, &IteGoalInfo_59);
  {
    Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_149, 2) = ((MR_Box) (CondGoal_49));
    MR_hl_field(MR_mktag(3), Var_149, 3) = ((MR_Box) (ThenGoal_53));
    MR_hl_field(MR_mktag(3), Var_149, 4) = ((MR_Box) (ElseGoal_56));
  }
  {
    IteGoal_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), IteGoal_60, 0) = ((MR_Box) (Var_149));
    MR_hl_field(MR_mktag(0), IteGoal_60, 1) = ((MR_Box) (IteGoalInfo_59));
  }
  {
    Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (ConstructLevelGoal_26));
    MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (HandleEventCallGoal_28));
    MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (IteGoal_60));
    MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
    MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
    MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_159));
  }
  {
    Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Var_154));
    MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_156));
  }
  {
    Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (CallArgListGoals_24));
    MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_153));
  }
  {
    Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (ProcIdGoals_20));
    MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_152));
  }
  BodyGoals_61 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_151);
  transform_hlds__ssdebug__commit_goal_changes_10_p_0(BodyGoals_61, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_112_112, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ProcInfo_63, STATE_VARIABLE_ModuleInfo_120_120, STATE_VARIABLE_ModuleInfo_65, STATE_VARIABLE_VarSet_121_121, STATE_VARIABLE_VarTypes_122_122);
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

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_47,
  MR_Word * STATE_VARIABLE_ProcInfo_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50)
{
  MR_Word OrigBodyGoal_16;
  MR_Word FullHeadVars_17;
  MR_Word HeadVars_18;
  MR_Word ArgModes_19;
  MR_Word ProcIdGoals_20;
  MR_Word ProcIdVar_21;
  MR_Word InitInstMap_22;
  MR_Word CallArgListVar_23;
  MR_Word CallArgListGoals_24;
  MR_Word BoundVarDescsAtCall_25;
  MR_Word ConstructLevelGoal_26;
  MR_Word LevelVar_27;
  MR_Word HandleEventCallGoal_28;
  MR_Word OutputVars_29;
  MR_Word RenamedBodyGoal_30;
  MR_Word AssignOutputsGoal_31;
  MR_Word Renaming_32;
  MR_Word ProcDetism_33;
  MR_Word CanFail_34;
  MR_Word ScopedRenamedBodyGoal_37;
  MR_Word FinalInstMap_38;
  MR_Word ExitArgListVar_39;
  MR_Word ExitArgListGoals_40;
  MR_Word RetryVar_42;
  MR_Word HandleEventExitGoal_43;
  MR_Word RecursiveGoal_44;
  MR_Word SwitchGoal_45;
  MR_Word BodyGoals_46;
  MR_Word STATE_VARIABLE_PredInfo_51_51;
  MR_Word STATE_VARIABLE_VarSet_52_52;
  MR_Word STATE_VARIABLE_VarTypes_53_53;
  MR_Word STATE_VARIABLE_VarSet_54_54;
  MR_Word STATE_VARIABLE_VarTypes_55_55;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_ModuleInfo_58_58;
  MR_Word STATE_VARIABLE_ProcInfo_59_59;
  MR_Word STATE_VARIABLE_PredInfo_60_60;
  MR_Word STATE_VARIABLE_VarSet_61_61;
  MR_Word STATE_VARIABLE_VarTypes_62_62;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_VarSet_64_64;
  MR_Word STATE_VARIABLE_VarTypes_65_65;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_ModuleInfo_68_68;
  MR_Word STATE_VARIABLE_VarSet_69_69;
  MR_Word STATE_VARIABLE_VarTypes_70_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_VarSet_74_74;
  MR_Word STATE_VARIABLE_VarTypes_75_75;
  MR_Word STATE_VARIABLE_ModuleInfo_77_77;
  MR_Word STATE_VARIABLE_ProcInfo_78_78;
  MR_Word STATE_VARIABLE_PredInfo_79_79;
  MR_Word STATE_VARIABLE_VarSet_80_80;
  MR_Word STATE_VARIABLE_VarTypes_81_81;
  MR_Word STATE_VARIABLE_VarSet_83_83;
  MR_Word STATE_VARIABLE_VarTypes_84_84;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_ModuleInfo_87_87;
  MR_Word STATE_VARIABLE_VarSet_88_88;
  MR_Word STATE_VARIABLE_VarTypes_89_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word _Solns_35;
  MR_Word _BoundVarDescsAtExit_41;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_49, PredId_9, &STATE_VARIABLE_PredInfo_51_51);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_47, &OrigBodyGoal_16);
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_47, &STATE_VARIABLE_VarSet_52_52);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_47, &STATE_VARIABLE_VarTypes_53_53);
  transform_hlds__ssdebug__get_stripped_headvars_5_p_0(STATE_VARIABLE_PredInfo_51_51, STATE_VARIABLE_ProcInfo_0_47, &FullHeadVars_17, &HeadVars_18, &ArgModes_19);
  transform_hlds__ssdebug__make_proc_id_construction_8_p_0(STATE_VARIABLE_ModuleInfo_0_49, STATE_VARIABLE_PredInfo_51_51, &ProcIdGoals_20, &ProcIdVar_21, STATE_VARIABLE_VarSet_52_52, &STATE_VARIABLE_VarSet_54_54, STATE_VARIABLE_VarTypes_53_53, &STATE_VARIABLE_VarTypes_55_55);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_49, STATE_VARIABLE_ProcInfo_0_47, &InitInstMap_22);
  Var_57 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  Var_63 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]));
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, InitInstMap_22, HeadVars_18, Var_57, &CallArgListVar_23, &CallArgListGoals_24, STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_58_58, STATE_VARIABLE_ProcInfo_0_47, &STATE_VARIABLE_ProcInfo_59_59, STATE_VARIABLE_PredInfo_51_51, &STATE_VARIABLE_PredInfo_60_60, STATE_VARIABLE_VarSet_54_54, &STATE_VARIABLE_VarSet_61_61, STATE_VARIABLE_VarTypes_55_55, &STATE_VARIABLE_VarTypes_62_62, Var_63, &BoundVarDescsAtCall_25);
  transform_hlds__ssdebug__make_level_construction_7_p_0(SSTraceLevel_8, &ConstructLevelGoal_26, &LevelVar_27, STATE_VARIABLE_VarSet_61_61, &STATE_VARIABLE_VarSet_64_64, STATE_VARIABLE_VarTypes_62_62, &STATE_VARIABLE_VarTypes_65_65);
  {
    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (LevelVar_27));
    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (CallArgListVar_23));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_71));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", Var_67, &HandleEventCallGoal_28, STATE_VARIABLE_ModuleInfo_58_58, &STATE_VARIABLE_ModuleInfo_68_68, STATE_VARIABLE_VarSet_64_64, &STATE_VARIABLE_VarSet_69_69, STATE_VARIABLE_VarTypes_65_65, &STATE_VARIABLE_VarTypes_70_70);
  transform_hlds__ssdebug__get_output_args_4_p_0(STATE_VARIABLE_ModuleInfo_68_68, HeadVars_18, ArgModes_19, &OutputVars_29);
  transform_hlds__ssdebug__rename_outputs_9_p_0(OutputVars_29, OrigBodyGoal_16, &RenamedBodyGoal_30, &AssignOutputsGoal_31, &Renaming_32, STATE_VARIABLE_VarSet_69_69, &STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_VarTypes_70_70, &STATE_VARIABLE_VarTypes_75_75);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_59_59, &ProcDetism_33);
  parse_tree__prog_data__determinism_components_3_p_0(ProcDetism_33, &CanFail_34, &_Solns_35);
  switch (CanFail_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RenamedOutputVars_36;

        mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), OutputVars_29, Renaming_32, &RenamedOutputVars_36);
        transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(RenamedOutputVars_36, RenamedBodyGoal_30, &ScopedRenamedBodyGoal_37);
      }
      break;
    case (MR_Integer) 1:
      ScopedRenamedBodyGoal_37 = RenamedBodyGoal_30;
      break;
  }
  hlds__goal_util__update_instmap_3_p_0(OrigBodyGoal_16, InitInstMap_22, &FinalInstMap_38);
  transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, FinalInstMap_38, HeadVars_18, Renaming_32, &ExitArgListVar_39, &ExitArgListGoals_40, STATE_VARIABLE_ModuleInfo_68_68, &STATE_VARIABLE_ModuleInfo_77_77, STATE_VARIABLE_ProcInfo_59_59, &STATE_VARIABLE_ProcInfo_78_78, STATE_VARIABLE_PredInfo_60_60, &STATE_VARIABLE_PredInfo_79_79, STATE_VARIABLE_VarSet_74_74, &STATE_VARIABLE_VarSet_80_80, STATE_VARIABLE_VarTypes_75_75, &STATE_VARIABLE_VarTypes_81_81, BoundVarDescsAtCall_25, &_BoundVarDescsAtExit_41);
  transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &RetryVar_42, STATE_VARIABLE_VarSet_80_80, &STATE_VARIABLE_VarSet_83_83, STATE_VARIABLE_VarTypes_81_81, &STATE_VARIABLE_VarTypes_84_84);
  {
    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (RetryVar_42));
    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (ExitArgListVar_39));
    MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ProcIdVar_21));
    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_90));
  }
  transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", Var_86, &HandleEventExitGoal_43, STATE_VARIABLE_ModuleInfo_77_77, &STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_VarSet_83_83, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_VarTypes_84_84, &STATE_VARIABLE_VarTypes_89_89);
  transform_hlds__ssdebug__make_recursive_call_6_p_0(STATE_VARIABLE_PredInfo_79_79, STATE_VARIABLE_ModuleInfo_87_87, PredId_9, ProcId_10, FullHeadVars_17, &RecursiveGoal_44);
  transform_hlds__ssdebug__make_switch_goal_4_p_0(RetryVar_42, RecursiveGoal_44, AssignOutputsGoal_31, &SwitchGoal_45);
  {
    Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (ConstructLevelGoal_26));
    MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (HandleEventCallGoal_28));
    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (ScopedRenamedBodyGoal_37));
    MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (HandleEventExitGoal_43));
    MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (SwitchGoal_45));
    MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
    MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ExitArgListGoals_40));
    MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_104));
  }
  {
    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_98));
  }
  {
    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (CallArgListGoals_24));
    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ProcIdGoals_20));
    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
  }
  BodyGoals_46 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_93);
  transform_hlds__ssdebug__commit_goal_changes_10_p_0(BodyGoals_46, PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_79_79, STATE_VARIABLE_ProcInfo_78_78, STATE_VARIABLE_ProcInfo_48, STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_ModuleInfo_50, STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_VarTypes_89_89);
}

static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_18_p_0(
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
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_VarTypes_0_15,
  MR_Word * STATE_VARIABLE_VarTypes_16,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_17,
  MR_Word * STATE_VARIABLE_BoundVarDescs_18)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Goal_23;
    MR_Word ListTypeSymName_30;
    MR_Word ListTypeCtor_31;
    MR_Word ConsId_32;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;

    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "EmptyVarList", OutVar_5, STATE_VARIABLE_VarSet_0_13, STATE_VARIABLE_VarSet_14);
    Var_48 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*OutVar_5, Var_48, STATE_VARIABLE_VarTypes_0_15, STATE_VARIABLE_VarTypes_16);
    Var_50 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    {
      ListTypeSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ListTypeSymName_30, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), ListTypeSymName_30, 1) = ((MR_Box) ((MR_String) "list"));
    }
    {
      ListTypeCtor_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ListTypeCtor_31, 0) = ((MR_Box) (ListTypeSymName_30));
      MR_hl_field(MR_mktag(0), ListTypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    Var_54 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_String) "[]"));
    }
    {
      ConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_32, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(3), ConsId_32, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsId_32, 3) = ((MR_Box) (ListTypeCtor_31));
    }
    hlds__make_goal__construct_functor_4_p_0(*OutVar_5, ConsId_32, (MR_Word) ((MR_Unsigned) 0U), &Goal_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_BoundVarDescs_18 = STATE_VARIABLE_BoundVarDescs_0_17;
    *STATE_VARIABLE_PredInfo_12 = STATE_VARIABLE_PredInfo_0_11;
    *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_0_9;
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
  }
  else
  {
    MR_Word ProgVar_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ProgVars_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer Pos_71 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
    MR_Word OutVar0_72;
    MR_Word Goals0_73;
    MR_Word ProgVarType_74;
    MR_Word STATE_VARIABLE_ModuleInfo_95_95;
    MR_Word STATE_VARIABLE_ProcInfo_96_96;
    MR_Word STATE_VARIABLE_PredInfo_97_97;
    MR_Word STATE_VARIABLE_VarSet_98_98;
    MR_Word STATE_VARIABLE_VarTypes_99_99;
    MR_Word STATE_VARIABLE_BoundVarDescs_100_100;

    transform_hlds__ssdebug__make_arg_list_18_p_0(Pos_71, HeadVar__2_2, ProgVars_61, HeadVar__4_4, &OutVar0_72, &Goals0_73, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_ProcInfo_0_9, &STATE_VARIABLE_ProcInfo_96_96, STATE_VARIABLE_PredInfo_0_11, &STATE_VARIABLE_PredInfo_97_97, STATE_VARIABLE_VarSet_0_13, &STATE_VARIABLE_VarSet_98_98, STATE_VARIABLE_VarTypes_0_15, &STATE_VARIABLE_VarTypes_99_99, STATE_VARIABLE_BoundVarDescs_0_17, &STATE_VARIABLE_BoundVarDescs_100_100);
    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_99_99, ProgVar_60, &ProgVarType_74);
    {
      MR_Word Var_129;

      Var_129 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ProgVarType_74, Var_129);
    }
    if (!(succeeded))
    {
      MR_Word Var_130;

      Var_130 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ProgVarType_74, Var_130);
    }
    if (succeeded)
    {
      *OutVar_5 = OutVar0_72;
      *HeadVar__6_6 = Goals0_73;
      *STATE_VARIABLE_BoundVarDescs_18 = STATE_VARIABLE_BoundVarDescs_100_100;
      *STATE_VARIABLE_VarTypes_16 = STATE_VARIABLE_VarTypes_99_99;
      *STATE_VARIABLE_VarSet_14 = STATE_VARIABLE_VarSet_98_98;
      *STATE_VARIABLE_PredInfo_12 = STATE_VARIABLE_PredInfo_97_97;
      *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_96_96;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_95_95;
    }
    else
    {
      MR_Word ValueGoals_76;
      MR_Word VarDesc_77;
      MR_Word ListTypeSymName_78;
      MR_Word ListTypeCtor_79;
      MR_Word ConsId_80;
      MR_Word Goal_81;
      MR_Word STATE_VARIABLE_VarSet_104_104;
      MR_Word STATE_VARIABLE_VarTypes_105_105;
      MR_Word Var_109;
      MR_Word Var_111;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word ExistingVarDesc_75;
      MR_Box conv0_ExistingVarDesc_75;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), STATE_VARIABLE_BoundVarDescs_100_100, ((MR_Box) (ProgVar_60)), &conv0_ExistingVarDesc_75);
      if (succeeded)
      {
        ExistingVarDesc_75 = ((MR_Word) (conv0_ExistingVarDesc_75));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ValueGoals_76 = (MR_Word) ((MR_Unsigned) 0U);
        VarDesc_77 = ExistingVarDesc_75;
        *STATE_VARIABLE_BoundVarDescs_18 = STATE_VARIABLE_BoundVarDescs_100_100;
        STATE_VARIABLE_VarTypes_105_105 = STATE_VARIABLE_VarTypes_99_99;
        STATE_VARIABLE_VarSet_104_104 = STATE_VARIABLE_VarSet_98_98;
        *STATE_VARIABLE_PredInfo_12 = STATE_VARIABLE_PredInfo_97_97;
        *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_96_96;
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_95_95;
      }
      else
        transform_hlds__ssdebug__make_var_value_18_p_0(HeadVar__2_2, ProgVar_60, HeadVar__4_4, &VarDesc_77, HeadVar__1_1, &ValueGoals_76, STATE_VARIABLE_ModuleInfo_95_95, STATE_VARIABLE_ModuleInfo_8, STATE_VARIABLE_ProcInfo_96_96, STATE_VARIABLE_ProcInfo_10, STATE_VARIABLE_PredInfo_97_97, STATE_VARIABLE_PredInfo_12, STATE_VARIABLE_VarSet_98_98, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_VarTypes_99_99, &STATE_VARIABLE_VarTypes_105_105, STATE_VARIABLE_BoundVarDescs_100_100, STATE_VARIABLE_BoundVarDescs_18);
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "FullListVar", OutVar_5, STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_VarSet_14);
      Var_109 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
      hlds__vartypes__add_var_type_4_p_0(*OutVar_5, Var_109, STATE_VARIABLE_VarTypes_105_105, STATE_VARIABLE_VarTypes_16);
      Var_111 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
      {
        ListTypeSymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ListTypeSymName_78, 0) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(1), ListTypeSymName_78, 1) = ((MR_Box) ((MR_String) "list"));
      }
      {
        ListTypeCtor_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ListTypeCtor_79, 0) = ((MR_Box) (ListTypeSymName_78));
        MR_hl_field(MR_mktag(0), ListTypeCtor_79, 1) = ((MR_Box) ((MR_Integer) 1));
      }
      {
        ConsId_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_80, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_1[2])));
        MR_hl_field(MR_mktag(3), ConsId_80, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_80, 3) = ((MR_Box) (ListTypeCtor_79));
      }
      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (OutVar0_72));
        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (VarDesc_77));
        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
      }
      hlds__make_goal__construct_functor_4_p_0(*OutVar_5, ConsId_80, Var_119, &Goal_81);
      {
        Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Goal_81));
        MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ValueGoals_76, Var_123);
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_73, Var_122);
    }
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0(
  MR_Word InstMap_19,
  MR_Word VarToInspect_20,
  MR_Word Renaming_21,
  MR_Word * VarDesc_22,
  MR_Integer VarPos_23,
  MR_Word * Goals_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * STATE_VARIABLE_ProcInfo_50,
  MR_Word STATE_VARIABLE_PredInfo_0_51,
  MR_Word * STATE_VARIABLE_PredInfo_52,
  MR_Word STATE_VARIABLE_VarSet_0_53,
  MR_Word * STATE_VARIABLE_VarSet_54,
  MR_Word STATE_VARIABLE_VarTypes_0_55,
  MR_Word * STATE_VARIABLE_VarTypes_56,
  MR_Word STATE_VARIABLE_BoundVarDescs_0_57,
  MR_Word * STATE_VARIABLE_BoundVarDescs_58)
{
  MR_bool succeeded;
  MR_Word SSDBModule_31;
  MR_Word VarValueTypeCtor_32;
  MR_Word VarValueType_33;
  MR_String VarName_34;
  MR_Word ConstructVarName_35;
  MR_Word VarNameVar_36;
  MR_Word ConstructVarPos_37;
  MR_Word VarPosVar_38;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_VarSet_64_64;
  MR_Word STATE_VARIABLE_VarTypes_65_65;
  MR_Word STATE_VARIABLE_VarSet_68_68;
  MR_Word STATE_VARIABLE_VarTypes_69_69;
  MR_Word STATE_VARIABLE_VarSet_72_72;

  SSDBModule_31 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SSDBModule_31));
    MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_String) "var_value"));
  }
  {
    VarValueTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarValueTypeCtor_32, 0) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(0), VarValueTypeCtor_32, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(VarValueTypeCtor_32, (MR_Word) ((MR_Unsigned) 0U), &VarValueType_33);
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_53, VarToInspect_20, &VarName_34);
  hlds__make_goal__make_string_const_construction_alloc_8_p_0(VarName_34, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_3[6])), &ConstructVarName_35, &VarNameVar_36, STATE_VARIABLE_VarSet_0_53, &STATE_VARIABLE_VarSet_64_64, STATE_VARIABLE_VarTypes_0_55, &STATE_VARIABLE_VarTypes_65_65);
  hlds__make_goal__make_int_const_construction_alloc_8_p_0(VarPos_23, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_3[7])), &ConstructVarPos_37, &VarPosVar_38, STATE_VARIABLE_VarSet_64_64, &STATE_VARIABLE_VarSet_68_68, STATE_VARIABLE_VarTypes_65_65, &STATE_VARIABLE_VarTypes_69_69);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "VarDesc", VarDesc_22, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_72_72);
  succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_47, InstMap_19, VarToInspect_20);
  if (succeeded)
  {
    MR_Word Context_39;
    MR_Word MerType_40;
    MR_Word TypeInfoVar_41;
    MR_Word TypeInfoGoals0_42;
    MR_Word ConsId_43;
    MR_Word ConstructVarGoal_44;
    MR_Word TypeInfoGoals_46;
    MR_Word STATE_VARIABLE_ProcInfo_73_73;
    MR_Word STATE_VARIABLE_ProcInfo_74_74;
    MR_Word STATE_VARIABLE_VarTypes_79_79;
    MR_Word Var_80;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;

    hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_72_72, STATE_VARIABLE_ProcInfo_0_49, &STATE_VARIABLE_ProcInfo_73_73);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_69_69, STATE_VARIABLE_ProcInfo_73_73, &STATE_VARIABLE_ProcInfo_74_74);
    mercury__term__context_init_1_p_0(&Context_39);
    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_69_69, VarToInspect_20, &MerType_40);
    check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_raw_10_p_0(MerType_40, Context_39, &TypeInfoVar_41, &TypeInfoGoals0_42, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_PredInfo_0_51, STATE_VARIABLE_PredInfo_52, STATE_VARIABLE_ProcInfo_74_74, STATE_VARIABLE_ProcInfo_50);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(*STATE_VARIABLE_ProcInfo_50, STATE_VARIABLE_VarSet_54);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*STATE_VARIABLE_ProcInfo_50, &STATE_VARIABLE_VarTypes_79_79);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (SSDBModule_31));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_String) "bound_head_var"));
    }
    {
      ConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_43, 1) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(3), ConsId_43, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ConsId_43, 3) = ((MR_Box) (VarValueTypeCtor_32));
    }
    hlds__vartypes__add_var_type_4_p_0(*VarDesc_22, VarValueType_33, STATE_VARIABLE_VarTypes_79_79, STATE_VARIABLE_VarTypes_56);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), Renaming_21);
    if (succeeded)
    {
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;

      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (VarToInspect_20));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (VarPosVar_38));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (VarNameVar_36));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (TypeInfoVar_41));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
      }
      hlds__make_goal__construct_functor_4_p_0(*VarDesc_22, ConsId_43, Var_84, &ConstructVarGoal_44);
    }
    else
    {
      MR_Word RenamedVar_45;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Box conv0_RenamedVar_45;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), Renaming_21, ((MR_Box) (VarToInspect_20)), &conv0_RenamedVar_45);
      RenamedVar_45 = ((MR_Word) (conv0_RenamedVar_45));
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (RenamedVar_45));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (VarPosVar_38));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (VarNameVar_36));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (TypeInfoVar_41));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
      }
      hlds__make_goal__construct_functor_4_p_0(*VarDesc_22, ConsId_43, Var_89, &ConstructVarGoal_44);
    }
    hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, Renaming_21, TypeInfoGoals0_42, &TypeInfoGoals_46);
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (ConstructVarPos_37));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (TypeInfoGoals_46));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ConstructVarName_35));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (ConstructVarGoal_44));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_95, Var_97);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), ((MR_Box) (VarToInspect_20)), ((MR_Box) (*VarDesc_22)), STATE_VARIABLE_BoundVarDescs_0_57, STATE_VARIABLE_BoundVarDescs_58);
  }
  else
  {
    MR_Word Var_100;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word ConsId_110;
    MR_Word ConstructVarGoal_111;

    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (SSDBModule_31));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_String) "unbound_head_var"));
    }
    {
      ConsId_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_110, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_110, 1) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(3), ConsId_110, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_110, 3) = ((MR_Box) (VarValueTypeCtor_32));
    }
    hlds__vartypes__add_var_type_4_p_0(*VarDesc_22, VarValueType_33, STATE_VARIABLE_VarTypes_69_69, STATE_VARIABLE_VarTypes_56);
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (VarPosVar_38));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (VarNameVar_36));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
    }
    hlds__make_goal__construct_functor_4_p_0(*VarDesc_22, ConsId_110, Var_104, &ConstructVarGoal_111);
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (ConstructVarGoal_111));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (ConstructVarPos_37));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConstructVarName_35));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_107));
    }
    *STATE_VARIABLE_BoundVarDescs_58 = STATE_VARIABLE_BoundVarDescs_0_57;
    *STATE_VARIABLE_VarSet_54 = STATE_VARIABLE_VarSet_72_72;
    *STATE_VARIABLE_PredInfo_52 = STATE_VARIABLE_PredInfo_0_51;
    *STATE_VARIABLE_ProcInfo_50 = STATE_VARIABLE_ProcInfo_0_49;
    *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
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
    Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (SSDBModule_3));
    MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) ((MR_String) "var_value"));
  }
  {
    VarValueTypeCtor_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarValueTypeCtor_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(MR_mktag(0), VarValueTypeCtor_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(VarValueTypeCtor_4, (MR_Word) ((MR_Unsigned) 0U), &VarValueType_5);
  Var_12 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_String) "list"));
  }
  {
    ListTypeCtor_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ListTypeCtor_6, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), ListTypeCtor_6, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (VarValueType_5));
    MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_type__construct_type_3_p_0(ListTypeCtor_6, Var_15, &ListVarValueType_2);
  return ListVarValueType_2;
}

static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
  MR_Word SSTraceLevel_8,
  MR_Word * Goal_9,
  MR_Word * LevelVar_10,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15,
  MR_Word STATE_VARIABLE_VarTypes_0_16,
  MR_Word * STATE_VARIABLE_VarTypes_17)
{
  MR_Word ConsId_13;
  MR_Word Var_18;
  MR_Word Var_45;
  MR_Word Var_48;

  switch (SSTraceLevel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word DataCtor_26;
        MR_Word Var_27;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_32;

        Var_27 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          DataCtor_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DataCtor_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), DataCtor_26, 1) = ((MR_Box) ((MR_String) "deep"));
        }
        Var_32 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
        }
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ConsId_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsId_13, 1) = ((MR_Box) (DataCtor_26));
          MR_hl_field(MR_mktag(3), ConsId_13, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ConsId_13, 3) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DataCtor_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_43;

        Var_38 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          DataCtor_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DataCtor_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), DataCtor_37, 1) = ((MR_Box) ((MR_String) "shallow"));
        }
        Var_43 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
        }
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ConsId_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsId_13, 1) = ((MR_Box) (DataCtor_37));
          MR_hl_field(MR_mktag(3), ConsId_13, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ConsId_13, 3) = ((MR_Box) (Var_40));
        }
      }
      break;
  }
  Var_48 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
  }
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_45));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Var_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_goal__make_const_construction_alloc_9_p_0(ConsId_13, Var_18, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_3[4])), Goal_9, LevelVar_10, STATE_VARIABLE_VarSet_0_14, STATE_VARIABLE_VarSet_15, STATE_VARIABLE_VarTypes_0_16, STATE_VARIABLE_VarTypes_17);
}

static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word * Goals_11,
  MR_Word * ProcIdVar_12,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34)
{
  MR_bool succeeded;
  MR_Word Origin_15;
  MR_Word OrigPredInfo_18;
  MR_Word SymModuleName_19;
  MR_String ModuleName_20;
  MR_String PredName_21;
  MR_Word ConstructModuleName_22;
  MR_Word ModuleNameVar_23;
  MR_Word ConstructPredName_24;
  MR_Word PredNameVar_25;
  MR_Word SSDBModule_26;
  MR_Word TypeCtor_27;
  MR_Word ConsId_28;
  MR_Word ProcIdType_29;
  MR_Word ConstructProcIdGoal_30;
  MR_Word STATE_VARIABLE_VarSet_37_37;
  MR_Word STATE_VARIABLE_VarTypes_38_38;
  MR_Word STATE_VARIABLE_VarSet_41_41;
  MR_Word STATE_VARIABLE_VarTypes_42_42;
  MR_Word Var_44;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word OrigPredId_17;
  MR_Word Var_35;

  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_15);
  succeeded = ((((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_15, (MR_Integer) 1))));
    OrigPredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_15, (MR_Integer) 3))));
    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 20U));
  }
  if (succeeded)
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, OrigPredId_17, &OrigPredInfo_18);
  else
    OrigPredInfo_18 = PredInfo_10;
  SymModuleName_19 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_18);
  ModuleName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymModuleName_19);
  PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(OrigPredInfo_18);
  hlds__make_goal__make_string_const_construction_alloc_8_p_0(ModuleName_20, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_3[2])), &ConstructModuleName_22, &ModuleNameVar_23, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarTypes_0_33, &STATE_VARIABLE_VarTypes_38_38);
  hlds__make_goal__make_string_const_construction_alloc_8_p_0(PredName_21, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_3[3])), &ConstructPredName_24, &PredNameVar_25, STATE_VARIABLE_VarSet_37_37, &STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_VarTypes_38_38, &STATE_VARIABLE_VarTypes_42_42);
  SSDBModule_26 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (SSDBModule_26));
    MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_String) "ssdb_proc_id"));
  }
  {
    TypeCtor_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_27, 0) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(0), TypeCtor_27, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "ProcId", ProcIdVar_12, STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_VarSet_32);
  {
    ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConsId_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), ConsId_28, 1) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(3), ConsId_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(3), ConsId_28, 3) = ((MR_Box) (TypeCtor_27));
  }
  parse_tree__prog_type__construct_type_3_p_0(TypeCtor_27, (MR_Word) ((MR_Unsigned) 0U), &ProcIdType_29);
  hlds__vartypes__add_var_type_4_p_0(*ProcIdVar_12, ProcIdType_29, STATE_VARIABLE_VarTypes_42_42, STATE_VARIABLE_VarTypes_34);
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (PredNameVar_25));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ModuleNameVar_23));
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
  }
  hlds__make_goal__construct_functor_4_p_0(*ProcIdVar_12, ConsId_28, Var_54, &ConstructProcIdGoal_30);
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ConstructProcIdGoal_30));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ConstructPredName_24));
    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Goals_11 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConstructModuleName_22));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_57));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_9_p_0(
  MR_String HandleTypeString_10,
  MR_Word ArgVars_11,
  MR_Word * HandleEventGoal_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24)
{
  MR_Word SSDBModule_16;
  MR_Word Context_18;
  MR_Word Var_27;

  SSDBModule_16 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  Context_18 = mercury__term__context_init_0_f_0();
  Var_27 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(STATE_VARIABLE_ModuleInfo_0_19, (MR_Integer) 0, SSDBModule_16, HandleTypeString_10, (MR_Word) ((MR_Unsigned) 0U), ArgVars_11, Var_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_18, HandleEventGoal_12);
  *STATE_VARIABLE_VarTypes_24 = STATE_VARIABLE_VarTypes_0_23;
  *STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
  *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
}

static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_10_p_0(
  MR_Word ConjGoals_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word STATE_VARIABLE_PredInfo_0_28,
  MR_Word STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * STATE_VARIABLE_ProcInfo_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word VarSet_17,
  MR_Word VarTypes_18)
{
  MR_Word ConjDetism_19;
  MR_Word ConjGoalInfo_20;
  MR_Word Conj_21;
  MR_Word OrigGoalInfo_23;
  MR_Word ProcDetism_24;
  MR_Word ScopeGoalInfo_25;
  MR_Word Purity_26;
  MR_Word Goal_27;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_ProcInfo_38_38;
  MR_Word STATE_VARIABLE_ProcInfo_39_39;
  MR_Word STATE_VARIABLE_ProcInfo_40_40;
  MR_Word STATE_VARIABLE_ProcInfo_42_42;
  MR_Word STATE_VARIABLE_ModuleInfo_45_45;
  MR_Word STATE_VARIABLE_PredInfo_46_46;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_PredInfo_48_48;
  MR_Word GoalInfo0_52;
  MR_Word GoalInfo1_53;

  hlds__hlds_goal__goal_list_determinism_2_p_0(ConjGoals_11, &ConjDetism_19);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_52);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_52, &GoalInfo1_53);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(ConjDetism_19, GoalInfo1_53, &ConjGoalInfo_20);
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_33, 2) = ((MR_Box) (ConjGoals_11));
  }
  {
    Conj_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Conj_21, 0) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), Conj_21, 1) = ((MR_Box) (ConjGoalInfo_20));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &Var_35);
  OrigGoalInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &ProcDetism_24);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(ProcDetism_24, OrigGoalInfo_23, &ScopeGoalInfo_25);
  Purity_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(OrigGoalInfo_23);
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_37, 1) = (MR_Box) ((MR_Unsigned) (Purity_26));
  }
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Conj_21));
  }
  {
    Goal_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal_27, 0) = ((MR_Box) (Var_36));
    MR_hl_field(MR_mktag(0), Goal_27, 1) = ((MR_Box) (ScopeGoalInfo_25));
  }
  hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_17, STATE_VARIABLE_ProcInfo_0_29, &STATE_VARIABLE_ProcInfo_38_38);
  hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_18, STATE_VARIABLE_ProcInfo_38_38, &STATE_VARIABLE_ProcInfo_39_39);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_27, STATE_VARIABLE_ProcInfo_39_39, &STATE_VARIABLE_ProcInfo_40_40);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_40_40, &STATE_VARIABLE_ProcInfo_42_42);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_42_42, STATE_VARIABLE_ProcInfo_30, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_45_45);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_13, *STATE_VARIABLE_ProcInfo_30, STATE_VARIABLE_PredInfo_0_28, &STATE_VARIABLE_PredInfo_46_46);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ProcId_13));
  }
  check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_45_45, Var_47, STATE_VARIABLE_PredInfo_46_46, &STATE_VARIABLE_PredInfo_48_48);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_12, STATE_VARIABLE_PredInfo_48_48, STATE_VARIABLE_ModuleInfo_45_45, STATE_VARIABLE_ModuleInfo_32);
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
  MR_Word Var_30;
  MR_Word Var_36;
  MR_Word Var_37;

  SSDBModule_9 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    RetryTypeSymName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), RetryTypeSymName_10, 0) = ((MR_Box) (SSDBModule_9));
    MR_hl_field(MR_mktag(1), RetryTypeSymName_10, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
  }
  {
    RetryTypeCtor_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), RetryTypeCtor_11, 0) = ((MR_Box) (RetryTypeSymName_10));
    MR_hl_field(MR_mktag(0), RetryTypeCtor_11, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SSDBModule_9));
    MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_String) "do_retry"));
  }
  {
    ConsIdDoRetry_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConsIdDoRetry_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), ConsIdDoRetry_12, 1) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(3), ConsIdDoRetry_12, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), ConsIdDoRetry_12, 3) = ((MR_Box) (RetryTypeCtor_11));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (SSDBModule_9));
    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_String) "do_not_retry"));
  }
  {
    ConsIdDoNotRetry_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConsIdDoNotRetry_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), ConsIdDoNotRetry_13, 1) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(3), ConsIdDoNotRetry_13, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), ConsIdDoNotRetry_13, 3) = ((MR_Box) (RetryTypeCtor_11));
  }
  {
    CaseDoRetry_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CaseDoRetry_14, 0) = ((MR_Box) (ConsIdDoRetry_12));
    MR_hl_field(MR_mktag(0), CaseDoRetry_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), CaseDoRetry_14, 2) = ((MR_Box) (DoRetryGoal_6));
  }
  {
    CaseDoNotRetry_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CaseDoNotRetry_15, 0) = ((MR_Box) (ConsIdDoNotRetry_13));
    MR_hl_field(MR_mktag(0), CaseDoNotRetry_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), CaseDoNotRetry_15, 2) = ((MR_Box) (DoNotRetryGoal_7));
  }
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CaseDoNotRetry_15));
    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (CaseDoRetry_14));
    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    SwitchGoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), SwitchGoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), SwitchGoalExpr_16, 1) = ((MR_Box) (SwitchVar_5));
    MR_hl_field(MR_mktag(3), SwitchGoalExpr_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), SwitchGoalExpr_16, 3) = ((MR_Box) (Var_36));
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
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SwitchGoalExpr_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_24));
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
    SymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SymName_15, 0) = ((MR_Box) (ModuleName_14));
    MR_hl_field(MR_mktag(1), SymName_15, 1) = ((MR_Box) (PredName_13));
  }
  BuiltIn_16 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_8, PredId_9, PredId_9, ProcId_10);
  {
    GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), GoalExpr_17, 0) = ((MR_Box) (PredId_9));
    MR_hl_field(MR_mktag(2), GoalExpr_17, 1) = ((MR_Box) (ProcId_10));
    MR_hl_field(MR_mktag(2), GoalExpr_17, 2) = ((MR_Box) (HeadVars_11));
    MR_hl_field(MR_mktag(2), GoalExpr_17, 3) = (MR_Box) ((MR_Unsigned) (BuiltIn_16));
    MR_hl_field(MR_mktag(2), GoalExpr_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), GoalExpr_17, 5) = ((MR_Box) (SymName_15));
  }
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_7, ProcId_10, &ProcInfo_18);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_18, &BodyGoal0_19);
  GoalInfoHG0_20 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(BodyGoal0_19);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_18, &Determinism_21);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_21, GoalInfoHG0_20, &GoalInfoHG_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_17));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfoHG_22));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__make_retry_var_6_p_0(
  MR_String VarName_7,
  MR_Word * RetryVar_8,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15,
  MR_Word STATE_VARIABLE_VarTypes_0_16,
  MR_Word * STATE_VARIABLE_VarTypes_17)
{
  MR_Word SSDBModule_11;
  MR_Word TypeCtor_12;
  MR_Word RetryType_13;
  MR_Word Var_18;

  SSDBModule_11 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (SSDBModule_11));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
  }
  {
    TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_12, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), TypeCtor_12, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(TypeCtor_12, (MR_Word) ((MR_Unsigned) 0U), &RetryType_13);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_7, RetryVar_8, STATE_VARIABLE_VarSet_0_14, STATE_VARIABLE_VarSet_15);
  hlds__vartypes__add_var_type_4_p_0(*RetryVar_8, RetryType_13, STATE_VARIABLE_VarTypes_0_16, STATE_VARIABLE_VarTypes_17);
}

static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
  MR_Word OutputVars_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
  MR_Word Reason_9;
  MR_Word Var_11;

  {
    Reason_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Reason_9, 0) = ((MR_Box) (OutputVars_4));
    MR_hl_field(MR_mktag(2), Reason_9, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (Reason_9));
    MR_hl_field(MR_mktag(3), Var_11, 2) = ((MR_Box) (Goal0_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_9_p_0(
  MR_Word OutputVars_10,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word * UnifyGoal_12,
  MR_Word * Renaming_13,
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25,
  MR_Word STATE_VARIABLE_VarTypes_0_26,
  MR_Word * STATE_VARIABLE_VarTypes_27)
{
  MR_Word GoalInfo0_16;
  MR_Word InstMapDelta_17;
  MR_Word UnifyGoals_18;
  MR_Word UnifyGoalInfo0_20;
  MR_Word UnifyGoalInfo_21;
  MR_Word _NewVars_19;

  GoalInfo0_16 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(STATE_VARIABLE_Goal_0_22);
  InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_16);
  hlds__goal_util__create_renaming_9_p_0(OutputVars_10, InstMapDelta_17, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_VarTypes_0_26, STATE_VARIABLE_VarTypes_27, &UnifyGoals_18, &_NewVars_19, Renaming_13);
  hlds__hlds_goal__goal_info_init_1_p_0(&UnifyGoalInfo0_20);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, UnifyGoalInfo0_20, &UnifyGoalInfo_21);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(UnifyGoals_18, UnifyGoalInfo_21, UnifyGoal_12);
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*Renaming_13, STATE_VARIABLE_Goal_0_22, STATE_VARIABLE_Goal_23);
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

  succeeded = transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1057__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_14);
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
    MR_hl_field(MR_mktag(0), F_9, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), F_9, 1) = ((MR_Box) (transform_hlds__ssdebug__get_output_args_4_p_0_1));
    MR_hl_field(MR_mktag(0), F_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), F_9, 3) = ((MR_Box) (ModuleInfo_5));
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
  MR_Integer PredArity_11;
  MR_Word FullArgModes_12;
  MR_Integer NumHeadVars_13;
  MR_Integer NumToDrop_14;

  PredArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_6);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_7, FullHeadVars_8);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_7, &FullArgModes_12);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), *FullHeadVars_8, &NumHeadVars_13);
  NumToDrop_14 = (MR_Integer) ((MR_Unsigned) NumHeadVars_13 - (MR_Unsigned) PredArity_11);
  mercury__list__det_drop_3_p_0((MR_Word) (&transform_hlds__ssdebug_scalar_common_1[1]), NumToDrop_14, *FullHeadVars_8, HeadVars_9);
  mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumToDrop_14, FullArgModes_12, ArgModes_10);
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
    CallExpr_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), CallExpr_14, 0) = ((MR_Box) (PredId_7));
    MR_hl_field(MR_mktag(2), CallExpr_14, 1) = ((MR_Box) (ProcId_8));
    MR_hl_field(MR_mktag(2), CallExpr_14, 2) = ((MR_Box) (Args_12));
    MR_hl_field(MR_mktag(2), CallExpr_14, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(2), CallExpr_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), CallExpr_14, 5) = ((MR_Box) (SymName_13));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &Var_27);
  GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &Detism_17);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_17, GoalInfo0_16, &GoalInfo_18);
  {
    Goal_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal_19, 0) = ((MR_Box) (CallExpr_14));
    MR_hl_field(MR_mktag(0), Goal_19, 1) = ((MR_Box) (GoalInfo_18));
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
  MR_Word STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * STATE_VARIABLE_ProcInfo_19,
  MR_Word STATE_VARIABLE_ProxyMap_0_20,
  MR_Word * STATE_VARIABLE_ProxyMap_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_Word MainConsId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 0))));
  MR_Word OtherConsIds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 1))));
  MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 2))));
  MR_Word Goal_17;

  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Goal0_16, &Goal_17, STATE_VARIABLE_ProcInfo_0_18, STATE_VARIABLE_ProcInfo_19, STATE_VARIABLE_ProxyMap_0_20, STATE_VARIABLE_ProxyMap_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_14));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_15));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_17));
  }
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ProxyMap_0_15,
  MR_Word * STATE_VARIABLE_ProxyMap_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_Word PredInfo_12;
  MR_Word Goal0_13;
  MR_Word Goal_14;
  MR_Word STATE_VARIABLE_ProcInfo_19_19;
  MR_Word STATE_VARIABLE_ProcInfo_20_20;
  MR_Word STATE_VARIABLE_ModuleInfo_22_22;
  MR_Word STATE_VARIABLE_ProcInfo_23_23;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_17, PredId_7, ProcId_8, &PredInfo_12, &STATE_VARIABLE_ProcInfo_19_19);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_19_19, &Goal0_13);
  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Goal0_13, &Goal_14, STATE_VARIABLE_ProcInfo_19_19, &STATE_VARIABLE_ProcInfo_20_20, STATE_VARIABLE_ProxyMap_0_15, STATE_VARIABLE_ProxyMap_16, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_22_22);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_ProcInfo_20_20, &STATE_VARIABLE_ProcInfo_23_23);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_7, ProcId_8, PredInfo_12, STATE_VARIABLE_ProcInfo_23_23, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_18);
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
  MR_Word conv16_STATE_VARIABLE_ProcInfo_19;
  MR_Word conv15_STATE_VARIABLE_ProxyMap_21;
  MR_Word conv14_STATE_VARIABLE_ModuleInfo_23;

  transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(((MR_Word) (wrapper_arg_1)), &conv17_Case_10, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_ProcInfo_19, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_ProxyMap_21, ((MR_Word) (wrapper_arg_7)), &conv14_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_2 = ((MR_Box) (conv17_Case_10));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_ProcInfo_19));
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
  MR_Word conv9_STATE_VARIABLE_ProcInfo_79;
  MR_Word conv8_STATE_VARIABLE_ProxyMap_81;
  MR_Word conv7_STATE_VARIABLE_ModuleInfo_83;

  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv10_STATE_VARIABLE_Goal_77, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_ProcInfo_79, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_ProxyMap_81, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_ModuleInfo_83);
  *wrapper_arg_2 = ((MR_Box) (conv10_STATE_VARIABLE_Goal_77));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_ProcInfo_79));
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
  MR_Word conv2_STATE_VARIABLE_ProcInfo_79;
  MR_Word conv1_STATE_VARIABLE_ProxyMap_81;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_83;

  transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Goal_77, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ProcInfo_79, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ProxyMap_81, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_ModuleInfo_83);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Goal_77));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ProcInfo_79));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ProxyMap_81));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_83));
}

static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(
  MR_Word STATE_VARIABLE_Goal_0_76,
  MR_Word * STATE_VARIABLE_Goal_77,
  MR_Word STATE_VARIABLE_ProcInfo_0_78,
  MR_Word * STATE_VARIABLE_ProcInfo_79,
  MR_Word STATE_VARIABLE_ProxyMap_0_80,
  MR_Word * STATE_VARIABLE_ProxyMap_81,
  MR_Word STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * STATE_VARIABLE_ModuleInfo_83)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_76, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_76, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_65 = (MR_Word) ((MR_Word) (GoalExpr0_13));
        MR_Word SubGoal_66;
        MR_Word GoalExpr_151;

        transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(SubGoal0_65, &SubGoal_66, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
        GoalExpr_151 = (MR_Word) ((MR_Word) (SubGoal_66));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_77 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_151));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 3))));
        MR_Word ShroudedPredProcId_27;
        MR_Word ConsId0_21;

        succeeded = ((MR_tag((MR_Word) Unification0_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          ConsId0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_18, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) ConsId0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
            ShroudedPredProcId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_21, (MR_Integer) 1))));
        }
        if (succeeded)
        {
          MR_Word PredProcId_28;
          MR_Word PredId_29;
          MR_Integer ProcId_30;
          MR_Word MaybeNewPredId_31;

          PredProcId_28 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_27);
          PredId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_28, (MR_Integer) 0))));
          ProcId_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_28, (MR_Integer) 1))));
          transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(PredId_29, &MaybeNewPredId_31, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
          if ((MaybeNewPredId_31 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
          else
          {
            MR_Word NewPredId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNewPredId_31, (MR_Integer) 0))));
            MR_Word NewPredProcId_33;
            MR_Word NewShroundPredProcId_34;
            MR_Word ConsId_35;
            MR_Word Unification_36;
            MR_Word GoalExpr_37;
            MR_Word Var_156;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_164;
            MR_Word Var_165;
            MR_Word Var_167;

            {
              NewPredProcId_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewPredProcId_33, 0) = ((MR_Box) (NewPredId_32));
              MR_hl_field(MR_mktag(0), NewPredProcId_33, 1) = ((MR_Box) (ProcId_30));
            }
            NewShroundPredProcId_34 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(NewPredProcId_33);
            {
              ConsId_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_35, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), ConsId_35, 1) = ((MR_Box) (NewShroundPredProcId_34));
              MR_hl_field(MR_mktag(3), ConsId_35, 2) = NULL;
            }
            Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_18, (MR_Integer) 0))));
            Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_18, (MR_Integer) 2))));
            Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_18, (MR_Integer) 3))));
            Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_18, (MR_Integer) 4))));
            Var_161 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification0_18, (MR_Integer) 5))) & (MR_Integer) 1);
            Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_18, (MR_Integer) 6))));
            {
              Unification_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Unification_36, 0) = ((MR_Box) (Var_156));
              MR_hl_field(MR_mktag(0), Unification_36, 1) = ((MR_Box) (ConsId_35));
              MR_hl_field(MR_mktag(0), Unification_36, 2) = ((MR_Box) (Var_158));
              MR_hl_field(MR_mktag(0), Unification_36, 3) = ((MR_Box) (Var_159));
              MR_hl_field(MR_mktag(0), Unification_36, 4) = ((MR_Box) (Var_160));
              MR_hl_field(MR_mktag(0), Unification_36, 5) = (MR_Box) ((MR_Unsigned) (Var_161));
              MR_hl_field(MR_mktag(0), Unification_36, 6) = ((MR_Box) (Var_162));
            }
            Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 0))));
            Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 1))));
            Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 2))));
            Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 4))));
            {
              GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalExpr_37, 0) = ((MR_Box) (Var_163));
              MR_hl_field(MR_mktag(1), GoalExpr_37, 1) = ((MR_Box) (Var_164));
              MR_hl_field(MR_mktag(1), GoalExpr_37, 2) = ((MR_Box) (Var_165));
              MR_hl_field(MR_mktag(1), GoalExpr_37, 3) = ((MR_Box) (Unification_36));
              MR_hl_field(MR_mktag(1), GoalExpr_37, 4) = ((MR_Box) (Var_167));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_37));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
        }
        else
        {
          *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
          *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
        }
        *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_0_78;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Args_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 2))));
        MR_Word Builtin_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Context_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 4))));
        MR_Word PredId_141 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 0))));
        MR_Integer ProcId_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 1))));

        switch (Builtin_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
              *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_0_78;
              *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
              *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Goal_123_123;
              MR_Word MaybeNewPredId_135;

              transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(PredId_141, &MaybeNewPredId_135, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
              if ((MaybeNewPredId_135 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Goal_123_123 = STATE_VARIABLE_Goal_0_76;
              else
              {
                MR_Word NewPredInfo_42;
                MR_Word NewModuleName_43;
                MR_String NewPredName_44;
                MR_Word NewSymName_45;
                MR_Word NewPredId_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNewPredId_135, (MR_Integer) 0))));
                MR_Word GoalExpr_132;

                hlds__hlds_module__module_info_pred_info_3_p_0(*STATE_VARIABLE_ModuleInfo_83, NewPredId_131, &NewPredInfo_42);
                NewModuleName_43 = hlds__hlds_pred__pred_info_module_1_f_0(NewPredInfo_42);
                NewPredName_44 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo_42);
                {
                  NewSymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewSymName_45, 0) = ((MR_Box) (NewModuleName_43));
                  MR_hl_field(MR_mktag(1), NewSymName_45, 1) = ((MR_Box) (NewPredName_44));
                }
                {
                  GoalExpr_132 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), GoalExpr_132, 0) = ((MR_Box) (NewPredId_131));
                  MR_hl_field(MR_mktag(2), GoalExpr_132, 1) = ((MR_Box) (ProcId_142));
                  MR_hl_field(MR_mktag(2), GoalExpr_132, 2) = ((MR_Box) (Args_38));
                  MR_hl_field(MR_mktag(2), GoalExpr_132, 3) = (MR_Box) ((MR_Unsigned) (Builtin_39));
                  MR_hl_field(MR_mktag(2), GoalExpr_132, 4) = ((MR_Box) (Context_40));
                  MR_hl_field(MR_mktag(2), GoalExpr_132, 5) = ((MR_Box) (NewSymName_45));
                }
                {
                  STATE_VARIABLE_Goal_123_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_123_123, 0) = ((MR_Box) (GoalExpr_132));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_123_123, 1) = ((MR_Box) (GoalInfo0_14));
                }
              }
              transform_hlds__ssdebug__insert_context_update_call_5_p_0(*STATE_VARIABLE_ModuleInfo_83, STATE_VARIABLE_Goal_123_123, STATE_VARIABLE_Goal_77, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            transform_hlds__ssdebug__insert_context_update_call_5_p_0(STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_Goal_0_76, STATE_VARIABLE_Goal_77, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79);
            *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
            *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Goal_77 = STATE_VARIABLE_Goal_0_76;
            *STATE_VARIABLE_ProcInfo_79 = STATE_VARIABLE_ProcInfo_0_78;
            *STATE_VARIABLE_ProxyMap_81 = STATE_VARIABLE_ProxyMap_0_80;
            *STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Goals_60;
            MR_Word GoalExpr_146;
            MR_Box conv6_STATE_VARIABLE_ProcInfo_79;
            MR_Box conv5_STATE_VARIABLE_ProxyMap_81;
            MR_Box conv4_STATE_VARIABLE_ModuleInfo_83;

            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[2]), Goals0_59, &Goals_60, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_78)), &conv6_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (STATE_VARIABLE_ProxyMap_0_80)), &conv5_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_82)), &conv4_STATE_VARIABLE_ModuleInfo_83);
            *STATE_VARIABLE_ProcInfo_79 = ((MR_Word) (conv6_STATE_VARIABLE_ProcInfo_79));
            *STATE_VARIABLE_ProxyMap_81 = ((MR_Word) (conv5_STATE_VARIABLE_ProxyMap_81));
            *STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_83));
            {
              GoalExpr_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_146, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_146, 1) = (MR_Box) ((MR_Unsigned) (ConjType_58));
              MR_hl_field(MR_mktag(3), GoalExpr_146, 2) = ((MR_Box) (Goals_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_146));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_147;
            MR_Word Goals0_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Goals_149;
            MR_Box conv13_STATE_VARIABLE_ProcInfo_79;
            MR_Box conv12_STATE_VARIABLE_ProxyMap_81;
            MR_Box conv11_STATE_VARIABLE_ModuleInfo_83;

            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[3]), Goals0_148, &Goals_149, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_78)), &conv13_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (STATE_VARIABLE_ProxyMap_0_80)), &conv12_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_82)), &conv11_STATE_VARIABLE_ModuleInfo_83);
            *STATE_VARIABLE_ProcInfo_79 = ((MR_Word) (conv13_STATE_VARIABLE_ProcInfo_79));
            *STATE_VARIABLE_ProxyMap_81 = ((MR_Word) (conv12_STATE_VARIABLE_ProxyMap_81));
            *STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_83));
            {
              GoalExpr_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_147, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_147, 1) = ((MR_Box) (Goals_149));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_147));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word CanFail_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Cases_64;
            MR_Word GoalExpr_150;
            MR_Box conv20_STATE_VARIABLE_ProcInfo_79;
            MR_Box conv19_STATE_VARIABLE_ProxyMap_81;
            MR_Box conv18_STATE_VARIABLE_ModuleInfo_83;

            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[4]), Cases0_63, &Cases_64, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_78)), &conv20_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (STATE_VARIABLE_ProxyMap_0_80)), &conv19_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_82)), &conv18_STATE_VARIABLE_ModuleInfo_83);
            *STATE_VARIABLE_ProcInfo_79 = ((MR_Word) (conv20_STATE_VARIABLE_ProcInfo_79));
            *STATE_VARIABLE_ProxyMap_81 = ((MR_Word) (conv19_STATE_VARIABLE_ProxyMap_81));
            *STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) (conv18_STATE_VARIABLE_ModuleInfo_83));
            {
              GoalExpr_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_150, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_150, 1) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(3), GoalExpr_150, 2) = (MR_Box) ((MR_Unsigned) (CanFail_62));
              MR_hl_field(MR_mktag(3), GoalExpr_150, 3) = ((MR_Box) (Cases_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_150));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word GoalExpr_152;
            MR_Word SubGoal0_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word SubGoal_154;

            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(SubGoal0_153, &SubGoal_154, STATE_VARIABLE_ProcInfo_0_78, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ProxyMap_0_80, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_0_82, STATE_VARIABLE_ModuleInfo_83);
            {
              GoalExpr_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_152, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), GoalExpr_152, 1) = ((MR_Box) (Reason_67));
              MR_hl_field(MR_mktag(3), GoalExpr_152, 2) = ((MR_Box) (SubGoal_154));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_152));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Cond0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Then0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Else0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
            MR_Word Cond_72;
            MR_Word Then_73;
            MR_Word Else_74;
            MR_Word STATE_VARIABLE_ProcInfo_86_86;
            MR_Word STATE_VARIABLE_ProxyMap_87_87;
            MR_Word STATE_VARIABLE_ModuleInfo_88_88;
            MR_Word STATE_VARIABLE_ProcInfo_89_89;
            MR_Word STATE_VARIABLE_ProxyMap_90_90;
            MR_Word STATE_VARIABLE_ModuleInfo_91_91;
            MR_Word GoalExpr_155;

            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Cond0_69, &Cond_72, STATE_VARIABLE_ProcInfo_0_78, &STATE_VARIABLE_ProcInfo_86_86, STATE_VARIABLE_ProxyMap_0_80, &STATE_VARIABLE_ProxyMap_87_87, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_88_88);
            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Then0_70, &Then_73, STATE_VARIABLE_ProcInfo_86_86, &STATE_VARIABLE_ProcInfo_89_89, STATE_VARIABLE_ProxyMap_87_87, &STATE_VARIABLE_ProxyMap_90_90, STATE_VARIABLE_ModuleInfo_88_88, &STATE_VARIABLE_ModuleInfo_91_91);
            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(Else0_71, &Else_74, STATE_VARIABLE_ProcInfo_89_89, STATE_VARIABLE_ProcInfo_79, STATE_VARIABLE_ProxyMap_90_90, STATE_VARIABLE_ProxyMap_81, STATE_VARIABLE_ModuleInfo_91_91, STATE_VARIABLE_ModuleInfo_83);
            {
              GoalExpr_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_155, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_155, 1) = ((MR_Box) (Vars_68));
              MR_hl_field(MR_mktag(3), GoalExpr_155, 2) = ((MR_Box) (Cond_72));
              MR_hl_field(MR_mktag(3), GoalExpr_155, 3) = ((MR_Box) (Then_73));
              MR_hl_field(MR_mktag(3), GoalExpr_155, 4) = ((MR_Box) (Else_74));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_77 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_155));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
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
  MR_Word STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * STATE_VARIABLE_ProcInfo_26)
{
  MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
  MR_Word Context_12;
  MR_String FileName_13;
  MR_Integer LineNumber_14;
  MR_Word MakeFileName_17;
  MR_Word FileNameVar_18;
  MR_Word MakeLineNumber_19;
  MR_Word LineNumberVar_20;
  MR_Word ArgVars_21;
  MR_Word InstMapDelta_23;
  MR_Word SetContextGoal_24;
  MR_Word STATE_VARIABLE_VarSet_27_27;
  MR_Word STATE_VARIABLE_VarTypes_28_28;
  MR_Word STATE_VARIABLE_VarSet_30_30;
  MR_Word STATE_VARIABLE_VarTypes_31_31;
  MR_Word STATE_VARIABLE_VarSet_34_34;
  MR_Word STATE_VARIABLE_VarTypes_35_35;
  MR_Word STATE_VARIABLE_ProcInfo_37_37;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
  FileName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 0))));
  LineNumber_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_25, &STATE_VARIABLE_VarSet_27_27);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_25, &STATE_VARIABLE_VarTypes_28_28);
  hlds__make_goal__make_string_const_construction_alloc_8_p_0(FileName_13, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_3[0])), &MakeFileName_17, &FileNameVar_18, STATE_VARIABLE_VarSet_27_27, &STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarTypes_28_28, &STATE_VARIABLE_VarTypes_31_31);
  hlds__make_goal__make_int_const_construction_alloc_8_p_0(LineNumber_14, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_3[1])), &MakeLineNumber_19, &LineNumberVar_20, STATE_VARIABLE_VarSet_30_30, &STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_VarTypes_31_31, &STATE_VARIABLE_VarTypes_35_35);
  hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_ProcInfo_0_25, &STATE_VARIABLE_ProcInfo_37_37);
  hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_35_35, STATE_VARIABLE_ProcInfo_37_37, STATE_VARIABLE_ProcInfo_26);
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (LineNumberVar_20));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ArgVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ArgVars_21, 0) = ((MR_Box) (FileNameVar_18));
    MR_hl_field(MR_mktag(1), ArgVars_21, 1) = ((MR_Box) (Var_39));
  }
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_23);
  Var_42 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_6, (MR_Integer) 0, Var_42, (MR_String) "set_context", (MR_Word) ((MR_Unsigned) 0U), ArgVars_21, InstMapDelta_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_12, &SetContextGoal_24);
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Goal0_7));
    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (SetContextGoal_24));
    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MakeLineNumber_19));
    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MakeFileName_17));
    MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_48, GoalInfo_11, Goal_8);
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

  transform_hlds__ssdebug__create_proxy_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredInfo_21, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_23);
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
      MR_Word ProcIds_32;
      MR_Word ModuleName_33;
      MR_String Name_34;
      MR_Word PredOrFunc_35;
      MR_Word Transform_36;
      MR_String ProxyName_37;
      MR_Word Origin_38;
      MR_Word NewOrigin_39;
      MR_Word PredTable0_40;
      MR_Word PredTable_41;
      MR_Word STATE_VARIABLE_PredInfo_24_43;
      MR_Word Var_45;
      MR_Word STATE_VARIABLE_PredInfo_27_46;
      MR_Word STATE_VARIABLE_ModuleInfo_28_47;
      MR_Word STATE_VARIABLE_PredInfo_29_48;
      MR_Word STATE_VARIABLE_PredInfo_30_49;
      MR_Word STATE_VARIABLE_PredInfo_32_51;
      MR_Box conv4_STATE_VARIABLE_PredInfo_27_46;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_28_47;

      hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), PredInfo_12, &STATE_VARIABLE_PredInfo_24_43);
      ProcIds_32 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(STATE_VARIABLE_PredInfo_24_43);
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (PredId_7));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_45, ProcIds_32, ((MR_Box) (STATE_VARIABLE_PredInfo_24_43)), &conv4_STATE_VARIABLE_PredInfo_27_46, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17)), &conv3_STATE_VARIABLE_ModuleInfo_28_47);
      STATE_VARIABLE_PredInfo_27_46 = ((MR_Word) (conv4_STATE_VARIABLE_PredInfo_27_46));
      STATE_VARIABLE_ModuleInfo_28_47 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_28_47));
      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_28_47, &ModuleName_33);
      hlds__hlds_pred__pred_info_set_module_name_3_p_0(ModuleName_33, STATE_VARIABLE_PredInfo_27_46, &STATE_VARIABLE_PredInfo_29_48);
      Name_34 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_29_48);
      PredOrFunc_35 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_29_48);
      {
        Transform_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Transform_36, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Transform_36, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_35));
      }
      parse_tree__pred_name__make_transformed_pred_name_3_p_0(Name_34, Transform_36, &ProxyName_37);
      hlds__hlds_pred__pred_info_set_name_3_p_0(ProxyName_37, STATE_VARIABLE_PredInfo_29_48, &STATE_VARIABLE_PredInfo_30_49);
      hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_30_49, &Origin_38);
      {
        NewOrigin_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), NewOrigin_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), NewOrigin_39, 1) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), NewOrigin_39, 2) = ((MR_Box) (Origin_38));
        MR_hl_field(MR_mktag(3), NewOrigin_39, 3) = ((MR_Box) (PredId_7));
      }
      hlds__hlds_pred__pred_info_set_origin_3_p_0(NewOrigin_39, STATE_VARIABLE_PredInfo_30_49, &STATE_VARIABLE_PredInfo_32_51);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_28_47, &PredTable0_40);
      hlds__pred_table__predicate_table_insert_4_p_0(STATE_VARIABLE_PredInfo_32_51, &NewPredId_14, PredTable0_40, &PredTable_41);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_41, STATE_VARIABLE_ModuleInfo_28_47, STATE_VARIABLE_ModuleInfo_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeNewPredId_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewPredId_14));
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
  MR_Word conv1_STATE_VARIABLE_ProxyMap_16;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

  transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProxyMap_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProxyMap_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
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
  ProcIds_10 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo_9);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (PredId_6));
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

  transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ProcInfo_15, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_ModuleInfo_17);
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

  transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ProcInfo_15, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_17);
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
        MR_Word STATE_VARIABLE_ModuleInfo_13_13;
        MR_Word Var_14;
        MR_Word Var_16;
        MR_Word PredIds_33;
        MR_Word Var_36;
        MR_Box conv3__ProxyMap_34;
        MR_Box conv2_STATE_VARIABLE_ModuleInfo_13_13;

        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &PredIds_33);
        Var_36 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_1[0]));
        mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ssdebug_scalar_common_2[1]), PredIds_33, ((MR_Box) (Var_36)), &conv3__ProxyMap_34, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv2_STATE_VARIABLE_ModuleInfo_13_13);
        STATE_VARIABLE_ModuleInfo_13_13 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_13_13));
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (SSTraceLevel_6));
        }
        {
          Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (Var_16));
        }
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_14, STATE_VARIABLE_ModuleInfo_13_13, STATE_VARIABLE_ModuleInfo_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_17;
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (SSTraceLevel_6));
        }
        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_19));
        }
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_17, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
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
